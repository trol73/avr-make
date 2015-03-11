/* 
���������� �� ��� �������� ������ 10 ������
��� � �����, ������ 00:00:30 �������� ���������� ��� ���������
� ������ �������� ������������ ��������� ��� �� 4� ��� �������� � �������� 15 �����
*/

uint8_t accum_state;			// ��������� ���	ACB_STATE_xxx

#define ACB_STATE_FREE				0	// ����������� ����� � ������������� � ��������
#define ACB_STATE_DISCHARGE		1	// ����������� � �������� ��������
#define ACB_STATE_CHARGE			2	// ����������� � �������� �������
#define ACB_STATE_WORK				3	// ����� �������� �� ������������


/**
 * �������� ������ ���
 */
inline void accumEnableDischarge(bool enable) {
	if ( enable ) 
		PORT(ACCUM_CONTROL_PORT) |= _BV(ACCUM_DISCHARGE_PIN);
	else
		PORT(ACCUM_CONTROL_PORT) &= ~_BV(ACCUM_DISCHARGE_PIN);
}



/**
 * �������� ����� ���
 */
inline void accumEnableCharge(bool enable) {
	if ( enable ) 
		PORT(ACCUM_CONTROL_PORT) |= _BV(ACCUM_CHARGE_PIN);
	else
		PORT(ACCUM_CONTROL_PORT) &= ~_BV(ACCUM_CHARGE_PIN);
}



/**
 * �������������� ���������� ������������ ��� ������� ���������
 */
inline void initAccum() {
	// ������������� ���� ����� �� ������
	DDR(ACCUM_CONTROL_PORT) |= _BV(ACCUM_DISCHARGE_PIN) | _BV(ACCUM_CHARGE_PIN);
	// ��������� ������� � ��������
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
 * ���������� ���� ������, ��������� ��������� ���, ��������� ��������� ����������, ���� ����, �������� 
 * �������/��������
 */
inline void accumOnTimerTick() {
	// ���� ���� � ��������� ���������, �� ��������� ��������, ������� � �������
	if ( power_state > POWER_STATE_BAD ) {
		accumEnableDischarge(false);
		accumEnableCharge(false);
		accum_state = ACB_STATE_WORK;
	} 
	if ( accum_after_crash )
		accum_state = ACB_STATE_FREE;
	// ��� � 10 ������ �������� ����������
	if ( (time_sec % 10) == 0 ) {
		voltage_meass_mode = VM_ACCUM;
		// ��� � ����� �������� ���������� ��� ���������
		// ���� ���� ������ ������� ������ ��� �����������, �� ��� ����� ���� ��������� � �� ���� ������ ���������
		if ( ((time_hour == 0) && (time_min == 0) && (time_sec == 30)) || accum_after_crash ) {
			// ���� ������ ����� �������� �� �� ���
			if ( accum_state != ACB_STATE_WORK ) {
				voltage_meass_mode = VM_ACCUM_LOAD;
				accum_after_crash = false;
			}
		}

		switch ( accum_state ) {
			case ACB_STATE_FREE:
				// ���������, �� ���� �� ��������
				// ���� �� ��� ������������� ���������� ��� ��������, ���� ��� ��������� ��� ���, ��� ��� �� ���������� � ������ ������
				if ( (accum_voltage < settings_accum_min_voltage) || ((accum_voltage_load < settings_accum_min_load_voltage)&&(voltage_meass_mode != VM_ACCUM_LOAD)) ) {
						// ������� ������� ��������
						accum_state = ACB_STATE_DISCHARGE;
						accumEnableDischarge(true);				
				}
				break;

			case ACB_STATE_DISCHARGE:
				// ���� ���������� �� ������������ ��� �������� ����� ���� 1.0�/�������, �� �������� ����� �������
				if ( accum_voltage  < ACCUMULATOR_DISCHARGE_VOLT ) {
					accum_state = ACB_STATE_CHARGE;
					accumEnableDischarge(false);
					accum_charge_min = 0;
					accumEnableCharge(true);
				}
				break;

			case ACB_STATE_CHARGE:
				// ���� ������ 15 �����, �� ���������� �������
				if ( time_sec == 0 )
					accum_charge_min++;
				if ( accum_charge_min >= accum_charge_time*60 ) {
					accum_state = ACB_STATE_FREE;
					stat_accum_cycles++;
					accumEnableCharge(false);
					// ������ ���� ������ �������� ���������� ��� ��������� ����� ������������� ��������� �������
					voltage_meass_mode = VM_ACCUM_LOAD;
					// �.�. �������� ���������� ��� � 10 ������, �� � ��� � ������ 10 ������ ��� ��������� ���������
				}
				break;
		}



	}
}
