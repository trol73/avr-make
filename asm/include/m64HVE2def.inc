;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ********************

;*************************************************************************
;* A P P L I C A T I O N   N O T E   F O R   T H E   A V R   F A M I L Y
;* 
;* Number            : AVR000
;* File Name         : m64HVE2def.inc
;* Title             : Register/Bit Definitions for the ATmega64HVE2
;* Created           : 2014-02-06 16:09
;* Version           : 1.00
;* Support e-mail    : avr@atmel.com
;* Target MCU        : ATmega64HVE2
;* 
;* DESCRIPTION
;* When including this file in the assembly program file, all I/O register 
;* names and I/O register bit names appearing in the data book can be used.
;* In addition, the six registers forming the three data pointers X, Y and 
;* Z have been assigned names XL - ZH. Highest RAM address for Internal 
;* SRAM is also defined 
;* 
;*************************************************************************

#ifndef _M64HVE2DEF_INC_
#define _M64HVE2DEF_INC_


#pragma partinc 0

; ***** SPECIFY DEVICE ***************************************************
.device	ATmega64HVE2
#pragma AVRPART ADMIN PART_NAME ATmega64HVE2
.equ	SIGNATURE_000	= 0x1E
.equ	SIGNATURE_001	= 0x96
.equ	SIGNATURE_002	= 0x10

#pragma AVRPART CORE CORE_VERSION V3

; ***** I/O REGISTER DEFINITIONS *****************************************
; NOTE:
; Definitions marked "MEMORY MAPPED" are extended I/O ports
; and cannot be used with IN/OUT instructions
.equ	VADAC3	= 0xF6 ; MEMORY MAPPED
.equ	VADAC2	= 0xF5 ; MEMORY MAPPED
.equ	VADAC1	= 0xF4 ; MEMORY MAPPED
.equ	VADAC0	= 0xF3 ; MEMORY MAPPED
.equ	VADICH	= 0xF2 ; MEMORY MAPPED
.equ	VADICL	= 0xF1 ; MEMORY MAPPED
.equ	CADAC3	= 0xF0 ; MEMORY MAPPED
.equ	CADAC2	= 0xEF ; MEMORY MAPPED
.equ	CADAC1	= 0xEE ; MEMORY MAPPED
.equ	CADAC0	= 0xED ; MEMORY MAPPED
.equ	CADICH	= 0xEC ; MEMORY MAPPED
.equ	CADICL	= 0xEB ; MEMORY MAPPED
.equ	CADRCLH	= 0xEA ; MEMORY MAPPED
.equ	CADRCLL	= 0xE9 ; MEMORY MAPPED
.equ	ADIMR	= 0xE8 ; MEMORY MAPPED
.equ	ADIFR	= 0xE7 ; MEMORY MAPPED
.equ	ADCRE	= 0xE6 ; MEMORY MAPPED
.equ	ADCRD	= 0xE5 ; MEMORY MAPPED
.equ	ADCRC	= 0xE4 ; MEMORY MAPPED
.equ	ADCRB	= 0xE3 ; MEMORY MAPPED
.equ	ADCRA	= 0xE2 ; MEMORY MAPPED
.equ	ADSCSRB	= 0xE1 ; MEMORY MAPPED
.equ	ADSCSRA	= 0xE0 ; MEMORY MAPPED
.equ	PBOV	= 0xDC ; MEMORY MAPPED
.equ	PLLCSR	= 0xD8 ; MEMORY MAPPED
.equ	BGLR	= 0xD4 ; MEMORY MAPPED
.equ	BGCRA	= 0xD3 ; MEMORY MAPPED
.equ	BGCRB	= 0xD2 ; MEMORY MAPPED
.equ	BGCSRA	= 0xD1 ; MEMORY MAPPED
.equ	LINDAT	= 0xCA ; MEMORY MAPPED
.equ	LINSEL	= 0xC9 ; MEMORY MAPPED
.equ	LINIDR	= 0xC8 ; MEMORY MAPPED
.equ	LINDLR	= 0xC7 ; MEMORY MAPPED
.equ	LINBRRH	= 0xC6 ; MEMORY MAPPED
.equ	LINBRRL	= 0xC5 ; MEMORY MAPPED
.equ	LINBTR	= 0xC4 ; MEMORY MAPPED
.equ	LINERR	= 0xC3 ; MEMORY MAPPED
.equ	LINENIR	= 0xC2 ; MEMORY MAPPED
.equ	LINSIR	= 0xC1 ; MEMORY MAPPED
.equ	LINCR	= 0xC0 ; MEMORY MAPPED
.equ	OCR1B	= 0x89 ; MEMORY MAPPED
.equ	OCR1A	= 0x88 ; MEMORY MAPPED
.equ	TCNT1H	= 0x85 ; MEMORY MAPPED
.equ	TCNT1L	= 0x84 ; MEMORY MAPPED
.equ	TCCR1B	= 0x81 ; MEMORY MAPPED
.equ	TCCR1A	= 0x80 ; MEMORY MAPPED
.equ	DIDR0	= 0x7E ; MEMORY MAPPED
.equ	TIMSK1	= 0x6F ; MEMORY MAPPED
.equ	TIMSK0	= 0x6E ; MEMORY MAPPED
.equ	PCMSK1	= 0x6C ; MEMORY MAPPED
.equ	PCMSK0	= 0x6B ; MEMORY MAPPED
.equ	EICRA	= 0x69 ; MEMORY MAPPED
.equ	PCICR	= 0x68 ; MEMORY MAPPED
.equ	SOSCCALB	= 0x67 ; MEMORY MAPPED
.equ	SOSCCALA	= 0x66 ; MEMORY MAPPED
.equ	PRR0	= 0x64 ; MEMORY MAPPED
.equ	WDTCLR	= 0x63 ; MEMORY MAPPED
.equ	WUTCSR	= 0x62 ; MEMORY MAPPED
.equ	CLKPR	= 0x61 ; MEMORY MAPPED
.equ	WDTCSR	= 0x60 ; MEMORY MAPPED
.equ	SREG	= 0x3F ; 
.equ	SPH	= 0x3E ; 
.equ	SPL	= 0x3D ; 
.equ	SPMCSR	= 0x37 ; 
.equ	MCUCR	= 0x35 ; 
.equ	MCUSR	= 0x34 ; 
.equ	SMCR	= 0x33 ; 
.equ	SPDR	= 0x2E ; 
.equ	SPSR	= 0x2D ; 
.equ	SPCR	= 0x2C ; 
.equ	GPIOR2	= 0x2B ; 
.equ	GPIOR1	= 0x2A ; 
.equ	OCR0B	= 0x29 ; 
.equ	OCR0A	= 0x28 ; 
.equ	TCNT0H	= 0x27 ; 
.equ	TCNT0L	= 0x26 ; 
.equ	TCCR0B	= 0x25 ; 
.equ	TCCR0A	= 0x24 ; 
.equ	GTCCR	= 0x23 ; 
.equ	EEARH	= 0x22 ; 
.equ	EEARL	= 0x21 ; 
.equ	EEDR	= 0x20 ; 
.equ	EECR	= 0x1F ; 
.equ	GPIOR0	= 0x1E ; 
.equ	EIMSK	= 0x1D ; 
.equ	EIFR	= 0x1C ; 
.equ	PCIFR	= 0x1B ; 
.equ	TIFR1	= 0x16 ; 
.equ	TIFR0	= 0x15 ; 
.equ	PORTB	= 0x05 ; 
.equ	DDRB	= 0x04 ; 
.equ	PINB	= 0x03 ; 
.equ	PORTA	= 0x02 ; 
.equ	DDRA	= 0x01 ; 
.equ	PINA	= 0x00 ; 


; ***** BIT DEFINITIONS **************************************************

; ***** SPI *****************
; SPCR - SPI Control Register
.equ	SPR0	= 0 ; SPI Clock Rate Selects
.equ	SPR1	= 1 ; SPI Clock Rate Selects
.equ	CPHA	= 2 ; Clock Phase
.equ	CPOL	= 3 ; Clock polarity
.equ	MSTR	= 4 ; Master/Slave Select
.equ	DORD	= 5 ; Data Order
.equ	SPE	= 6 ; SPI Enable
.equ	SPIE	= 7 ; SPI Interrupt Enable

; SPSR - SPI Status Register
.equ	SPI2X	= 0 ; Double SPI Speed Bit
.equ	WCOL	= 6 ; Write Collision Flag
.equ	SPIF	= 7 ; SPI Interrupt Flag

; SPDR - SPI Data Register
.equ	SPDR0	= 0 ; SPI Data Register Bit 0
.equ	SPDR1	= 1 ; SPI Data Register Bit 1
.equ	SPDR2	= 2 ; SPI Data Register Bit 2
.equ	SPDR3	= 3 ; SPI Data Register Bit 3
.equ	SPDR4	= 4 ; SPI Data Register Bit 4
.equ	SPDR5	= 5 ; SPI Data Register Bit 5
.equ	SPDR6	= 6 ; SPI Data Register Bit 6
.equ	SPDR7	= 7 ; SPI Data Register Bit 7


; ***** EEPROM *****************
; EEAR - EEPROM Read/Write Access
.equ	EEARH0	= 0 ; EEPROM Read/Write Access High Bit 8
.equ	EEARH1	= 1 ; EEPROM Read/Write Access High Bit 9

.equ	EEARL0	= 0 ; EEPROM Read/Write Access Low Bit 0
.equ	EEARL1	= 1 ; EEPROM Read/Write Access Low Bit 1
.equ	EEARL2	= 2 ; EEPROM Read/Write Access Low Bit 2
.equ	EEARL3	= 3 ; EEPROM Read/Write Access Low Bit 3
.equ	EEARL4	= 4 ; EEPROM Read/Write Access Low Bit 4
.equ	EEARL5	= 5 ; EEPROM Read/Write Access Low Bit 5
.equ	EEARL6	= 6 ; EEPROM Read/Write Access Low Bit 6
.equ	EEARL7	= 7 ; EEPROM Read/Write Access Low Bit 7

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
.equ	EERIE	= 3 ; EEProm Ready Interrupt Enable
.equ	EEPM0	= 4 ; 
.equ	EEPM1	= 5 ; 


; ***** TIMER_COUNTER_1 *****************
; TCCR1B - Timer/Counter1 Control Register B
.equ	CS10	= 0 ; Clock Select1 bis
.equ	CS11	= 1 ; Clock Select1 bis
.equ	CS12	= 2 ; Clock Select1 bis

; TCCR1A - Timer/Counter 1 Control Register A
.equ	WGM10	= 0 ; Waveform Generation Mode
.equ	ICS1	= 3 ; Input Capture Select
.equ	ICES1	= 4 ; Input Capture Edge Select
.equ	ICNC1	= 5 ; Input Capture Noise Canceler
.equ	ICEN1	= 6 ; Input Capture Mode Enable
.equ	TCW1	= 7 ; Timer/Counter Width

; TCNT1 - Timer Counter 1  Bytes
.equ	TCNT1H0	= 0 ; Timer Counter 1  Bytes High Bit 8
.equ	TCNT1H1	= 1 ; Timer Counter 1  Bytes High Bit 9
.equ	TCNT1H2	= 2 ; Timer Counter 1  Bytes High Bit 10
.equ	TCNT1H3	= 3 ; Timer Counter 1  Bytes High Bit 11
.equ	TCNT1H4	= 4 ; Timer Counter 1  Bytes High Bit 12
.equ	TCNT1H5	= 5 ; Timer Counter 1  Bytes High Bit 13
.equ	TCNT1H6	= 6 ; Timer Counter 1  Bytes High Bit 14
.equ	TCNT1H7	= 7 ; Timer Counter 1  Bytes High Bit 15

.equ	TCNT1L0	= 0 ; Timer Counter 1  Bytes Low Bit 0
.equ	TCNT1L1	= 1 ; Timer Counter 1  Bytes Low Bit 1
.equ	TCNT1L2	= 2 ; Timer Counter 1  Bytes Low Bit 2
.equ	TCNT1L3	= 3 ; Timer Counter 1  Bytes Low Bit 3
.equ	TCNT1L4	= 4 ; Timer Counter 1  Bytes Low Bit 4
.equ	TCNT1L5	= 5 ; Timer Counter 1  Bytes Low Bit 5
.equ	TCNT1L6	= 6 ; Timer Counter 1  Bytes Low Bit 6
.equ	TCNT1L7	= 7 ; Timer Counter 1  Bytes Low Bit 7

; OCR1A - Output Compare Register 1A
.equ	OCR1A0	= 0 ; Output Compare Register 1A Bit 0
.equ	OCR1A1	= 1 ; Output Compare Register 1A Bit 1
.equ	OCR1A2	= 2 ; Output Compare Register 1A Bit 2
.equ	OCR1A3	= 3 ; Output Compare Register 1A Bit 3
.equ	OCR1A4	= 4 ; Output Compare Register 1A Bit 4
.equ	OCR1A5	= 5 ; Output Compare Register 1A Bit 5
.equ	OCR1A6	= 6 ; Output Compare Register 1A Bit 6
.equ	OCR1A7	= 7 ; Output Compare Register 1A Bit 7

; OCR1B - Output Compare Register B
.equ	OCR1B0	= 0 ; Output Compare Register B Bit 0
.equ	OCR1B1	= 1 ; Output Compare Register B Bit 1
.equ	OCR1B2	= 2 ; Output Compare Register B Bit 2
.equ	OCR1B3	= 3 ; Output Compare Register B Bit 3
.equ	OCR1B4	= 4 ; Output Compare Register B Bit 4
.equ	OCR1B5	= 5 ; Output Compare Register B Bit 5
.equ	OCR1B6	= 6 ; Output Compare Register B Bit 6
.equ	OCR1B7	= 7 ; Output Compare Register B Bit 7

; TIMSK1 - Timer/Counter Interrupt Mask Register
.equ	TOIE1	= 0 ; Timer/Counter1 Overflow Interrupt Enable
.equ	OCIE1A	= 1 ; Timer/Counter1 Output Compare A Interrupt Enable
.equ	OCIE1B	= 2 ; Timer/Counter1 Output Compare B Interrupt Enable
.equ	ICIE1	= 3 ; Timer/Counter n Input Capture Interrupt Enable

; TIFR1 - Timer/Counter Interrupt Flag register
.equ	TOV1	= 0 ; Timer/Counter1 Overflow Flag
.equ	OCF1A	= 1 ; Timer/Counter1 Output Compare Flag A
.equ	OCF1B	= 2 ; Timer/Counter1 Output Compare Flag B
.equ	ICF1	= 3 ; Timer/Counter 1 Input Capture Flag

; GTCCR - General Timer/Counter Control Register
.equ	PSRSYNC	= 0 ; Prescaler Reset
.equ	TSM	= 7 ; Timer/Counter Synchronization Mode


; ***** PORTB *****************
; PORTB - Port B Data Register
.equ	PORTB0	= 0 ; Port B Data Register Bit 0
.equ	PORTB1	= 1 ; Port B Data Register Bit 1
.equ	PORTB2	= 2 ; Port B Data Register Bit 2
.equ	PORTB3	= 3 ; Port B Data Register Bit 3
.equ	PORTB4	= 4 ; Port B Data Register Bit 4
.equ	PORTB5	= 5 ; Port B Data Register Bit 5
.equ	PORTB6	= 6 ; Port B Data Register Bit 6
.equ	PORTB7	= 7 ; Port B Data Register Bit 7

; DDRB - Port B Data Direction Register
.equ	DDRB0	= 0 ; Port B Data Direction Register Bit 0
.equ	DDRB1	= 1 ; Port B Data Direction Register Bit 1
.equ	DDRB2	= 2 ; Port B Data Direction Register Bit 2
.equ	DDRB3	= 3 ; Port B Data Direction Register Bit 3
.equ	DDRB4	= 4 ; Port B Data Direction Register Bit 4
.equ	DDRB5	= 5 ; Port B Data Direction Register Bit 5
.equ	DDRB6	= 6 ; Port B Data Direction Register Bit 6
.equ	DDRB7	= 7 ; Port B Data Direction Register Bit 7

; PINB - Port B Input Pins
.equ	PINB0	= 0 ; Port B Input Pins Bit 0
.equ	PINB1	= 1 ; Port B Input Pins Bit 1
.equ	PINB2	= 2 ; Port B Input Pins Bit 2
.equ	PINB3	= 3 ; Port B Input Pins Bit 3
.equ	PINB4	= 4 ; Port B Input Pins Bit 4
.equ	PINB5	= 5 ; Port B Input Pins Bit 5
.equ	PINB6	= 6 ; Port B Input Pins Bit 6
.equ	PINB7	= 7 ; Port B Input Pins Bit 7

; PBOV - Port B Override
.equ	PBOE0	= 0 ; Port B Override Enable 0
.equ	PBOE3	= 3 ; Port B Override Enable 3
.equ	PBOVCE	= 7 ; Port B Override Change Enable


; ***** TIMER_COUNTER_0 *****************
; TCCR0B - Timer/Counter0 Control Register B
.equ	CS00	= 0 ; Clock Select0 bit 0
.equ	CS01	= 1 ; Clock Select0 bit 1
.equ	CS02	= 2 ; Clock Select0 bit 2

; TCCR0A - Timer/Counter 0 Control Register A
.equ	WGM00	= 0 ; Waveform Generation Mode
.equ	ICS0	= 3 ; Input Capture Select
.equ	ICES0	= 4 ; Input Capture Edge Select
.equ	ICNC0	= 5 ; Input Capture Noise Canceler
.equ	ICEN0	= 6 ; Input Capture Mode Enable
.equ	TCW0	= 7 ; Timer/Counter Width

; TCNT0 - Timer Counter 0  Bytes
.equ	TCNT0H0	= 0 ; Timer Counter 0  Bytes High Bit 8
.equ	TCNT0H1	= 1 ; Timer Counter 0  Bytes High Bit 9
.equ	TCNT0H2	= 2 ; Timer Counter 0  Bytes High Bit 10
.equ	TCNT0H3	= 3 ; Timer Counter 0  Bytes High Bit 11
.equ	TCNT0H4	= 4 ; Timer Counter 0  Bytes High Bit 12
.equ	TCNT0H5	= 5 ; Timer Counter 0  Bytes High Bit 13
.equ	TCNT0H6	= 6 ; Timer Counter 0  Bytes High Bit 14
.equ	TCNT0H7	= 7 ; Timer Counter 0  Bytes High Bit 15

.equ	TCNT0L0	= 0 ; Timer Counter 0  Bytes Low Bit 0
.equ	TCNT0L1	= 1 ; Timer Counter 0  Bytes Low Bit 1
.equ	TCNT0L2	= 2 ; Timer Counter 0  Bytes Low Bit 2
.equ	TCNT0L3	= 3 ; Timer Counter 0  Bytes Low Bit 3
.equ	TCNT0L4	= 4 ; Timer Counter 0  Bytes Low Bit 4
.equ	TCNT0L5	= 5 ; Timer Counter 0  Bytes Low Bit 5
.equ	TCNT0L6	= 6 ; Timer Counter 0  Bytes Low Bit 6
.equ	TCNT0L7	= 7 ; Timer Counter 0  Bytes Low Bit 7

; OCR0A - Output Compare Register 0A
.equ	OCR0A0	= 0 ; Output Compare Register 0A Bit 0
.equ	OCR0A1	= 1 ; Output Compare Register 0A Bit 1
.equ	OCR0A2	= 2 ; Output Compare Register 0A Bit 2
.equ	OCR0A3	= 3 ; Output Compare Register 0A Bit 3
.equ	OCR0A4	= 4 ; Output Compare Register 0A Bit 4
.equ	OCR0A5	= 5 ; Output Compare Register 0A Bit 5
.equ	OCR0A6	= 6 ; Output Compare Register 0A Bit 6
.equ	OCR0A7	= 7 ; Output Compare Register 0A Bit 7

; OCR0B - Output Compare Register B
.equ	OCR0B0	= 0 ; Output Compare Register B Bit 0
.equ	OCR0B1	= 1 ; Output Compare Register B Bit 1
.equ	OCR0B2	= 2 ; Output Compare Register B Bit 2
.equ	OCR0B3	= 3 ; Output Compare Register B Bit 3
.equ	OCR0B4	= 4 ; Output Compare Register B Bit 4
.equ	OCR0B5	= 5 ; Output Compare Register B Bit 5
.equ	OCR0B6	= 6 ; Output Compare Register B Bit 6
.equ	OCR0B7	= 7 ; Output Compare Register B Bit 7

; TIMSK0 - Timer/Counter Interrupt Mask Register
.equ	TOIE0	= 0 ; Timer/Counter0 Overflow Interrupt Enable
.equ	OCIE0A	= 1 ; Timer/Counter0 Output Compare A Interrupt Enable
.equ	OCIE0B	= 2 ; Timer/Counter0 Output Compare B Interrupt Enable
.equ	ICIE0	= 3 ; Timer/Counter n Input Capture Interrupt Enable

; TIFR0 - Timer/Counter Interrupt Flag register
.equ	TOV0	= 0 ; Timer/Counter0 Overflow Flag
.equ	OCF0A	= 1 ; Timer/Counter0 Output Compare Flag A
.equ	OCF0B	= 2 ; Timer/Counter0 Output Compare Flag B
.equ	ICF0	= 3 ; Timer/Counter 0 Input Capture Flag

; GTCCR - General Timer/Counter Control Register


; ***** BOOT_LOAD *****************
; SPMCSR - Store Program Memory Control and Status Register
.equ	SPMEN	= 0 ; Store Program Memory Enable
.equ	PGERS	= 1 ; Page Erase
.equ	PGWRT	= 2 ; Page Write
.equ	LBSET	= 3 ; Lock Bit Set
.equ	RWWSRE	= 4 ; Read-While-Write Section Read Enable
.equ	SIGRD	= 5 ; Signature Row Read
.equ	RWWSB	= 6 ; Read-While-Write Section Busy
.equ	SPMIE	= 7 ; SPM Interrupt Enable


; ***** AD_CONVERTER *****************
; ADSCSRA - ADC Synchronization Control and Status Register
.equ	SCMD0	= 0 ; Synchronization Command
.equ	SCMD1	= 1 ; Synchronization Command
.equ	SBSY	= 2 ; Synchronization Busy

; ADSCSRB - ADC Synchronization Control and Status Register
.equ	CADICRB	= 0 ; CADIC Data Read Out Busy
.equ	CADACRB	= 1 ; CADAC Data Read Out Busy
.equ	CADICPS	= 2 ; C-ADC Instantaneous Conversion Polarity Status
.equ	VADICRB	= 4 ; VADIC Data Read Out Busy
.equ	VADACRB	= 5 ; VADAC Data Read Out Busy
.equ	VADICPS	= 6 ; V-ADC Instantaneous Conversion Polarity Status

; ADCRA - ADC Control Register A
.equ	CKSEL	= 0 ; Sampling Clock Select
.equ	ADCMS0	= 1 ; C-ADC Chopper Mode Select
.equ	ADCMS1	= 2 ; C-ADC Chopper Mode Select
.equ	ADPSEL	= 3 ; ADC Polarity Select

; ADCRB - ADC Control Register B
.equ	ADADES0	= 0 ; Accumulated Decimation Ratio Select
.equ	ADADES1	= 1 ; Accumulated Decimation Ratio Select
.equ	ADADES2	= 2 ; Accumulated Decimation Ratio Select
.equ	ADIDES0	= 3 ; Instantaneous Decimation Ratio Select
.equ	ADIDES1	= 4 ; Instantaneous Decimation Ratio Select

; ADCRC - ADC Control Register B
.equ	CADRCT0	= 0 ; C-ADC Regular Current Count Threshold
.equ	CADRCT1	= 1 ; C-ADC Regular Current Count Threshold
.equ	CADRCT2	= 2 ; C-ADC Regular Current Count Threshold
.equ	CADRCT3	= 3 ; C-ADC Regular Current Count Threshold
.equ	CADRCM0	= 4 ; C-ADC Regular Current Comparator Mode
.equ	CADRCM1	= 5 ; C-ADC Regular Current Comparator Mode
.equ	CADEN	= 7 ; C-ADC Enable

; ADCRD - ADC Control Register D
.equ	CADDSEL	= 0 ; C-ADC Diagnostics Channel Select
.equ	CADPDM0	= 1 ; C-ADC Pin Diagnostics Mode
.equ	CADPDM1	= 2 ; C-ADC Pin Diagnostics Mode
.equ	CADG0	= 3 ; C-ADC Gain
.equ	CADG1	= 4 ; C-ADC Gain
.equ	CADG2	= 5 ; C-ADC Gain

; ADCRE - ADC Control Register E
.equ	VADMUX0	= 0 ; V-ADC Channel Select
.equ	VADMUX1	= 1 ; V-ADC Channel Select
.equ	VADMUX2	= 2 ; V-ADC Channel Select
.equ	VADPDM0	= 3 ; V-ADC Pin Diagnostics Mode
.equ	VADPDM1	= 4 ; V-ADC Pin Diagnostics Mode
.equ	VADREFS	= 5 ; V-ADC Reference Select
.equ	VADEN	= 7 ; V-ADC Enable

; ADIFR - ADC Interrupt Flag Register
.equ	CADICIF	= 0 ; C-ADC Instantaneous Current Interrupt Flag
.equ	CADACIF	= 1 ; C-ADC Accumulated Current Interrupt Flag
.equ	CADRCIF	= 2 ; C-ADC Regulator Current Interrupt Flag
.equ	VADICIF	= 4 ; V-DAC Instantaneous Voltage Interrupt Flag
.equ	VADACIF	= 5 ; V-ADC Accumulated Voltage Interrupt Flag

; ADIMR - ADC Interrupt Mask Register
.equ	CADICIE	= 0 ; C-ADC Instantaneous Current Interrupt Enable
.equ	CADACIE	= 1 ; C-ADC Accumulated Current Interrupt Enable
.equ	CADRCIE	= 2 ; C-ADC Regulator Current Interrupt Enable
.equ	VADICIE	= 4 ; V-DAC Instantaneous Voltage Interrupt Enable
.equ	VADACIE	= 5 ; V-ADC Accumulated Voltage Interrupt Enable

; CADRCL - CC-ADC Regulator Current Comparator Threshold Level
.equ	CADRCLH0	= 0 ; CC-ADC Regulator Current Comparator Threshold Level High Bit 8
.equ	CADRCLH1	= 1 ; CC-ADC Regulator Current Comparator Threshold Level High Bit 9
.equ	CADRCLH2	= 2 ; CC-ADC Regulator Current Comparator Threshold Level High Bit 10
.equ	CADRCLH3	= 3 ; CC-ADC Regulator Current Comparator Threshold Level High Bit 11
.equ	CADRCLH4	= 4 ; CC-ADC Regulator Current Comparator Threshold Level High Bit 12
.equ	CADRCLH5	= 5 ; CC-ADC Regulator Current Comparator Threshold Level High Bit 13
.equ	CADRCLH6	= 6 ; CC-ADC Regulator Current Comparator Threshold Level High Bit 14
.equ	CADRCLH7	= 7 ; CC-ADC Regulator Current Comparator Threshold Level High Bit 15

.equ	CADRCLL0	= 0 ; CC-ADC Regulator Current Comparator Threshold Level Low Bit 0
.equ	CADRCLL1	= 1 ; CC-ADC Regulator Current Comparator Threshold Level Low Bit 1
.equ	CADRCLL2	= 2 ; CC-ADC Regulator Current Comparator Threshold Level Low Bit 2
.equ	CADRCLL3	= 3 ; CC-ADC Regulator Current Comparator Threshold Level Low Bit 3
.equ	CADRCLL4	= 4 ; CC-ADC Regulator Current Comparator Threshold Level Low Bit 4
.equ	CADRCLL5	= 5 ; CC-ADC Regulator Current Comparator Threshold Level Low Bit 5
.equ	CADRCLL6	= 6 ; CC-ADC Regulator Current Comparator Threshold Level Low Bit 6
.equ	CADRCLL7	= 7 ; CC-ADC Regulator Current Comparator Threshold Level Low Bit 7

; VADIC - V-ADC Instantaneous Conversion Result
.equ	VADICH0	= 0 ; V-ADC Instantaneous Conversion Result High Bit 8
.equ	VADICH1	= 1 ; V-ADC Instantaneous Conversion Result High Bit 9
.equ	VADICH2	= 2 ; V-ADC Instantaneous Conversion Result High Bit 10
.equ	VADICH3	= 3 ; V-ADC Instantaneous Conversion Result High Bit 11
.equ	VADICH4	= 4 ; V-ADC Instantaneous Conversion Result High Bit 12
.equ	VADICH5	= 5 ; V-ADC Instantaneous Conversion Result High Bit 13
.equ	VADICH6	= 6 ; V-ADC Instantaneous Conversion Result High Bit 14
.equ	VADICH7	= 7 ; V-ADC Instantaneous Conversion Result High Bit 15

.equ	VADICL0	= 0 ; V-ADC Instantaneous Conversion Result Low Bit 0
.equ	VADICL1	= 1 ; V-ADC Instantaneous Conversion Result Low Bit 1
.equ	VADICL2	= 2 ; V-ADC Instantaneous Conversion Result Low Bit 2
.equ	VADICL3	= 3 ; V-ADC Instantaneous Conversion Result Low Bit 3
.equ	VADICL4	= 4 ; V-ADC Instantaneous Conversion Result Low Bit 4
.equ	VADICL5	= 5 ; V-ADC Instantaneous Conversion Result Low Bit 5
.equ	VADICL6	= 6 ; V-ADC Instantaneous Conversion Result Low Bit 6
.equ	VADICL7	= 7 ; V-ADC Instantaneous Conversion Result Low Bit 7

; VADAC3 - V-ADC Accumulated Conversion Result
.equ	VADAC30	= 0 ; V-ADC Accumulated Conversion Result Bit 0
.equ	VADAC31	= 1 ; V-ADC Accumulated Conversion Result Bit 1
.equ	VADAC32	= 2 ; V-ADC Accumulated Conversion Result Bit 2
.equ	VADAC33	= 3 ; V-ADC Accumulated Conversion Result Bit 3
.equ	VADAC34	= 4 ; V-ADC Accumulated Conversion Result Bit 4
.equ	VADAC35	= 5 ; V-ADC Accumulated Conversion Result Bit 5
.equ	VADAC36	= 6 ; V-ADC Accumulated Conversion Result Bit 6
.equ	VADAC37	= 7 ; V-ADC Accumulated Conversion Result Bit 7

; VADAC2 - V-ADC Accumulated Conversion Result
.equ	VADAC20	= 0 ; V-ADC Accumulated Conversion Result Bit 0
.equ	VADAC21	= 1 ; V-ADC Accumulated Conversion Result Bit 1
.equ	VADAC22	= 2 ; V-ADC Accumulated Conversion Result Bit 2
.equ	VADAC23	= 3 ; V-ADC Accumulated Conversion Result Bit 3
.equ	VADAC24	= 4 ; V-ADC Accumulated Conversion Result Bit 4
.equ	VADAC25	= 5 ; V-ADC Accumulated Conversion Result Bit 5
.equ	VADAC26	= 6 ; V-ADC Accumulated Conversion Result Bit 6
.equ	VADAC27	= 7 ; V-ADC Accumulated Conversion Result Bit 7

; VADAC1 - V-ADC Accumulated Conversion Result
.equ	VADAC10	= 0 ; V-ADC Accumulated Conversion Result Bit 0
.equ	VADAC11	= 1 ; V-ADC Accumulated Conversion Result Bit 1
.equ	VADAC12	= 2 ; V-ADC Accumulated Conversion Result Bit 2
.equ	VADAC13	= 3 ; V-ADC Accumulated Conversion Result Bit 3
.equ	VADAC14	= 4 ; V-ADC Accumulated Conversion Result Bit 4
.equ	VADAC15	= 5 ; V-ADC Accumulated Conversion Result Bit 5
.equ	VADAC16	= 6 ; V-ADC Accumulated Conversion Result Bit 6
.equ	VADAC17	= 7 ; V-ADC Accumulated Conversion Result Bit 7

; VADAC0 - V-ADC Accumulated Conversion Result
.equ	VADAC00	= 0 ; V-ADC Accumulated Conversion Result Bit 0
.equ	VADAC01	= 1 ; V-ADC Accumulated Conversion Result Bit 1
.equ	VADAC02	= 2 ; V-ADC Accumulated Conversion Result Bit 2
.equ	VADAC03	= 3 ; V-ADC Accumulated Conversion Result Bit 3
.equ	VADAC04	= 4 ; V-ADC Accumulated Conversion Result Bit 4
.equ	VADAC05	= 5 ; V-ADC Accumulated Conversion Result Bit 5
.equ	VADAC06	= 6 ; V-ADC Accumulated Conversion Result Bit 6
.equ	VADAC07	= 7 ; V-ADC Accumulated Conversion Result Bit 7

; CADIC - C-ADC Instantaneous Conversion Result
.equ	CADICH0	= 0 ; C-ADC Instantaneous Conversion Result High Bit 8
.equ	CADICH1	= 1 ; C-ADC Instantaneous Conversion Result High Bit 9
.equ	CADICH2	= 2 ; C-ADC Instantaneous Conversion Result High Bit 10
.equ	CADICH3	= 3 ; C-ADC Instantaneous Conversion Result High Bit 11
.equ	CADICH4	= 4 ; C-ADC Instantaneous Conversion Result High Bit 12
.equ	CADICH5	= 5 ; C-ADC Instantaneous Conversion Result High Bit 13
.equ	CADICH6	= 6 ; C-ADC Instantaneous Conversion Result High Bit 14
.equ	CADICH7	= 7 ; C-ADC Instantaneous Conversion Result High Bit 15

.equ	CADICL0	= 0 ; C-ADC Instantaneous Conversion Result Low Bit 0
.equ	CADICL1	= 1 ; C-ADC Instantaneous Conversion Result Low Bit 1
.equ	CADICL2	= 2 ; C-ADC Instantaneous Conversion Result Low Bit 2
.equ	CADICL3	= 3 ; C-ADC Instantaneous Conversion Result Low Bit 3
.equ	CADICL4	= 4 ; C-ADC Instantaneous Conversion Result Low Bit 4
.equ	CADICL5	= 5 ; C-ADC Instantaneous Conversion Result Low Bit 5
.equ	CADICL6	= 6 ; C-ADC Instantaneous Conversion Result Low Bit 6
.equ	CADICL7	= 7 ; C-ADC Instantaneous Conversion Result Low Bit 7

; CADAC3 - C-ADC Accumulated Conversion Result
.equ	CADAC30	= 0 ; C-ADC Accumulated Conversion Result Bit 0
.equ	CADAC31	= 1 ; C-ADC Accumulated Conversion Result Bit 1
.equ	CADAC32	= 2 ; C-ADC Accumulated Conversion Result Bit 2
.equ	CADAC33	= 3 ; C-ADC Accumulated Conversion Result Bit 3
.equ	CADAC34	= 4 ; C-ADC Accumulated Conversion Result Bit 4
.equ	CADAC35	= 5 ; C-ADC Accumulated Conversion Result Bit 5
.equ	CADAC36	= 6 ; C-ADC Accumulated Conversion Result Bit 6
.equ	CADAC37	= 7 ; C-ADC Accumulated Conversion Result Bit 7

; CADAC2 - C-ADC Accumulated Conversion Result
.equ	CADAC20	= 0 ; C-ADC Accumulated Conversion Result Bit 0
.equ	CADAC21	= 1 ; C-ADC Accumulated Conversion Result Bit 1
.equ	CADAC22	= 2 ; C-ADC Accumulated Conversion Result Bit 2
.equ	CADAC23	= 3 ; C-ADC Accumulated Conversion Result Bit 3
.equ	CADAC24	= 4 ; C-ADC Accumulated Conversion Result Bit 4
.equ	CADAC25	= 5 ; C-ADC Accumulated Conversion Result Bit 5
.equ	CADAC26	= 6 ; C-ADC Accumulated Conversion Result Bit 6
.equ	CADAC27	= 7 ; C-ADC Accumulated Conversion Result Bit 7

; CADAC1 - C-ADC Accumulated Conversion Result
.equ	CADAC10	= 0 ; C-ADC Accumulated Conversion Result Bit 0
.equ	CADAC11	= 1 ; C-ADC Accumulated Conversion Result Bit 1
.equ	CADAC12	= 2 ; C-ADC Accumulated Conversion Result Bit 2
.equ	CADAC13	= 3 ; C-ADC Accumulated Conversion Result Bit 3
.equ	CADAC14	= 4 ; C-ADC Accumulated Conversion Result Bit 4
.equ	CADAC15	= 5 ; C-ADC Accumulated Conversion Result Bit 5
.equ	CADAC16	= 6 ; C-ADC Accumulated Conversion Result Bit 6
.equ	CADAC17	= 7 ; C-ADC Accumulated Conversion Result Bit 7

; CADAC0 - C-ADC Accumulated Conversion Result
.equ	CADAC00	= 0 ; C-ADC Accumulated Conversion Result Bit 0
.equ	CADAC01	= 1 ; C-ADC Accumulated Conversion Result Bit 1
.equ	CADAC02	= 2 ; C-ADC Accumulated Conversion Result Bit 2
.equ	CADAC03	= 3 ; C-ADC Accumulated Conversion Result Bit 3
.equ	CADAC04	= 4 ; C-ADC Accumulated Conversion Result Bit 4
.equ	CADAC05	= 5 ; C-ADC Accumulated Conversion Result Bit 5
.equ	CADAC06	= 6 ; C-ADC Accumulated Conversion Result Bit 6
.equ	CADAC07	= 7 ; C-ADC Accumulated Conversion Result Bit 7


; ***** PORTA *****************
; PORTA - Port A Data Register
.equ	PORTA0	= 0 ; Port A Data Register Bit 0
.equ	PORTA1	= 1 ; Port A Data Register Bit 1

; DDRA - Port A Data Direction Register
.equ	DDRA0	= 0 ; Port A Data Direction Register Bit 0
.equ	DDRA1	= 1 ; Port A Data Direction Register Bit 1

; PINA - Port A Input Pins
.equ	PINA0	= 0 ; Port A Input Pins Bit 0
.equ	PINA1	= 1 ; Port A Input Pins Bit 1


; ***** BANDGAP *****************
; BGCSRA - Bandgap Control and Status Register A
.equ	BGSC0	= 0 ; Band Gap Sample Configuration
.equ	BGSC1	= 1 ; Band Gap Sample Configuration
.equ	BGSC2	= 2 ; Band Gap Sample Configuration

; BGCRA - Band Gap Calibration Register A
.equ	BGCN0	= 0 ; Band Gap Calibration Nominal
.equ	BGCN1	= 1 ; Band Gap Calibration Nominal
.equ	BGCN2	= 2 ; Band Gap Calibration Nominal
.equ	BGCN3	= 3 ; Band Gap Calibration Nominal
.equ	BGCN4	= 4 ; Band Gap Calibration Nominal
.equ	BGCN5	= 5 ; Band Gap Calibration Nominal
.equ	BGCN6	= 6 ; Band Gap Calibration Nominal
.equ	BGCN7	= 7 ; Band Gap Calibration Nominal

; BGCRB - Band Gap Calibration Register B
.equ	BGCL0	= 0 ; Band Gap Calibration Linear
.equ	BGCL1	= 1 ; Band Gap Calibration Linear
.equ	BGCL2	= 2 ; Band Gap Calibration Linear
.equ	BGCL3	= 3 ; Band Gap Calibration Linear
.equ	BGCL4	= 4 ; Band Gap Calibration Linear
.equ	BGCL5	= 5 ; Band Gap Calibration Linear
.equ	BGCL6	= 6 ; Band Gap Calibration Linear
.equ	BGCL7	= 7 ; Band Gap Calibration Linear

; BGLR - Band Gap Lock Register
.equ	BGPL	= 0 ; Band Gap Lock
.equ	BGPLE	= 1 ; Band Gap Lock Enable


; ***** LINUART *****************
; LINCR - LIN Control Register
.equ	LCMD0	= 0 ; LIN Command and Mode bits
.equ	LCMD1	= 1 ; LIN Command and Mode bits
.equ	LCMD2	= 2 ; LIN Command and Mode bits
.equ	LENA	= 3 ; LIN or UART Enable
.equ	LCONF0	= 4 ; LIN Configuration bits
.equ	LCONF1	= 5 ; LIN Configuration bits
.equ	LIN13	= 6 ; LIN Standard
.equ	LSWRES	= 7 ; Software Reset

; LINSIR - LIN Status and Interrupt Register
.equ	LRXOK	= 0 ; Receive Performed Interrupt
.equ	LTXOK	= 1 ; Transmit Performed Interrupt
.equ	LIDOK	= 2 ; Identifier Interrupt
.equ	LERR	= 3 ; Error Interrupt
.equ	LBUSY	= 4 ; Busy Signal
.equ	LIDST0	= 5 ; Identifier Status bits
.equ	LIDST1	= 6 ; Identifier Status bits
.equ	LIDST2	= 7 ; Identifier Status bits

; LINENIR - LIN Enable Interrupt Register
.equ	LENRXOK	= 0 ; Enable Receive Performed Interrupt
.equ	LENTXOK	= 1 ; Enable Transmit Performed Interrupt
.equ	LENIDOK	= 2 ; Enable Identifier Interrupt
.equ	LENERR	= 3 ; Enable Error Interrupt

; LINERR - LIN Error Register
.equ	LBERR	= 0 ; Bit Error Flag
.equ	LCERR	= 1 ; Checksum Error Flag
.equ	LPERR	= 2 ; Parity Error Flag
.equ	LSERR	= 3 ; Synchronization Error Flag
.equ	LFERR	= 4 ; Framing Error Flag
.equ	LOVERR	= 5 ; Overrun Error Flag
.equ	LTOERR	= 6 ; Frame Time Out Error Flag
.equ	LABORT	= 7 ; Abort Flag

; LINBTR - LIN Bit Timing Register
.equ	LBT0	= 0 ; LIN Bit Timing bits
.equ	LBT1	= 1 ; LIN Bit Timing bits
.equ	LBT2	= 2 ; LIN Bit Timing bits
.equ	LBT3	= 3 ; LIN Bit Timing bits
.equ	LBT4	= 4 ; LIN Bit Timing bits
.equ	LBT5	= 5 ; LIN Bit Timing bits
.equ	LDISR	= 7 ; Disable Bit Timing Resynchronization

; LINBRRL - LIN Baud Rate Low Register
.equ	LDIV0	= 0 ; 
.equ	LDIV1	= 1 ; 
.equ	LDIV2	= 2 ; 
.equ	LDIV3	= 3 ; 
.equ	LDIV4	= 4 ; 
.equ	LDIV5	= 5 ; 
.equ	LDIV6	= 6 ; 
.equ	LDIV7	= 7 ; 

; LINBRRH - LIN Baud Rate High Register
.equ	LDIV8	= 0 ; 
.equ	LDIV9	= 1 ; 
.equ	LDIV10	= 2 ; 
.equ	LDIV11	= 3 ; 

; LINDLR - LIN Data Length Register
.equ	LRXDL0	= 0 ; LIN Receive Data Length bits
.equ	LRXDL1	= 1 ; LIN Receive Data Length bits
.equ	LRXDL2	= 2 ; LIN Receive Data Length bits
.equ	LRXDL3	= 3 ; LIN Receive Data Length bits
.equ	LTXDL0	= 4 ; LIN Transmit Data Length bits
.equ	LTXDL1	= 5 ; LIN Transmit Data Length bits
.equ	LTXDL2	= 6 ; LIN Transmit Data Length bits
.equ	LTXDL3	= 7 ; LIN Transmit Data Length bits

; LINIDR - LIN Identifier Register
.equ	LID0	= 0 ; Identifier bit 5 or Data Length bits
.equ	LID1	= 1 ; Identifier bit 5 or Data Length bits
.equ	LID2	= 2 ; Identifier bit 5 or Data Length bits
.equ	LID3	= 3 ; Identifier bit 5 or Data Length bits
.equ	LID4	= 4 ; Identifier bit 5 or Data Length bits
.equ	LID5	= 5 ; Identifier bit 5 or Data Length bits
.equ	LP0	= 6 ; Parity bits
.equ	LP1	= 7 ; Parity bits

; LINSEL - LIN Data Buffer Selection Register
.equ	LINDX0	= 0 ; FIFO LIN Data Buffer Index bits
.equ	LINDX1	= 1 ; FIFO LIN Data Buffer Index bits
.equ	LINDX2	= 2 ; FIFO LIN Data Buffer Index bits
.equ	LAINC	= 3 ; Auto Increment of Data Buffer Index (Active Low)

; LINDAT - LIN Data Register
.equ	LDATA0	= 0 ; 
.equ	LDATA1	= 1 ; 
.equ	LDATA2	= 2 ; 
.equ	LDATA3	= 3 ; 
.equ	LDATA4	= 4 ; 
.equ	LDATA5	= 5 ; 
.equ	LDATA6	= 6 ; 
.equ	LDATA7	= 7 ; 


; ***** CPU *****************
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
.equ	SPH1	= 1 ; Stack Pointer  High Bit 9
.equ	SPH2	= 2 ; Stack Pointer  High Bit 10
.equ	SPH3	= 3 ; Stack Pointer  High Bit 11
.equ	SPH4	= 4 ; Stack Pointer  High Bit 12
.equ	SPH5	= 5 ; Stack Pointer  High Bit 13
.equ	SPH6	= 6 ; Stack Pointer  High Bit 14
.equ	SPH7	= 7 ; Stack Pointer  High Bit 15

.equ	SPL0	= 0 ; Stack Pointer  Low Bit 0
.equ	SPL1	= 1 ; Stack Pointer  Low Bit 1
.equ	SPL2	= 2 ; Stack Pointer  Low Bit 2
.equ	SPL3	= 3 ; Stack Pointer  Low Bit 3
.equ	SPL4	= 4 ; Stack Pointer  Low Bit 4
.equ	SPL5	= 5 ; Stack Pointer  Low Bit 5
.equ	SPL6	= 6 ; Stack Pointer  Low Bit 6
.equ	SPL7	= 7 ; Stack Pointer  Low Bit 7

; MCUCR - MCU Control Register
.equ	IVCE	= 0 ; Interrupt Vector Change Enable
.equ	IVSEL	= 1 ; Interrupt Vector Select
.equ	PUD	= 4 ; Pull-up disable
.equ	CKOE	= 5 ; Clock Output Enable

; MCUSR - MCU Status Register
.equ	PORF	= 0 ; Power-on reset flag
.equ	EXTRF	= 1 ; External Reset Flag
.equ	BODRF	= 2 ; Brown-out Reset Flag
.equ	WDRF	= 3 ; Watchdog Reset Flag
.equ	OCDRF	= 4 ; OCD Reset Flag

; SOSCCALA - Slow Oscillator Calibration Register A
.equ	SOSCCALA0	= 0 ; Slow Oscillator Calibration Register A Bit 0
.equ	SOSCCALA1	= 1 ; Slow Oscillator Calibration Register A Bit 1
.equ	SOSCCALA2	= 2 ; Slow Oscillator Calibration Register A Bit 2
.equ	SOSCCALA3	= 3 ; Slow Oscillator Calibration Register A Bit 3
.equ	SOSCCALA4	= 4 ; Slow Oscillator Calibration Register A Bit 4
.equ	SOSCCALA5	= 5 ; Slow Oscillator Calibration Register A Bit 5
.equ	SOSCCALA6	= 6 ; Slow Oscillator Calibration Register A Bit 6
.equ	SOSCCALA7	= 7 ; Slow Oscillator Calibration Register A Bit 7

; SOSCCALB - Oscillator Calibration Register B
.equ	SOSCCALB0	= 0 ; Oscillator Calibration Register B Bit 0
.equ	SOSCCALB1	= 1 ; Oscillator Calibration Register B Bit 1
.equ	SOSCCALB2	= 2 ; Oscillator Calibration Register B Bit 2
.equ	SOSCCALB3	= 3 ; Oscillator Calibration Register B Bit 3
.equ	SOSCCALB4	= 4 ; Oscillator Calibration Register B Bit 4
.equ	SOSCCALB5	= 5 ; Oscillator Calibration Register B Bit 5
.equ	SOSCCALB6	= 6 ; Oscillator Calibration Register B Bit 6
.equ	SOSCCALB7	= 7 ; Oscillator Calibration Register B Bit 7

; PLLCSR - PLL Control and Status Register
.equ	PLLCIE	= 0 ; PLL Lock Change Interrupt Enable
.equ	PLLCIF	= 1 ; PLL Lock Change Interrupt Flag
.equ	LOCK	= 4 ; PLL Lock
.equ	SWEN	= 5 ; PLL Software Enable

; SMCR - Sleep Mode Control Register
.equ	SE	= 0 ; Sleep Enable
.equ	SM0	= 1 ; Sleep Mode Select bits
.equ	SM1	= 2 ; Sleep Mode Select bits
.equ	SM2	= 3 ; Sleep Mode Select bits

; GPIOR2 - General Purpose IO Register 2
.equ	GPIOR20	= 0 ; General Purpose IO Register 2 Bit 0
.equ	GPIOR21	= 1 ; General Purpose IO Register 2 Bit 1
.equ	GPIOR22	= 2 ; General Purpose IO Register 2 Bit 2
.equ	GPIOR23	= 3 ; General Purpose IO Register 2 Bit 3
.equ	GPIOR24	= 4 ; General Purpose IO Register 2 Bit 4
.equ	GPIOR25	= 5 ; General Purpose IO Register 2 Bit 5
.equ	GPIOR26	= 6 ; General Purpose IO Register 2 Bit 6
.equ	GPIOR27	= 7 ; General Purpose IO Register 2 Bit 7

; GPIOR1 - General Purpose IO Register 1
.equ	GPIOR10	= 0 ; General Purpose IO Register 1 Bit 0
.equ	GPIOR11	= 1 ; General Purpose IO Register 1 Bit 1
.equ	GPIOR12	= 2 ; General Purpose IO Register 1 Bit 2
.equ	GPIOR13	= 3 ; General Purpose IO Register 1 Bit 3
.equ	GPIOR14	= 4 ; General Purpose IO Register 1 Bit 4
.equ	GPIOR15	= 5 ; General Purpose IO Register 1 Bit 5
.equ	GPIOR16	= 6 ; General Purpose IO Register 1 Bit 6
.equ	GPIOR17	= 7 ; General Purpose IO Register 1 Bit 7

; GPIOR0 - General Purpose IO Register 0
.equ	GPIOR00	= 0 ; General Purpose IO Register 0 Bit 0
.equ	GPIOR01	= 1 ; General Purpose IO Register 0 Bit 1
.equ	GPIOR02	= 2 ; General Purpose IO Register 0 Bit 2
.equ	GPIOR03	= 3 ; General Purpose IO Register 0 Bit 3
.equ	GPIOR04	= 4 ; General Purpose IO Register 0 Bit 4
.equ	GPIOR05	= 5 ; General Purpose IO Register 0 Bit 5
.equ	GPIOR06	= 6 ; General Purpose IO Register 0 Bit 6
.equ	GPIOR07	= 7 ; General Purpose IO Register 0 Bit 7

; DIDR0 - Digital Input Disable Register
.equ	PA0DID	= 0 ; When this bit is written logic one, the digital input buffer of the corresponding V_ADC pin is disabled.
.equ	PA1DID	= 1 ; When this bit is written logic one, the digital input buffer of the corresponding V_ADC pin is disabled.

; PRR0 - Power Reduction Register 0
.equ	PRTIM0	= 0 ; Power Reduction Timer/Counter0
.equ	PRTIM1	= 1 ; Power Reduction Timer/Counter1
.equ	PRSPI	= 2 ; Power reduction SPI
.equ	PRLIN	= 3 ; Power Reduction LIN UART Interface

; CLKPR - Clock Prescale Register
.equ	CLKPS0	= 0 ; Clock Prescaler Select Bits
.equ	CLKPS1	= 1 ; Clock Prescaler Select Bits
.equ	CLKPCE	= 7 ; Clock Prescaler Change Enable


; ***** EXTERNAL_INTERRUPT *****************
; EICRA - External Interrupt Control Register
.equ	ISC00	= 0 ; External Interrupt Sense Control 0 Bit 0
.equ	ISC01	= 1 ; External Interrupt Sense Control 0 Bit 1

; EIMSK - External Interrupt Mask Register
.equ	INT0	= 0 ; External Interrupt Request 0 Enable

; EIFR - External Interrupt Flag Register
.equ	INTF0	= 0 ; External Interrupt Flag 0

; PCICR - Pin Change Interrupt Control Register
.equ	PCIE0	= 0 ; Pin Change Interrupt Enables
.equ	PCIE1	= 1 ; Pin Change Interrupt Enables

; PCIFR - Pin Change Interrupt Flag Register
.equ	PCIF0	= 0 ; Pin Change Interrupt Flags
.equ	PCIF1	= 1 ; Pin Change Interrupt Flags

; PCMSK1 - Pin Change Enable Mask Register 1
.equ	PCMSK10	= 0 ; Pin Change Enable Mask Register 1 Bit 0
.equ	PCMSK11	= 1 ; Pin Change Enable Mask Register 1 Bit 1
.equ	PCMSK12	= 2 ; Pin Change Enable Mask Register 1 Bit 2
.equ	PCMSK13	= 3 ; Pin Change Enable Mask Register 1 Bit 3
.equ	PCMSK14	= 4 ; Pin Change Enable Mask Register 1 Bit 4
.equ	PCMSK15	= 5 ; Pin Change Enable Mask Register 1 Bit 5
.equ	PCMSK16	= 6 ; Pin Change Enable Mask Register 1 Bit 6
.equ	PCMSK17	= 7 ; Pin Change Enable Mask Register 1 Bit 7

; PCMSK0 - Pin Change Enable Mask Register 0
.equ	PCMSK00	= 0 ; Pin Change Enable Mask Register 0 Bit 0
.equ	PCMSK01	= 1 ; Pin Change Enable Mask Register 0 Bit 1


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

; WDTCLR - Watchdog Timer Configuration Lock Register
.equ	WDCLE	= 0 ; Watchdog Timer Comfiguration Lock Enable
.equ	WDCL0	= 1 ; Watchdog Timer Comfiguration Lock bits
.equ	WDCL1	= 2 ; Watchdog Timer Comfiguration Lock bits


; ***** WAKEUP_TIMER *****************
; WUTCSR - Wake-up Timer Control and Status Register
.equ	WUTP0	= 0 ; Wake-up Timer Prescaler Bits
.equ	WUTP1	= 1 ; Wake-up Timer Prescaler Bits
.equ	WUTP2	= 2 ; Wake-up Timer Prescaler Bits
.equ	WUTE	= 3 ; Wake-up Timer Enable
.equ	WUTR	= 4 ; Wake-up Timer Reset
.equ	WUTIE	= 6 ; Wake-up Timer Interrupt Enable
.equ	WUTIF	= 7 ; Wake-up Timer Interrupt Flag


; ***** FUSE *****************
; LOW - 
.equ	OSCSEL0	= 0 ; Oscillator select
.equ	SUT0	= 1 ; Select start-up time
.equ	SUT1	= 2 ; Select start-up time
.equ	CKDIV8	= 3 ; Divide clock by 8
.equ	BODEN	= 4 ; Enable BOD
.equ	SPIEN	= 5 ; Serial program downloading (SPI) enabled
.equ	EESAVE	= 6 ; Preserve EEPROM through the Chip Erase cycle
.equ	WDTON	= 7 ; Watch-dog Timer always on

; HIGH - 
.equ	BOOTRST	= 0 ; Boot Reset vector Enabled
.equ	BOOTSZ0	= 1 ; Select Boot Size
.equ	BOOTSZ1	= 2 ; Select Boot Size
.equ	DWEN	= 3 ; Debug Wire enable


; ***** LOCKBIT *****************
; LOCKBIT - 
.equ	LB1	= 0 ; Memory Lock
.equ	LB2	= 1 ; Memory Lock
.equ	BLB01	= 2 ; Boot Loader Protection Mode
.equ	BLB02	= 3 ; Boot Loader Protection Mode
.equ	BLB11	= 4 ; Boot Loader Protection Mode
.equ	BLB12	= 5 ; Boot Loader Protection Mode

; ***** CPU REGISTER DEFINITIONS *****************************************
.def	XH	= r27
.def	XL	= r26
.def	YH	= r29
.def	YL	= r28
.def	ZH	= r31
.def	ZL	= r30

; ***** DATA MEMORY DECLARATIONS *****************************************
.equ	FLASHSTART	= 0x0000 ; Note: Word address
.equ	FLASHEND	= 0x7FFF ; Note: Word address
.equ	IOEND	= 0x00FF
.equ	SRAM_START	= 0x0100
.equ	SRAM_SIZE	= 4096
.equ	RAMEND	= 0x10FF
.equ	E2END	= 0x03FF
.equ	EEPROMEND	= 0x03FF
.equ	EEADRBITS	= 10
.equ	XRAMEND	= 0x0000
#pragma AVRPART MEMORY PROG_FLASH 65536
#pragma AVRPART MEMORY INT_SRAM SIZE 4096
#pragma AVRPART MEMORY INT_SRAM START_ADDR 0x100
#pragma AVRPART MEMORY EEPROM 1024

; ***** INTERRUPT VECTORS ************************************************
.equ	INT0addr	 = 0x0002 ; External Interrupt 0
.equ	PCINT0addr	 = 0x0004 ; Pin Change Interrupt 0
.equ	PCINT1addr	 = 0x0006 ; Pin Change Interrupt 1
.equ	WDTaddr	 = 0x0008 ; Watchdog Timeout Interrupt
.equ	WAKEUPaddr	 = 0x000A ; Wakeup Timer Overflow
.equ	TIMER1_ICaddr	 = 0x000C ; Timer 1 Input capture
.equ	TIMER1_COMPAaddr	 = 0x000E ; Timer 1 Compare Match A
.equ	TIMER1_COMPBaddr	 = 0x0010 ; Timer 1 Compare Match B
.equ	TIMER1_OVFaddr	 = 0x0012 ; Timer 1 overflow
.equ	TIMER0_ICaddr	 = 0x0014 ; Timer 0 Input Capture
.equ	TIMER0_COMPAaddr	 = 0x0016 ; Timer 0 Comapre Match A
.equ	TIMER0_COMPBaddr	 = 0x0018 ; Timer 0 Compare Match B
.equ	TIMER0_OVFaddr	 = 0x001A ; Timer 0 Overflow
.equ	LIN_STATUSaddr	 = 0x001C ; LIN Status Interrupt
.equ	LIN_ERRORaddr	 = 0x001E ; LIN Error Interrupt
.equ	SPI_STCaddr	 = 0x0020 ; SPI Serial transfer complete
.equ	VADC_CONVaddr	 = 0x0022 ; Voltage ADC Instantaneous Conversion Complete
.equ	VADC_ACCaddr	 = 0x0024 ; Voltage ADC Accumulated Conversion Complete
.equ	CADC_CONVaddr	 = 0x0026 ; C-ADC Instantaneous Conversion Complete
.equ	CADC_REG_CURaddr	 = 0x0028 ; C-ADC Regular Current
.equ	CADC_ACCaddr	 = 0x002A ; C-ADC Accumulated Conversion Complete
.equ	EE_READYaddr	 = 0x002C ; EEPROM Ready
.equ	SPMaddr	 = 0x002E ; SPM Ready
.equ	PLLaddr	 = 0x0030 ; PLL Lock Change Interrupt

.equ	INT_VECTORS_SIZE	= 50 ; size in words

#endif /* _M64HVE2DEF_INC_ */

; ***** END OF FILE ******************************************************



