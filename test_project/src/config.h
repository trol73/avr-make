#define __AVR_ATmega8__						1

#define F_CPU									11059200L		// ������� ������ � ��

#define DEBUG									0

//#define LOAD_SETTINGS_FROM_EEPROM		1			// ���� ����������, ��������� ����� ��������� �� ������, �����, ��������� � ������
#define ENABLE_LCD_HIGHLIGHT				10			// ���� 0, ��������� LCD ���������, ����� - ������������ ��������� � �������� ����� ������� �������

#define POWER_MIN_CRASH_COUNT				5			// ������� ��������� ���������� ���� ������ �������� ������ ����� ����������� ��������
#define POWER_VOLTAGE_AVERAGE_COUNT		1000		// �� �������� ���������� ��������� ���������� � ����
#define POWER_VOLTAGE_AVERAGE_HP_COUNT	14			// �� ������� ������������ �������� ����������
#define ACCUM_VOLTAGE_AVERAGE_COUNT		50			// �� �������� ���������� ��������� ���������� �� ���
#define ACCUMULATOR_DISCHARGE_VOLT		400		// �� ������ ���������� ��������� ��� ����� ��������
#define ACCUMULATOR_CHARGE_HOURS			15			// ������������ ������� ��� � �����

#define ACCUMULATOR_MIN_VOLTAGE			450		// ����������� ���������� �� �������������� ���, ��� ������� ��������� �������
#define ACCUMULATOR_MIN_LOAD_VOLTAGE	420		// ����������� ���������� �� ����������� ���, ��� ������� ��������� �������

	
#define PROTECT_U_MIN						2090		// ����������� ���������� ����������
#define PROTECT_U_MAX						2330		// ������������ ���������� ����������
#define PROTECT_REPEAT_TIME				5*60		// ����� ����� ����������� ����� ��� �������� ���������� � ������ ������ ����������
#define PROTECT_MEASS_TIME					30			// �����, � ������� �������� ����� ���������������� ������� ���������� ����� ���, ��� �������� �������� � ������ ������


// ��������� � �������� ��� ��������� �������� ��� � ���������� �� ��� � ���������� � ����
#define ADC_POWER_MUL						1232
#define ADC_POWER_DIV						348
#define ADC_ACCUM_MUL						60
#define ADC_ACCUM_DIV						61



#define ADC_POWER_PIN						0			// ��� ADC � �������� ����� ���������� ������� ����������
#define ADC_ACCUM_PIN						1		 	// ��� ADC � �������� ����� ���������� ���������� �� ������������

#define KEYBOARD_DATA_PORT					B			// ���� ����� ������ ���������� (� ������ �� ����������������)
#define KEYBOARD_PIN_ENTER					PINB0		// ��� ������ ENTER
#define KEYBOARD_PIN_ESC					PINB1		// ��� ������ ESC
#define KEYBOARD_PIN_UP						PINB2		// ��� ������ UP
#define KEYBOARD_PIN_DOWN					PINB3		// ��� ������ DOWN



#define KEYBOARD_LINE_PORT					C			// ���� ����� ����� ����������
#define KEYBOARD_LINE_PIN					PINC4		// ��� ����� ����� ����������


#define ACCUM_CONTROL_PORT					C			// ���� ���������� �������������
#define ACCUM_DISCHARGE_PIN				PINC2		// ��� ���������� �������� ���
#define ACCUM_CHARGE_PIN					PINC3		// ��� ���������� ������� ���

#define POWER_CONTROL_PORT					B			// ���� ���������� ���� ������� ����� ����� � ���������� ��������
#define POWER_SELF_PIN						PINC4		// ��� ���������� ����, ������������ �����
#define POWER_EXTERNAL_PIN					PINC5		// ��� ���������� ����, �������� ������� �� ��������

#define LCD_HIGHLIGHT_PORT					D			// ���� ���������� ���������� ������
#define LCD_HIGHLIGHT_PIN					PINC1		// ��� ���������� ���������� ������



