inline void update_statistic_(uint8_t index, uint16_t time, uint16_t value) {
/*
	if ( value > data_16[index] ) {
		data_16[index] = value;
		data_16[index+2] = time;
	}
	index++;
	if ( value < data_16[index] ) {
		data_16[index] = value;
		data_16[index+2] = time;
	}
*/
	if ( value > data_16[index] ) {
		data_16[index] = value;
		data_16[index+2] = time;
	}
	if ( value < data_16[index+1] ) {
		data_16[index+1] = value;
		data_16[index+3] = time;
	}
}

/**
 * Обновляет статистику согласно текущим показаниям напряжения, частоты и температуры
 */
inline void update_statistic() {
	uint16_t time = time_hour*60 + time_min;		// текущее время в минутах 

	update_statistic_(VI16_STAT_MAX_VOLTAGE, time, power_voltage);
	update_statistic_(VI16_STAT_MAX_FREQUENCY, time, power_frequency);
	update_statistic_(VI16_STAT_MAX_TEMPERATURE, time, temperature);
}



inline void reset_statistic_(uint8_t index, uint16_t time, uint16_t value) {
	data_16[index] = value;
	data_16[index+1] = value;
	data_16[index+2] = time;
	data_16[index+3] = time;
}


/**
 * Сбрасывает статистику по напряжению
 */
inline void reset_statistic_voltage(uint16_t time) {
	reset_statistic_(VI16_STAT_MAX_VOLTAGE, time, power_voltage);
}



/**
 * Сбрасывает статистику по частоте
 */
inline void reset_statistic_frequency(uint16_t time) {
	uint16_t f = ( power_frequency < 2500 || power_frequency >= 7500 ) ? 5000 : power_frequency;
	reset_statistic_(VI16_STAT_MAX_FREQUENCY, time, f);
}



/**
 * Сбрасывает статистику по напряжению
 */
inline void reset_statistic_temperature(uint16_t time) {
	reset_statistic_(VI16_STAT_MAX_TEMPERATURE, time, temperature);
}


/**
 * Сбрасывает статистику по авариям
 */
inline void reset_statistic_crashes() {
	stat_crashes_count = 0;
}


/**
 * Сбрасывает всю статистику
 */
inline void reset_statistic() {
	uint16_t time = time_hour*60 + time_min;		// текущее время в минутах 
	reset_statistic_voltage(time);
	reset_statistic_frequency(time);
	reset_statistic_temperature(time);
	reset_statistic_crashes();
}



/**
 * Добавляет событие о начале аварии в статистику
 */
inline void statistic_add_crash() {
	// сдвигаем очередь записей выкидывая самую старую
	for ( uint8_t i = 10-1; i >= 1; i-- ) {
		data_16[VI_16_STAT_CRASH_U_1+i] = data_16[VI_16_STAT_CRASH_U_1+i-1];
		data_16[VI_16_STAT_CRASH_T_BEGIN_1+i] = data_16[VI_16_STAT_CRASH_T_BEGIN_1+i-1];
		data_16[VI_16_STAT_CRASH_T_END_1+i] = data_16[VI_16_STAT_CRASH_T_END_1+i-1];
		data_16[VI_16_STAT_CRASH_DAY_1+i] = data_16[VI_16_STAT_CRASH_DAY_1+i-1];
	}
	// увеличиваем счетчик, если предел не достигнут
	stat_crashes_count++;
	// заполняем данные о последней аварии
	data_16[VI_16_STAT_CRASH_U_1] = power_voltage;
	data_16[VI_16_STAT_CRASH_T_BEGIN_1] = time_hour*60 + time_min;
	data_16[VI_16_STAT_CRASH_T_END_1] = 0xFFFF;
	data_16[VI_16_STAT_CRASH_DAY_1] = time_day;
}


/**
 * Добавляет событие об окончании аварии в статистику
 */
inline void statistic_end_crash() {
	data_16[VI_16_STAT_CRASH_T_END_1] = time_hour*60 + time_min;
}

