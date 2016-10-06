;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ********************

;*************************************************************************
;* A P P L I C A T I O N   N O T E   F O R   T H E   A V R   F A M I L Y
;* 
;* Number            : AVR000
;* File Name         : A664251def.inc
;* Title             : Register/Bit Definitions for the ATA664251
;* Created           : 2014-02-06 16:09
;* Version           : 1.00
;* Support e-mail    : avr@atmel.com
;* Target MCU        : ATA664251
;* 
;* DESCRIPTION
;* When including this file in the assembly program file, all I/O register 
;* names and I/O register bit names appearing in the data book can be used.
;* In addition, the six registers forming the three data pointers X, Y and 
;* Z have been assigned names XL - ZH. Highest RAM address for Internal 
;* SRAM is also defined 
;* 
;*************************************************************************

#ifndef _A664251DEF_INC_
#define _A664251DEF_INC_


#pragma partinc 0

; ***** SPECIFY DEVICE ***************************************************
.device	ATA664251
#pragma AVRPART ADMIN PART_NAME ATA664251
.equ	SIGNATURE_000	= 0x1E
.equ	SIGNATURE_001	= 0x92
.equ	SIGNATURE_002	= 0x07

#pragma AVRPART CORE CORE_VERSION V3

; ***** I/O REGISTER DEFINITIONS *****************************************
; NOTE:
; Definitions marked "MEMORY MAPPED" are extended I/O ports
; and cannot be used with IN/OUT instructions
.equ	SREG	= 0x3F ; 
.equ	SPH	= 0x3E ; 
.equ	SPL	= 0x3D ; 
.equ	OCR0B	= 0x3C ; 
.equ	GIMSK	= 0x3B ; 
.equ	GIFR	= 0x3A ; 
.equ	TIMSK0	= 0x39 ; 
.equ	TIFR0	= 0x38 ; 
.equ	SPMCSR	= 0x37 ; 
.equ	OCR0A	= 0x36 ; 
.equ	MCUCR	= 0x35 ; 
.equ	MCUSR	= 0x34 ; 
.equ	TCCR0B	= 0x33 ; 
.equ	TCNT0	= 0x32 ; 
.equ	OSCCAL	= 0x31 ; 
.equ	TCCR0A	= 0x30 ; 
.equ	TCCR1A	= 0x2F ; 
.equ	TCCR1B	= 0x2E ; 
.equ	TCNT1H	= 0x2D ; 
.equ	TCNT1L	= 0x2C ; 
.equ	OCR1AH	= 0x2B ; 
.equ	OCR1AL	= 0x2A ; 
.equ	OCR1BH	= 0x29 ; 
.equ	OCR1BL	= 0x28 ; 
.equ	CLKPR	= 0x26 ; 
.equ	ICR1H	= 0x25 ; 
.equ	ICR1L	= 0x24 ; 
.equ	GTCCR	= 0x23 ; 
.equ	TCCR1C	= 0x22 ; 
.equ	WDTCSR	= 0x21 ; 
.equ	PCMSK1	= 0x20 ; 
.equ	EEARH	= 0x1F ; 
.equ	EEARL	= 0x1E ; 
.equ	EEDR	= 0x1D ; 
.equ	EECR	= 0x1C ; 
.equ	PORTA	= 0x1B ; 
.equ	DDRA	= 0x1A ; 
.equ	PINA	= 0x19 ; 
.equ	PORTB	= 0x18 ; 
.equ	DDRB	= 0x17 ; 
.equ	PINB	= 0x16 ; 
.equ	GPIOR2	= 0x15 ; 
.equ	GPIOR1	= 0x14 ; 
.equ	GPIOR0	= 0x13 ; 
.equ	PCMSK0	= 0x12 ; 
.equ	USIBR	= 0x10 ; 
.equ	USIDR	= 0x0F ; 
.equ	USISR	= 0x0E ; 
.equ	USICR	= 0x0D ; 
.equ	TIMSK1	= 0x0C ; 
.equ	TIFR1	= 0x0B ; 
.equ	ACSR	= 0x08 ; 
.equ	ADMUX	= 0x07 ; 
.equ	ADCSRA	= 0x06 ; 
.equ	ADCH	= 0x05 ; 
.equ	ADCL	= 0x04 ; 
.equ	ADCSRB	= 0x03 ; 
.equ	DIDR0	= 0x01 ; 
.equ	PRR	= 0x00 ; 


; ***** BIT DEFINITIONS **************************************************

; ***** PORTA *****************
; PORTA - Port A Data Register
.equ	PORTA0	= 0 ; Port A Data Register Bit 0
.equ	PORTA1	= 1 ; Port A Data Register Bit 1
.equ	PORTA2	= 2 ; Port A Data Register Bit 2
.equ	PORTA3	= 3 ; Port A Data Register Bit 3
.equ	PORTA4	= 4 ; Port A Data Register Bit 4
.equ	PORTA5	= 5 ; Port A Data Register Bit 5
.equ	PORTA6	= 6 ; Port A Data Register Bit 6
.equ	PORTA7	= 7 ; Port A Data Register Bit 7

; DDRA - Port A Data Direction Register
.equ	DDRA0	= 0 ; Port A Data Direction Register Bit 0
.equ	DDRA1	= 1 ; Port A Data Direction Register Bit 1
.equ	DDRA2	= 2 ; Port A Data Direction Register Bit 2
.equ	DDRA3	= 3 ; Port A Data Direction Register Bit 3
.equ	DDRA4	= 4 ; Port A Data Direction Register Bit 4
.equ	DDRA5	= 5 ; Port A Data Direction Register Bit 5
.equ	DDRA6	= 6 ; Port A Data Direction Register Bit 6
.equ	DDRA7	= 7 ; Port A Data Direction Register Bit 7

; PINA - Port A Input Pins
.equ	PINA0	= 0 ; Port A Input Pins Bit 0
.equ	PINA1	= 1 ; Port A Input Pins Bit 1
.equ	PINA2	= 2 ; Port A Input Pins Bit 2
.equ	PINA3	= 3 ; Port A Input Pins Bit 3
.equ	PINA4	= 4 ; Port A Input Pins Bit 4
.equ	PINA5	= 5 ; Port A Input Pins Bit 5
.equ	PINA6	= 6 ; Port A Input Pins Bit 6
.equ	PINA7	= 7 ; Port A Input Pins Bit 7


; ***** PORTB *****************
; PORTB - Data Register, Port B
.equ	PORTB0	= 0 ; Data Register, Port B Bit 0
.equ	PORTB1	= 1 ; Data Register, Port B Bit 1
.equ	PORTB2	= 2 ; Data Register, Port B Bit 2
.equ	PORTB3	= 3 ; Data Register, Port B Bit 3

; DDRB - Data Direction Register, Port B
.equ	DDRB0	= 0 ; Data Direction Register, Port B Bit 0
.equ	DDRB1	= 1 ; Data Direction Register, Port B Bit 1
.equ	DDRB2	= 2 ; Data Direction Register, Port B Bit 2
.equ	DDRB3	= 3 ; Data Direction Register, Port B Bit 3

; PINB - Input Pins, Port B
.equ	PINB0	= 0 ; Input Pins, Port B Bit 0
.equ	PINB1	= 1 ; Input Pins, Port B Bit 1
.equ	PINB2	= 2 ; Input Pins, Port B Bit 2
.equ	PINB3	= 3 ; Input Pins, Port B Bit 3


; ***** ANALOG_COMPARATOR *****************
; ADCSRB - ADC Control and Status Register B
.equ	ACME	= 6 ; Analog Comparator Multiplexer Enable

; ACSR - Analog Comparator Control And Status Register
.equ	ACIS0	= 0 ; Analog Comparator Interrupt Mode Select bits
.equ	ACIS1	= 1 ; Analog Comparator Interrupt Mode Select bits
.equ	ACIC	= 2 ; Analog Comparator Input Capture Enable
.equ	ACIE	= 3 ; Analog Comparator Interrupt Enable
.equ	ACI	= 4 ; Analog Comparator Interrupt Flag
.equ	ACO	= 5 ; Analog Compare Output
.equ	ACBG	= 6 ; Analog Comparator Bandgap Select
.equ	ACD	= 7 ; Analog Comparator Disable

; DIDR0 - 
.equ	ADC0D	= 0 ; ADC 0 Digital input buffer disable
.equ	ADC1D	= 1 ; ADC 1 Digital input buffer disable


; ***** AD_CONVERTER *****************
; ADMUX - ADC Multiplexer Selection Register
.equ	ADMUX0	= 0 ; ADC Multiplexer Selection Register Bit 0
.equ	ADMUX1	= 1 ; ADC Multiplexer Selection Register Bit 1
.equ	ADMUX2	= 2 ; ADC Multiplexer Selection Register Bit 2
.equ	ADMUX3	= 3 ; ADC Multiplexer Selection Register Bit 3
.equ	ADMUX4	= 4 ; ADC Multiplexer Selection Register Bit 4
.equ	ADMUX5	= 5 ; ADC Multiplexer Selection Register Bit 5
.equ	ADMUX6	= 6 ; ADC Multiplexer Selection Register Bit 6
.equ	ADMUX7	= 7 ; ADC Multiplexer Selection Register Bit 7

; ADCSRA - ADC Control and Status Register A
.equ	ADPS0	= 0 ; ADC  Prescaler Select Bits
.equ	ADPS1	= 1 ; ADC  Prescaler Select Bits
.equ	ADPS2	= 2 ; ADC  Prescaler Select Bits
.equ	ADIE	= 3 ; ADC Interrupt Enable
.equ	ADIF	= 4 ; ADC Interrupt Flag
.equ	ADATE	= 5 ; ADC Auto Trigger Enable
.equ	ADSC	= 6 ; ADC Start Conversion
.equ	ADEN	= 7 ; ADC Enable

; ADC - ADC Data Register  Bytes
.equ	ADCH0	= 0 ; ADC Data Register  Bytes High Bit 8
.equ	ADCH1	= 1 ; ADC Data Register  Bytes High Bit 9
.equ	ADCH2	= 2 ; ADC Data Register  Bytes High Bit 10
.equ	ADCH3	= 3 ; ADC Data Register  Bytes High Bit 11
.equ	ADCH4	= 4 ; ADC Data Register  Bytes High Bit 12
.equ	ADCH5	= 5 ; ADC Data Register  Bytes High Bit 13
.equ	ADCH6	= 6 ; ADC Data Register  Bytes High Bit 14
.equ	ADCH7	= 7 ; ADC Data Register  Bytes High Bit 15

.equ	ADCL0	= 0 ; ADC Data Register  Bytes Low Bit 0
.equ	ADCL1	= 1 ; ADC Data Register  Bytes Low Bit 1
.equ	ADCL2	= 2 ; ADC Data Register  Bytes Low Bit 2
.equ	ADCL3	= 3 ; ADC Data Register  Bytes Low Bit 3
.equ	ADCL4	= 4 ; ADC Data Register  Bytes Low Bit 4
.equ	ADCL5	= 5 ; ADC Data Register  Bytes Low Bit 5
.equ	ADCL6	= 6 ; ADC Data Register  Bytes Low Bit 6
.equ	ADCL7	= 7 ; ADC Data Register  Bytes Low Bit 7

; ADCSRB - ADC Control and Status Register B
.equ	ADTS0	= 0 ; ADC Auto Trigger Source bits
.equ	ADTS1	= 1 ; ADC Auto Trigger Source bits
.equ	ADTS2	= 2 ; ADC Auto Trigger Source bits
.equ	ADLAR	= 4 ; ADC Left Adjust Result
.equ	BIN	= 7 ; Bipolar Input Mode

; DIDR0 - Digital Input Disable Register 0
.equ	DIDR00	= 0 ; Digital Input Disable Register 0 Bit 0
.equ	DIDR01	= 1 ; Digital Input Disable Register 0 Bit 1
.equ	DIDR02	= 2 ; Digital Input Disable Register 0 Bit 2
.equ	DIDR03	= 3 ; Digital Input Disable Register 0 Bit 3
.equ	DIDR04	= 4 ; Digital Input Disable Register 0 Bit 4
.equ	DIDR05	= 5 ; Digital Input Disable Register 0 Bit 5
.equ	DIDR06	= 6 ; Digital Input Disable Register 0 Bit 6
.equ	DIDR07	= 7 ; Digital Input Disable Register 0 Bit 7


; ***** USI *****************
; USIBR - USI Buffer Register
.equ	USIBR0	= 0 ; USI Buffer Register Bit 0
.equ	USIBR1	= 1 ; USI Buffer Register Bit 1
.equ	USIBR2	= 2 ; USI Buffer Register Bit 2
.equ	USIBR3	= 3 ; USI Buffer Register Bit 3
.equ	USIBR4	= 4 ; USI Buffer Register Bit 4
.equ	USIBR5	= 5 ; USI Buffer Register Bit 5
.equ	USIBR6	= 6 ; USI Buffer Register Bit 6
.equ	USIBR7	= 7 ; USI Buffer Register Bit 7

; USIDR - USI Data Register
.equ	USIDR0	= 0 ; USI Data Register Bit 0
.equ	USIDR1	= 1 ; USI Data Register Bit 1
.equ	USIDR2	= 2 ; USI Data Register Bit 2
.equ	USIDR3	= 3 ; USI Data Register Bit 3
.equ	USIDR4	= 4 ; USI Data Register Bit 4
.equ	USIDR5	= 5 ; USI Data Register Bit 5
.equ	USIDR6	= 6 ; USI Data Register Bit 6
.equ	USIDR7	= 7 ; USI Data Register Bit 7

; USISR - USI Status Register
.equ	USICNT0	= 0 ; USI Counter Value Bits
.equ	USICNT1	= 1 ; USI Counter Value Bits
.equ	USICNT2	= 2 ; USI Counter Value Bits
.equ	USICNT3	= 3 ; USI Counter Value Bits
.equ	USIDC	= 4 ; Data Output Collision
.equ	USIPF	= 5 ; Stop Condition Flag
.equ	USIOIF	= 6 ; Counter Overflow Interrupt Flag
.equ	USISIF	= 7 ; Start Condition Interrupt Flag

; USICR - USI Control Register
.equ	USITC	= 0 ; Toggle Clock Port Pin
.equ	USICLK	= 1 ; Clock Strobe
.equ	USICS0	= 2 ; USI Clock Source Select Bits
.equ	USICS1	= 3 ; USI Clock Source Select Bits
.equ	USIWM0	= 4 ; USI Wire Mode Bits
.equ	USIWM1	= 5 ; USI Wire Mode Bits
.equ	USIOIE	= 6 ; Counter Overflow Interrupt Enable
.equ	USISIE	= 7 ; Start Condition Interrupt Enable


; ***** EXTERNAL_INTERRUPT *****************
; MCUCR - MCU Control Register
.equ	ISC00	= 0 ; Interrupt Sense Control 0 Bit 0
.equ	ISC01	= 1 ; Interrupt Sense Control 0 Bit 1

; GIMSK - General Interrupt Mask Register
.equ	PCIE0	= 4 ; Pin Change Interrupt Enables
.equ	PCIE1	= 5 ; Pin Change Interrupt Enables
.equ	INT0	= 6 ; External Interrupt Request 0 Enable

; GIFR - General Interrupt Flag register
.equ	PCIF0	= 4 ; Pin Change Interrupt Flags
.equ	PCIF1	= 5 ; Pin Change Interrupt Flags
.equ	INTF0	= 6 ; External Interrupt Flag 0

; PCMSK1 - Pin Change Enable Mask 1
.equ	PCMSK10	= 0 ; Pin Change Enable Mask 1 Bit 0
.equ	PCMSK11	= 1 ; Pin Change Enable Mask 1 Bit 1
.equ	PCMSK12	= 2 ; Pin Change Enable Mask 1 Bit 2
.equ	PCMSK13	= 3 ; Pin Change Enable Mask 1 Bit 3

; PCMSK0 - Pin Change Enable Mask 0
.equ	PCMSK00	= 0 ; Pin Change Enable Mask 0 Bit 0
.equ	PCMSK01	= 1 ; Pin Change Enable Mask 0 Bit 1
.equ	PCMSK02	= 2 ; Pin Change Enable Mask 0 Bit 2
.equ	PCMSK03	= 3 ; Pin Change Enable Mask 0 Bit 3
.equ	PCMSK04	= 4 ; Pin Change Enable Mask 0 Bit 4
.equ	PCMSK05	= 5 ; Pin Change Enable Mask 0 Bit 5
.equ	PCMSK06	= 6 ; Pin Change Enable Mask 0 Bit 6
.equ	PCMSK07	= 7 ; Pin Change Enable Mask 0 Bit 7


; ***** EEPROM *****************
; EEAR - EEPROM Address Register  Bytes
.equ	EEARH0	= 0 ; EEPROM Address Register  Bytes High Bit 8

.equ	EEARL0	= 0 ; EEPROM Address Register  Bytes Low Bit 0
.equ	EEARL1	= 1 ; EEPROM Address Register  Bytes Low Bit 1
.equ	EEARL2	= 2 ; EEPROM Address Register  Bytes Low Bit 2
.equ	EEARL3	= 3 ; EEPROM Address Register  Bytes Low Bit 3
.equ	EEARL4	= 4 ; EEPROM Address Register  Bytes Low Bit 4
.equ	EEARL5	= 5 ; EEPROM Address Register  Bytes Low Bit 5
.equ	EEARL6	= 6 ; EEPROM Address Register  Bytes Low Bit 6
.equ	EEARL7	= 7 ; EEPROM Address Register  Bytes Low Bit 7

; EEDR - EEPROM Data Register
.equ	EEDR0	= 0 ; EEPROM Data Register Bit 0
.equ	EEDR1	= 1 ; EEPROM Data Register Bit 1
.equ	EEDR2	= 2 ; EEPROM Data Register Bit 2
.equ	EEDR3	= 3 ; EEPROM Data Register Bit 3
.equ	EEDR4	= 4 ; EEPROM Data Register Bit 4
.equ	EEDR5	= 5 ; EEPROM Data Register Bit 5
.equ	EEDR6	= 6 ; EEPROM Data Register Bit 6
.equ	EEDR7	= 7 ; EEPROM Data Register Bit 7

; EECR - EEPROM Control Register
.equ	EERE	= 0 ; EEPROM Read Enable
.equ	EEPE	= 1 ; EEPROM Write Enable
.equ	EEMPE	= 2 ; EEPROM Master Write Enable
.equ	EERIE	= 3 ; EEPROM Ready Interrupt Enable
.equ	EEPM0	= 4 ; EEPROM Programming Mode Bits
.equ	EEPM1	= 5 ; EEPROM Programming Mode Bits


; ***** WATCHDOG *****************
; WDTCSR - Watchdog Timer Control Register
.equ	WDE	= 3 ; Watch Dog Enable
.equ	WDCE	= 4 ; Watchdog Change Enable
.equ	WDP0	= 0 ; Watchdog Timer Prescaler Bits
.equ	WDP1	= 1 ; Watchdog Timer Prescaler Bits
.equ	WDP2	= 2 ; Watchdog Timer Prescaler Bits
.equ	WDP3	= 5 ; Watchdog Timer Prescaler Bits
.equ	WDIE	= 6 ; Watchdog Timeout Interrupt Enable
.equ	WDIF	= 7 ; Watchdog Timeout Interrupt Flag


; ***** TIMER_COUNTER_0 *****************
; TIMSK0 - Timer/Counter Interrupt Mask Register
.equ	TOIE0	= 0 ; Timer/Counter0 Overflow Interrupt Enable
.equ	OCIE0A	= 1 ; Timer/Counter0 Output Compare Match A Interrupt Enable
.equ	OCIE0B	= 2 ; Timer/Counter0 Output Compare Match B Interrupt Enable

; TIFR0 - Timer/Counter0 Interrupt Flag Register
.equ	TOV0	= 0 ; Timer/Counter0 Overflow Flag
.equ	OCF0A	= 1 ; Timer/Counter0 Output Compare Flag A
.equ	OCF0B	= 2 ; Timer/Counter0 Output Compare Flag B

; TCCR0A - Timer/Counter  Control Register A
.equ	WGM00	= 0 ; Waveform Generation Mode bits
.equ	WGM01	= 1 ; Waveform Generation Mode bits
.equ	COM0B0	= 4 ; Compare Match Output B Mode bits
.equ	COM0B1	= 5 ; Compare Match Output B Mode bits
.equ	COM0A0	= 6 ; Compare Match Output A Mode bits
.equ	COM0A1	= 7 ; Compare Match Output A Mode bits

; TCCR0B - Timer/Counter Control Register B
.equ	CS00	= 0 ; Clock Select bits
.equ	CS01	= 1 ; Clock Select bits
.equ	CS02	= 2 ; Clock Select bits
.equ	WGM02	= 3 ; Waveform Generation Mode bit 2
.equ	FOC0B	= 6 ; Force Output Compare B
.equ	FOC0A	= 7 ; Force Output Compare A

; TCNT0 - Timer/Counter0
.equ	TCNT00	= 0 ; Timer/Counter0 Bit 0
.equ	TCNT01	= 1 ; Timer/Counter0 Bit 1
.equ	TCNT02	= 2 ; Timer/Counter0 Bit 2
.equ	TCNT03	= 3 ; Timer/Counter0 Bit 3
.equ	TCNT04	= 4 ; Timer/Counter0 Bit 4
.equ	TCNT05	= 5 ; Timer/Counter0 Bit 5
.equ	TCNT06	= 6 ; Timer/Counter0 Bit 6
.equ	TCNT07	= 7 ; Timer/Counter0 Bit 7

; OCR0A - Timer/Counter0 Output Compare Register A
.equ	OCR0A0	= 0 ; Timer/Counter0 Output Compare Register A Bit 0
.equ	OCR0A1	= 1 ; Timer/Counter0 Output Compare Register A Bit 1
.equ	OCR0A2	= 2 ; Timer/Counter0 Output Compare Register A Bit 2
.equ	OCR0A3	= 3 ; Timer/Counter0 Output Compare Register A Bit 3
.equ	OCR0A4	= 4 ; Timer/Counter0 Output Compare Register A Bit 4
.equ	OCR0A5	= 5 ; Timer/Counter0 Output Compare Register A Bit 5
.equ	OCR0A6	= 6 ; Timer/Counter0 Output Compare Register A Bit 6
.equ	OCR0A7	= 7 ; Timer/Counter0 Output Compare Register A Bit 7

; OCR0B - Timer/Counter0 Output Compare Register B
.equ	OCR0B0	= 0 ; Timer/Counter0 Output Compare Register B Bit 0
.equ	OCR0B1	= 1 ; Timer/Counter0 Output Compare Register B Bit 1
.equ	OCR0B2	= 2 ; Timer/Counter0 Output Compare Register B Bit 2
.equ	OCR0B3	= 3 ; Timer/Counter0 Output Compare Register B Bit 3
.equ	OCR0B4	= 4 ; Timer/Counter0 Output Compare Register B Bit 4
.equ	OCR0B5	= 5 ; Timer/Counter0 Output Compare Register B Bit 5
.equ	OCR0B6	= 6 ; Timer/Counter0 Output Compare Register B Bit 6
.equ	OCR0B7	= 7 ; Timer/Counter0 Output Compare Register B Bit 7

; GTCCR - General Timer/Counter Control Register
.equ	PSR10	= 0 ; Prescaler Reset Timer/CounterN
.equ	TSM	= 7 ; Timer/Counter Synchronization Mode


; ***** TIMER_COUNTER_1 *****************
; TIMSK1 - Timer/Counter1 Interrupt Mask Register
.equ	TOIE1	= 0 ; Timer/Counter1 Overflow Interrupt Enable
.equ	OCIE1A	= 1 ; Timer/Counter1 Output Compare A Match Interrupt Enable
.equ	OCIE1B	= 2 ; Timer/Counter1 Output Compare B Match Interrupt Enable
.equ	ICIE1	= 5 ; Timer/Counter1 Input Capture Interrupt Enable

; TIFR1 - Timer/Counter Interrupt Flag register
.equ	TOV1	= 0 ; Timer/Counter1 Overflow Flag
.equ	OCF1A	= 1 ; Timer/Counter1 Output Compare A Match Flag
.equ	OCF1B	= 2 ; Timer/Counter1 Output Compare B Match Flag
.equ	ICF1	= 5 ; Timer/Counter1 Input Capture Flag

; TCCR1A - Timer/Counter1 Control Register A
.equ	WGM10	= 0 ; Pulse Width Modulator Select Bits
.equ	WGM11	= 1 ; Pulse Width Modulator Select Bits
.equ	COM1B0	= 4 ; Compare Output Mode 1B, bits
.equ	COM1B1	= 5 ; Compare Output Mode 1B, bits
.equ	COM1A0	= 6 ; Compare Output Mode 1A, bits
.equ	COM1A1	= 7 ; Compare Output Mode 1A, bits

; TCCR1B - Timer/Counter1 Control Register B
.equ	CS10	= 0 ; Clock Select1 bits
.equ	CS11	= 1 ; Clock Select1 bits
.equ	CS12	= 2 ; Clock Select1 bits
.equ	WGM12	= 3 ; Waveform Generation Mode Bits
.equ	WGM13	= 4 ; Waveform Generation Mode Bits
.equ	ICES1	= 6 ; Input Capture 1 Edge Select
.equ	ICNC1	= 7 ; Input Capture 1 Noise Canceler

; TCCR1C - Timer/Counter1 Control Register C
.equ	FOC1B	= 6 ; Force Output Compare for Channel B
.equ	FOC1A	= 7 ; Force Output Compare for Channel A

; TCNT1 - Timer/Counter1  Bytes
.equ	TCNT1H0	= 0 ; Timer/Counter1  Bytes High Bit 8
.equ	TCNT1H1	= 1 ; Timer/Counter1  Bytes High Bit 9
.equ	TCNT1H2	= 2 ; Timer/Counter1  Bytes High Bit 10
.equ	TCNT1H3	= 3 ; Timer/Counter1  Bytes High Bit 11
.equ	TCNT1H4	= 4 ; Timer/Counter1  Bytes High Bit 12
.equ	TCNT1H5	= 5 ; Timer/Counter1  Bytes High Bit 13
.equ	TCNT1H6	= 6 ; Timer/Counter1  Bytes High Bit 14
.equ	TCNT1H7	= 7 ; Timer/Counter1  Bytes High Bit 15

.equ	TCNT1L0	= 0 ; Timer/Counter1  Bytes Low Bit 0
.equ	TCNT1L1	= 1 ; Timer/Counter1  Bytes Low Bit 1
.equ	TCNT1L2	= 2 ; Timer/Counter1  Bytes Low Bit 2
.equ	TCNT1L3	= 3 ; Timer/Counter1  Bytes Low Bit 3
.equ	TCNT1L4	= 4 ; Timer/Counter1  Bytes Low Bit 4
.equ	TCNT1L5	= 5 ; Timer/Counter1  Bytes Low Bit 5
.equ	TCNT1L6	= 6 ; Timer/Counter1  Bytes Low Bit 6
.equ	TCNT1L7	= 7 ; Timer/Counter1  Bytes Low Bit 7

; OCR1A - Timer/Counter1 Output Compare Register A  Bytes
.equ	OCR1AH0	= 0 ; Timer/Counter1 Output Compare Register A  Bytes High Bit 8
.equ	OCR1AH1	= 1 ; Timer/Counter1 Output Compare Register A  Bytes High Bit 9
.equ	OCR1AH2	= 2 ; Timer/Counter1 Output Compare Register A  Bytes High Bit 10
.equ	OCR1AH3	= 3 ; Timer/Counter1 Output Compare Register A  Bytes High Bit 11
.equ	OCR1AH4	= 4 ; Timer/Counter1 Output Compare Register A  Bytes High Bit 12
.equ	OCR1AH5	= 5 ; Timer/Counter1 Output Compare Register A  Bytes High Bit 13
.equ	OCR1AH6	= 6 ; Timer/Counter1 Output Compare Register A  Bytes High Bit 14
.equ	OCR1AH7	= 7 ; Timer/Counter1 Output Compare Register A  Bytes High Bit 15

.equ	OCR1AL0	= 0 ; Timer/Counter1 Output Compare Register A  Bytes Low Bit 0
.equ	OCR1AL1	= 1 ; Timer/Counter1 Output Compare Register A  Bytes Low Bit 1
.equ	OCR1AL2	= 2 ; Timer/Counter1 Output Compare Register A  Bytes Low Bit 2
.equ	OCR1AL3	= 3 ; Timer/Counter1 Output Compare Register A  Bytes Low Bit 3
.equ	OCR1AL4	= 4 ; Timer/Counter1 Output Compare Register A  Bytes Low Bit 4
.equ	OCR1AL5	= 5 ; Timer/Counter1 Output Compare Register A  Bytes Low Bit 5
.equ	OCR1AL6	= 6 ; Timer/Counter1 Output Compare Register A  Bytes Low Bit 6
.equ	OCR1AL7	= 7 ; Timer/Counter1 Output Compare Register A  Bytes Low Bit 7

; OCR1B - Timer/Counter1 Output Compare Register B  Bytes
.equ	OCR1BH0	= 0 ; Timer/Counter1 Output Compare Register B  Bytes High Bit 8
.equ	OCR1BH1	= 1 ; Timer/Counter1 Output Compare Register B  Bytes High Bit 9
.equ	OCR1BH2	= 2 ; Timer/Counter1 Output Compare Register B  Bytes High Bit 10
.equ	OCR1BH3	= 3 ; Timer/Counter1 Output Compare Register B  Bytes High Bit 11
.equ	OCR1BH4	= 4 ; Timer/Counter1 Output Compare Register B  Bytes High Bit 12
.equ	OCR1BH5	= 5 ; Timer/Counter1 Output Compare Register B  Bytes High Bit 13
.equ	OCR1BH6	= 6 ; Timer/Counter1 Output Compare Register B  Bytes High Bit 14
.equ	OCR1BH7	= 7 ; Timer/Counter1 Output Compare Register B  Bytes High Bit 15

.equ	OCR1BL0	= 0 ; Timer/Counter1 Output Compare Register B  Bytes Low Bit 0
.equ	OCR1BL1	= 1 ; Timer/Counter1 Output Compare Register B  Bytes Low Bit 1
.equ	OCR1BL2	= 2 ; Timer/Counter1 Output Compare Register B  Bytes Low Bit 2
.equ	OCR1BL3	= 3 ; Timer/Counter1 Output Compare Register B  Bytes Low Bit 3
.equ	OCR1BL4	= 4 ; Timer/Counter1 Output Compare Register B  Bytes Low Bit 4
.equ	OCR1BL5	= 5 ; Timer/Counter1 Output Compare Register B  Bytes Low Bit 5
.equ	OCR1BL6	= 6 ; Timer/Counter1 Output Compare Register B  Bytes Low Bit 6
.equ	OCR1BL7	= 7 ; Timer/Counter1 Output Compare Register B  Bytes Low Bit 7

; ICR1 - Timer/Counter1 Input Capture Register  Bytes
.equ	ICR1H0	= 0 ; Timer/Counter1 Input Capture Register  Bytes High Bit 8
.equ	ICR1H1	= 1 ; Timer/Counter1 Input Capture Register  Bytes High Bit 9
.equ	ICR1H2	= 2 ; Timer/Counter1 Input Capture Register  Bytes High Bit 10
.equ	ICR1H3	= 3 ; Timer/Counter1 Input Capture Register  Bytes High Bit 11
.equ	ICR1H4	= 4 ; Timer/Counter1 Input Capture Register  Bytes High Bit 12
.equ	ICR1H5	= 5 ; Timer/Counter1 Input Capture Register  Bytes High Bit 13
.equ	ICR1H6	= 6 ; Timer/Counter1 Input Capture Register  Bytes High Bit 14
.equ	ICR1H7	= 7 ; Timer/Counter1 Input Capture Register  Bytes High Bit 15

.equ	ICR1L0	= 0 ; Timer/Counter1 Input Capture Register  Bytes Low Bit 0
.equ	ICR1L1	= 1 ; Timer/Counter1 Input Capture Register  Bytes Low Bit 1
.equ	ICR1L2	= 2 ; Timer/Counter1 Input Capture Register  Bytes Low Bit 2
.equ	ICR1L3	= 3 ; Timer/Counter1 Input Capture Register  Bytes Low Bit 3
.equ	ICR1L4	= 4 ; Timer/Counter1 Input Capture Register  Bytes Low Bit 4
.equ	ICR1L5	= 5 ; Timer/Counter1 Input Capture Register  Bytes Low Bit 5
.equ	ICR1L6	= 6 ; Timer/Counter1 Input Capture Register  Bytes Low Bit 6
.equ	ICR1L7	= 7 ; Timer/Counter1 Input Capture Register  Bytes Low Bit 7


; ***** BOOT_LOAD *****************
; SPMCSR - Store Program Memory Control Register
.equ	SPMEN	= 0 ; Store Program Memory Enable
.equ	PGERS	= 1 ; Page Erase
.equ	PGWRT	= 2 ; Page Write
.equ	RFLB	= 3 ; Read fuse and lock bits
.equ	CTPB	= 4 ; Clear temporary page buffer


; ***** CPU *****************
; PRR - Power Reduction Register
.equ	PRADC	= 0 ; Power Reduction ADC
.equ	PRUSI	= 1 ; Power Reduction USI
.equ	PRTIM0	= 2 ; Power Reduction Timer/Counter0
.equ	PRTIM1	= 3 ; Power Reduction Timer/Counter1
.equ	PRSPI	= 4 ; Power Reduction SPI
.equ	PRLIN	= 5 ; Power Reduction LINUART

; OSCCAL - Oscillator Calibration Value
.equ	OSCCAL0	= 0 ; Oscillator Calibration 
.equ	OSCCAL1	= 1 ; Oscillator Calibration 
.equ	OSCCAL2	= 2 ; Oscillator Calibration 
.equ	OSCCAL3	= 3 ; Oscillator Calibration 
.equ	OSCCAL4	= 4 ; Oscillator Calibration 
.equ	OSCCAL5	= 5 ; Oscillator Calibration 
.equ	OSCCAL6	= 6 ; Oscillator Calibration 
.equ	OSCCAL7	= 7 ; Oscillator Calibration 

; CLKPR - Clock Prescale Register
.equ	CLKPS0	= 0 ; Clock Prescaler Select Bits
.equ	CLKPS1	= 1 ; Clock Prescaler Select Bits
.equ	CLKPS2	= 2 ; Clock Prescaler Select Bits
.equ	CLKPS3	= 3 ; Clock Prescaler Select Bits
.equ	CLKPCE	= 7 ; Clock Prescaler Change Enable

; SREG - Status Register
.equ	SREG_C	= 0 ; Carry Flag
.equ	SREG_Z	= 1 ; Zero Flag
.equ	SREG_N	= 2 ; Negative Flag
.equ	SREG_V	= 3 ; Two's Complement Overflow Flag
.equ	SREG_S	= 4 ; Sign Bit
.equ	SREG_H	= 5 ; Half Carry Flag
.equ	SREG_T	= 6 ; Bit Copy Storage
.equ	SREG_I	= 7 ; Global Interrupt Enable

; SP - Stack Pointer 
.equ	SPH0	= 0 ; Stack Pointer  High Bit 8

.equ	SPL0	= 0 ; Stack Pointer  Low Bit 0
.equ	SPL1	= 1 ; Stack Pointer  Low Bit 1
.equ	SPL2	= 2 ; Stack Pointer  Low Bit 2
.equ	SPL3	= 3 ; Stack Pointer  Low Bit 3
.equ	SPL4	= 4 ; Stack Pointer  Low Bit 4
.equ	SPL5	= 5 ; Stack Pointer  Low Bit 5
.equ	SPL6	= 6 ; Stack Pointer  Low Bit 6
.equ	SPL7	= 7 ; Stack Pointer  Low Bit 7

; MCUCR - MCU Control Register
.equ	SM0	= 3 ; Sleep Mode Select Bits
.equ	SM1	= 4 ; Sleep Mode Select Bits
.equ	SE	= 5 ; Sleep Enable
.equ	PUD	= 6 ; 

; MCUSR - MCU Status Register
.equ	PORF	= 0 ; Power-on reset flag
.equ	EXTRF	= 1 ; External Reset Flag
.equ	BORF	= 2 ; Brown-out Reset Flag
.equ	WDRF	= 3 ; Watchdog Reset Flag

; GPIOR2 - General Purpose I/O Register 2
.equ	GPIOR20	= 0 ; General Purpose I/O Register 2 Bit 0
.equ	GPIOR21	= 1 ; General Purpose I/O Register 2 Bit 1
.equ	GPIOR22	= 2 ; General Purpose I/O Register 2 Bit 2
.equ	GPIOR23	= 3 ; General Purpose I/O Register 2 Bit 3
.equ	GPIOR24	= 4 ; General Purpose I/O Register 2 Bit 4
.equ	GPIOR25	= 5 ; General Purpose I/O Register 2 Bit 5
.equ	GPIOR26	= 6 ; General Purpose I/O Register 2 Bit 6
.equ	GPIOR27	= 7 ; General Purpose I/O Register 2 Bit 7

; GPIOR1 - General Purpose I/O Register 1
.equ	GPIOR10	= 0 ; General Purpose I/O Register 1 Bit 0
.equ	GPIOR11	= 1 ; General Purpose I/O Register 1 Bit 1
.equ	GPIOR12	= 2 ; General Purpose I/O Register 1 Bit 2
.equ	GPIOR13	= 3 ; General Purpose I/O Register 1 Bit 3
.equ	GPIOR14	= 4 ; General Purpose I/O Register 1 Bit 4
.equ	GPIOR15	= 5 ; General Purpose I/O Register 1 Bit 5
.equ	GPIOR16	= 6 ; General Purpose I/O Register 1 Bit 6
.equ	GPIOR17	= 7 ; General Purpose I/O Register 1 Bit 7

; GPIOR0 - General Purpose I/O Register 0
.equ	GPIOR00	= 0 ; General Purpose I/O Register 0 Bit 0
.equ	GPIOR01	= 1 ; General Purpose I/O Register 0 Bit 1
.equ	GPIOR02	= 2 ; General Purpose I/O Register 0 Bit 2
.equ	GPIOR03	= 3 ; General Purpose I/O Register 0 Bit 3
.equ	GPIOR04	= 4 ; General Purpose I/O Register 0 Bit 4
.equ	GPIOR05	= 5 ; General Purpose I/O Register 0 Bit 5
.equ	GPIOR06	= 6 ; General Purpose I/O Register 0 Bit 6
.equ	GPIOR07	= 7 ; General Purpose I/O Register 0 Bit 7


; ***** FUSE *****************
; EXTENDED - 
.equ	SELFPRGEN	= 0 ; Self Programming enable

; HIGH - 
.equ	BODLEVEL0	= 0 ; Brown-out Detector trigger level
.equ	BODLEVEL1	= 1 ; Brown-out Detector trigger level
.equ	BODLEVEL2	= 2 ; Brown-out Detector trigger level
.equ	EESAVE	= 3 ; Preserve EEPROM through the Chip Erase cycle
.equ	WDTON	= 4 ; Watch-dog Timer always on
.equ	SPIEN	= 5 ; Serial program downloading (SPI) enabled
.equ	DWEN	= 6 ; Debug Wire enable
.equ	RSTDISBL	= 7 ; Reset Disabled (Enable PB3 as i/o pin)

; LOW - 
.equ	SUT_CKSEL0	= 0 ; Select Clock source
.equ	SUT_CKSEL1	= 1 ; Select Clock source
.equ	SUT_CKSEL2	= 2 ; Select Clock source
.equ	SUT_CKSEL3	= 3 ; Select Clock source
.equ	SUT_CKSEL4	= 4 ; Select Clock source
.equ	SUT_CKSEL5	= 5 ; Select Clock source
.equ	CKOUT	= 6 ; Clock output on PORTB2
.equ	CKDIV8	= 7 ; Divide clock by 8 internally


; ***** LOCKBIT *****************
; LOCKBIT - 
.equ	LB1	= 0 ; Memory Lock
.equ	LB2	= 1 ; Memory Lock

; ***** CPU REGISTER DEFINITIONS *****************************************
.def	XH	= r27
.def	XL	= r26
.def	YH	= r29
.def	YL	= r28
.def	ZH	= r31
.def	ZL	= r30

; ***** DATA MEMORY DECLARATIONS *****************************************
.equ	FLASHSTART	= 0x0000 ; Note: Word address
.equ	FLASHEND	= 0x07FF ; Note: Word address
.equ	IOEND	= 0x005F
.equ	SRAM_START	= 0x0060
.equ	SRAM_SIZE	= 256
.equ	RAMEND	= 0x015F
.equ	E2END	= 0x00FF
.equ	EEPROMEND	= 0x00FF
.equ	EEADRBITS	= 8
.equ	XRAMEND	= 0x0000
#pragma AVRPART MEMORY PROG_FLASH 4096
#pragma AVRPART MEMORY INT_SRAM SIZE 256
#pragma AVRPART MEMORY INT_SRAM START_ADDR 0x60
#pragma AVRPART MEMORY EEPROM 256

; ***** INTERRUPT VECTORS ************************************************
.equ	EXT_INT0addr	 = 0x0001 ; External Interrupt Request 0
.equ	PCINT0addr	 = 0x0002 ; Pin Change Interrupt Request 0
.equ	PCINT1addr	 = 0x0003 ; Pin Change Interrupt Request 1
.equ	WATCHDOGaddr	 = 0x0004 ; Watchdog Time-out
.equ	TIM1_CAPTaddr	 = 0x0005 ; Timer/Counter1 Capture Event
.equ	TIM1_COMPAaddr	 = 0x0006 ; Timer/Counter1 Compare Match A
.equ	TIM1_COMPBaddr	 = 0x0007 ; Timer/Counter1 Compare Match B
.equ	TIM1_OVFaddr	 = 0x0008 ; Timer/Counter1 Overflow
.equ	TIM0_COMPAaddr	 = 0x0009 ; Timer/Counter0 Compare Match A
.equ	TIM0_COMPBaddr	 = 0x000A ; Timer/Counter0 Compare Match B
.equ	TIM0_OVFaddr	 = 0x000B ; Timer/Counter0 Overflow
.equ	ANA_COMPaddr	 = 0x000C ; Analog Comparator
.equ	ADCaddr	 = 0x000D ; ADC Conversion Complete
.equ	EE_RDYaddr	 = 0x000E ; EEPROM Ready
.equ	USI_STRaddr	 = 0x000F ; USI START
.equ	USI_OVFaddr	 = 0x0010 ; USI Overflow

.equ	INT_VECTORS_SIZE	= 17 ; size in words

#endif /* _A664251DEF_INC_ */

; ***** END OF FILE ******************************************************



