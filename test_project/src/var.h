//
// Переменные программы
//


uint16_t timer_delta_count;				// через сколько тиков таймера будет срабатывать прерывание

uint16_t power_prev_counter;				// предыдущее значение счетчика для вычисления длительности полупериода

volatile bool lcd_update_flag;			// если это флаг выставлен в прерываниях, то в главном цикле будет сделана перерисовка экрана
volatile bool keyboard_check_flag;		// если флаг установлен, то клавиатура будет опрошена в главном цикле

bool reset_statistic_flag;					// флаг того, что надо сбросить статистику после включения

// т.к. при работе с шиной данных аналоговый компаратор начинает выдавать ложные значения, рассчет частоты
// сетевого напряжения в эти моменты стоит прекратить. для этого предназначена следующая переменная.
// в момент запроса к шине данных она полачает значение DBS_REQUEST, начиная с этого момента прерывания компаратора
// игнорируются. после завершения работы с шиной переменная получает значение DBS_DONE, тогда при срабатывании
// прерывания компаратора произойдет переиннициализация измерения длительности, после чего переменная получит
// значение DBS_READY, разрешающее изменение частоты
volatile uint8_t dbs_state;

#define DBS_READY			0
#define DBS_REQUEST		1
#define DBS_DONE			2

uint8_t voltage_meassure_comparator_counter;		// когда срабатывает аналоговый компаратор, он инкрементирует этот счетчик.
																// при измерении напряжения в сети оно усредняется по нескольком полуволнам


uint8_t voltage_meass_mode;	// какое напряжение должен измерять АЦП когда закончит серию измерений текущий величины

#define VM_POWER			0			//	сетевое напряжение
#define VM_ACCUM			1			//	напряжение на АКБ
#define VM_ACCUM_LOAD	2			//	напряжение на АКБ со включенным разрядным резистором


uint8_t key_counter[4];						// счетчики удержания клавиш, содержат время удержания клавиш в 1/20 сек, или 0, если клавиша отпущена
uint8_t key_click_flag[5];					// флаги того, что клавиша была нажата и отпущена
uint8_t key_up_minus_down;					// занчение key_click_flag[KEY_UP] - key_click_flag[KEY_DOWN]


// начиная отсюда переменные сохраняются в EEPROM
#define VI16_STAT_MAX_VOLTAGE					0	// максимальное напряжение
#define VI16_STAT_MIN_VOLTAGE					1	// минимальное напряжение
#define VI16_STAT_MAX_VOLTAGE_TIME			2	// время, в которое было достигнуто максимальное напряжение (в минутах)
#define VI16_STAT_MIN_VOLTAGE_TIME			3	// время, в которое было достигнуто минимальное напряжение (в минутах)

#define VI16_STAT_MAX_FREQUENCY				4	// максимальная частота сетевого напряжения
#define VI16_STAT_MIN_FREQUENCY				5	// минимальная частота сетевого напряжения
#define VI16_STAT_MAX_FREQUENCY_TIME		6	// время, в которое была достигнута максимальная частота (в минутах)
#define VI16_STAT_MIN_FREQUENCY_TIME		7	// время, в которое была достигнута минимальная частота (в минутах)

#define VI16_STAT_MAX_TEMPERATURE			8	// максимальная температура
#define VI16_STAT_MIN_TEMPERATURE			9	// минимальная температура
#define VI16_STAT_MAX_TEMPERATURE_TIME		10	// время, в которое была достигнута максимальная температура (в минутах)
#define VI16_STAT_MIN_TEMPERATURE_TIME		11	// время, в которое была достигнута минимальная температура (в минутах)

#define VI16_SETTINGS_TIME_CORRECTION_HS	12	// сколько сотых долей секунд добавлять/отнимать ко времени в сутки
#define VI16_SETTINGS_PROTECT_U_MIN			13 // минимальный порог напряжения срабатывания защиты, В
#define VI16_SETTINGS_PROTECT_U_MAX			14	// максимальный порог напряжения срабатывания защиты, В
#define VI16_SETTINGS_PROTECT_REPEAT_TIME	15	// время, через которое произойдет включение и проверка напряжения в случае аварии, сек
#define VI16_SETTINGS_PROTECT_MEASS_TIME	16	// время, проверки напряжения после аварии, сек

#define VI_16_ACCUM_CHARGE_TIME				17	// длительность заряда АКБ в часах

#define VI16_STAT_ACCUM_CYCLES				20	// количество циклов зарядки аккумулятора
#define VI16_STAT_ACCUM_CHARGE_DAYS			21	// сколько дней прошло с завершения последней зарядки

#define VI16_SETTINGS_ACCUM_MIN_U			22	// если напряжение на аккумуляторе меньше этого значение, включится зарядка
#define VI16_SETTINGS_ACCUM_MIN_U_LOAD		23	// если напряжение на аккумуляторе с нагрузкий меньше этого значение, включится зарядка

#define VI_16_STAT_CRASH_U_1					24 // напряжение первой аварии
#define VI_16_STAT_CRASH_U_2					25
#define VI_16_STAT_CRASH_U_3					26
#define VI_16_STAT_CRASH_U_4					27
#define VI_16_STAT_CRASH_U_5					28
#define VI_16_STAT_CRASH_U_6					29
#define VI_16_STAT_CRASH_U_7					30
#define VI_16_STAT_CRASH_U_8					31
#define VI_16_STAT_CRASH_U_9					32
#define VI_16_STAT_CRASH_U_10					33

#define VI_16_STAT_CRASH_T_BEGIN_1			34 // время начала первой аварии
#define VI_16_STAT_CRASH_T_BEGIN_2			35
#define VI_16_STAT_CRASH_T_BEGIN_3			36
#define VI_16_STAT_CRASH_T_BEGIN_4			37
#define VI_16_STAT_CRASH_T_BEGIN_5			38
#define VI_16_STAT_CRASH_T_BEGIN_6			39
#define VI_16_STAT_CRASH_T_BEGIN_7			40
#define VI_16_STAT_CRASH_T_BEGIN_8			41
#define VI_16_STAT_CRASH_T_BEGIN_9			42
#define VI_16_STAT_CRASH_T_BEGIN_10			43

#define VI_16_STAT_CRASH_T_END_1				44 // время окончания первой аварии
#define VI_16_STAT_CRASH_T_END_2				45
#define VI_16_STAT_CRASH_T_END_3				46
#define VI_16_STAT_CRASH_T_END_4				47
#define VI_16_STAT_CRASH_T_END_5				48
#define VI_16_STAT_CRASH_T_END_6				49
#define VI_16_STAT_CRASH_T_END_7				50
#define VI_16_STAT_CRASH_T_END_8				51
#define VI_16_STAT_CRASH_T_END_9				52
#define VI_16_STAT_CRASH_T_END_10			53

#define VI_16_STAT_CRASH_DAY_1				54 // деня начала первой аварии
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


#define VI_16_TIME_DAY							66	// счетчик прошедшиз дней

// тут заканчиваются сохраняемые данные
#define VI_16_STORED_DATA_COUNT			67		// количество слов, сохраняемых в EEPROM

#define VI16_POWER_VOLTAGE						68		// текущее напряжение в сети
#define VI16_POWER_FREQUENCY					69		// его частота
#define VI16_TEMPERATURE						70		// текущая температура
//#define VI16_TIME								65		// текущее время в минутах

#define VI16_UI_SETTINGS_U_MIN				71	// тут сохраняются минимальное и максимальное допустимое напряжение
#define VI16_UI_SETTINGS_U_MAX				72	// на время редактирования настроек

#define VI16_ACCUM_VOLTAGE						73	// напряжение на аккумуляторе, когда он отключен, В/100
#define VI16_ACCUM_VOLTAGE_LOAD				74	// напряжение на аккумуляторе при включенном разряжающем резисторе, В/100

#define VI16_ACCUM_CHARGE_MIN					75	// сколько минут заряжается на данный момент АКБ


#define V_16_COUNT							76



//uint8_t data_8[4];
uint16_t data_16[V_16_COUNT];



uint8_t time_hsec, time_sec, time_min, time_hour;				// текущее время
//uint16_t time_day;														// счетчик дней с момента запуска


// частота

volatile uint32_t power_period_sum;		// тут суммируется частота сетевого напряжения, Гц х 100
volatile uint16_t power_period_cnt;		// число измеренных полупериодов
//uint16_t power_frequency;					// текущая рассчитанная частота напряжения в сети

// напряжение
// измеренное напряжение в сети
volatile uint32_t power_voltage_sum;
volatile uint16_t power_voltage_cnt;

// измеренное напряжение на АКБ
volatile uint16_t accum_voltage_sum;
volatile uint8_t accum_voltage_cnt;


//uint16_t temperature;						// текущая измеренная температура







/**
 * Данные настроек
 */
bool settings_time_correction_plus;	// если true, то коррекция времени положительна, к тику часов будут добавляться мкс


#define settings_time_correction_hs 		data_16[VI16_SETTINGS_TIME_CORRECTION_HS] 	// сколько сотых долей секунд добавлять/отнимать ко времени в сутки
#define settings_protect_u_min				data_16[VI16_SETTINGS_PROTECT_U_MIN] 			// минимальный порог напряжения срабатывания защиты, В
#define settings_protect_u_max				data_16[VI16_SETTINGS_PROTECT_U_MAX] 			// максимальный порог напряжения срабатывания защиты, В
#define settings_protect_repeat_time		data_16[VI16_SETTINGS_PROTECT_REPEAT_TIME]	// время, через которое произойдет включение и проверка напряжения в случае аварии, сек
#define settings_protect_meass_time			data_16[VI16_SETTINGS_PROTECT_MEASS_TIME]	// время, проверки напряжения после аварии, сек
#define settings_accum_min_voltage			data_16[VI16_SETTINGS_ACCUM_MIN_U]			// если напряжение на аккумуляторе меньше этого значение, включится зарядка
#define settings_accum_min_load_voltage	data_16[VI16_SETTINGS_ACCUM_MIN_U_LOAD]			// если напряжение на аккумуляторе с нагрузкий меньше этого значение, включится зарядка





uint32_t time_correct_inc_interval;		// интервал в сотых долях секунды, через который будет корректироваться время
uint32_t time_hsec_counter;				// счетчик сотых долей секунды, сбрасывается при корректировке


#define power_frequency						data_16[VI16_POWER_FREQUENCY]
#define power_voltage						data_16[VI16_POWER_VOLTAGE]
#define temperature							data_16[VI16_TEMPERATURE]

#define accum_voltage						data_16[VI16_ACCUM_VOLTAGE]			// напряжение на аккумуляторе, когда он отключен, В/100
#define accum_voltage_load					data_16[VI16_ACCUM_VOLTAGE_LOAD]		// напряжение на аккумуляторе при включенном разряжающем резисторе, В/100
#define accum_charge_min					data_16[VI16_ACCUM_CHARGE_MIN]		// в режиме зарядки тут считаем количество минут зарядки
//#define time									data_16[VI16_TIME]



#define stat_max_voltage					data_16[VI16_STAT_MAX_VOLTAGE]			// максимальное напряжение
#define stat_min_voltage					data_16[VI16_STAT_MIN_VOLTAGE]			// минимальное напряжение
#define stat_max_voltage_time				data_16[VI16_STAT_MAX_VOLTAGE_TIME]		// время, в которое было достигнуто максимальное напряжение (в минутах)
#define stat_min_voltage_time				data_16[VI16_STAT_MIN_VOLTAGE_TIME]		// время, в которое было достигнуто минимальное напряжение (в минутах)

#define stat_max_frequency					data_16[VI16_STAT_MAX_FREQUENCY]			// максимальная частота сетевого напряжения
#define stat_min_frequency					data_16[VI16_STAT_MIN_FREQUENCY]			// минимальная частота сетевого напряжения
#define stat_max_frequency_time			data_16[VI16_STAT_MAX_FREQUENCY_TIME]	// время, в которое была достигнута максимальная частота (в минутах)
#define stat_min_frequency_time			data_16[VI16_STAT_MIN_FREQUENCY_TIME]	// время, в которое была достигнута минимальная частота (в минутах)

#define stat_max_temperature				data_16[VI16_STAT_MAX_TEMPERATURE]		// максимальная температура
#define stat_min_temperature				data_16[VI16_STAT_MIN_TEMPERATURE]		// минимальная температура
#define stat_max_temperature_time		data_16[VI16_STAT_MAX_TEMPERATURE_TIME]// время, в которое была достигнута максимальная температура (в минутах)
#define stat_min_temperature_time		data_16[VI16_STAT_MIN_TEMPERATURE_TIME]// время, в которое была достигнута минимальная температура (в минутах)

#define stat_accum_cycles					data_16[VI16_STAT_ACCUM_CYCLES]			// количество циклов зарядки аккумулятора
#define stat_accum_charge_days			data_16[VI16_STAT_ACCUM_CHARGE_DAYS]	// сколько дней прошло с завершения последней зарядки

#define stat_crashes_count					data_16[VI_16_STAT_CRASHES_COUNT]		// число случившихся аварий

#define ui_settings_u_min					data_16[VI16_UI_SETTINGS_U_MIN]			// тут сохраняются минимальное и максимальное допустимое напряжение
#define ui_settings_u_max					data_16[VI16_UI_SETTINGS_U_MAX]			// на время редактирования настроек


#define accum_charge_time					data_16[VI_16_ACCUM_CHARGE_TIME]			// время заряда АКБ в часах
#define time_day								data_16[VI_16_TIME_DAY]						// счетчик дней












/*
uint16_t stat_max_voltage;					// максимальное напряжение
uint16_t stat_min_voltage;					// минимальное напряжение
uint16_t stat_max_voltage_time;			// время, в которое было достигнуто максимальное напряжение (в минутах)
uint16_t stat_min_voltage_time;			// время, в которое было достигнуто минимальное напряжение (в минутах)

uint16_t stat_max_frequency;				// максимальная частота сетевого напряжения
uint16_t stat_min_frequency;				// минимальная частота сетевого напряжения
uint16_t stat_max_frequency_time;		// время, в которое была достигнута максимальная частота (в минутах)
uint16_t stat_min_frequency_time;		// время, в которое была достигнута минимальная частота (в минутах)

uint16_t stat_max_temperature;			// максимальная температура
uint16_t stat_min_temperature;			// минимальная температура
uint16_t stat_max_temperature_time;		// время, в которое была достигнута максимальная температура (в минутах)
uint16_t stat_min_temperature_time;		// время, в которое была достигнута минимальная температура (в минутах)


uint16_t settings_time_correction_hs;	// сколько сотых долей секунд добавлять/отнимать ко времени в сутки
uint16_t settings_protect_u_min;			// минимальный порог напряжения срабатывания защиты, В
uint16_t settings_protect_u_max;			// максимальный порог напряжения срабатывания защиты, В
uint16_t settings_protect_repeat_time; // время, через которое произойдет включение и проверка напряжения в случае аварии, сек
uint16_t settings_protect_meass_time;  // время, проверки напряжения после аварии, сек

uint16_t ui_settings_u_min;				// тут сохраняются минимальное и максимальное допустимое напряжение
uint16_t ui_settings_u_max;				// на время редактирования настроек


*/


#define VI8_TIME_HSEC					0
#define VI8_TIME_SEC						1
#define VI8_TIME_MIN						2
#define VI8_TIME_HOUR					3


//#define time_hsec		data_8[VI_TIME_HSEC]
//#define time_sec		data_8[VI_TIME_SEC]
//#define time_min		data_8[VI_TIME_MIN]
//#define time_hour		data_8[VI_TIME_HOUR]
