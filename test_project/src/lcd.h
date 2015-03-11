/*
 *
 * ������ ������ LCD �� ����������� HD44780
 *
 * ������: 1.0
 *
 */

#ifndef _LCD_H_
#define _LCD_H_

#include "config.h"
#include "stddef.h"

#include <stdint.h>

// ������������ ������� ��
#define LCD_DATA_PORT_NAME    B			// ���� ���� ������
#define LCD_DATA_D4_PIN			0			// ���� ����� ����� ��� ����� ������ (������ ���� ������!!!)
#define LCD_DATA_D5_PIN			1
#define LCD_DATA_D6_PIN			2
#define LCD_DATA_D7_PIN			3
#define LCD_CONTROL_PORT_NAME	D			// ���� ����� ����������
#define LCD_RS_PIN				2			// ���� �����
#define LCD_RW_PIN				3
#define LCD_E_PIN					4


#define LCD_DATA_PINS   ( ( 1 << PIN(LCD_DATA_D4_PIN) ) | ( 1 << PIN(LCD_DATA_D5_PIN) ) | ( 1 << PIN(LCD_DATA_D6_PIN) ) | ( 1 << PIN(LCD_DATA_D7_PIN) ) )
#define LCD_CONTROL_PINS	( ( 1 << PIN(LCD_RS_PIN) ) | ( 1 << PIN(LCD_RW_PIN) ) | ( 1 << PIN(LCD_E_PIN) ) )

/**
 * ������� ����������� LCD
 */
// �������� ������� � ���������� ������ � ������� ������� (����� 0)
#define HD44780_CLR 		0x01  

// ���������� ������ � ������� ������� (����� 0). ���������� ������� ������������ ������ DDRAM � ��������� �������.
// ���������� DDRAM ��� ���� �� ��������.
#define HD44780_HOME 	0x02

// ���������� ����������� ������ ������� ������ (inc=1) ��� ����� (inc=0) ��� ������/������ ���������� ���� � DDRAM. 
// ��������� (shift=1) ����� ������� ������ �� ������� �������.
#define HD44780_ENTMODE(inc, shift) 	(0x04 | ((inc)? 0x02: 0) | ((shift)? 1: 0))

// �������� (disp=1)/���������(disp=0) �������. ������ (cursor=1)/��������(cursor=0) ������. 
// ����������� ������� ������� �������� (blink=1).
#define HD44780_DISPCTL(disp, cursor, blink) 	(0x08 | ((disp)? 0x04: 0) | ((cursor)? 0x02: 0) | ((blink)? 1: 0))

// ����������� ������ (shift=0) ��� �������� ������� (shift=1) ������ (right=1) ��� �����(right=0).
#define HD44780_SHIFT(shift, right) 	(0x10 | ((shift)? 0x08: 0) | ((right)? 0x04: 0))

//	���������� ����������� ���� ������ 4 ���� (if8bit=0) ��� 8 ��� (if8bit=1), 
// ���������� ����� ������� - ���� (twoline=0) ��� ��� (twoline=1), 
// ����� - 5�8 ����� (font5x10=0) ��� 5�10 ����� (font5x10=1).
#define HD44780_FNSET(if8bit, twoline, font5x10) (0x20 | ((if8bit)? 0x10: 0) | ((twoline)? 0x08: 0) | ((font5x10)? 0x04: 0))

// ��������� ������ CGRAM. ����� ���� ������� ������ ����� ������������/����������� �/�� CGRAM.
#define HD44780_CGADDR(addr) 	(0x40 | ((addr) & 0x3f))

// ��������� ������ DDRAM. ����� ���� ������� ������ ����� ������������/����������� �/�� DDRAM.
#define HD44780_DDADDR(addr) 		(0x80 | ((addr) & 0x7f))




void hd44780_command(uint8_t cmd);


/**
 * �������������� �������
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








