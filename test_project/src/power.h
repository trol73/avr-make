#define POWER_STATE_OK					0	// ���������� ���� ����������, ������� ����� ������
#define POWER_STATE_BAD					1	// ���������� ���������� ����� �� ������� �����������, ���� ��������� ����������� ��� ��������� ���, ��������� ��������
#define POWER_STATE_CRASH				2	// ������. ���������� ��������, �������� ��� �����������
#define POWER_STATE_CRASH_CONTROL	3	// ���� ������ � ���������� ��������������. ���� ��� ����� � ����� ��� ��������� �����, �������� � ��������� ���������� ������, ����� - � ��������� �������

uint8_t power_state;				// ������� ��������� ���������� � ����

uint8_t power_crash_count;		// ������� �������� ������������� ���������� ���� ���� �������� (����� ����������� ��������)
uint16_t power_crash_meass_time;	// ������� ������, ��������� � ������� ���������� ��������� �������� ����������
uint16_t power_crash_time_sec;	// ������������ ������ � �������� (����� ��� ���������� ���������� ������)
bool power_meassure_enabled;		// ���� ���� �� ����������, �� ���������� ���������� ����� ��������������

bool accum_after_crash;		// ���� ����, ��� ������ ��� ����������� ������ � ���� ��������� ����� ���

bool power_rele_enabled;	// ���� ����, ��� ���� ������� ����� �������� � ������ ������

uint16_t power_bad_voltage;	// ��� ������ ��� ���������� ��������� ���������� �������� ���������� � ������ ������

/**
 * ��������������� ������ ���������� ��������
 */
inline void initPower() {
	// ������������� ���� ����� �� ������
	DDR(POWER_CONTROL_PORT) |= _BV(POWER_SELF_PIN) | _BV(POWER_EXTERNAL_PIN);
	// ��������� ��������, �������� ������� �����
	PORT(POWER_CONTROL_PORT) &= ~_BV(POWER_EXTERNAL_PIN);
	PORT(POWER_CONTROL_PORT) |= _BV(POWER_SELF_PIN);
	power_state = POWER_STATE_CRASH;
	power_meassure_enabled = true;	
	power_rele_enabled = true;
}


/**
 * �������� ���� ������� �����
 */
inline void powerEnableSelf(bool enable) {
	if ( enable ) 
		PORT(POWER_CONTROL_PORT) |= _BV(POWER_SELF_PIN);
	else
		PORT(POWER_CONTROL_PORT) &= ~_BV(POWER_SELF_PIN);
	power_rele_enabled = enable;
}



/**
 * �������� ���� ���������� ���������
 */
inline void powerEnableExternal(bool enable) {
	if ( enable ) 
		PORT(POWER_CONTROL_PORT) |= _BV(POWER_EXTERNAL_PIN);
	else
		PORT(POWER_CONTROL_PORT) &= ~_BV(POWER_EXTERNAL_PIN);
}


/**
 * ��������� ���������� ���������� � �������� ��������� ������ � ������������ � ���
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
					// ��������� ������, ��������� ��������
					power_state = POWER_STATE_CRASH;
					power_bad_voltage = power_voltage;
					powerEnableExternal(false);
					// ���� ��� ���������� ����������, �� ��������� � ����
//					if ( high ) {
						powerEnableSelf(false);
						power_meassure_enabled = false;
//					}
					power_crash_meass_time = 0;
					power_crash_time_sec = 0;
					// ��������� ���������� � ������ � ����������
					statistic_add_crash();
				}
			}
			break;
		case POWER_STATE_CRASH:			
			// ���� �������� ���������� ���������
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
			// ���� ������� ����� ���������� ���������, ���������� ���� ��������� � �������� �������������
			} else if ( power_crash_meass_time >= settings_protect_repeat_time ) {
				powerEnableSelf(true);
				power_meassure_enabled = true;				
			}
			break;
		case POWER_STATE_CRASH_CONTROL:
			if ( !ok )
				power_state = POWER_STATE_CRASH;
			// ���� ������ �����������
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
 * ���������� ���� ������
 */
inline void powerOnTimerTick() {
	power_crash_meass_time ++;
	power_crash_time_sec++;
}


/** 
 * ���������� true, ���� ������ ��������� ������
 */
inline bool powerisCrash() {
	return power_state == POWER_STATE_CRASH;
}

/**
 * ���� ������� ��������� � ��������� ������, �� ���� ����� �������� ���������� ������������ �
 * �������� ������� ���������� �� ��������� �������
 */
inline void powerMakeMeassure() {
	if ( power_state == POWER_STATE_CRASH )
		power_crash_meass_time = settings_protect_repeat_time;
}
