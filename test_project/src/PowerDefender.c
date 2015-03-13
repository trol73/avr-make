#include "config.h"

//#define __need_size_t
//typedef long unsigned int size_t;

#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/pgmspace.h>
#include <avr/sleep.h>
#include <avr/eeprom.h> 
#include <avr/wdt.h> 

#include <util/delay.h>

#include "stddef.h"

#include "debug.h"
#include "lcd.h"
#include "ds18b20.h"

#include "var.h"




void init_time_correction() {
	// ����� ���� ������� ���� ���������������� ������ .. ����� ����������� �������
	if ( settings_time_correction_hs != 0 ) {
	// ��� ������ ������-�� �������� ����������� [!]
//		time_correct_inc_interval = 24*60*60*100;
//		time_correct_inc_interval /= settings_time_correction_hs;
	// � ��� ��� ��������
		time_correct_inc_interval = 8640000/settings_time_correction_hs;
	} else {
		time_correct_inc_interval = 0xffffffff;
	}
	time_hsec_counter = 0;
}






#include "statistic.h"
#include "power.h"
#include "accum.h"
#include "ui.h"
#include "settings.h"






inline void startADC(uint8_t pin);
// ������ ��������� ���������� ����





// ���������� ��������� �������, ���������� 100 ��� � �������
ISR(TIMER1_COMPA_vect) {
	OCR1A += timer_delta_count;

	time_hsec_counter++;
//	if ( time_hsec == 50 )
//		MSG_DEC("i=", time_correct_inc_interval);
	if ( time_hsec_counter >= time_correct_inc_interval ) {
		time_hsec_counter = 0;
		if ( settings_time_correction_plus )
			time_hsec += 2;
	} else
		time_hsec++;

	// ������������ ���������� ����������
	if ( time_hsec % 7 == 0 ) {
		keyboard_check_flag = true;
	}

	if ( time_hsec >= 100 ) {
		time_hsec -= 100;
		time_sec++;
		if ( time_sec == 60 ) {
			time_sec = 0;
			time_min++;
			if ( time_min == 60 ) {
				time_min = 0;
				time_hour++;
				if ( time_hour == 24 ) {
					time_hour = 0;
					time_hsec_counter = 0;
					time_day++; 
					save_eeprom();		// ��� � ����� ��������� ���������
				}
			}			
		}

		powerOnTimerTick();
		accumOnTimerTick();
//		time = time_hour*60 + time_min;

		// ������������ ������� �������� ����������		
		dbs_state = DBS_REQUEST;	// ���������� ��������� ���� ������� ��� �����������, �����, ������ ��������� ���������� �����
		if ( power_period_cnt != 0 ) {
			power_frequency = power_period_sum/power_period_cnt;		// ������� ������������ ���������
			power_period_sum = 0;
			power_period_cnt = 0;
			power_frequency = 100*F_CPU/8/power_frequency/2;
		} else {
			power_period_sum = 0;
			power_period_cnt = 0;
			power_frequency = 9999;
		}



		// ��������� ����������� � ��������� ��������� �����
		temperature = DS18B20_read_meas_single();
		DS18B20_start_single_meas_parasite();

		if ( reset_statistic_flag && time_sec == 2 ) {
			reset_statistic();
			reset_statistic_flag = false;
		} else
			update_statistic();

		// ������ ���� ��� ���� ������������ �����
		lcd_update_flag = true;
		// ���� �������� ��������� ���������, ���������� �������
#if ENABLE_LCD_HIGHLIGHT
		if ( lcd_highlight_time < ENABLE_LCD_HIGHLIGHT ) {
			lcd_highlight_time++;
			if ( lcd_highlight_time == ENABLE_LCD_HIGHLIGHT ) {
				lcdEnableHighlight(false);
			}
		}
#endif

	}
}


// ���������� ����������� �����������
ISR(ANA_COMP_vect) {
	uint16_t timer_counter;	// �������� �������� �������

	timer_counter = TCNT1L;
	timer_counter += TCNT1H << 8;	

	if ( dbs_state == DBS_READY ) {
		power_period_sum += timer_counter - power_prev_counter;
		power_period_cnt++;
		voltage_meassure_comparator_counter++;
	} else if ( dbs_state != DBS_REQUEST ) {
		dbs_state = DBS_READY; 
	}	
	
	power_prev_counter = timer_counter;
}


#define VOLTAGE_AVERAGE		10
uint16_t last_voltages[VOLTAGE_AVERAGE];	// ��� �������� ��������� ���������� ���������� ��� ����, ����� �������� �� ����� �������


// ���������� ������������ �� ��������� 10 ���������� �������� ����������
inline uint16_t getAverageVoltage(uint16_t v) {
	uint16_t sum = v;
	for ( uint8_t i = VOLTAGE_AVERAGE-1; i >= 1; i-- ) {
		last_voltages[i] = last_voltages[i-1];
		sum += last_voltages[i];
	}
	last_voltages[0] = v;
	return sum/VOLTAGE_AVERAGE;
}


// ���������� ���
ISR(ADC_vect) {
	uint8_t admux = ADMUX & 1;//0b00000111;
	uint16_t v;

	v = ADCL;
	v += ADCH << 8;

	if ( admux == ADC_POWER_PIN ) {
		power_voltage_sum += v;
		power_voltage_cnt++;
		if ( power_voltage_cnt >= POWER_VOLTAGE_AVERAGE_COUNT || voltage_meassure_comparator_counter >= POWER_VOLTAGE_AVERAGE_HP_COUNT ) {
			v = power_voltage_sum*ADC_POWER_MUL/power_voltage_cnt/ADC_POWER_DIV;
			voltage_meassure_comparator_counter = 0;


			power_voltage = v;
			// ��������� ���������� � ���������, ���� ����
			powerUpdateState();

			// ���� ����� ���������� � ����, ��������� �������� ���������� ��� ������ �� �����
			// ����� ����� ������� ��������, ������� ��� �� ���������
			if ( power_rele_enabled ) {
				// ��� ����������� �� ������ ������ ����������
				power_voltage = getAverageVoltage(power_voltage);
			} else {
				power_voltage = power_bad_voltage;
			}

			power_voltage_cnt = 0;
			power_voltage_sum = 0;
			if ( voltage_meass_mode != VM_POWER ) {
				// ���� ���� �������� ���������� ��� ���������, �� �������� ��, ����� - ��������
				accumEnableDischarge(voltage_meass_mode == VM_ACCUM_LOAD);
				startADC(ADC_ACCUM_PIN);
			} else
				startADC(ADC_POWER_PIN);
		} else
		  startADC(ADC_POWER_PIN);
	} else if ( admux == ADC_ACCUM_PIN ) {
		accum_voltage_sum += v;
		accum_voltage_cnt++;
		if ( accum_voltage_cnt == ACCUM_VOLTAGE_AVERAGE_COUNT) {
			v = accum_voltage_sum/accum_voltage_cnt;
			v *= ADC_ACCUM_MUL;
			v /= ADC_ACCUM_DIV;
			if ( voltage_meass_mode == VM_ACCUM ) {
				accum_voltage = v;
			} else if ( voltage_meass_mode == VM_ACCUM_LOAD ) {
				accum_voltage_load = v;
			}
			// ���� ��� ���� ��������� ��� ��������, � ��� ���� ��� � ������ ��������, �������� ��������
			// ���� ��� ���� ��������� ��� ���������, � ��� ���� ��� �� � ������ ��������, ��������� ��������
			accumEnableDischarge(accum_state == ACB_STATE_DISCHARGE);
			accum_voltage_sum = 0;
			accum_voltage_cnt = 0;
			voltage_meass_mode = VM_POWER;
			startADC(ADC_POWER_PIN);
		} else
			startADC(ADC_ACCUM_PIN);
	}
}




/**
 * ��������� ��������� �������� ����������
 */
inline void startADC(uint8_t pin) {
	ADMUX = pin|_BV(REFS0)|_BV(REFS1);
	ADCSRA = _BV(ADEN)|_BV(ADSC)|_BV(ADIE)|_BV(ADPS2)|_BV(ADPS1)|_BV(ADPS0);
}






void main(void) {	
	wdt_enable(WDTO_250MS);
	_delay_ms(50);	
	wdt_reset();
	uart_init();
	
	keyboardInit();

	lcd_init();

	init_settings();

	time_hsec = 0;
 	time_sec = 0;
	time_min = 0;
	time_hour = 0;
	time_day = 0;

	initAccum();
	initPower();

	power_prev_counter = 0;
	power_period_sum = 0;
	power_period_cnt = 0;

	power_voltage_cnt = 0;
	power_voltage_sum = 0;
	voltage_meassure_comparator_counter = 0;

	lcd_disable_cursor();	

	DS18B20_start_single_meas_parasite();

	// �������������� �����������
	ACSR = 0b00001000;

	timer_delta_count = F_CPU/8/100;	// ���������� ����� ��������� ����� 100 ��� � �������

	// ������������� T/C1
	TCCR1A = 0b00000000;	// ��� ��������, ���� ���������
	TCCR1B = 0b00000010; // �� ���� ������� �������� TCK/8
	OCR1A = timer_delta_count;
	TIMSK = 0x10;			// �������� ���������� �� ���������� ��� OCR1A
	TCNT1H = 0;				// ����� �������� �������, ������ � ���� ������������������
	TCNT1L = 0;

	startADC(ADC_POWER_PIN);

	sei();
	reset_statistic_flag = true;

	ui_init();

	for (;;) {		
		if ( keyboard_check_flag ) {
			dbs_state = DBS_REQUEST;
			wdt_reset();
			keyboardCheck();			
			dbs_state = DBS_DONE;
			keyboard_check_flag = 0;
			keyHandle();
		}
		if ( lcd_update_flag ) {
			dbs_state = DBS_REQUEST;
			drawLCD();			
			dbs_state = DBS_DONE;
			lcd_update_flag = 0;
		}
	}




}
