#define POWER_STATE_OK					0	// напряжение сети нормальное, обычный режим работы
#define POWER_STATE_BAD					1	// измеренное напряжение вышло за границы допустимого, если результат повториться еще несколько раз, отключаем нагрузку
#define POWER_STATE_CRASH				2	// авария. напряжение повышено, понижено или отсутствует
#define POWER_STATE_CRASH_CONTROL	3	// была авария и напряжение восстановилось. если оно будет в норме еще некоторое время, перейдем в состоянии нормальной работы, иначе - в состояние авариии

uint8_t power_state;				// текущее состояние напряжения в сети

uint8_t power_crash_count;		// сколько значений недопустимого напряжения сети было измерено (перед отключением назругки)
uint16_t power_crash_meass_time;	// счетчик секунд, прошедших с момента последнего измерения сетевого напряжения
uint16_t power_crash_time_sec;	// длительность аварии в секундах (нужна для управления подсветкой экрана)
bool power_meassure_enabled;		// если флаг не установлен, то измеренное напряжение будет игнорироваться

bool accum_after_crash;		// флаг того, что только что закончилась авария и надо проверить заряд АКБ

bool power_rele_enabled;	// флаг того, что реле питания схемы замкнуто в данный момент

uint16_t power_bad_voltage;	// при аварии тут помещается последнее измеренное значение напряжения в начале аварии

/**
 * Иннициализирует модуль управления питанием
 */
inline void initPower() {
	// конфигурируем пины линии на запись
	DDR(POWER_CONTROL_PORT) |= _BV(POWER_SELF_PIN) | _BV(POWER_EXTERNAL_PIN);
	// отключаем нагрузку, включаем питание схемы
	PORT(POWER_CONTROL_PORT) &= ~_BV(POWER_EXTERNAL_PIN);
	PORT(POWER_CONTROL_PORT) |= _BV(POWER_SELF_PIN);
	power_state = POWER_STATE_CRASH;
	power_meassure_enabled = true;	
	power_rele_enabled = true;
}


/**
 * Включает реле питания схемы
 */
inline void powerEnableSelf(bool enable) {
	if ( enable ) 
		PORT(POWER_CONTROL_PORT) |= _BV(POWER_SELF_PIN);
	else
		PORT(POWER_CONTROL_PORT) &= ~_BV(POWER_SELF_PIN);
	power_rele_enabled = enable;
}



/**
 * Включает реле управления нагрузкой
 */
inline void powerEnableExternal(bool enable) {
	if ( enable ) 
		PORT(POWER_CONTROL_PORT) |= _BV(POWER_EXTERNAL_PIN);
	else
		PORT(POWER_CONTROL_PORT) &= ~_BV(POWER_EXTERNAL_PIN);
}


/**
 * Проверяет измеренное напряжение и изменяет состояние защиты в соответствии с ним
 */
inline void powerUpdateState() {
	bool low = (power_voltage < settings_protect_u_min) ;
	bool high = (power_voltage > settings_protect_u_max);
	bool ok = !(low || high);
	
	switch ( power_state ) {
		case POWER_STATE_OK:
			if ( !ok ) {
				power_state = POWER_STATE_BAD;
				power_crash_count = 1;
			}
			break;
		case POWER_STATE_BAD:
			if ( ok ) {
				power_crash_count--;
				if ( power_crash_count == 0 )
					power_state = POWER_STATE_OK;
			} else {
				power_crash_count++;
				if ( power_crash_count >= POWER_MIN_CRASH_COUNT ) {
					// произошла авария, отключаем нагрузку
					power_state = POWER_STATE_CRASH;
					power_bad_voltage = power_voltage;
					powerEnableExternal(false);
					// если это превышение напряжение, то отключаем и себя
//					if ( high ) {
						powerEnableSelf(false);
						power_meassure_enabled = false;
//					}
					power_crash_meass_time = 0;
					power_crash_time_sec = 0;
					// добавляем информацию о аварии в статистику
					statistic_add_crash();
				}
			}
			break;
		case POWER_STATE_CRASH:			
			// если получены результаты измерения
			if ( power_meassure_enabled ) {
				power_bad_voltage = power_voltage;
				if ( ok ) {
					power_state = POWER_STATE_CRASH_CONTROL;
				} else {
//					if ( high ) {
						powerEnableSelf(false);
						power_meassure_enabled = false;
//					}
				}
				power_crash_meass_time = 0;
			// если настало время следующего измерения, выставляем флаг измерения и включаем трансформатор
			} else if ( power_crash_meass_time >= settings_protect_repeat_time ) {
				powerEnableSelf(true);
				power_meassure_enabled = true;				
			}
			break;
		case POWER_STATE_CRASH_CONTROL:
			if ( !ok )
				power_state = POWER_STATE_CRASH;
			// если авария закончилась
			if ( power_crash_meass_time >= settings_protect_meass_time ) {
				power_state = POWER_STATE_OK;
				accum_after_crash = true;
				powerEnableExternal(true);
				statistic_end_crash();
			}
			break;
	}
}



/**
 * Обработчик тика секунд
 */
inline void powerOnTimerTick() {
	power_crash_meass_time ++;
	power_crash_time_sec++;
}


/** 
 * Возвращает true, если сейчас состояние аварии
 */
inline bool powerisCrash() {
	return power_state == POWER_STATE_CRASH;
}

/**
 * Если система находится в состоянии аварии, то этот метод заставит немедленно подключиться и
 * измерить сетевое напряжение не дожидаясь времени
 */
inline void powerMakeMeassure() {
	if ( power_state == POWER_STATE_CRASH )
		power_crash_meass_time = settings_protect_repeat_time;
}
