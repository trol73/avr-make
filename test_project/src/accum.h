/* 
напряжение на АКБ измеряем каждые 10 секунд
раз в сутки, каждые 00:00:30 измеряем напряжение под нагрузкой
в случае разрядки аккумулятора разряжаем его до 4В без нагрузки и заряжаем 15 часов
*/

uint8_t accum_state;			// состояние акб	ACB_STATE_xxx

#define ACB_STATE_FREE				0	// аккумулятор готов к использованию и отключен
#define ACB_STATE_DISCHARGE		1	// аккумулятор в процессе разрядки
#define ACB_STATE_CHARGE			2	// аккумулятор в процессе зарядки
#define ACB_STATE_WORK				3	// схема запитана от аккумулятора


/**
 * Включает разряд АКБ
 */
inline void accumEnableDischarge(bool enable) {
	if ( enable ) 
		PORT(ACCUM_CONTROL_PORT) |= _BV(ACCUM_DISCHARGE_PIN);
	else
		PORT(ACCUM_CONTROL_PORT) &= ~_BV(ACCUM_DISCHARGE_PIN);
}



/**
 * Включает заряд АКБ
 */
inline void accumEnableCharge(bool enable) {
	if ( enable ) 
		PORT(ACCUM_CONTROL_PORT) |= _BV(ACCUM_CHARGE_PIN);
	else
		PORT(ACCUM_CONTROL_PORT) &= ~_BV(ACCUM_CHARGE_PIN);
}



/**
 * Иннициализация переменных аккумулятора при запуске программы
 */
inline void initAccum() {
	// конфигурируем пины линии на запись
	DDR(ACCUM_CONTROL_PORT) |= _BV(ACCUM_DISCHARGE_PIN) | _BV(ACCUM_CHARGE_PIN);
	// отключаем зарядку и разрядку
	PORT(ACCUM_CONTROL_PORT) &= ~(_BV(ACCUM_DISCHARGE_PIN) | _BV(ACCUM_CHARGE_PIN));

	accum_voltage_sum = 0;
	accum_voltage_cnt = 0;

	voltage_meass_mode = VM_POWER;

	accum_state = ACB_STATE_FREE;
	accum_voltage = 0;
	accum_voltage_load = 0;

	accum_after_crash = false;
}


inline void reset_statistic_accumulator() {
	stat_accum_cycles = 0;
	stat_accum_charge_days = time_day;
}



/**
 * Обработчик тика секунд, проверяет состояние АКБ, запускает измерения напряжения, если надо, стартует 
 * зарядку/разрядку
 */
inline void accumOnTimerTick() {
	// если сеть в аварийном состоянии, то отключаем разрядку, зарядку и выходим
	if ( power_state > POWER_STATE_BAD ) {
		accumEnableDischarge(false);
		accumEnableCharge(false);
		accum_state = ACB_STATE_WORK;
	} 
	if ( accum_after_crash )
		accum_state = ACB_STATE_FREE;
	// раз в 10 секунд измеряем напряжение
	if ( (time_sec % 10) == 0 ) {
		voltage_meass_mode = VM_ACCUM;
		// раз в сутки измеряем напряжение под нагрузкой
		// если была авария которая только что завершилась, то АКБ может быть разряжена и ее надо срочно проверить
		if ( ((time_hour == 0) && (time_min == 0) && (time_sec == 30)) || accum_after_crash ) {
			// если сейчас схема запитана не от АКБ
			if ( accum_state != ACB_STATE_WORK ) {
				voltage_meass_mode = VM_ACCUM_LOAD;
				accum_after_crash = false;
			}
		}

		switch ( accum_state ) {
			case ACB_STATE_FREE:
				// проверяем, не надо ли зарядить
				// если на АКБ недостаточное напряжение без нагрузки, либо под нагрузкий при том, что оно не измеряется в данный момент
				if ( (accum_voltage < settings_accum_min_voltage) || ((accum_voltage_load < settings_accum_min_load_voltage)&&(voltage_meass_mode != VM_ACCUM_LOAD)) ) {
						// сначала включим разрядку
						accum_state = ACB_STATE_DISCHARGE;
						accumEnableDischarge(true);				
				}
				break;

			case ACB_STATE_DISCHARGE:
				// если напряжение на аккумуляторе без нагрузки упало ниже 1.0В/элемент, то включаем режим зарядки
				if ( accum_voltage  < ACCUMULATOR_DISCHARGE_VOLT ) {
					accum_state = ACB_STATE_CHARGE;
					accumEnableDischarge(false);
					accum_charge_min = 0;
					accumEnableCharge(true);
				}
				break;

			case ACB_STATE_CHARGE:
				// если прошло 15 часов, то прекращаем зарядку
				if ( time_sec == 0 )
					accum_charge_min++;
				if ( accum_charge_min >= accum_charge_time*60 ) {
					accum_state = ACB_STATE_FREE;
					stat_accum_cycles++;
					accumEnableCharge(false);
					// теперь надо заново измерить напряжение под нагрузкой чтобы предотвратить повторную зарядку
					voltage_meass_mode = VM_ACCUM_LOAD;
					// т.к. проверка вызывается раз в 10 секунд, то у нас в запасе 10 секунд для звершения измерения
				}
				break;
		}



	}
}
