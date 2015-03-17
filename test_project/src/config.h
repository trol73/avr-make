#define __AVR_ATmega8__						1

//#define F_CPU									11059200L		// частота кварца в Гц

#define DEBUG									0

//#define LOAD_SETTINGS_FROM_EEPROM		1			// если установлен, настройки будут прочитаны из памяти, иначе, сохранены в память
#define ENABLE_LCD_HIGHLIGHT				10			// если 0, подсветка LCD отключена, иначе - длительность подсветки в секундах после нажатия клавиши

#define POWER_MIN_CRASH_COUNT				5			// сколько измерений напряжения сети должны показать аварию перед отключением нагрузки
#define POWER_VOLTAGE_AVERAGE_COUNT		1000		// по скольким измерениям усреднять напряжение в сети
#define POWER_VOLTAGE_AVERAGE_HP_COUNT	14			// по скольки полупериодам измерять напряжение
#define ACCUM_VOLTAGE_AVERAGE_COUNT		50			// по скольким измерениям усреднять напряжение на АКБ
#define ACCUMULATOR_DISCHARGE_VOLT		400		// до какого напряжения разряжать АКБ перед зарядкой
#define ACCUMULATOR_CHARGE_HOURS			15			// длительность зарядки АКБ в часах

#define ACCUMULATOR_MIN_VOLTAGE			450		// минимальное напряжение на неподключенной АКБ, при котором включится зарядка
#define ACCUMULATOR_MIN_LOAD_VOLTAGE	420		// минимальное напряжение на нагруженной АКБ, при котором включится зарядка

	
#define PROTECT_U_MIN						2090		// минимальное допустимое напряжение
#define PROTECT_U_MAX						2330		// максимальное допустимое напряжение
#define PROTECT_REPEAT_TIME				5*60		// время между включениями схемы для контроля напряжения в случае аварии превышения
#define PROTECT_MEASS_TIME					30			// время, в течении которого будет контролироваться сетевое напряжение перед тем, как включить нагрузку в случае аварии


// множитель и делитель для пересчета значения АЦП в напряжение на АКБ и напряжение в сети
#define ADC_POWER_MUL						1232
#define ADC_POWER_DIV						348
#define ADC_ACCUM_MUL						60
#define ADC_ACCUM_DIV						61



#define ADC_POWER_PIN						0			// пин ADC с которого будет измеряться сетевое напряжение
#define ADC_ACCUM_PIN						1		 	// пин ADC с которого будет измеряться напряжение на аккумуляторе

#define KEYBOARD_DATA_PORT					B			// порт линий данных клавиатуры (и экрана по совместительству)
#define KEYBOARD_PIN_ENTER					PINB0		// пин кнопки ENTER
#define KEYBOARD_PIN_ESC					PINB1		// пин кнопки ESC
#define KEYBOARD_PIN_UP						PINB2		// пин кнопки UP
#define KEYBOARD_PIN_DOWN					PINB3		// пин кнопки DOWN



#define KEYBOARD_LINE_PORT					C			// порт общей линии клавиатуры
#define KEYBOARD_LINE_PIN					PINC4		// пин общей линии клавиатуры


#define ACCUM_CONTROL_PORT					C			// порт управления аккумулятором
#define ACCUM_DISCHARGE_PIN				PINC2		// пин управления разрядом АКБ
#define ACCUM_CHARGE_PIN					PINC3		// пин управления зарядом АКБ

#define POWER_CONTROL_PORT					B			// порт управления реле питания самой схемы и защищаемой нагрузки
#define POWER_SELF_PIN						PINC4		// пин управления реле, подключающей схему
#define POWER_EXTERNAL_PIN					PINC5		// пин управления реле, подающей питание на нагрузку

#define LCD_HIGHLIGHT_PORT					D			// порт управления подсветкой экрана
#define LCD_HIGHLIGHT_PIN					PINC1		// пин управления подсветкой экрана



