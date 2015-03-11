/*
 *
 * ������ ������ LCD �� ����������� HD44780
 *
 * ������: 1.0
 *
 */

#include "lcd.h"


#include <avr/io.h>
#include <util/delay.h>

//#include <stdbool.h>


#define HD44780_BUSYFLAG 0x80


void hd44780_set_control_pins(uint8_t rs, uint8_t rw, uint8_t e);
void hd44780_set_data_pins(uint8_t b);
void hd44780_out_command(uint8_t cmd);
void hd44780_out_data(uint8_t d);


/* 
 * ���������� �������� �� ����� ������ (������� 4 ������� ���� ���������)
 */
inline void hd44780_set_data_pins(uint8_t b) {
	// ������������� ����� �� �����
	DDR(LCD_DATA_PORT_NAME) |= LCD_DATA_PINS;
	PORT(LCD_DATA_PORT_NAME) = (PORT(LCD_DATA_PORT_NAME) & ~LCD_DATA_PINS) | ((b << LCD_DATA_D4_PIN) & LCD_DATA_PINS);
}



/*
 * ������������� ��������� ����� RS, RW � E ���� ����������
 */
inline void hd44780_set_control_pins(uint8_t rs, uint8_t rw, uint8_t e) {
	PORT(LCD_CONTROL_PORT_NAME) = (PORT(LCD_CONTROL_PORT_NAME) & ~LCD_CONTROL_PINS) | ( rs << PIN(LCD_RS_PIN) ) | ( rw << PIN(LCD_RW_PIN) ) | ( e << PIN(LCD_E_PIN) );
}



/*
 * �������� ������� d ����������� LCD.
 * rs - ������ RS (register select), 0 - ����� �������� ����������, 1 - ����� �������� ������.
 */
void hd44780_out_nibble(uint8_t d, uint8_t rs) {
	hd44780_set_control_pins(rs, 0, 1);
	hd44780_set_data_pins(d);
	_delay_us(0.1);
	hd44780_set_control_pins(rs, 0, 0);		// [!!!] RS ��� ����������	
}


/*
 * �������� ���� b ����������� LCD.
 * rs - ������ RS (register select), 0 - ����� �������� ����������, 1 - ����� �������� ������.
 */
void hd44780_out_byte(uint8_t b, uint8_t rs) {
	hd44780_out_nibble((b >> 4) & 0x0f, rs);
	hd44780_out_nibble(b & 0x0f, rs);
	hd44780_set_data_pins(0x0f);
}


inline void hd44780_out_command(uint8_t cmd) {
	hd44780_out_byte(cmd, 0);
}


inline void hd44780_out_data(uint8_t d) {
	hd44780_out_byte(d, 1);
}





/*
 * ������ ���� �� ����������� LCD.
 */
static uint8_t hd44780_in_byte(uint8_t rs) {
	uint8_t x;

	DDR(LCD_DATA_PORT_NAME) &= ~LCD_DATA_PINS;
	

	hd44780_set_control_pins(rs, 1, 1);	
	_delay_us(0.1);
	x = ( (PIN(LCD_DATA_PORT_NAME) >> LCD_DATA_D4_PIN) & 0x0f ) << 4;
	hd44780_set_control_pins(rs, 1, 0);	// [!!!] RS ��� ����������

	hd44780_set_control_pins(rs, 1, 1);
	_delay_us(0.1);
	x |= ( (PIN(LCD_DATA_PORT_NAME) >> LCD_DATA_D4_PIN) & 0x0f );

	hd44780_set_control_pins(rs, 1, 0);	// [!!!] RS ��� ����������
	return x;
}



/*
 * ������� ������� ����� ��������� (BF).
 */
void hd44780_wait_ready() {
	 while ( hd44780_in_byte(0) & HD44780_BUSYFLAG) ;
}


void hd44780_command(uint8_t cmd) {
	hd44780_out_command(cmd);
	hd44780_wait_ready();
}

/* 
 * ������� ������ � ������� ������� �������
 */ 
inline void lcd_put_char(uint8_t c) {
	hd44780_out_data(c);
	hd44780_wait_ready();
}



/**
 * �������������� �������
 */
inline void lcd_init() {
	DDR(LCD_CONTROL_PORT_NAME) |= LCD_CONTROL_PINS;

	// ��������� �������������� �����������
	_delay_ms(15);
	hd44780_out_nibble(HD44780_FNSET(1, 0, 0) >> 4, 0);
	_delay_ms(4.1);
	hd44780_out_nibble(HD44780_FNSET(1, 0, 0) >> 4, 0);
	_delay_ms(0.1);
	hd44780_out_nibble(HD44780_FNSET(1, 0, 0) >> 4, 0);
	hd44780_out_nibble(HD44780_FNSET(1, 0, 0) >> 4, 0);

	// ��� ������� ������ ���� ������
	hd44780_command(HD44780_HOME);
	_delay_us(20);	// ��� ��������� ������������

	// �������� 4� ������ �����, 2 ������ � ����� 5�8
	hd44780_command(HD44780_FNSET(0, 1, 0));
	_delay_us(20);	// ��� ��������� ������������



	
	// �������� �����, ������ � �������� �������
//	hd44780_command(HD44780_DISPCTL(1, 1, 1));

	// �������� ��������� �� ���� ������ ��� ������ �������
	hd44780_command(HD44780_ENTMODE(1, 0));

	// ������� ������
	lcd_clear();
}
