/*
 *
 * Дравер экрана LCD на контроллере HD44780
 *
 * Версия: 1.0
 *
 */

#ifndef _LCD_H_
#define _LCD_H_

#include "config.h"
#include "stddef.h"

#include <stdint.h>

// конфигурация выводов МК
#define LCD_DATA_PORT_NAME    B			// порт шины данных
#define LCD_DATA_D4_PIN			0			// пины этого порта для линии данных (должны идти подряд!!!)
#define LCD_DATA_D5_PIN			1
#define LCD_DATA_D6_PIN			2
#define LCD_DATA_D7_PIN			3
#define LCD_CONTROL_PORT_NAME	D			// порт линий управления
#define LCD_RS_PIN				2			// пины порта
#define LCD_RW_PIN				3
#define LCD_E_PIN					4


#define LCD_DATA_PINS   ( ( 1 << PIN(LCD_DATA_D4_PIN) ) | ( 1 << PIN(LCD_DATA_D5_PIN) ) | ( 1 << PIN(LCD_DATA_D6_PIN) ) | ( 1 << PIN(LCD_DATA_D7_PIN) ) )
#define LCD_CONTROL_PINS	( ( 1 << PIN(LCD_RS_PIN) ) | ( 1 << PIN(LCD_RW_PIN) ) | ( 1 << PIN(LCD_E_PIN) ) )

/**
 * команды контроллера LCD
 */
// Очистить дисплей и установить курсор в нулевую позицию (адрес 0)
#define HD44780_CLR 		0x01  

// Установить курсор в нулевую позицию (адрес 0). Установить дисплей относительно буфера DDRAM в начальную позицию.
// Содержимое DDRAM при этом не меняется.
#define HD44780_HOME 	0x02

// Установить направление сдвига курсора вправо (inc=1) или влево (inc=0) при записи/чтении очередного кода в DDRAM. 
// Разрешить (shift=1) сдвиг дисплея вместе со сдвигом курсора.
#define HD44780_ENTMODE(inc, shift) 	(0x04 | ((inc)? 0x02: 0) | ((shift)? 1: 0))

// Включить (disp=1)/выключить(disp=0) дисплей. Зажечь (cursor=1)/погасить(cursor=0) курсор. 
// Изображение курсора сделать мигающим (blink=1).
#define HD44780_DISPCTL(disp, cursor, blink) 	(0x08 | ((disp)? 0x04: 0) | ((cursor)? 0x02: 0) | ((blink)? 1: 0))

// Переместить курсор (shift=0) или сдвинуть дисплей (shift=1) вправо (right=1) или влево(right=0).
#define HD44780_SHIFT(shift, right) 	(0x10 | ((shift)? 0x08: 0) | ((right)? 0x04: 0))

//	Установить разрядность шины данных 4 бита (if8bit=0) или 8 бит (if8bit=1), 
// количество строк дисплея - одна (twoline=0) или две (twoline=1), 
// шрифт - 5х8 точек (font5x10=0) или 5х10 точек (font5x10=1).
#define HD44780_FNSET(if8bit, twoline, font5x10) (0x20 | ((if8bit)? 0x10: 0) | ((twoline)? 0x08: 0) | ((font5x10)? 0x04: 0))

// Установка адреса CGRAM. После этой команды данные будут записываться/считываться в/из CGRAM.
#define HD44780_CGADDR(addr) 	(0x40 | ((addr) & 0x3f))

// Установка адреса DDRAM. После этой команды данные будут записываться/считываться в/из DDRAM.
#define HD44780_DDADDR(addr) 		(0x80 | ((addr) & 0x7f))




void hd44780_command(uint8_t cmd);


/**
 * Иннициализация дисплея
 */
void lcd_init();

//void lcd_goto(uint8_t x, uint8_t y);
inline void lcd_goto(uint8_t line, uint8_t pos) {
	hd44780_command(HD44780_DDADDR(line == 0 ? pos : 80-16+pos));
}


void lcd_put_char(uint8_t c);

inline void lcd_clear() {
	hd44780_command(HD44780_CLR);	
}


inline void lcd_disable_cursor() {
	hd44780_command(HD44780_DISPCTL(1, 0, 0));
}


inline void lcd_enable_cursor(uint8_t blink) {
	hd44780_command(HD44780_DISPCTL(1, 1, blink));
}





#endif // _LCD_H_








