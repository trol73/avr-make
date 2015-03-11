//
// ���������� ���������
//


uint16_t timer_delta_count;				// ����� ������� ����� ������� ����� ����������� ����������

uint16_t power_prev_counter;				// ���������� �������� �������� ��� ���������� ������������ �����������

volatile bool lcd_update_flag;			// ���� ��� ���� ��������� � �����������, �� � ������� ����� ����� ������� ����������� ������
volatile bool keyboard_check_flag;		// ���� ���� ����������, �� ���������� ����� �������� � ������� �����

bool reset_statistic_flag;					// ���� ����, ��� ���� �������� ���������� ����� ���������

// �.�. ��� ������ � ����� ������ ���������� ���������� �������� �������� ������ ��������, ������� ������� 
// �������� ���������� � ��� ������� ����� ����������. ��� ����� ������������� ��������� ����������.
// � ������ ������� � ���� ������ ��� �������� �������� DBS_REQUEST, ������� � ����� ������� ���������� ����������� 
// ������������. ����� ���������� ������ � ����� ���������� �������� �������� DBS_DONE, ����� ��� ������������ 
// ���������� ����������� ���������� ������������������ ��������� ������������, ����� ���� ���������� �������
// �������� DBS_READY, ����������� ��������� �������
volatile uint8_t dbs_state;

#define DBS_READY			0
#define DBS_REQUEST		1
#define DBS_DONE			2

uint8_t voltage_meassure_comparator_counter;		// ����� ����������� ���������� ����������, �� �������������� ���� �������. 
																// ��� ��������� ���������� � ���� ��� ����������� �� ���������� ����������


uint8_t voltage_meass_mode;	// ����� ���������� ������ �������� ��� ����� �������� ����� ��������� ������� ��������

#define VM_POWER			0			//	������� ����������
#define VM_ACCUM			1			//	���������� �� ���
#define VM_ACCUM_LOAD	2			//	���������� �� ��� �� ���������� ��������� ����������


uint8_t key_counter[4];						// �������� ��������� ������, �������� ����� ��������� ������ � 1/20 ���, ��� 0, ���� ������� ��������
uint8_t key_click_flag[5];					// ����� ����, ��� ������� ���� ������ � ��������
uint8_t key_up_minus_down;					// �������� key_click_flag[KEY_UP] - key_click_flag[KEY_DOWN]


// ������� ������ ���������� ����������� � EEPROM
#define VI16_STAT_MAX_VOLTAGE					0	// ������������ ����������
#define VI16_STAT_MIN_VOLTAGE					1	// ����������� ����������
#define VI16_STAT_MAX_VOLTAGE_TIME			2	// �����, � ������� ���� ���������� ������������ ���������� (� �������)
#define VI16_STAT_MIN_VOLTAGE_TIME			3	// �����, � ������� ���� ���������� ����������� ���������� (� �������)

#define VI16_STAT_MAX_FREQUENCY				4	// ������������ ������� �������� ����������
#define VI16_STAT_MIN_FREQUENCY				5	// ����������� ������� �������� ����������
#define VI16_STAT_MAX_FREQUENCY_TIME		6	// �����, � ������� ���� ���������� ������������ ������� (� �������)
#define VI16_STAT_MIN_FREQUENCY_TIME		7	// �����, � ������� ���� ���������� ����������� ������� (� �������)

#define VI16_STAT_MAX_TEMPERATURE			8	// ������������ �����������
#define VI16_STAT_MIN_TEMPERATURE			9	// ����������� �����������
#define VI16_STAT_MAX_TEMPERATURE_TIME		10	// �����, � ������� ���� ���������� ������������ ����������� (� �������)
#define VI16_STAT_MIN_TEMPERATURE_TIME		11	// �����, � ������� ���� ���������� ����������� ����������� (� �������)

#define VI16_SETTINGS_TIME_CORRECTION_HS	12	// ������� ����� ����� ������ ���������/�������� �� ������� � �����
#define VI16_SETTINGS_PROTECT_U_MIN			13 // ����������� ����� ���������� ������������ ������, �
#define VI16_SETTINGS_PROTECT_U_MAX			14	// ������������ ����� ���������� ������������ ������, �
#define VI16_SETTINGS_PROTECT_REPEAT_TIME	15	// �����, ����� ������� ���������� ��������� � �������� ���������� � ������ ������, ���
#define VI16_SETTINGS_PROTECT_MEASS_TIME	16	// �����, �������� ���������� ����� ������, ���


#define VI_16_ACCUM_CHARGE_TIME				17	// ������������ ������ ��� � �����

#define VI16_STAT_ACCUM_CYCLES				20	// ���������� ������ ������� ������������
#define VI16_STAT_ACCUM_CHARGE_DAYS			21	// ������� ���� ������ � ���������� ��������� �������

#define VI16_SETTINGS_ACCUM_MIN_U			22	// ���� ���������� �� ������������ ������ ����� ��������, ��������� �������
#define VI16_SETTINGS_ACCUM_MIN_U_LOAD		23	// ���� ���������� �� ������������ � ��������� ������ ����� ��������, ��������� �������

#define VI_16_STAT_CRASH_U_1					24 // ���������� ������ ������
#define VI_16_STAT_CRASH_U_2					25
#define VI_16_STAT_CRASH_U_3					26
#define VI_16_STAT_CRASH_U_4					27
#define VI_16_STAT_CRASH_U_5					28
#define VI_16_STAT_CRASH_U_6					29
#define VI_16_STAT_CRASH_U_7					30
#define VI_16_STAT_CRASH_U_8					31
#define VI_16_STAT_CRASH_U_9					32
#define VI_16_STAT_CRASH_U_10					33

#define VI_16_STAT_CRASH_T_BEGIN_1			34 // ����� ������ ������ ������
#define VI_16_STAT_CRASH_T_BEGIN_2			35
#define VI_16_STAT_CRASH_T_BEGIN_3			36
#define VI_16_STAT_CRASH_T_BEGIN_4			37
#define VI_16_STAT_CRASH_T_BEGIN_5			38
#define VI_16_STAT_CRASH_T_BEGIN_6			39
#define VI_16_STAT_CRASH_T_BEGIN_7			40
#define VI_16_STAT_CRASH_T_BEGIN_8			41
#define VI_16_STAT_CRASH_T_BEGIN_9			42
#define VI_16_STAT_CRASH_T_BEGIN_10			43

#define VI_16_STAT_CRASH_T_END_1				44 // ����� ��������� ������ ������
#define VI_16_STAT_CRASH_T_END_2				45
#define VI_16_STAT_CRASH_T_END_3				46
#define VI_16_STAT_CRASH_T_END_4				47
#define VI_16_STAT_CRASH_T_END_5				48
#define VI_16_STAT_CRASH_T_END_6				49
#define VI_16_STAT_CRASH_T_END_7				50
#define VI_16_STAT_CRASH_T_END_8				51
#define VI_16_STAT_CRASH_T_END_9				52
#define VI_16_STAT_CRASH_T_END_10			53

#define VI_16_STAT_CRASH_DAY_1				54 // ���� ������ ������ ������
#define VI_16_STAT_CRASH_DAY_2				55
#define VI_16_STAT_CRASH_DAY_3				56
#define VI_16_STAT_CRASH_DAY_4				57
#define VI_16_STAT_CRASH_DAY_5				58
#define VI_16_STAT_CRASH_DAY_6				59
#define VI_16_STAT_CRASH_DAY_7				60
#define VI_16_STAT_CRASH_DAY_8				61
#define VI_16_STAT_CRASH_DAY_9				62
#define VI_16_STAT_CRASH_DAY_10				63

#define VI_16_STAT_CRASHES_COUNT				64


#define VI_16_TIME_DAY							66	// ������� ��������� ����

// ��� ������������� ����������� ������
#define VI_16_STORED_DATA_COUNT			67		// ���������� ����, ����������� � EEPROM

#define VI16_POWER_VOLTAGE						68		// ������� ���������� � ����
#define VI16_POWER_FREQUENCY					69		// ��� �������
#define VI16_TEMPERATURE						70		// ������� �����������
//#define VI16_TIME								65		// ������� ����� � �������

#define VI16_UI_SETTINGS_U_MIN				71	// ��� ����������� ����������� � ������������ ���������� ���������� 
#define VI16_UI_SETTINGS_U_MAX				72	// �� ����� �������������� ��������

#define VI16_ACCUM_VOLTAGE						73	// ���������� �� ������������, ����� �� ��������, �/100
#define VI16_ACCUM_VOLTAGE_LOAD				74	// ���������� �� ������������ ��� ���������� ����������� ���������, �/100

#define VI16_ACCUM_CHARGE_MIN					75	// ������� ����� ���������� �� ������ ������ ���


#define V_16_COUNT							76



//uint8_t data_8[4];
uint16_t data_16[V_16_COUNT];



uint8_t time_hsec, time_sec, time_min, time_hour;				// ������� �����
//uint16_t time_day;														// ������� ���� � ������� �������


// �������

volatile uint32_t power_period_sum;		// ��� ����������� ������� �������� ����������, �� � 100
volatile uint16_t power_period_cnt;		// ����� ���������� ������������
//uint16_t power_frequency;					// ������� ������������ ������� ���������� � ����

// ����������
// ���������� ���������� � ����
volatile uint32_t power_voltage_sum;
volatile uint16_t power_voltage_cnt;

// ���������� ���������� �� ���
volatile uint16_t accum_voltage_sum;
volatile uint8_t accum_voltage_cnt;


//uint16_t temperature;						// ������� ���������� �����������







/**
 * ������ ��������
 */
bool settings_time_correction_plus;	// ���� true, �� ��������� ������� ������������, � ���� ����� ����� ����������� ���


#define settings_time_correction_hs 		data_16[VI16_SETTINGS_TIME_CORRECTION_HS] 	// ������� ����� ����� ������ ���������/�������� �� ������� � �����
#define settings_protect_u_min				data_16[VI16_SETTINGS_PROTECT_U_MIN] 			// ����������� ����� ���������� ������������ ������, �
#define settings_protect_u_max				data_16[VI16_SETTINGS_PROTECT_U_MAX] 			// ������������ ����� ���������� ������������ ������, �
#define settings_protect_repeat_time		data_16[VI16_SETTINGS_PROTECT_REPEAT_TIME]	// �����, ����� ������� ���������� ��������� � �������� ���������� � ������ ������, ���
#define settings_protect_meass_time			data_16[VI16_SETTINGS_PROTECT_MEASS_TIME]	// �����, �������� ���������� ����� ������, ���
#define settings_accum_min_voltage			data_16[VI16_SETTINGS_ACCUM_MIN_U]			// ���� ���������� �� ������������ ������ ����� ��������, ��������� �������
#define settings_accum_min_load_voltage	data_16[VI16_SETTINGS_ACCUM_MIN_U_LOAD]			// ���� ���������� �� ������������ � ��������� ������ ����� ��������, ��������� �������





uint32_t time_correct_inc_interval;		// �������� � ����� ����� �������, ����� ������� ����� ���������������� �����
uint32_t time_hsec_counter;				// ������� ����� ����� �������, ������������ ��� �������������


#define power_frequency						data_16[VI16_POWER_FREQUENCY]
#define power_voltage						data_16[VI16_POWER_VOLTAGE]
#define temperature							data_16[VI16_TEMPERATURE]

#define accum_voltage						data_16[VI16_ACCUM_VOLTAGE]			// ���������� �� ������������, ����� �� ��������, �/100
#define accum_voltage_load					data_16[VI16_ACCUM_VOLTAGE_LOAD]		// ���������� �� ������������ ��� ���������� ����������� ���������, �/100
#define accum_charge_min					data_16[VI16_ACCUM_CHARGE_MIN]		// � ������ ������� ��� ������� ���������� ����� �������
//#define time									data_16[VI16_TIME]



#define stat_max_voltage					data_16[VI16_STAT_MAX_VOLTAGE]			// ������������ ����������
#define stat_min_voltage					data_16[VI16_STAT_MIN_VOLTAGE]			// ����������� ����������
#define stat_max_voltage_time				data_16[VI16_STAT_MAX_VOLTAGE_TIME]		// �����, � ������� ���� ���������� ������������ ���������� (� �������)
#define stat_min_voltage_time				data_16[VI16_STAT_MIN_VOLTAGE_TIME]		// �����, � ������� ���� ���������� ����������� ���������� (� �������)

#define stat_max_frequency					data_16[VI16_STAT_MAX_FREQUENCY]			// ������������ ������� �������� ����������
#define stat_min_frequency					data_16[VI16_STAT_MIN_FREQUENCY]			// ����������� ������� �������� ����������
#define stat_max_frequency_time			data_16[VI16_STAT_MAX_FREQUENCY_TIME]	// �����, � ������� ���� ���������� ������������ ������� (� �������)
#define stat_min_frequency_time			data_16[VI16_STAT_MIN_FREQUENCY_TIME]	// �����, � ������� ���� ���������� ����������� ������� (� �������)

#define stat_max_temperature				data_16[VI16_STAT_MAX_TEMPERATURE]		// ������������ �����������
#define stat_min_temperature				data_16[VI16_STAT_MIN_TEMPERATURE]		// ����������� �����������
#define stat_max_temperature_time		data_16[VI16_STAT_MAX_TEMPERATURE_TIME]// �����, � ������� ���� ���������� ������������ ����������� (� �������)
#define stat_min_temperature_time		data_16[VI16_STAT_MIN_TEMPERATURE_TIME]// �����, � ������� ���� ���������� ����������� ����������� (� �������)

#define stat_accum_cycles					data_16[VI16_STAT_ACCUM_CYCLES]			// ���������� ������ ������� ������������
#define stat_accum_charge_days			data_16[VI16_STAT_ACCUM_CHARGE_DAYS]	// ������� ���� ������ � ���������� ��������� �������

#define stat_crashes_count					data_16[VI_16_STAT_CRASHES_COUNT]		// ����� ����������� ������

#define ui_settings_u_min					data_16[VI16_UI_SETTINGS_U_MIN]			// ��� ����������� ����������� � ������������ ���������� ���������� 
#define ui_settings_u_max					data_16[VI16_UI_SETTINGS_U_MAX]			// �� ����� �������������� ��������


#define accum_charge_time					data_16[VI_16_ACCUM_CHARGE_TIME]			// ����� ������ ��� � �����
#define time_day								data_16[VI_16_TIME_DAY]						// ������� ����












/*
uint16_t stat_max_voltage;					// ������������ ����������
uint16_t stat_min_voltage;					// ����������� ����������
uint16_t stat_max_voltage_time;			// �����, � ������� ���� ���������� ������������ ���������� (� �������)
uint16_t stat_min_voltage_time;			// �����, � ������� ���� ���������� ����������� ���������� (� �������)

uint16_t stat_max_frequency;				// ������������ ������� �������� ����������
uint16_t stat_min_frequency;				// ����������� ������� �������� ����������
uint16_t stat_max_frequency_time;		// �����, � ������� ���� ���������� ������������ ������� (� �������)
uint16_t stat_min_frequency_time;		// �����, � ������� ���� ���������� ����������� ������� (� �������)

uint16_t stat_max_temperature;			// ������������ �����������
uint16_t stat_min_temperature;			// ����������� �����������
uint16_t stat_max_temperature_time;		// �����, � ������� ���� ���������� ������������ ����������� (� �������)
uint16_t stat_min_temperature_time;		// �����, � ������� ���� ���������� ����������� ����������� (� �������)


uint16_t settings_time_correction_hs;	// ������� ����� ����� ������ ���������/�������� �� ������� � �����
uint16_t settings_protect_u_min;			// ����������� ����� ���������� ������������ ������, �
uint16_t settings_protect_u_max;			// ������������ ����� ���������� ������������ ������, �
uint16_t settings_protect_repeat_time; // �����, ����� ������� ���������� ��������� � �������� ���������� � ������ ������, ���
uint16_t settings_protect_meass_time;  // �����, �������� ���������� ����� ������, ���

uint16_t ui_settings_u_min;				// ��� ����������� ����������� � ������������ ���������� ���������� 
uint16_t ui_settings_u_max;				// �� ����� �������������� ��������


*/


#define VI8_TIME_HSEC					0
#define VI8_TIME_SEC						1
#define VI8_TIME_MIN						2
#define VI8_TIME_HOUR					3


//#define time_hsec		data_8[VI_TIME_HSEC]
//#define time_sec		data_8[VI_TIME_SEC]
//#define time_min		data_8[VI_TIME_MIN]
//#define time_hour		data_8[VI_TIME_HOUR]
