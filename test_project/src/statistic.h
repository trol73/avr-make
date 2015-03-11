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
 * ��������� ���������� �������� ������� ���������� ����������, ������� � �����������
 */
inline void update_statistic() {
	uint16_t time = time_hour*60 + time_min;		// ������� ����� � ������� 

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
 * ���������� ���������� �� ����������
 */
inline void reset_statistic_voltage(uint16_t time) {
	reset_statistic_(VI16_STAT_MAX_VOLTAGE, time, power_voltage);
}



/**
 * ���������� ���������� �� �������
 */
inline void reset_statistic_frequency(uint16_t time) {
	uint16_t f = ( power_frequency < 2500 || power_frequency >= 7500 ) ? 5000 : power_frequency;
	reset_statistic_(VI16_STAT_MAX_FREQUENCY, time, f);
}



/**
 * ���������� ���������� �� ����������
 */
inline void reset_statistic_temperature(uint16_t time) {
	reset_statistic_(VI16_STAT_MAX_TEMPERATURE, time, temperature);
}


/**
 * ���������� ���������� �� �������
 */
inline void reset_statistic_crashes() {
	stat_crashes_count = 0;
}


/**
 * ���������� ��� ����������
 */
inline void reset_statistic() {
	uint16_t time = time_hour*60 + time_min;		// ������� ����� � ������� 
	reset_statistic_voltage(time);
	reset_statistic_frequency(time);
	reset_statistic_temperature(time);
	reset_statistic_crashes();
}



/**
 * ��������� ������� � ������ ������ � ����������
 */
inline void statistic_add_crash() {
	// �������� ������� ������� ��������� ����� ������
	for ( uint8_t i = 10-1; i >= 1; i-- ) {
		data_16[VI_16_STAT_CRASH_U_1+i] = data_16[VI_16_STAT_CRASH_U_1+i-1];
		data_16[VI_16_STAT_CRASH_T_BEGIN_1+i] = data_16[VI_16_STAT_CRASH_T_BEGIN_1+i-1];
		data_16[VI_16_STAT_CRASH_T_END_1+i] = data_16[VI_16_STAT_CRASH_T_END_1+i-1];
		data_16[VI_16_STAT_CRASH_DAY_1+i] = data_16[VI_16_STAT_CRASH_DAY_1+i-1];
	}
	// ����������� �������, ���� ������ �� ���������
	stat_crashes_count++;
	// ��������� ������ � ��������� ������
	data_16[VI_16_STAT_CRASH_U_1] = power_voltage;
	data_16[VI_16_STAT_CRASH_T_BEGIN_1] = time_hour*60 + time_min;
	data_16[VI_16_STAT_CRASH_T_END_1] = 0xFFFF;
	data_16[VI_16_STAT_CRASH_DAY_1] = time_day;
}


/**
 * ��������� ������� �� ��������� ������ � ����������
 */
inline void statistic_end_crash() {
	data_16[VI_16_STAT_CRASH_T_END_1] = time_hour*60 + time_min;
}

