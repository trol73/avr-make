/*
 ���������
  1) ���� 					[���������� ������� �����, �����������, ���������� � ���� � ��� �������]
  2) ����������
    2.1) ����������		[������������ ������������ � ����������� ���������� � ����� ����� ��� ����, ����� ��������]
	 2.2) �������			[������������ ������������ � ����������� ������� � ����� ����� ��� ����, ����� ��������]
	 2.3) �����������		[������������ ������������ � ����������� ����������� � ����� ����� ��� ����, ����� ��������]
	 2.4) �����������		[���������� �� �������, ������� ���� �������, ��� ����� ����������, ������� ����	��������, ����� ��������]
		[U=4.12B U�=4.02B]
		[t=123�� n=1234��]
  3) ������
	   [10: 12:30->13:20]
	   [U=260.3B  1000��]
  4) ��������� - �����
      [�����: 12:34:55 ]
		[��������� +12345]
  5) ��������� - ������
  		[Umin = 190.0�   ]		[t������� =12345�]
		[Umax = 250.0�   ]		[t��������=12345�]
  6) ��������� - �����������	     		
		[U���.xx = 4.60� ]		[t�������=16���. ]    [��� ����������..]
		[U��� = 4.50�   >]		[    ��������    ]    [13:40      5.11�]
		
	

*/

// ������ �������
#define SCREEN_INFO									1
#define SCREEN_STATISTIC							2
#define SCREEN_CRASHES								3
#define SCREEN_SETTINGS_TIME						4
#define SCREEN_SETTINGS_PROTECTION				5
#define SCREEN_SETTINGS_ACCUMULATOR				6
#define SCREEN_STATISTIC_VOLTAGE					7
#define SCREEN_STATISTIC_FREQUENCY				8
#define SCREEN_STATISTIC_TEMPERATURE			9
#define SCREEN_STATISTIC_ACCUMULATOR			10
#define SCREEN_SETTINGS_TIME_PARAMS				11
#define SCREEN_SETTINGS_PROTECTION_PARAMS		12
#define SCREEN_SETTINGS_ACCUMULATOR_PARAMS	13
#define SCREEN_CRASHES_HISTORY					14
#define SCREEN_CHARGE_PROCESS						15


// ���� ������
#define KEY_ENTER				0
#define KEY_ESC				1
#define KEY_UP					2
#define KEY_DOWN				3
#define KEY_UP_or_DOWN		4



#define CH_GRAD		0x00				// ������ �������
#define CH_SELECTOR	0x01				// ������ ���������� �������� �������


#define OUT_DONE			8				// �� ���� ���� ��������� ����� ���������
#define OUT_CMD			9				// ��������� ���� ����� �������� ��� ������� ��� LCD (������������ ��� ��������� goto)
#define OUT_FREQUENCY	10				// ��������� ���� - ������ ��������� � ������� data_16[], ������� �������		
#define OUT_VOLTAGE		11				// ��������� ���� - ������ ��������� � ������� data_16[], ������� ����������
#define OUT_TEMPER		12				// ��������� ���� - ������ ��������� � ������� data_16[], ������� �����������
#define OUT_SHORTTIME	13				// ��������� ���� - ������ ��������� � ������� data_16[], ������� ����������� �����
#define OUT_TIME			14				// ������� ������� �����
#define OUT_WORD			15				// ��������� ���� - ������ ��������� � ������� data_16[], ������� 2�-�������� ����������
#define OUT_VOLTAGE_2	16				// ��������� ���� - ������ ��������� � ������� data_16[], ������� ���������� ���
#define OUT_DAY			17				// ��������� ���� - ���� ������ � ��� ���� ������� �� �������� ���


/*
 * ��������� �������
 */
#define DEFSTR(name, string)			const char name[] PROGMEM = string;




//DEFSTR(str_clear_statistic, "Clear statistic?");
//DEFSTR(str_charge_acb, "Charge ACB?");
//DEFSTR(str_yes, "Yes");
//DEFSTR(str_no, "No");

DEFSTR(str_clear_statistic, "\x4F\xC0\xB8\x63\xBF\xB8\xBF\xC4\x20\xE3\x61\xBD\xBD\xC3\x65?");	// �������� ������?
DEFSTR(str_charge_acb,      "  \xA4\x61\x70\xC7\xE3\xB8\xBF\xC4\x20\x41\x4B\xA0?");					// ������ �������?
DEFSTR(str_save_all, " \x43\x6F\x78\x70\x61\xBD\xB8\xBF\xC4\x20\xB3\x63\x65?");						// ��������� ���?
DEFSTR(str_yes, "\xE0\x61");
DEFSTR(str_no, "\x48\x65\xBF");
DEFSTR(str_crash, "\x41\x42\x41\x50\xA5\xB1\x21");				// ������!


// ������� ������� 
PROGMEM const uint8_t ui_time_settings_cursor[5] = {
	HD44780_DDADDR(7),
	HD44780_DDADDR(10),
	HD44780_DDADDR(13),
	HD44780_DDADDR(80-16+10),
	HD44780_DDADDR(80-16+11)
};
/*
PROGMEM const uint8_t ui_accumulator_settings_cursor[3] = {
	HD44780_DDADDR(10),
	HD44780_DDADDR(80-16+10),
	HD44780_DDADDR(80-16+15)
};
*/
// ��������������. ������� ������� � ������� ������
PROGMEM const uint8_t lcd_user_symbols_code[8*2] = {
// ������ �������
	0b00001100,
	0b00010010,
	0b00010010,
	0b00001100,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
// ������ ������� ������
	0b00010000,
	0b00011000,
	0b00011100,
	0b00011110,
	0b00011100,
	0b00011000,
	0b00010000,
	0b00000000
};




PROGMEM const uint8_t ui_screens_data[] = {
	OUT_DONE,

// ������� �����
	OUT_TIME,
	OUT_CMD, 			HD44780_DDADDR(10),
	OUT_TEMPER,			VI16_TEMPERATURE,
	OUT_CMD,				HD44780_DDADDR(80-16+0),
	OUT_FREQUENCY,		VI16_POWER_FREQUENCY,
	OUT_CMD,				HD44780_DDADDR(80-16+10),
	OUT_VOLTAGE,		VI16_POWER_VOLTAGE,
	OUT_DONE,

// ����� ���� "��������� �����"
//	'S', 'e', 't', 't', 'i', 'n', 'g', 's',
	0x48, 0x61, 0x63, 0xBF, 0x70, 0x6F, 0xB9, 0xBA, 0xB8,
	OUT_CMD,				HD44780_DDADDR(80-16+0),
//	'T', 'i', 'm', 'e',
	0x42, 0x70, 0x65, 0xBC, 0xC7,
	OUT_DONE,

// ����� ���� "��������� ������"
//	'S', 'e', 't', 't', 'i', 'n', 'g', 's',
	0x48, 0x61, 0x63, 0xBF, 0x70, 0x6F, 0xB9, 0xBA, 0xB8,
	OUT_CMD,				HD44780_DDADDR(80-16+0),
//	'P', 'r', 'o', 't', 'e', 'c', 't', 'i', 'o', 'n',
	0xA4, 0x61, 0xE6, 0xB8, 0xBF, 0x61, 
	OUT_DONE,

// ����� ���� "��������� �����������"
//	'S', 'e', 't', 't', 'i', 'n', 'g', 's',
	0x48, 0x61, 0x63, 0xBF, 0x70, 0x6F, 0xB9, 0xBA, 0xB8,
	OUT_CMD,				HD44780_DDADDR(80-16+0),
//	'A', 'c', 'c', 'u', 'm', 'u', 'l', 'a', 't', 'o', 'r',
	0x41, 0xBA, 0xBA, 0x79, 0xBC, 0x79, 0xBB, 0xC7, 0xBF, 0x6F, 0x70,
	OUT_DONE,

// ����� ���� "����������"
//	'S', 't', 'a', 't', 'i', 's', 't', 'i', 'c',
   0x43, 0xBF, 0x61, 0xBF, 0xB8, 0x63, 0xBF, 0xB8, 0xBA, 0x61,
	OUT_DONE,

// ����� "���������� ����������"
	OUT_VOLTAGE,		VI16_STAT_MIN_VOLTAGE,
	OUT_CMD, 			HD44780_DDADDR(10),
	OUT_VOLTAGE,		VI16_STAT_MAX_VOLTAGE,
	OUT_CMD,				HD44780_DDADDR(80-16+0),
	OUT_SHORTTIME, 	VI16_STAT_MIN_VOLTAGE_TIME,
	OUT_CMD,				HD44780_DDADDR(80-16+11),
	OUT_SHORTTIME, 	VI16_STAT_MAX_VOLTAGE_TIME,
	OUT_DONE,

// ����� "���������� �������"
	OUT_FREQUENCY,		VI16_STAT_MIN_FREQUENCY,
	OUT_CMD, 			HD44780_DDADDR(9),
	OUT_FREQUENCY,		VI16_STAT_MAX_FREQUENCY,
	OUT_CMD,				HD44780_DDADDR(80-16+0),
	OUT_SHORTTIME, 	VI16_STAT_MIN_FREQUENCY_TIME,
	OUT_CMD,				HD44780_DDADDR(80-16+11),
	OUT_SHORTTIME, 	VI16_STAT_MAX_FREQUENCY_TIME,
	OUT_DONE,

// ����� "���������� �����������"
	OUT_TEMPER,			VI16_STAT_MIN_TEMPERATURE,
	OUT_CMD, 			HD44780_DDADDR(10),
	OUT_TEMPER,			VI16_STAT_MAX_TEMPERATURE,
	OUT_CMD,				HD44780_DDADDR(80-16+0),
	OUT_SHORTTIME, 	VI16_STAT_MIN_TEMPERATURE_TIME,
	OUT_CMD,				HD44780_DDADDR(80-16+11),
	OUT_SHORTTIME, 	VI16_STAT_MAX_TEMPERATURE_TIME,
	OUT_DONE,

// ����� "���������� �����������"
	'U', '=',
	OUT_VOLTAGE_2, 	VI16_ACCUM_VOLTAGE,
	' ',
	'U', 0xBD, '=',
	OUT_VOLTAGE_2, 	VI16_ACCUM_VOLTAGE_LOAD,
	OUT_CMD,				HD44780_DDADDR(80-16+0),
	't', '=',
	OUT_DAY,				VI16_STAT_ACCUM_CHARGE_DAYS,
 	0xE3, 0xBD,		// ��
	' ', 'n', '=',
	OUT_WORD,			VI16_STAT_ACCUM_CYCLES,
	0xE5, 0xBA, 		// ��
	OUT_DONE,

// ����� "��������� �������"
	0x42, 0x70, 0x65, 0xBC, 0xC7, ':',		// �����:
	OUT_CMD,				HD44780_DDADDR(7),
	OUT_TIME,
	OUT_CMD,				HD44780_DDADDR(80-16+0),
	0x4B, 0x6F, 0x70, 0x70, 0x65, 0xBA, 0xE5, 0xB8, 0xC7, ' ', ' ',	// ���������
	OUT_WORD,			VI16_SETTINGS_TIME_CORRECTION_HS,
	OUT_CMD,				HD44780_DDADDR(80-16+10),
	OUT_DONE,

// ����� "��������� ������", ������ �����
//	'U', 'm', 'i', 'n', ' ', '=', ' ',
	'U', 0xBC, 0xB8, 0xBD, ' ', ' ', '=', ' ',
	OUT_VOLTAGE,		VI16_UI_SETTINGS_U_MIN,
	OUT_CMD,				HD44780_DDADDR(80-16+0),
//	'U', 'm', 'a', 'x', ' ', '=', ' ',
	'U', 0xBC, 0x61, 0xBA, 0x63, ' ', '=', ' ',	
	OUT_VOLTAGE,		VI16_UI_SETTINGS_U_MAX,
	OUT_DONE,

// ����� "��������� ������", ������ �����
//	't', ' ', 'r', 'e', 'p', '	e', 'a', 't', ' ', '=',
	't', ' ', 0xBE, 0x6F, 0xB3, 0xBF, 0x6F, 0x70, ' ', '=', ' ',	// t ������ =
	OUT_WORD, VI16_SETTINGS_PROTECT_REPEAT_TIME,
	'c', 
	OUT_CMD,				HD44780_DDADDR(80-16+0),
	//'t', ' ', 'v', 'e', 'r', 'i', 'f', 'y', ' ', '=',
	't', ' ', 0xBA, 0x6F, 0xBD, 0xBF, 0x70, 0x2E, ' ', '=', ' ',	// t ����� =
	OUT_WORD, VI16_SETTINGS_PROTECT_MEASS_TIME,
	'c',
	OUT_DONE,

// ����� "�������� ������������" - 1
	'U', 0xBE, 0x6F, 0x70, '.', 'x', 'x', ' ', '=', ' ',					// U���
	OUT_VOLTAGE_2,		VI16_SETTINGS_ACCUM_MIN_U,
	OUT_CMD,				HD44780_DDADDR(80-16+0),
	'U', 0xBE, 0x6F, 0x70, '.', 0xBD, 0xB4, ' ', '=', ' ',			// U���.��
	OUT_VOLTAGE_2,		VI16_SETTINGS_ACCUM_MIN_U_LOAD,
//	OUT_CMD,				HD44780_DDADDR(80-16+15),
//	CH_SELECTOR,
	OUT_DONE,


// ����� "�������� ������������" - 2
 	't', ' ', 0xB7, 0x61, 0x70, 0xC7, 0xE3, 0xBA, 0xB8, ' ', '=', ' ',		// t �������
	OUT_WORD, 			VI_16_ACCUM_CHARGE_TIME,
	0xC0, '.',
	OUT_CMD,				HD44780_DDADDR(80-16+3),
	'[', 0xB7, 0x61, 0x70, 0xC7, 0xE3, 0xB8, 0xBF, 0xC4, ']', // ��������
	OUT_DONE,


// ����� "������"
//	'C', 'r', 'a', 's', 'h', 'e', 's',
	0x41, 0xB3, 0x61, 0x70, 0xB8, 0xB8, 		// ������
	OUT_CMD,				HD44780_DDADDR(80-16+0),
	'[', ' ',
	OUT_WORD, 			VI_16_STAT_CRASHES_COUNT,
	' ', ']',
	OUT_DONE,

// ����� ���������� ������
	':', ' ',
	OUT_SHORTTIME, 	VI_16_STAT_CRASH_T_BEGIN_1,
	'-', '>',
	OUT_SHORTTIME, 	VI_16_STAT_CRASH_T_END_1,
	OUT_CMD,				HD44780_DDADDR(80-16+0),
	'U', '=',
	OUT_VOLTAGE,		VI_16_STAT_CRASH_U_1,
	' ', ' ',
	OUT_DAY, 			VI_16_STAT_CRASH_DAY_1,
	0xE3, 0xBD,		// ��
	OUT_DONE,

// ����� �������� ������� ������������
	0xA4, 0x61, 0x70, 0xC7, 0xE3, 0xBA, 0x61,		// �������
	OUT_CMD,				HD44780_DDADDR(80-16+0),
	OUT_SHORTTIME, 	VI16_ACCUM_CHARGE_MIN,
	OUT_CMD,				HD44780_DDADDR(80-16+11),
	OUT_VOLTAGE_2,		VI16_ACCUM_VOLTAGE,
	OUT_CMD,				HD44780_DDADDR(7),
	OUT_DONE
};


// ������� ������ ������
#define UI_DATA_SIZE_SCREEN_MAIN										14
#define UI_DATA_SIZE_SCREEN_SETTINGS_TIME							17
#define UI_DATA_SIZE_SCREEN_SETTINGS_PROTECTION					18
#define UI_DATA_SIZE_SCREEN_SETTINGS_ACCUMULATOR				23
#define UI_DATA_SIZE_SCREEN_STATISTIC								11
#define UI_DATA_SIZE_SCREEN_STATISTIC_VOLTAGE					15
#define UI_DATA_SIZE_SCREEN_STATISTIC_FREQUENCY					15
#define UI_DATA_SIZE_SCREEN_STATISTIC_TEMPERATURE				15
#define UI_DATA_SIZE_SCREEN_STATISTIC_ACCUMULATOR				26
#define UI_DATA_SIZE_SCREEN_SETTINGS_TIME_PARAMS				27
#define UI_DATA_SIZE_SCREEN_SETTINGS_PROTECTION_PARAMS_1		23
#define UI_DATA_SIZE_SCREEN_SETTINGS_PROTECTION_PARAMS_2		31
#define UI_DATA_SIZE_SCREEN_SETTINGS_ACCUMULATOR_PARAMS_1	27
#define UI_DATA_SIZE_SCREEN_SETTINGS_ACCUMULATOR_PARAMS_2	29
#define UI_DATA_SIZE_SCREEN_CRASHES									15
#define UI_DATA_SIZE_SCREEN_CRASHES_HISTORY						21
#define UI_DATA_SIZE_SCREEN_CHARGE_PROCESS						18


// �������� ������� � �������
#define UI_DATA_OFFSET_SCREEN_MAIN									1
#define UI_DATA_OFFSET_SCREEN_SETTINGS_TIME						(UI_DATA_OFFSET_SCREEN_MAIN+UI_DATA_SIZE_SCREEN_MAIN)
#define UI_DATA_OFFSET_SCREEN_SETTINGS_PROTECTION				(UI_DATA_OFFSET_SCREEN_SETTINGS_TIME+UI_DATA_SIZE_SCREEN_SETTINGS_TIME)
#define UI_DATA_OFFSET_SCREEN_SETTINGS_ACCUMULATOR				(UI_DATA_OFFSET_SCREEN_SETTINGS_PROTECTION+UI_DATA_SIZE_SCREEN_SETTINGS_PROTECTION)
#define UI_DATA_OFFSET_SCREEN_STATISTIC							(UI_DATA_OFFSET_SCREEN_SETTINGS_ACCUMULATOR+UI_DATA_SIZE_SCREEN_SETTINGS_ACCUMULATOR)
#define UI_DATA_OFFSET_SCREEN_STATISTIC_VOLTAGE					(UI_DATA_OFFSET_SCREEN_STATISTIC+UI_DATA_SIZE_SCREEN_STATISTIC)
#define UI_DATA_OFFSET_SCREEN_STATISTIC_FREQUENCY				(UI_DATA_OFFSET_SCREEN_STATISTIC_VOLTAGE+UI_DATA_SIZE_SCREEN_STATISTIC_VOLTAGE)
#define UI_DATA_OFFSET_SCREEN_STATISTIC_TEMPERATURE			(UI_DATA_OFFSET_SCREEN_STATISTIC_FREQUENCY+UI_DATA_SIZE_SCREEN_STATISTIC_FREQUENCY)
#define UI_DATA_OFFSET_SCREEN_STATISTIC_ACCUMULATOR			(UI_DATA_OFFSET_SCREEN_STATISTIC_TEMPERATURE+UI_DATA_SIZE_SCREEN_STATISTIC_TEMPERATURE)
#define UI_DATA_OFFSET_SCREEN_SETTINGS_TIME_PARAMS				(UI_DATA_OFFSET_SCREEN_STATISTIC_ACCUMULATOR+UI_DATA_SIZE_SCREEN_STATISTIC_ACCUMULATOR)
#define UI_DATA_OFFSET_SCREEN_SETTINGS_PROTECTION_PARAMS_1	(UI_DATA_OFFSET_SCREEN_SETTINGS_TIME_PARAMS+UI_DATA_SIZE_SCREEN_SETTINGS_TIME_PARAMS)	
#define UI_DATA_OFFSET_SCREEN_SETTINGS_PROTECTION_PARAMS_2	(UI_DATA_OFFSET_SCREEN_SETTINGS_PROTECTION_PARAMS_1+UI_DATA_SIZE_SCREEN_SETTINGS_PROTECTION_PARAMS_1)
#define UI_DATA_OFFSET_SCREEN_SETTINGS_ACCUMULATOR_PARAMS_1	(UI_DATA_OFFSET_SCREEN_SETTINGS_PROTECTION_PARAMS_2+UI_DATA_SIZE_SCREEN_SETTINGS_PROTECTION_PARAMS_2)	
#define UI_DATA_OFFSET_SCREEN_SETTINGS_ACCUMULATOR_PARAMS_2	(UI_DATA_OFFSET_SCREEN_SETTINGS_ACCUMULATOR_PARAMS_1+UI_DATA_SIZE_SCREEN_SETTINGS_ACCUMULATOR_PARAMS_1)	
#define UI_DATA_OFFSET_SCREEN_CRASHES								(UI_DATA_OFFSET_SCREEN_SETTINGS_ACCUMULATOR_PARAMS_2+UI_DATA_SIZE_SCREEN_SETTINGS_ACCUMULATOR_PARAMS_2)	
#define UI_DATA_OFFSET_SCREEN_CRASHES_HISTORY					(UI_DATA_OFFSET_SCREEN_CRASHES+UI_DATA_SIZE_SCREEN_CRASHES)	
#define UI_DATA_OFFSET_SCREEN_CHARGE_PROCESS						(UI_DATA_OFFSET_SCREEN_CRASHES_HISTORY+UI_DATA_SIZE_SCREEN_CRASHES_HISTORY)	

/*
PROGMEM const uint16_t ui_screens_offsets[] = {
	0,
	UI_DATA_OFFSET_MAIN,									// SCREEN_INFO
	UI_DATA_OFFSET_SCREEN_STATISTIC,					// SCREEN_STATISTIC
	UI_DATA_OFFSET_SETTINGS_TIME,						// SCREEN_SETTINGS_TIME
	UI_DATA_OFFSET_SCREEN_SETTINGS_PROTECTION,	// SCREEN_SETTINGS_PROTECTION
	UI_DATA_OFFSET_SCREEN_STATISTIC_VOLTAGE,		// SCREEN_STATISTIC_VOLTAGE
	UI_DATA_OFFSET_SCREEN_STATISTIC_FREQUENCY,	// SCREEN_STATISTIC_FREQUENCY					
	UI_DATA_OFFSET_SCREEN_STATISTIC_TEMPERATURE,	// SCREEN_STATISTIC_TEMPERATURE
	0, 														// SCREEN_STATISTIC_ACCUMULATOR
	0, 														// SCREEN_STATISTIC_CRASHES
	UI_DATA_OFFSET_SCREEN_SETTINGS_TIME_PARAMS	// SCREEN_SETTINGS_TIME_PARAMS
																// SCREEN_SETTINGS_PROTECTION_PARAMS
};
*/




#include "stddef.h"


#define MSG_BOX_NONE						0
#define MSG_BOX_CLEAR_STATISTIC		1
#define MSG_BOX_CHARGE_ACCUM			2
#define MSG_BOX_SAVE_ALL				3

/**
 * ������ UI
 */
uint8_t screen;								// ����� �������� ������
uint8_t ui_show_yes_no_dialog_flag;		// ���� �� ����, �� �������� ��� �������� ������� ������� ��/��� (MSG_BOX_xxx)
bool ui_yes_no_dialog_result;				// ��������� ������� ������� "��/���" true - ��, false - ���
uint8_t ui_settings_cursor;				// ��� ������� �������� ��� ����� ����� ��������� ���������
uint8_t ui_crash_index;						// ������ ������ ��� ���������
uint8_t print_data_offset;					// �������� � ������� ������ ��� ������� print()
bool ui_is_first_enter_click;				// ������������ ��� ���������� ��������� �������� ��������� ENTER � ������� ����

#if ENABLE_LCD_HIGHLIGHT
uint8_t lcd_highlight_time;				// ������� ������, ��������� � ������� ���������� ������� �� �������, ��� ����������� ����������
#endif





/**
 * �������������� �������������� ������ ����������������� ����������
 */
inline void ui_init() {
#if ENABLE_LCD_HIGHLIGHT
	// ����������� ���� ���������
	DDR(LCD_HIGHLIGHT_PORT) |= _BV(LCD_HIGHLIGHT_PIN);
	// �������� ���������
	PORT(LCD_HIGHLIGHT_PORT) |= _BV(LCD_HIGHLIGHT_PIN);
#endif
	ui_show_yes_no_dialog_flag = MSG_BOX_NONE;
	screen = SCREEN_INFO;
	// ������������� ��������������
	hd44780_command(HD44780_CGADDR(0));
	for (uint8_t i = 0; i < 16*2; i++)
		lcd_put_char(pgm_read_byte(&lcd_user_symbols_code[i]));
	print_data_offset = 0;
}


/**
 * �������� ��������� ������
 */
inline void lcdEnableHighlight(bool enable) {
#if ENABLE_LCD_HIGHLIGHT
	if ( enable ) 
		PORT(LCD_HIGHLIGHT_PORT) |= _BV(LCD_HIGHLIGHT_PIN);
	else
		PORT(LCD_HIGHLIGHT_PORT) &= ~_BV(LCD_HIGHLIGHT_PIN);
#endif
}


/*
 * �������������� ����������
 */ 
inline void keyboardInit() {
	// ������������� ��� ����� �� ������
	DDR(KEYBOARD_LINE_PORT) &= ~_BV(KEYBOARD_LINE_PIN);
	// �������� ������������� ��������
	PORT(KEYBOARD_LINE_PORT) |= _BV(KEYBOARD_LINE_PIN);
}


/**
 *
 */
inline uint8_t key_is_repeated(uint8_t key) {
	return key_counter[key] > 15;
}



/*
 * ���������� ����������, ������������� ��� ��������� �������� key_counter. 
 * ����� �� ������ ������������ � �������� �������� LCD.
 */
static inline void keyboardCheck() {
	// ������������� ���� ������ �� �����
	DDR(KEYBOARD_DATA_PORT) |= _BV(KEYBOARD_PIN_ENTER)|_BV(KEYBOARD_PIN_ESC)|_BV(KEYBOARD_PIN_UP)|_BV(KEYBOARD_PIN_DOWN);
	for (uint8_t key = 0; key < 4; key++ ) {
		// ������������� "1" �� ���� ������ ���� ������
		PORT(KEYBOARD_DATA_PORT) |= _BV(KEYBOARD_PIN_ENTER)|_BV(KEYBOARD_PIN_ESC)|_BV(KEYBOARD_PIN_UP)|_BV(KEYBOARD_PIN_DOWN);
		// ������������� � "0" ����� ������������ ������
		PORT(KEYBOARD_DATA_PORT) &= ~_BV(key + KEYBOARD_PIN_ENTER);
		// ���� ������ ��� ��������, �� ��������� ����� ���������� ���������, �.�., ������ enter ����� ����������� esc,
		// ������ esc - up, ������ up - down, ������ down - enter [!!!]
		_delay_us(1);
		key_click_flag[key] = false;
		if ( !(PIN(KEYBOARD_LINE_PORT) & _BV(KEYBOARD_LINE_PIN)) ) {			
			if ( key_counter[key] != 0xFF )
				key_counter[key]++;
		} else {
			if ( key_counter[key] != 0)
				key_click_flag[key] = true;
			key_counter[key] = 0;
		}
	}
	key_click_flag[KEY_UP_or_DOWN] = key_click_flag[KEY_UP] | key_click_flag[KEY_DOWN] | key_is_repeated(KEY_UP) | key_is_repeated(KEY_DOWN);
	//key_up_minus_down = key_click_flag[KEY_UP] - key_click_flag[KEY_DOWN];
	
	key_up_minus_down = 0;
	if ( key_is_repeated(KEY_UP) || key_click_flag[KEY_UP] ) 
		key_up_minus_down++;
	if ( key_is_repeated(KEY_DOWN) || key_click_flag[KEY_DOWN] ) 
		key_up_minus_down--;

#if ENABLE_LCD_HIGHLIGHT
	if ( key_click_flag[KEY_UP_or_DOWN] || key_counter[KEY_ENTER] > 0 || key_counter[KEY_ESC] > 0 ) {
		lcd_highlight_time = 0;
//		if ( !powerisCrash() )
//		if ( power_crash_time_sec > 4 )
		if ( !powerisCrash() || (power_crash_time_sec > 4) )
			lcdEnableHighlight(true);
	}
	if ( powerisCrash() && power_crash_time_sec < 5 )
		lcdEnableHighlight(false);
#endif
}






/**
 * ����� �������� ����� �� LCD
 *
 * digits_mask - ����������, ������� ������ ��������, ��� ������ ����� - 1, ��� 2� - 10, ��� 3� - 100, � �.�.
 * digits_whole - ������� ������ �������� ����� �����
 */
void print_float(uint16_t val, uint16_t digits_mask, uint8_t digits_whole) {	
	for (uint8_t i = 0; ; i++) {
		if ( i == digits_whole )
			lcd_put_char('.');
		lcd_put_char('0' + val / digits_mask);
		val %= digits_mask;
		if ( digits_mask == 1 )
			break;
		digits_mask /= 10;
	}
}





/**
 * ������� �� ����� �������� �������
 */
inline void print_frequency(uint16_t f) {
	if ( f == 0 || f >= 9999 ) {
		print_string(str_crash);
	} else {
		print_float(f, 1000, 2);
		lcd_put_char(0xA1);	// �
		lcd_put_char(0xE5);	// �
	}

}



/*
 * ������� �� ����� ���������� (� ������� ����� �)
 */
inline void print_voltage(uint16_t v) {
	print_float(v, 1000, 3);
	lcd_put_char('B');
}


/*
 * ������� �� ����� ���������� (� ����� ����� �)
 */
inline void print_voltage_2(uint16_t v) {
	print_float(v, 100, 1);
	lcd_put_char('B');
}



/**
 * ������� �� ����� �����������
 */
inline void print_temperature(uint16_t t) {
	print_float(t, 100, 2);
	lcd_put_char(CH_GRAD);
	lcd_put_char('C');
}


void _print_byte_2(uint8_t b) {
	print_float(b, 10, 2);
}

/**
 * �������� ������� �����
 */
inline void print_current_time() {
	//print_float(time_hour, 10, 2);
	_print_byte_2(time_hour);
	lcd_put_char(':');
	//print_float(time_min, 10, 2);
	_print_byte_2(time_min);
	lcd_put_char(':');
	//print_float(time_sec, 10, 2);
	_print_byte_2(time_sec);
}



/**
 * �������� ����� ��� ������
 */
inline void print_short_time(uint16_t time) {
	if ( time < 24*60 ) {
		_print_byte_2(time / 60);
		lcd_put_char(':');
		_print_byte_2(time % 60);	
	}
}



/**
 * ����� ������ �� LCD
 */
void print_string(PGM_P str) {
	while ( true ) {
		uint8_t b = pgm_read_byte_near(str++);
		if ( !b )
			break;
		lcd_put_char(b);
	}
}


/**
 * ������� �� ����� ����� ��� ��������� �����
 */
void print_word(uint16_t w) {		// [!!!] � ������ �� ��������������?
	uint16_t m = 1;
	uint8_t i = 1;
	for ( ; i < 5; i++) {
		if ( w < 10*m )
			break;
		m *= 10;
	}
	print_float(w, m, i);
/*
	if ( w < 10)
		print_float(w, 1, 1);
	else if ( w < 100)
		print_float(w, 10, 2);
	else if ( w < 1000)
		print_float(w, 100, 3);
	else if ( w < 10000 )
		print_float(w, 1000, 4);
	else
		print_float(w, 10000, 5);
*/
}


/**
 * �������� ������, � ������� ��������� ������������� ����������� ������ OUT_xxx
 */
void print(PGM_P str) {
	while ( true ) {
		uint8_t cmd = pgm_read_byte_near(str++);
		uint8_t val = pgm_read_byte_near(str);
		uint16_t w = data_16[val+print_data_offset];
		switch ( cmd ) {
			case OUT_DONE:
				return;
			case OUT_CMD:
				hd44780_command(val);
				str++;
				break;
			case OUT_FREQUENCY:
				print_frequency(w);
				str++;
				break;
			case OUT_VOLTAGE:
				print_voltage(w);
				str++;
				break;
			case OUT_TEMPER:
				print_temperature(w);
				str++;
				break;
			case OUT_SHORTTIME:
				print_short_time(w);
				str++;
				break;
			case OUT_TIME:
				print_current_time();
				break;
			case OUT_WORD:
				print_word(w);
				str++;
				break;
			case OUT_VOLTAGE_2:
				print_voltage_2(w);
				str++;
				break;
			case OUT_DAY:
				print_word(time_day-w);
				str++;
				break;
			default:
				lcd_put_char(cmd);
		}
	}
}






/**
 * �������������� ����� ��� �������� ����
 */
inline void drawLCD() {
	lcd_clear();
	lcd_goto(0, 0);
	print_data_offset = 0;

	if ( ui_show_yes_no_dialog_flag != MSG_BOX_NONE ) {
		switch ( ui_show_yes_no_dialog_flag ) {
			case MSG_BOX_CLEAR_STATISTIC:
				print_string(str_clear_statistic);
				break;
			case MSG_BOX_CHARGE_ACCUM:
				print_string(str_charge_acb);
				break;
			case MSG_BOX_SAVE_ALL:
				print_string(str_save_all);
				break;
				
		}		
		lcd_goto(1, 1);
		print_string(str_yes);
		lcd_goto(1, 12);
		print_string(str_no);
		lcd_goto(1, ui_yes_no_dialog_result ? 0 : 11);
		lcd_put_char(CH_SELECTOR);
		return;
	} 
//	if ( screen < SCREEN_SETTINGS_PROTECTION_PARAMS ) {
//		print(&ui_screens_data[pgm_read_word_near(&ui_screens_offsets)]);


	if ( screen == SCREEN_INFO ) {
		print(&ui_screens_data[UI_DATA_OFFSET_SCREEN_MAIN]);	
	} else if ( screen == SCREEN_SETTINGS_TIME ) {
		print(&ui_screens_data[UI_DATA_OFFSET_SCREEN_SETTINGS_TIME]);
	} else if ( screen == SCREEN_SETTINGS_PROTECTION ) {
		print(&ui_screens_data[UI_DATA_OFFSET_SCREEN_SETTINGS_PROTECTION]);
	} else if ( screen == SCREEN_SETTINGS_ACCUMULATOR ) {
		print(&ui_screens_data[UI_DATA_OFFSET_SCREEN_SETTINGS_ACCUMULATOR]);
	} else if ( screen == SCREEN_STATISTIC ) {
		print(&ui_screens_data[UI_DATA_OFFSET_SCREEN_STATISTIC]);
	} else if ( screen == SCREEN_STATISTIC_VOLTAGE ) {
		print(&ui_screens_data[UI_DATA_OFFSET_SCREEN_STATISTIC_VOLTAGE]);
	} else if ( screen == SCREEN_STATISTIC_FREQUENCY ) {
		print(&ui_screens_data[UI_DATA_OFFSET_SCREEN_STATISTIC_FREQUENCY]);
	} else if ( screen == SCREEN_STATISTIC_TEMPERATURE ) {
		print(&ui_screens_data[UI_DATA_OFFSET_SCREEN_STATISTIC_TEMPERATURE]);
	} else if ( screen == SCREEN_STATISTIC_ACCUMULATOR ) {
		print(&ui_screens_data[UI_DATA_OFFSET_SCREEN_STATISTIC_ACCUMULATOR]);
	} else if ( screen == SCREEN_CRASHES ) {
		print(&ui_screens_data[UI_DATA_OFFSET_SCREEN_CRASHES]);
	} else if ( screen == SCREEN_CHARGE_PROCESS ) {
		print(&ui_screens_data[UI_DATA_OFFSET_SCREEN_CHARGE_PROCESS]);

		// ������� ������� ���������� �������
		int16_t percent10 = 10*accum_charge_min;		
		percent10 /= accum_charge_time*60;
		for ( uint8_t i = 0; i < 10; i++ ) 
			lcd_put_char(i < (uint8_t)percent10 ? 0xFF : ' ');
	} else if ( screen == SCREEN_SETTINGS_TIME_PARAMS ) {
		print(&ui_screens_data[UI_DATA_OFFSET_SCREEN_SETTINGS_TIME_PARAMS]);
		lcd_put_char(settings_time_correction_plus ? '+' : '-');
		// ������������� ������
		hd44780_command(pgm_read_byte(&ui_time_settings_cursor[ui_settings_cursor]));
	} else if ( screen == SCREEN_SETTINGS_PROTECTION_PARAMS ) {
		if ( ui_settings_cursor < 2 ) {
			print(&ui_screens_data[UI_DATA_OFFSET_SCREEN_SETTINGS_PROTECTION_PARAMS_1]);
			lcd_goto(ui_settings_cursor, 8);
		} else {
			print(&ui_screens_data[UI_DATA_OFFSET_SCREEN_SETTINGS_PROTECTION_PARAMS_2]);
			lcd_goto(ui_settings_cursor-2, 11);
		}
	} else if ( screen == SCREEN_SETTINGS_ACCUMULATOR_PARAMS ) {



/* [!!!] ��� ��������� ��� ��� ������ �� ����� �������� time_correct_inc_interval
	lcd_goto(0, 0);
	uint32_t val = time_correct_inc_interval;
	uint32_t digits_mask = 1000000000;
	for (uint8_t i = 0; ; i++) {
		lcd_put_char('0' + val / digits_mask);
		val %= digits_mask;
		if ( digits_mask == 1 )
			break;
		digits_mask /= 10;
	}
*/


		if ( ui_settings_cursor < 2 ) {
			print(&ui_screens_data[UI_DATA_OFFSET_SCREEN_SETTINGS_ACCUMULATOR_PARAMS_1]);
			lcd_goto(ui_settings_cursor, 10);			
		} else {
			print(&ui_screens_data[UI_DATA_OFFSET_SCREEN_SETTINGS_ACCUMULATOR_PARAMS_2]);
			lcd_goto(ui_settings_cursor-2, ui_settings_cursor == 2 ? 12 : 4);	
		}
		lcd_enable_cursor(true);

	} else if ( screen == SCREEN_CRASHES_HISTORY ) {
		print_word(ui_crash_index+1);
		print_data_offset = ui_crash_index;
		print(&ui_screens_data[UI_DATA_OFFSET_SCREEN_CRASHES_HISTORY]);		
/*
		lcd_put_char(':');
		lcd_put_char(' ');
		print_short_time(data_16[VI_16_STAT_CRASH_T_BEGIN_1+ui_crash_index]);
		lcd_put_char('-');
		lcd_put_char('>');
		print_short_time(data_16[VI_16_STAT_CRASH_T_END_1+ui_crash_index]);
		hd44780_command(HD44780_DDADDR(80-16+0));
		lcd_put_char('U');
		lcd_put_char('=');
		print_voltage(data_16[VI_16_STAT_CRASH_U_1+ui_crash_index]);
		lcd_put_char(' ');
		lcd_put_char(' ');
		print_word(data_16[VI_16_STAT_CRASH_DAY_1+ui_crash_index]-time_day);
		lcd_put_char('d');
		lcd_put_char('n');
*/
	}
/*
	if ( screen == SCREEN_SETTINGS_TIME_PARAMS ) {		
		lcd_put_char(settings_time_correction_plus ? '+' : '-');
		// ������������� ������
		hd44780_command(pgm_read_byte(&ui_time_settings_cursor[ui_settings_cursor]));
	}
*/


}





inline void setScreen(uint8_t index) {
	screen = index;
	lcd_update_flag = true;
}


uint8_t key_handle_main_menu(uint8_t first, uint8_t last) {
	if ( screen <= last ) {
		screen += key_up_minus_down;
		if ( screen < first )
			screen = last;
		else if ( screen > last )
			screen = first;
		if ( key_click_flag[KEY_ESC] )
			setScreen(SCREEN_INFO);
		return true;
	}
	return false;
}


inline void ui_handle_byte_editor(uint8_t *val, uint8_t max) {
	*val += key_up_minus_down;
	if ( *val == 0xFF )
		*val = 0;
	else if ( *val > max ) 
		*val = max;
}



inline void ui_handle_word_editor(uint8_t index, uint16_t min, uint16_t max) {
	if ( (key_up_minus_down == 1) && (data_16[index] < max) )
		data_16[index]++;
	if ( (key_up_minus_down == 0xFF) && (data_16[index] > min) )
		data_16[index]--;
}
/*
inline void ui_handle_word_editor(uint8_t index, uint16_t min, uint16_t max) {
	if ( key_up_minus_down == 1 ) {
		if ( data_16[index] < max ) 
			data_16[index]++;
		else
			data_16[index] = max;
	}
	if ( key_up_minus_down == 0xFF ) {
		if ( data_16[index] > min )
			data_16[index]--;
		else
			data_16[index] = min;
	}
}
*/


/**
 * ���������� ����������
 */
inline void keyHandle() {
	if ( key_click_flag[KEY_UP_or_DOWN] | key_click_flag[KEY_ENTER] | key_click_flag[KEY_ESC] )
		lcd_update_flag = true;

	// ������ "��/���"
	if ( ui_show_yes_no_dialog_flag != MSG_BOX_NONE ) {
		if ( key_click_flag[KEY_UP_or_DOWN] ) {
			ui_yes_no_dialog_result = !ui_yes_no_dialog_result;
		} else if ( key_click_flag[KEY_ENTER] || key_click_flag[KEY_ESC] ) {
			if ( key_click_flag[KEY_ENTER] && ui_is_first_enter_click && ui_show_yes_no_dialog_flag == MSG_BOX_SAVE_ALL ) {
				ui_is_first_enter_click = false;
				return;
			}
			if ( key_click_flag[KEY_ENTER] && ui_yes_no_dialog_result ) {
				uint16_t time = time_hour*60 + time_min;

				if ( ui_show_yes_no_dialog_flag == MSG_BOX_SAVE_ALL ) {
						save_eeprom();
				} else {
					switch ( screen ) {
						case SCREEN_STATISTIC_VOLTAGE:
							reset_statistic_voltage(time);
							break;
						case SCREEN_STATISTIC_FREQUENCY:
							reset_statistic_frequency(time);
							break;
						case SCREEN_STATISTIC_TEMPERATURE:
							reset_statistic_temperature(time);
							break;
						case SCREEN_STATISTIC_ACCUMULATOR:
							reset_statistic_accumulator();
							break;
						case SCREEN_CRASHES_HISTORY:
							reset_statistic_crashes();
							screen = SCREEN_CRASHES;
							break;
						case SCREEN_SETTINGS_ACCUMULATOR_PARAMS:
							accum_state = ACB_STATE_DISCHARGE;
							accumEnableDischarge(true);						
							break;	
					} // switch
				}	//
			} // if ("��")
			ui_show_yes_no_dialog_flag = MSG_BOX_NONE;
		}

	
	// ������� ����
	} else if ( key_handle_main_menu(SCREEN_INFO, SCREEN_SETTINGS_ACCUMULATOR) ) {
		// ��������� ������� ENTER - ���������� ���� �������� � ���������� (� ����� ������, ��� ����������� � ������ �����)
		if ( key_is_repeated(KEY_ENTER) && screen == SCREEN_INFO ) {
			ui_show_yes_no_dialog_flag = MSG_BOX_SAVE_ALL;
			ui_yes_no_dialog_result = false;
			ui_is_first_enter_click = true;
		}
		if ( key_click_flag[KEY_ENTER] ) {
			ui_settings_cursor = 0;
			switch ( screen ) {
				case SCREEN_INFO:
//					if ( powerCrash() )
//						lcdEnableHighlight(false);
					powerMakeMeassure();
					break;
				case SCREEN_STATISTIC:
					screen = SCREEN_STATISTIC_VOLTAGE;
					break;
				case SCREEN_CRASHES:
					if ( stat_crashes_count > 0 )
						screen = SCREEN_CRASHES_HISTORY;
					ui_crash_index = 0;
					break;
				case SCREEN_SETTINGS_TIME:
					screen = SCREEN_SETTINGS_TIME_PARAMS;
					lcd_enable_cursor(true);
					break;
				case SCREEN_SETTINGS_PROTECTION:
					screen = SCREEN_SETTINGS_PROTECTION_PARAMS;
					ui_settings_u_min = settings_protect_u_min;
					ui_settings_u_max = settings_protect_u_max;
					lcd_enable_cursor(true);
					break;
				case SCREEN_SETTINGS_ACCUMULATOR:
					screen = SCREEN_SETTINGS_ACCUMULATOR_PARAMS;					
					break;
			}

		}

	// ���� ����������
	} else if ( key_handle_main_menu(SCREEN_STATISTIC_VOLTAGE, SCREEN_STATISTIC_ACCUMULATOR) ) {
		if ( key_click_flag[KEY_ENTER] ) {
			ui_show_yes_no_dialog_flag = MSG_BOX_CLEAR_STATISTIC;
			ui_yes_no_dialog_result = false;
		}

	// ���� ��������� �������
	} else if ( screen == SCREEN_SETTINGS_TIME_PARAMS ) {
		if ( key_click_flag[KEY_ENTER] ) {
			ui_settings_cursor++;
			if ( ui_settings_cursor == 5 )
				ui_settings_cursor = 0;
		}	else if (key_click_flag[KEY_ESC] ) {
			lcd_disable_cursor();
			screen = SCREEN_SETTINGS_TIME;
		}
		if ( key_click_flag[KEY_UP_or_DOWN] ) {
			switch ( ui_settings_cursor ) {
				case 0:		// ����
					ui_handle_byte_editor(&time_hour, 23);
					break;
				case 1:		// ������
					ui_handle_byte_editor(&time_min, 59);
					break;
				case 2:		// ����� ������ � ����� �����
					if ( time_sec > 30 ) {
						time_sec = 59;
						time_hsec = 99;
					} else {
						time_sec = 0;
						time_hsec = 0;
					}
					break;
				case 3:		// ��������� ����� ���������
					settings_time_correction_plus = !settings_time_correction_plus;
					break;
				case 4:		// ��������� �������� ���������
					//ui_handle_word_editor(&settings_time_correction_hs, 0, 60000);
					ui_handle_word_editor(VI16_SETTINGS_TIME_CORRECTION_HS, 0, 60000);
					init_time_correction();
					break;
			}
		}

	// ���� ��������� ���������� ������
	} else if ( screen == SCREEN_SETTINGS_PROTECTION_PARAMS ) {
		if ( key_click_flag[KEY_ENTER] ) {
			ui_settings_cursor++;
			if ( ui_settings_cursor == 4 )
				ui_settings_cursor = 0;
		}	else if ( key_click_flag[KEY_ESC] ) {
			lcd_disable_cursor();
			settings_protect_u_min = ui_settings_u_min;
			settings_protect_u_max = ui_settings_u_max;
			screen = SCREEN_SETTINGS_PROTECTION;
		}
		if ( key_click_flag[KEY_UP_or_DOWN] ) {
			switch ( ui_settings_cursor ) {
				case 0:		// Umin
					ui_handle_word_editor(VI16_UI_SETTINGS_U_MIN, 1200, 2150);
					break;
				case 1:		// Umax				
					ui_handle_word_editor(VI16_UI_SETTINGS_U_MAX, 2300, 3000);
					break;
				case 2:		// t repeat
					ui_handle_word_editor(VI16_SETTINGS_PROTECT_REPEAT_TIME, 1, 36000);
					break;
				case 3:		// t meas
					ui_handle_word_editor(VI16_SETTINGS_PROTECT_MEASS_TIME, 1, 3600);
					break;
			}
		}
	// ���� ��������� ���������� ������������
	} else if ( screen == SCREEN_SETTINGS_ACCUMULATOR_PARAMS ) {
		if ( key_click_flag[KEY_ENTER] ) {
			ui_settings_cursor++;
			if ( ui_settings_cursor == 4 )
				ui_settings_cursor = 0;
		}	else if ( key_click_flag[KEY_ESC] ) {
			lcd_disable_cursor();
			screen = SCREEN_SETTINGS_ACCUMULATOR;
		}
		if ( key_click_flag[KEY_UP_or_DOWN] ) {
			switch ( ui_settings_cursor ) {
				case 0:
					ui_handle_word_editor(VI16_SETTINGS_ACCUM_MIN_U, 300, 550);
					break;
				case 1:
					ui_handle_word_editor(VI16_SETTINGS_ACCUM_MIN_U_LOAD, 300, 550);
					break;
				case 2:
					ui_handle_word_editor(VI_16_ACCUM_CHARGE_TIME, 1, 48);
					break;
				case 3:
					lcd_disable_cursor();
					if ( accum_state == ACB_STATE_FREE ) {
						ui_show_yes_no_dialog_flag = MSG_BOX_CHARGE_ACCUM;
						ui_yes_no_dialog_result = false;
					} else  if ( accum_state == ACB_STATE_CHARGE ) {					
						screen = SCREEN_CHARGE_PROCESS;
					}
					break;
			}
		} // if

	// ���� ��������� ���������� ������ 
	} else if ( screen == SCREEN_CRASHES_HISTORY ) {
		ui_handle_byte_editor(&ui_crash_index, stat_crashes_count-1);
		if ( key_click_flag[KEY_ENTER] ) {
			ui_show_yes_no_dialog_flag = MSG_BOX_CLEAR_STATISTIC;
			ui_yes_no_dialog_result = false;
		} else if ( key_click_flag[KEY_ESC] ) {
			screen = SCREEN_CRASHES;
		}

	// ���� ���������� � �������� ������� ���
	} else if ( screen == SCREEN_CHARGE_PROCESS ) {
		if ( key_click_flag[KEY_ESC] || key_click_flag[KEY_ENTER] )
			screen = SCREEN_SETTINGS_ACCUMULATOR_PARAMS;

	} // if ( screen == .. )


}



