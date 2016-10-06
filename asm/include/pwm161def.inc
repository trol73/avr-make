;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ********************

;*************************************************************************
;* A P P L I C A T I O N   N O T E   F O R   T H E   A V R   F A M I L Y
;* 
;* Number            : AVR000
;* File Name         : pwm161def.inc
;* Title             : Register/Bit Definitions for the ATxmega128A1
;* Date              : Jan 31 2012
;* Version           : 1.00
;* Support E-mail    : avr@atmel.com
;* Target MCU        : AT90PWM161
;* 
;* DESCRIPTION
;* When including this file in the assembly program file, all I/O register 
;* names and I/O register bit names appearing in the data book can be used.
;* In addition, the six registers forming the three data pointers X, Y and 
;* Z have been assigned names XL - ZH. Highest RAM address for Internal 
;* SRAM is also defined 
;* 
;*************************************************************************

#ifndef _PWM161DEF_INC_
#define _PWM161DEF_INC_


#pragma partinc 0

; ***** SPECIFY DEVICE ***************************************************
.device	AT90PWM161
#pragma AVRPART ADMIN PART_NAME AT90PWM161
.equ	SIGNATURE_000	= 0x1E
.equ	SIGNATURE_001	= 0x94
.equ	SIGNATURE_002	= 0x8B

#pragma AVRPART CORE CORE_VERSION V3

; ***** I/O REGISTER DEFINITIONS *****************************************
; NOTE:
; Definitions marked "MEMORY MAPPED"are extended I/O ports
; and cannot be used with IN/OUT instructions
.equ	ICR1H	= 0x8D ; MEMORY MAPPED
.equ	ICR1L	= 0x8C ; MEMORY MAPPED
.equ	TCCR1B	= 0x8A ; MEMORY MAPPED
.equ	EICRA	= 0x89 ; MEMORY MAPPED
.equ	OSCCAL	= 0x88 ; MEMORY MAPPED
.equ	PLLCSR	= 0x87 ; MEMORY MAPPED
.equ	PRR	= 0x86 ; MEMORY MAPPED
.equ	CLKSELR	= 0x85 ; MEMORY MAPPED
.equ	CLKCSR	= 0x84 ; MEMORY MAPPED
.equ	CLKPR	= 0x83 ; MEMORY MAPPED
.equ	WDTCSR	= 0x82 ; MEMORY MAPPED
.equ	BGCCR	= 0x81 ; MEMORY MAPPED
.equ	BGCRR	= 0x80 ; MEMORY MAPPED
.equ	AC3CON	= 0x7F ; MEMORY MAPPED
.equ	AC2CON	= 0x7E ; MEMORY MAPPED
.equ	AC1CON	= 0x7D ; MEMORY MAPPED
.equ	AC3ECON	= 0x7C ; MEMORY MAPPED
.equ	AC2ECON	= 0x7B ; MEMORY MAPPED
.equ	AC1ECON	= 0x7A ; MEMORY MAPPED
.equ	AMP0CSR	= 0x79 ; MEMORY MAPPED
.equ	DIDR1	= 0x78 ; MEMORY MAPPED
.equ	DIDR0	= 0x77 ; MEMORY MAPPED
.equ	DACON	= 0x76 ; MEMORY MAPPED
.equ	PASDLY2	= 0x71 ; MEMORY MAPPED
.equ	PCNFE2	= 0x70 ; MEMORY MAPPED
.equ	POM2	= 0x6F ; MEMORY MAPPED
.equ	PSOC2	= 0x6E ; MEMORY MAPPED
.equ	PICR2H	= 0x6D ; MEMORY MAPPED
.equ	PICR2L	= 0x6C ; MEMORY MAPPED
.equ	PSOC0	= 0x6A ; MEMORY MAPPED
.equ	PICR0H	= 0x69 ; MEMORY MAPPED
.equ	PICR0L	= 0x68 ; MEMORY MAPPED
.equ	PFRC2B	= 0x67 ; MEMORY MAPPED
.equ	PFRC2A	= 0x66 ; MEMORY MAPPED
.equ	OCR2SAH	= 0x65 ; MEMORY MAPPED
.equ	OCR2SAL	= 0x64 ; MEMORY MAPPED
.equ	PFRC0B	= 0x63 ; MEMORY MAPPED
.equ	PFRC0A	= 0x62 ; MEMORY MAPPED
.equ	OCR0SAH	= 0x61 ; MEMORY MAPPED
.equ	OCR0SAL	= 0x60 ; MEMORY MAPPED
.equ	SREG	= 0x3F ; 
.equ	SPH	= 0x3E ; 
.equ	SPL	= 0x3D ; 
.equ	TCNT1H	= 0x3B ; 
.equ	TCNT1L	= 0x3A ; 
.equ	DACH	= 0x39 ; 
.equ	DACL	= 0x38 ; 
.equ	SPMCSR	= 0x37 ; 
.equ	SPDR	= 0x36 ; 
.equ	MCUCR	= 0x35 ; 
.equ	MCUSR	= 0x34 ; 
.equ	SMCR	= 0x33 ; 
.equ	OCR2RAH	= 0x2F ; 
.equ	OCR2RAL	= 0x2E ; 
.equ	ADCH	= 0x2D ; 
.equ	ADCL	= 0x2C ; 
.equ	OCR0RAH	= 0x2B ; 
.equ	OCR0RAL	= 0x2A ; 
.equ	OCR2RBH	= 0x29 ; 
.equ	OCR2RBL	= 0x28 ; 
.equ	OCR2SBH	= 0x27 ; 
.equ	OCR2SBL	= 0x26 ; 
.equ	OCR0RBH	= 0x25 ; 
.equ	OCR0RBL	= 0x24 ; 
.equ	OCR0SBH	= 0x23 ; 
.equ	OCR0SBL	= 0x22 ; 
.equ	EIMSK	= 0x21 ; 
.equ	EIFR	= 0x20 ; 
.equ	EEARH	= 0x1F ; 
.equ	EEARL	= 0x1E ; 
.equ	EEDR	= 0x1D ; 
.equ	EECR	= 0x1C ; 
.equ	GPIOR2	= 0x1B ; 
.equ	GPIOR1	= 0x1A ; 
.equ	GPIOR0	= 0x19 ; 
.equ	SPSR	= 0x18 ; 
.equ	SPCR	= 0x17 ; 
.equ	PCTL2	= 0x16 ; 
.equ	PCNF2	= 0x15 ; 
.equ	PIFR2	= 0x14 ; 
.equ	PIM2	= 0x13 ; 
.equ	PCTL0	= 0x12 ; 
.equ	PCNF0	= 0x11 ; 
.equ	PIFR0	= 0x10 ; 
.equ	PIM0	= 0x0F ; 
.equ	PORTE	= 0x0E ; 
.equ	DDRE	= 0x0D ; 
.equ	PINE	= 0x0C ; 
.equ	PORTD	= 0x0B ; 
.equ	DDRD	= 0x0A ; 
.equ	PIND	= 0x09 ; 
.equ	ADMUX	= 0x08 ; 
.equ	ADCSRB	= 0x07 ; 
.equ	ADCSRA	= 0x06 ; 
.equ	PORTB	= 0x05 ; 
.equ	DDRB	= 0x04 ; 
.equ	PINB	= 0x03 ; 
.equ	TIFR1	= 0x02 ; 
.equ	TIMSK1	= 0x01 ; 
.equ	ACSR	= 0x00 ; 


; ***** BIT DEFINITIONS **************************************************

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


; ***** PORTD *****************

; PORTD - Port D Data Register
.equ	PORTD0	= 0 ; Port D Data Register Bit 0
.equ	PORTD1	= 1 ; Port D Data Register Bit 1
.equ	PORTD2	= 2 ; Port D Data Register Bit 2
.equ	PORTD3	= 3 ; Port D Data Register Bit 3
.equ	PORTD4	= 4 ; Port D Data Register Bit 4
.equ	PORTD5	= 5 ; Port D Data Register Bit 5
.equ	PORTD6	= 6 ; Port D Data Register Bit 6
.equ	PORTD7	= 7 ; Port D Data Register Bit 7

; DDRD - Port D Data Direction Register
.equ	DDRD0	= 0 ; Port D Data Direction Register Bit 0
.equ	DDRD1	= 1 ; Port D Data Direction Register Bit 1
.equ	DDRD2	= 2 ; Port D Data Direction Register Bit 2
.equ	DDRD3	= 3 ; Port D Data Direction Register Bit 3
.equ	DDRD4	= 4 ; Port D Data Direction Register Bit 4
.equ	DDRD5	= 5 ; Port D Data Direction Register Bit 5
.equ	DDRD6	= 6 ; Port D Data Direction Register Bit 6
.equ	DDRD7	= 7 ; Port D Data Direction Register Bit 7

; PIND - Port D Input Pins
.equ	PIND0	= 0 ; Port D Input Pins Bit 0
.equ	PIND1	= 1 ; Port D Input Pins Bit 1
.equ	PIND2	= 2 ; Port D Input Pins Bit 2
.equ	PIND3	= 3 ; Port D Input Pins Bit 3
.equ	PIND4	= 4 ; Port D Input Pins Bit 4
.equ	PIND5	= 5 ; Port D Input Pins Bit 5
.equ	PIND6	= 6 ; Port D Input Pins Bit 6
.equ	PIND7	= 7 ; Port D Input Pins Bit 7


; ***** DA_CONVERTER *****************

; DACH - DAC Data Register High Byte
.equ	DACH0	= 0 ; DAC Data Register High Byte Bits
.equ	DACH1	= 1 ; DAC Data Register High Byte Bits
.equ	DACH2	= 2 ; DAC Data Register High Byte Bits
.equ	DACH3	= 3 ; DAC Data Register High Byte Bits
.equ	DACH4	= 4 ; DAC Data Register High Byte Bits
.equ	DACH5	= 5 ; DAC Data Register High Byte Bits
.equ	DACH6	= 6 ; DAC Data Register High Byte Bits
.equ	DACH7	= 7 ; DAC Data Register High Byte Bits

; DACL - DAC Data Register Low Byte
.equ	DACL0	= 0 ; DAC Data Register Low Byte Bits
.equ	DACL1	= 1 ; DAC Data Register Low Byte Bits
.equ	DACL2	= 2 ; DAC Data Register Low Byte Bits
.equ	DACL3	= 3 ; DAC Data Register Low Byte Bits
.equ	DACL4	= 4 ; DAC Data Register Low Byte Bits
.equ	DACL5	= 5 ; DAC Data Register Low Byte Bits
.equ	DACL6	= 6 ; DAC Data Register Low Byte Bits
.equ	DACL7	= 7 ; DAC Data Register Low Byte Bits

; DACON - DAC Control Register
.equ	DAEN	= 0 ; DAC Enable Bit
.equ	DALA	= 2 ; DAC Left Adjust
.equ	DATS0	= 4 ; DAC Trigger Selection Bits
.equ	DATS1	= 5 ; DAC Trigger Selection Bits
.equ	DATS2	= 6 ; DAC Trigger Selection Bits
.equ	DAATE	= 7 ; DAC Auto Trigger Enable Bit


; ***** PORTE *****************

; PORTE - Port E Data Register
.equ	PORTE0	= 0 ; Port E Data Register Bit 0
.equ	PORTE1	= 1 ; Port E Data Register Bit 1
.equ	PORTE2	= 2 ; Port E Data Register Bit 2

; DDRE - Port E Data Direction Register
.equ	DDRE0	= 0 ; Port E Data Direction Register Bit 0
.equ	DDRE1	= 1 ; Port E Data Direction Register Bit 1
.equ	DDRE2	= 2 ; Port E Data Direction Register Bit 2

; PINE - Port E Input Pins
.equ	PINE0	= 0 ; Port E Input Pins Bit 0
.equ	PINE1	= 1 ; Port E Input Pins Bit 1
.equ	PINE2	= 2 ; Port E Input Pins Bit 2


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


; ***** WATCHDOG *****************

; WDTCSR - Watchdog Timer Control Register
.equ	WDE	= 3 ; Watch Dog Enable
.equ	WDCE	= 4 ; Watchdog Change Enable
.equ	WDP0	= 0 ; Watchdog Timer Prescaler Bits
.equ	WDP1	= 1 ; Watchdog Timer Prescaler Bits
.equ	WDP2	= 2 ; Watchdog Timer Prescaler Bits
.equ	WDIE	= 6 ; Watchdog Timeout Interrupt Enable
.equ	WDIF	= 7 ; Watchdog Timeout Interrupt Flag


; ***** EXTERNAL_INTERRUPT *****************

; EICRA - External Interrupt Control Register A
.equ	ISC00	= 0 ; External Interrupt Sense Control Bit
.equ	ISC01	= 1 ; External Interrupt Sense Control Bit
.equ	ISC10	= 2 ; External Interrupt Sense Control Bit
.equ	ISC11	= 3 ; External Interrupt Sense Control Bit
.equ	ISC20	= 4 ; External Interrupt Sense Control Bit
.equ	ISC21	= 5 ; External Interrupt Sense Control Bit

; EIMSK - External Interrupt Mask Register
.equ	INT0	= 0 ; External Interrupt Request 2 Enable
.equ	INT1	= 1 ; External Interrupt Request 2 Enable
.equ	INT2	= 2 ; External Interrupt Request 2 Enable

; EIFR - External Interrupt Flag Register
.equ	INTF0	= 0 ; External Interrupt Flags
.equ	INTF1	= 1 ; External Interrupt Flags
.equ	INTF2	= 2 ; External Interrupt Flags


; ***** AD_CONVERTER *****************

; ADMUX - The ADC multiplexer Selection Register
.equ	MUX0	= 0 ; Analog Channel and Gain Selection Bits
.equ	MUX1	= 1 ; Analog Channel and Gain Selection Bits
.equ	MUX2	= 2 ; Analog Channel and Gain Selection Bits
.equ	MUX3	= 3 ; Analog Channel and Gain Selection Bits
.equ	ADLAR	= 5 ; Left Adjust Result
.equ	REFS0	= 6 ; Reference Selection Bits
.equ	REFS1	= 7 ; Reference Selection Bits

; ADCSRA - The ADC Control and Status register
.equ	ADPS0	= 0 ; ADC  Prescaler Select Bits
.equ	ADPS1	= 1 ; ADC  Prescaler Select Bits
.equ	ADPS2	= 2 ; ADC  Prescaler Select Bits
.equ	ADIE	= 3 ; ADC Interrupt Enable
.equ	ADIF	= 4 ; ADC Interrupt Flag
.equ	ADATE	= 5 ; ADC Auto Trigger Enable
.equ	ADSC	= 6 ; ADC Start Conversion
.equ	ADEN	= 7 ; ADC Enable

; ADC - ADC Data Register  Bytes
.equ	ADCH0	= 0 ; ADC Data Register  Bytes High Bit 0
.equ	ADCH1	= 1 ; ADC Data Register  Bytes High Bit 1
.equ	ADCH2	= 2 ; ADC Data Register  Bytes High Bit 2
.equ	ADCH3	= 3 ; ADC Data Register  Bytes High Bit 3
.equ	ADCH4	= 4 ; ADC Data Register  Bytes High Bit 4
.equ	ADCH5	= 5 ; ADC Data Register  Bytes High Bit 5
.equ	ADCH6	= 6 ; ADC Data Register  Bytes High Bit 6
.equ	ADCH7	= 7 ; ADC Data Register  Bytes High Bit 7


.equ	ADCL0	= 0 ; ADC Data Register  Bytes Low Bit 0
.equ	ADCL1	= 1 ; ADC Data Register  Bytes Low Bit 1
.equ	ADCL2	= 2 ; ADC Data Register  Bytes Low Bit 2
.equ	ADCL3	= 3 ; ADC Data Register  Bytes Low Bit 3
.equ	ADCL4	= 4 ; ADC Data Register  Bytes Low Bit 4
.equ	ADCL5	= 5 ; ADC Data Register  Bytes Low Bit 5
.equ	ADCL6	= 6 ; ADC Data Register  Bytes Low Bit 6
.equ	ADCL7	= 7 ; ADC Data Register  Bytes Low Bit 7

; ADCSRB - ADC Control and Status Register B
.equ	ADTS0	= 0 ; ADC Auto Trigger Sources
.equ	ADTS1	= 1 ; ADC Auto Trigger Sources
.equ	ADTS2	= 2 ; ADC Auto Trigger Sources
.equ	ADTS3	= 3 ; ADC Auto Trigger Sources
.equ	ADSSEN	= 4 ; ADC Single Shot Enable on PSC's Synchronisation Signals
.equ	ADNCDIS	= 6 ; ADC Noise Canceller Disable
.equ	ADHSM	= 7 ; ADC High Speed Mode

; DIDR0 - Digital Input Disable Register 0
.equ	ADC0D	= 0 ; ADC0 Digital input Disable
.equ	ADC1D	= 1 ; ADC1 Digital input Disable
.equ	ADC2D	= 2 ; ADC2 Digital input Disable
.equ	ADC3D	= 3 ; ADC3 Digital input Disable
.equ	ADC4D	= 4 ; ADC4 Digital input Disable
.equ	ADC5D	= 5 ; ADC5 Digital input Disable
.equ	ADC6D	= 6 ; ADC7 Digital input Disable
.equ	ADC7D	= 7 ; 

; DIDR1 - Digital Input Disable Register 0
.equ	ADC9D	= 0 ; 
.equ	ADC10D	= 1 ; 
.equ	AMP0POSD	= 2 ; 
.equ	ACMP1MD	= 3 ; 

; AMP0CSR - 
.equ	AMP0TS0	= 0 ; 
.equ	AMP0TS1	= 1 ; 
.equ	AMP0GS	= 3 ; 
.equ	AMP0G0	= 4 ; 
.equ	AMP0G1	= 5 ; 
.equ	AMP0IS	= 6 ; 
.equ	AMP0EN	= 7 ; 


; ***** ANALOG_COMPARATOR *****************

; AC3CON - Analog Comparator3 Control Register
.equ	AC3M0	= 0 ; Analog Comparator 3 Multiplexer Register
.equ	AC3M1	= 1 ; Analog Comparator 3 Multiplexer Register
.equ	AC3M2	= 2 ; Analog Comparator 3 Multiplexer Register
.equ	AC3OEA	= 3 ; Analog Comparator 3 Alternate Output Enable
.equ	AC3IS0	= 4 ; Analog Comparator 3  Interrupt Select Bit
.equ	AC3IS1	= 5 ; Analog Comparator 3  Interrupt Select Bit
.equ	AC3IE	= 6 ; Analog Comparator 3 Interrupt Enable Bit
.equ	AC3EN	= 7 ; Analog Comparator3 Enable Bit

; AC1CON - Analog Comparator 1 Control Register
.equ	AC1M0	= 0 ; Analog Comparator 1 Multiplexer Register
.equ	AC1M1	= 1 ; Analog Comparator 1 Multiplexer Register
.equ	AC1M2	= 2 ; Analog Comparator 1 Multiplexer Register
.equ	AC1IS0	= 4 ; Analog Comparator 1  Interrupt Select Bit
.equ	AC1IS1	= 5 ; Analog Comparator 1  Interrupt Select Bit
.equ	AC1IE	= 6 ; Analog Comparator 1 Interrupt Enable Bit
.equ	AC1EN	= 7 ; Analog Comparator 1 Enable Bit

; AC2CON - Analog Comparator 2 Control Register
.equ	AC2M0	= 0 ; Analog Comparator 2 Multiplexer Register
.equ	AC2M1	= 1 ; Analog Comparator 2 Multiplexer Register
.equ	AC2M2	= 2 ; Analog Comparator 2 Multiplexer Register
.equ	AC2IS0	= 4 ; Analog Comparator 2  Interrupt Select Bit
.equ	AC2IS1	= 5 ; Analog Comparator 2  Interrupt Select Bit
.equ	AC2IE	= 6 ; Analog Comparator 2 Interrupt Enable Bit
.equ	AC2EN	= 7 ; Analog Comparator 2 Enable Bit

; ACSR - Analog Comparator Status Register
.equ	AC1O	= 1 ; Analog Comparator 1 Output Bit
.equ	AC2O	= 2 ; Analog Comparator 2 Output Bit
.equ	AC3O	= 3 ; Analog Comparator 3 Output Bit
.equ	AC1IF	= 5 ; Analog Comparator 1  Interrupt Flag Bit
.equ	AC2IF	= 6 ; Analog Comparator 2 Interrupt Flag Bit
.equ	AC3IF	= 7 ; Analog Comparator 3 Interrupt Flag Bit

; AC3ECON - 
.equ	AC3H0	= 0 ; Analog Comparator Hysteresis Select
.equ	AC3H1	= 1 ; Analog Comparator Hysteresis Select
.equ	AC3H2	= 2 ; Analog Comparator Hysteresis Select
.equ	AC3OE	= 4 ; Analog Comparator Ouput Enable
.equ	AC3OI	= 5 ; Analog Comparator Ouput Invert

; AC2ECON - 
.equ	AC2H0	= 0 ; Analog Comparator Hysteresis Select
.equ	AC2H1	= 1 ; Analog Comparator Hysteresis Select
.equ	AC2H2	= 2 ; Analog Comparator Hysteresis Select
.equ	AC2OE	= 4 ; Analog Comparator Ouput Enable
.equ	AC2OI	= 5 ; Analog Comparator Ouput Invert

; AC1ECON - 
.equ	AC1H0	= 0 ; Analog Comparator Hysteresis Select
.equ	AC1H1	= 1 ; Analog Comparator Hysteresis Select
.equ	AC1H2	= 2 ; Analog Comparator Hysteresis Select
.equ	AC1ICE	= 3 ; Analog Comparator Interrupt Capture Enable
.equ	AC1OE	= 4 ; Analog Comparator Ouput Enable
.equ	AC1OI	= 5 ; Analog Comparator Ouput Invert


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
.equ	SPH0	= 0 ; Stack Pointer  High Bit 0
.equ	SPH1	= 1 ; Stack Pointer  High Bit 1
.equ	SPH2	= 2 ; Stack Pointer  High Bit 2
.equ	SPH3	= 3 ; Stack Pointer  High Bit 3
.equ	SPH4	= 4 ; Stack Pointer  High Bit 4
.equ	SPH5	= 5 ; Stack Pointer  High Bit 5
.equ	SPH6	= 6 ; Stack Pointer  High Bit 6
.equ	SPH7	= 7 ; Stack Pointer  High Bit 7


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
.equ	CKRC81	= 2 ; Frequency Selection of the Calibrated RC Oscillator
.equ	RSTDIS	= 3 ; Reset Pin Disable
.equ	PUD	= 4 ; Pull-up disable

; MCUSR - MCU Status Register
.equ	PORF	= 0 ; Power-on reset flag
.equ	EXTRF	= 1 ; External Reset Flag
.equ	BORF	= 2 ; Brown-out Reset Flag
.equ	WDRF	= 3 ; Watchdog Reset Flag

; OSCCAL - Oscillator Calibration Value
.equ	OSCCAL0	= 0 ; Oscillator Calibration Value Bit 0
.equ	OSCCAL1	= 1 ; Oscillator Calibration Value Bit 1
.equ	OSCCAL2	= 2 ; Oscillator Calibration Value Bit 2
.equ	OSCCAL3	= 3 ; Oscillator Calibration Value Bit 3
.equ	OSCCAL4	= 4 ; Oscillator Calibration Value Bit 4
.equ	OSCCAL5	= 5 ; Oscillator Calibration Value Bit 5
.equ	OSCCAL6	= 6 ; Oscillator Calibration Value Bit 6
.equ	OSCCAL7	= 7 ; Oscillator Calibration Value Bit 7

; CLKPR - 
.equ	CLKPS0	= 0 ; 
.equ	CLKPS1	= 1 ; 
.equ	CLKPS2	= 2 ; 
.equ	CLKPS3	= 3 ; 
.equ	CLKPCE	= 7 ; 

; SMCR - Sleep Mode Control Register
.equ	SE	= 0 ; Sleep Enable
.equ	SM0	= 1 ; Sleep Mode Select bits
.equ	SM1	= 2 ; Sleep Mode Select bits
.equ	SM2	= 3 ; Sleep Mode Select bits

; GPIOR2 - General Purpose IO Register 2
.equ	GPIOR20	= 0 ; General Purpose IO Register 2 bis
.equ	GPIOR21	= 1 ; General Purpose IO Register 2 bis
.equ	GPIOR22	= 2 ; General Purpose IO Register 2 bis
.equ	GPIOR23	= 3 ; General Purpose IO Register 2 bis
.equ	GPIOR24	= 4 ; General Purpose IO Register 2 bis
.equ	GPIOR25	= 5 ; General Purpose IO Register 2 bis
.equ	GPIOR26	= 6 ; General Purpose IO Register 2 bis
.equ	GPIOR27	= 7 ; General Purpose IO Register 2 bis

; GPIOR1 - General Purpose IO Register 1
.equ	GPIOR10	= 0 ; General Purpose IO Register 1 bis
.equ	GPIOR11	= 1 ; General Purpose IO Register 1 bis
.equ	GPIOR12	= 2 ; General Purpose IO Register 1 bis
.equ	GPIOR13	= 3 ; General Purpose IO Register 1 bis
.equ	GPIOR14	= 4 ; General Purpose IO Register 1 bis
.equ	GPIOR15	= 5 ; General Purpose IO Register 1 bis
.equ	GPIOR16	= 6 ; General Purpose IO Register 1 bis
.equ	GPIOR17	= 7 ; General Purpose IO Register 1 bis

; GPIOR0 - General Purpose IO Register 0
.equ	GPIOR00	= 0 ; General Purpose IO Register 0 bit 0
.equ	GPIOR01	= 1 ; General Purpose IO Register 0 bit 1
.equ	GPIOR02	= 2 ; General Purpose IO Register 0 bit 2
.equ	GPIOR03	= 3 ; General Purpose IO Register 0 bit 3
.equ	GPIOR04	= 4 ; General Purpose IO Register 0 bit 4
.equ	GPIOR05	= 5 ; General Purpose IO Register 0 bit 5
.equ	GPIOR06	= 6 ; General Purpose IO Register 0 bit 6
.equ	GPIOR07	= 7 ; General Purpose IO Register 0 bit 7

; PLLCSR - PLL Control And Status Register
.equ	PLOCK	= 0 ; PLL Lock Detector
.equ	PLLE	= 1 ; PLL Enable
.equ	PLLF0	= 2 ; 
.equ	PLLF1	= 3 ; 
.equ	PLLF2	= 4 ; 
.equ	PLLF3	= 5 ; 

; PRR - Power Reduction Register
.equ	PRADC	= 0 ; Power Reduction ADC
.equ	PRSPI	= 2 ; Power Reduction Serial Peripheral Interface
.equ	PRTIM1	= 4 ; Power Reduction Timer/Counter1
.equ	PRPSCR	= 5 ; Power Reduction PSC0
.equ	PRPSC2	= 7 ; Power Reduction PSC2

; CLKCSR - 
.equ	CLKC0	= 0 ; Clock Control
.equ	CLKC1	= 1 ; Clock Control
.equ	CLKC2	= 2 ; Clock Control
.equ	CLKC3	= 3 ; Clock Control
.equ	CLKRDY	= 4 ; Clock Ready Flag
.equ	CLKCCE	= 7 ; Clock Control Change Enable

; CLKSELR - 
.equ	CKSEL0	= 0 ; Clock Source Select
.equ	CKSEL1	= 1 ; Clock Source Select
.equ	CKSEL2	= 2 ; Clock Source Select
.equ	CKSEL3	= 3 ; Clock Source Select
.equ	CSUT0	= 4 ; Clock Start up Time
.equ	CSUT1	= 5 ; Clock Start up Time
.equ	COUT	= 6 ; Clock OUT

; BGCCR - BandGap Current Calibration Register
.equ	BGCC0	= 0 ; 
.equ	BGCC1	= 1 ; 
.equ	BGCC2	= 2 ; 
.equ	BGCC3	= 3 ; 

; BGCRR - BandGap Resistor Calibration Register
.equ	BGCR0	= 0 ; 
.equ	BGCR1	= 1 ; 
.equ	BGCR2	= 2 ; 
.equ	BGCR3	= 3 ; 


; ***** EEPROM *****************

; EEAR - EEPROM Read/Write Access  Bytes
.equ	EEARH0	= 0 ; EEPROM Read/Write Access  Bytes High Bit 0
.equ	EEARH1	= 1 ; EEPROM Read/Write Access  Bytes High Bit 1
.equ	EEARH2	= 2 ; EEPROM Read/Write Access  Bytes High Bit 2
.equ	EEARH3	= 3 ; EEPROM Read/Write Access  Bytes High Bit 3
.equ	EEARH4	= 4 ; EEPROM Read/Write Access  Bytes High Bit 4
.equ	EEARH5	= 5 ; EEPROM Read/Write Access  Bytes High Bit 5
.equ	EEARH6	= 6 ; EEPROM Read/Write Access  Bytes High Bit 6
.equ	EEARH7	= 7 ; EEPROM Read/Write Access  Bytes High Bit 7


.equ	EEARL0	= 0 ; EEPROM Read/Write Access  Bytes Low Bit 0
.equ	EEARL1	= 1 ; EEPROM Read/Write Access  Bytes Low Bit 1
.equ	EEARL2	= 2 ; EEPROM Read/Write Access  Bytes Low Bit 2
.equ	EEARL3	= 3 ; EEPROM Read/Write Access  Bytes Low Bit 3
.equ	EEARL4	= 4 ; EEPROM Read/Write Access  Bytes Low Bit 4
.equ	EEARL5	= 5 ; EEPROM Read/Write Access  Bytes Low Bit 5
.equ	EEARL6	= 6 ; EEPROM Read/Write Access  Bytes Low Bit 6
.equ	EEARL7	= 7 ; EEPROM Read/Write Access  Bytes Low Bit 7

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
.equ	EEWE	= 1 ; EEPROM Write Enable
.equ	EEMWE	= 2 ; EEPROM Master Write Enable
.equ	EERIE	= 3 ; EEPROM Ready Interrupt Enable
.equ	EEPM0	= 4 ; EEPROM Programming Mode
.equ	EEPM1	= 5 ; EEPROM Programming Mode
.equ	EEPAGE	= 6 ; EEPROM Page Access
.equ	NVMBSY	= 7 ; None Volatile Busy Memory Busy


; ***** PSC0 *****************

; PICR0 - PSC 0 Input Capture Register 
.equ	PICR0H0	= 0 ; PSC 0 Input Capture Register  High Bit 0
.equ	PICR0H1	= 1 ; PSC 0 Input Capture Register  High Bit 1
.equ	PICR0H2	= 2 ; PSC 0 Input Capture Register  High Bit 2
.equ	PICR0H3	= 3 ; PSC 0 Input Capture Register  High Bit 3
.equ	PICR0H4	= 4 ; PSC 0 Input Capture Register  High Bit 4
.equ	PICR0H5	= 5 ; PSC 0 Input Capture Register  High Bit 5
.equ	PICR0H6	= 6 ; PSC 0 Input Capture Register  High Bit 6
.equ	PICR0H7	= 7 ; PSC 0 Input Capture Register  High Bit 7


.equ	PICR0L0	= 0 ; PSC 0 Input Capture Register  Low Bit 0
.equ	PICR0L1	= 1 ; PSC 0 Input Capture Register  Low Bit 1
.equ	PICR0L2	= 2 ; PSC 0 Input Capture Register  Low Bit 2
.equ	PICR0L3	= 3 ; PSC 0 Input Capture Register  Low Bit 3
.equ	PICR0L4	= 4 ; PSC 0 Input Capture Register  Low Bit 4
.equ	PICR0L5	= 5 ; PSC 0 Input Capture Register  Low Bit 5
.equ	PICR0L6	= 6 ; PSC 0 Input Capture Register  Low Bit 6
.equ	PICR0L7	= 7 ; PSC 0 Input Capture Register  Low Bit 7

; PFRC0B - PSC 0 Input B Control
.equ	PRFM0B0	= 0 ; PSC 0 Retrigger and Fault Mode for Part B
.equ	PRFM0B1	= 1 ; PSC 0 Retrigger and Fault Mode for Part B
.equ	PRFM0B2	= 2 ; PSC 0 Retrigger and Fault Mode for Part B
.equ	PRFM0B3	= 3 ; PSC 0 Retrigger and Fault Mode for Part B
.equ	PFLTE0B	= 4 ; PSC 0 Filter Enable on Input Part B
.equ	PELEV0B	= 5 ; PSC 0 Edge Level Selector on Input Part B
.equ	PISEL0B	= 6 ; PSC 0 Input Select for Part B
.equ	PCAE0B	= 7 ; PSC 0 Capture Enable Input Part B

; PFRC0A - PSC 0 Input A Control
.equ	PRFM0A0	= 0 ; PSC 0 Retrigger and Fault Mode for Part A
.equ	PRFM0A1	= 1 ; PSC 0 Retrigger and Fault Mode for Part A
.equ	PRFM0A2	= 2 ; PSC 0 Retrigger and Fault Mode for Part A
.equ	PRFM0A3	= 3 ; PSC 0 Retrigger and Fault Mode for Part A
.equ	PFLTE0A	= 4 ; PSC 0 Filter Enable on Input Part A
.equ	PELEV0A	= 5 ; PSC 0 Edge Level Selector on Input Part A
.equ	PISEL0A	= 6 ; PSC 0 Input Select for Part A
.equ	PCAE0A	= 7 ; PSC 0 Capture Enable Input Part A

; PCTL0 - PSC 0 Control Register
.equ	PRUN0	= 0 ; PSC 0 Run
.equ	PCCYC0	= 1 ; PSC0 Complete Cycle
.equ	PAOC0A	= 3 ; PSC 0 Asynchronous Output Control A
.equ	PAOC0B	= 4 ; PSC 0 Asynchronous Output Control B
.equ	PBFM00	= 2 ; PSC 0 Balance Flank Width Modulation
.equ	PPRE00	= 6 ; PSC 0 Prescaler Selects
.equ	PPRE01	= 7 ; PSC 0 Prescaler Selects

; PCNF0 - PSC 0 Configuration Register
.equ	PCLKSEL0	= 1 ; PSC 0 Input Clock Select
.equ	POP0	= 2 ; PSC 0 Output Polarity
.equ	PMODE00	= 3 ; PSC 0 Mode
.equ	PMODE01	= 4 ; PSC 0 Mode
.equ	PLOCK0	= 5 ; PSC 0 Lock
.equ	PALOCK0	= 6 ; PSC 0 Autolock
.equ	PFIFTY0	= 7 ; PSC 0 Fifty

; OCR0RB - Output Compare RB Register 
.equ	OCR0RBH0	= 0 ; Output Compare RB Register  High Bit 0
.equ	OCR0RBH1	= 1 ; Output Compare RB Register  High Bit 1
.equ	OCR0RBH2	= 2 ; Output Compare RB Register  High Bit 2
.equ	OCR0RBH3	= 3 ; Output Compare RB Register  High Bit 3
.equ	OCR0RBH4	= 4 ; Output Compare RB Register  High Bit 4
.equ	OCR0RBH5	= 5 ; Output Compare RB Register  High Bit 5
.equ	OCR0RBH6	= 6 ; Output Compare RB Register  High Bit 6
.equ	OCR0RBH7	= 7 ; Output Compare RB Register  High Bit 7


.equ	OCR0RBL0	= 0 ; Output Compare RB Register  Low Bit 0
.equ	OCR0RBL1	= 1 ; Output Compare RB Register  Low Bit 1
.equ	OCR0RBL2	= 2 ; Output Compare RB Register  Low Bit 2
.equ	OCR0RBL3	= 3 ; Output Compare RB Register  Low Bit 3
.equ	OCR0RBL4	= 4 ; Output Compare RB Register  Low Bit 4
.equ	OCR0RBL5	= 5 ; Output Compare RB Register  Low Bit 5
.equ	OCR0RBL6	= 6 ; Output Compare RB Register  Low Bit 6
.equ	OCR0RBL7	= 7 ; Output Compare RB Register  Low Bit 7

; OCR0SB - Output Compare SB Register 
.equ	OCR0SBH0	= 0 ; Output Compare SB Register  High Bit 0
.equ	OCR0SBH1	= 1 ; Output Compare SB Register  High Bit 1
.equ	OCR0SBH2	= 2 ; Output Compare SB Register  High Bit 2
.equ	OCR0SBH3	= 3 ; Output Compare SB Register  High Bit 3
.equ	OCR0SBH4	= 4 ; Output Compare SB Register  High Bit 4
.equ	OCR0SBH5	= 5 ; Output Compare SB Register  High Bit 5
.equ	OCR0SBH6	= 6 ; Output Compare SB Register  High Bit 6
.equ	OCR0SBH7	= 7 ; Output Compare SB Register  High Bit 7


.equ	OCR0SBL0	= 0 ; Output Compare SB Register  Low Bit 0
.equ	OCR0SBL1	= 1 ; Output Compare SB Register  Low Bit 1
.equ	OCR0SBL2	= 2 ; Output Compare SB Register  Low Bit 2
.equ	OCR0SBL3	= 3 ; Output Compare SB Register  Low Bit 3
.equ	OCR0SBL4	= 4 ; Output Compare SB Register  Low Bit 4
.equ	OCR0SBL5	= 5 ; Output Compare SB Register  Low Bit 5
.equ	OCR0SBL6	= 6 ; Output Compare SB Register  Low Bit 6
.equ	OCR0SBL7	= 7 ; Output Compare SB Register  Low Bit 7

; OCR0RA - Output Compare RA Register 
.equ	OCR0RAH0	= 0 ; Output Compare RA Register  High Bit 0
.equ	OCR0RAH1	= 1 ; Output Compare RA Register  High Bit 1
.equ	OCR0RAH2	= 2 ; Output Compare RA Register  High Bit 2
.equ	OCR0RAH3	= 3 ; Output Compare RA Register  High Bit 3
.equ	OCR0RAH4	= 4 ; Output Compare RA Register  High Bit 4
.equ	OCR0RAH5	= 5 ; Output Compare RA Register  High Bit 5
.equ	OCR0RAH6	= 6 ; Output Compare RA Register  High Bit 6
.equ	OCR0RAH7	= 7 ; Output Compare RA Register  High Bit 7


.equ	OCR0RAL0	= 0 ; Output Compare RA Register  Low Bit 0
.equ	OCR0RAL1	= 1 ; Output Compare RA Register  Low Bit 1
.equ	OCR0RAL2	= 2 ; Output Compare RA Register  Low Bit 2
.equ	OCR0RAL3	= 3 ; Output Compare RA Register  Low Bit 3
.equ	OCR0RAL4	= 4 ; Output Compare RA Register  Low Bit 4
.equ	OCR0RAL5	= 5 ; Output Compare RA Register  Low Bit 5
.equ	OCR0RAL6	= 6 ; Output Compare RA Register  Low Bit 6
.equ	OCR0RAL7	= 7 ; Output Compare RA Register  Low Bit 7

; OCR0SA - Output Compare SA Register 
.equ	OCR0SAH0	= 0 ; Output Compare SA Register  High Bit 0
.equ	OCR0SAH1	= 1 ; Output Compare SA Register  High Bit 1
.equ	OCR0SAH2	= 2 ; Output Compare SA Register  High Bit 2
.equ	OCR0SAH3	= 3 ; Output Compare SA Register  High Bit 3
.equ	OCR0SAH4	= 4 ; Output Compare SA Register  High Bit 4
.equ	OCR0SAH5	= 5 ; Output Compare SA Register  High Bit 5
.equ	OCR0SAH6	= 6 ; Output Compare SA Register  High Bit 6
.equ	OCR0SAH7	= 7 ; Output Compare SA Register  High Bit 7


.equ	OCR0SAL0	= 0 ; Output Compare SA Register  Low Bit 0
.equ	OCR0SAL1	= 1 ; Output Compare SA Register  Low Bit 1
.equ	OCR0SAL2	= 2 ; Output Compare SA Register  Low Bit 2
.equ	OCR0SAL3	= 3 ; Output Compare SA Register  Low Bit 3
.equ	OCR0SAL4	= 4 ; Output Compare SA Register  Low Bit 4
.equ	OCR0SAL5	= 5 ; Output Compare SA Register  Low Bit 5
.equ	OCR0SAL6	= 6 ; Output Compare SA Register  Low Bit 6
.equ	OCR0SAL7	= 7 ; Output Compare SA Register  Low Bit 7

; PSOC0 - PSC0 Synchro and Output Configuration
.equ	POEN0A	= 0 ; PSCOUT00 Output Enable
.equ	POEN0B	= 2 ; PSCOUT01 Output Enable
.equ	PSYNC00	= 4 ; Synchronisation out for ADC selection
.equ	PSYNC01	= 5 ; Synchronisation out for ADC selection
.equ	PISEL0B1	= 6 ; PSC Input Select
.equ	PISEL0A1	= 7 ; PSC Input Select

; PIM0 - PSC0 Interrupt Mask Register
.equ	PEOPE0	= 0 ; End of Cycle Interrupt Enable
.equ	PEOEPE0	= 1 ; End of Enhanced Cycle Enable
.equ	PEVE0A	= 3 ; External Event A Interrupt Enable
.equ	PEVE0B	= 4 ; External Event B Interrupt Enable

; PIFR0 - PSC0 Interrupt Flag Register
.equ	PEOP0	= 0 ; End of PSC0 Interrupt
.equ	PRN00	= 1 ; Ramp Number
.equ	PRN01	= 2 ; Ramp Number
.equ	PEV0A	= 3 ; External Event A Interrupt
.equ	PEV0B	= 4 ; External Event B Interrupt
.equ	POAC0A	= 6 ; PSC 0 Output A Activity
.equ	POAC0B	= 7 ; PSC 0 Output A Activity


; ***** PSC2 *****************

; PICR2H - PSC 2 Input Capture Register High
.equ	PICR28	= 0 ; 
.equ	PICR29	= 1 ; 
.equ	PICR210	= 2 ; 
.equ	PICR211	= 3 ; 
.equ	PCST2	= 7 ; PSC 2 Capture Software Trigger Bit

; PICR2L - PSC 2 Input Capture Register Low
.equ	PICR2L0	= 0 ; PSC 2 Input Capture Register Low Bit 0
.equ	PICR2L1	= 1 ; PSC 2 Input Capture Register Low Bit 1
.equ	PICR2L2	= 2 ; PSC 2 Input Capture Register Low Bit 2
.equ	PICR2L3	= 3 ; PSC 2 Input Capture Register Low Bit 3
.equ	PICR2L4	= 4 ; PSC 2 Input Capture Register Low Bit 4
.equ	PICR2L5	= 5 ; PSC 2 Input Capture Register Low Bit 5
.equ	PICR2L6	= 6 ; PSC 2 Input Capture Register Low Bit 6
.equ	PICR2L7	= 7 ; PSC 2 Input Capture Register Low Bit 7

; PFRC2B - PSC 2 Input B Control
.equ	PRFM2B0	= 0 ; PSC 2 Retrigger and Fault Mode for Part B
.equ	PRFM2B1	= 1 ; PSC 2 Retrigger and Fault Mode for Part B
.equ	PRFM2B2	= 2 ; PSC 2 Retrigger and Fault Mode for Part B
.equ	PRFM2B3	= 3 ; PSC 2 Retrigger and Fault Mode for Part B
.equ	PFLTE2B	= 4 ; PSC 2 Filter Enable on Input Part B
.equ	PELEV2B	= 5 ; PSC 2 Edge Level Selector on Input Part B
.equ	PISEL2B	= 6 ; PSC 2 Input Select for Part B
.equ	PCAE2B	= 7 ; PSC 2 Capture Enable Input Part B

; PFRC2A - PSC 2 Input B Control
.equ	PRFM2A0	= 0 ; PSC 2 Retrigger and Fault Mode for Part A
.equ	PRFM2A1	= 1 ; PSC 2 Retrigger and Fault Mode for Part A
.equ	PRFM2A2	= 2 ; PSC 2 Retrigger and Fault Mode for Part A
.equ	PRFM2A3	= 3 ; PSC 2 Retrigger and Fault Mode for Part A
.equ	PFLTE2A	= 4 ; PSC 2 Filter Enable on Input Part A
.equ	PELEV2A	= 5 ; PSC 2 Edge Level Selector on Input Part A
.equ	PISEL2A	= 6 ; PSC 2 Input Select for Part A
.equ	PCAE2A	= 7 ; PSC 2 Capture Enable Input Part A

; PCTL2 - PSC 2 Control Register
.equ	PRUN2	= 0 ; PSC 2 Run
.equ	PCCYC2	= 1 ; PSC2 Complete Cycle
.equ	PARUN2	= 2 ; PSC2 Auto Run
.equ	PAOC2A	= 3 ; PSC 2 Asynchronous Output Control A
.equ	PAOC2B	= 4 ; PSC 2 Asynchronous Output Control B
.equ	PBFM2	= 5 ; Balance Flank Width Modulation
.equ	PPRE20	= 6 ; PSC 2 Prescaler Selects
.equ	PPRE21	= 7 ; PSC 2 Prescaler Selects

; PCNF2 - PSC 2 Configuration Register
.equ	POME2	= 0 ; PSC 2 Output Matrix Enable
.equ	PCLKSEL2	= 1 ; PSC 2 Input Clock Select
.equ	POP2	= 2 ; PSC 2 Output Polarity
.equ	PMODE20	= 3 ; PSC 2 Mode
.equ	PMODE21	= 4 ; PSC 2 Mode
.equ	PLOCK2	= 5 ; PSC 2 Lock
.equ	PALOCK2	= 6 ; PSC 2 Autolock
.equ	PFIFTY2	= 7 ; PSC 2 Fifty

; PCNFE2 - PSC 2 Enhanced Configuration Register
.equ	PISEL2B1	= 0 ; 
.equ	PISEL2A1	= 1 ; 
.equ	PELEV2B1	= 2 ; 
.equ	PELEV2A1	= 3 ; 
.equ	PBFM21	= 4 ; 
.equ	PASDLK20	= 5 ; 
.equ	PASDLK21	= 6 ; 
.equ	PASDLK22	= 7 ; 

; OCR2RB - Output Compare RB Register 
.equ	OCR2RBH0	= 0 ; Output Compare RB Register  High Bit 0
.equ	OCR2RBH1	= 1 ; Output Compare RB Register  High Bit 1
.equ	OCR2RBH2	= 2 ; Output Compare RB Register  High Bit 2
.equ	OCR2RBH3	= 3 ; Output Compare RB Register  High Bit 3
.equ	OCR2RBH4	= 4 ; Output Compare RB Register  High Bit 4
.equ	OCR2RBH5	= 5 ; Output Compare RB Register  High Bit 5
.equ	OCR2RBH6	= 6 ; Output Compare RB Register  High Bit 6
.equ	OCR2RBH7	= 7 ; Output Compare RB Register  High Bit 7


.equ	OCR2RBL0	= 0 ; Output Compare RB Register  Low Bit 0
.equ	OCR2RBL1	= 1 ; Output Compare RB Register  Low Bit 1
.equ	OCR2RBL2	= 2 ; Output Compare RB Register  Low Bit 2
.equ	OCR2RBL3	= 3 ; Output Compare RB Register  Low Bit 3
.equ	OCR2RBL4	= 4 ; Output Compare RB Register  Low Bit 4
.equ	OCR2RBL5	= 5 ; Output Compare RB Register  Low Bit 5
.equ	OCR2RBL6	= 6 ; Output Compare RB Register  Low Bit 6
.equ	OCR2RBL7	= 7 ; Output Compare RB Register  Low Bit 7

; OCR2SB - Output Compare SB Register 
.equ	OCR2SBH0	= 0 ; Output Compare SB Register  High Bit 0
.equ	OCR2SBH1	= 1 ; Output Compare SB Register  High Bit 1
.equ	OCR2SBH2	= 2 ; Output Compare SB Register  High Bit 2
.equ	OCR2SBH3	= 3 ; Output Compare SB Register  High Bit 3
.equ	OCR2SBH4	= 4 ; Output Compare SB Register  High Bit 4
.equ	OCR2SBH5	= 5 ; Output Compare SB Register  High Bit 5
.equ	OCR2SBH6	= 6 ; Output Compare SB Register  High Bit 6
.equ	OCR2SBH7	= 7 ; Output Compare SB Register  High Bit 7


.equ	OCR2SBL0	= 0 ; Output Compare SB Register  Low Bit 0
.equ	OCR2SBL1	= 1 ; Output Compare SB Register  Low Bit 1
.equ	OCR2SBL2	= 2 ; Output Compare SB Register  Low Bit 2
.equ	OCR2SBL3	= 3 ; Output Compare SB Register  Low Bit 3
.equ	OCR2SBL4	= 4 ; Output Compare SB Register  Low Bit 4
.equ	OCR2SBL5	= 5 ; Output Compare SB Register  Low Bit 5
.equ	OCR2SBL6	= 6 ; Output Compare SB Register  Low Bit 6
.equ	OCR2SBL7	= 7 ; Output Compare SB Register  Low Bit 7

; OCR2RA - Output Compare RA Register 
.equ	OCR2RAH0	= 0 ; Output Compare RA Register  High Bit 0
.equ	OCR2RAH1	= 1 ; Output Compare RA Register  High Bit 1
.equ	OCR2RAH2	= 2 ; Output Compare RA Register  High Bit 2
.equ	OCR2RAH3	= 3 ; Output Compare RA Register  High Bit 3
.equ	OCR2RAH4	= 4 ; Output Compare RA Register  High Bit 4
.equ	OCR2RAH5	= 5 ; Output Compare RA Register  High Bit 5
.equ	OCR2RAH6	= 6 ; Output Compare RA Register  High Bit 6
.equ	OCR2RAH7	= 7 ; Output Compare RA Register  High Bit 7


.equ	OCR2RAL0	= 0 ; Output Compare RA Register  Low Bit 0
.equ	OCR2RAL1	= 1 ; Output Compare RA Register  Low Bit 1
.equ	OCR2RAL2	= 2 ; Output Compare RA Register  Low Bit 2
.equ	OCR2RAL3	= 3 ; Output Compare RA Register  Low Bit 3
.equ	OCR2RAL4	= 4 ; Output Compare RA Register  Low Bit 4
.equ	OCR2RAL5	= 5 ; Output Compare RA Register  Low Bit 5
.equ	OCR2RAL6	= 6 ; Output Compare RA Register  Low Bit 6
.equ	OCR2RAL7	= 7 ; Output Compare RA Register  Low Bit 7

; OCR2SA - Output Compare SA Register 
.equ	OCR2SAH0	= 0 ; Output Compare SA Register  High Bit 0
.equ	OCR2SAH1	= 1 ; Output Compare SA Register  High Bit 1
.equ	OCR2SAH2	= 2 ; Output Compare SA Register  High Bit 2
.equ	OCR2SAH3	= 3 ; Output Compare SA Register  High Bit 3
.equ	OCR2SAH4	= 4 ; Output Compare SA Register  High Bit 4
.equ	OCR2SAH5	= 5 ; Output Compare SA Register  High Bit 5
.equ	OCR2SAH6	= 6 ; Output Compare SA Register  High Bit 6
.equ	OCR2SAH7	= 7 ; Output Compare SA Register  High Bit 7


.equ	OCR2SAL0	= 0 ; Output Compare SA Register  Low Bit 0
.equ	OCR2SAL1	= 1 ; Output Compare SA Register  Low Bit 1
.equ	OCR2SAL2	= 2 ; Output Compare SA Register  Low Bit 2
.equ	OCR2SAL3	= 3 ; Output Compare SA Register  Low Bit 3
.equ	OCR2SAL4	= 4 ; Output Compare SA Register  Low Bit 4
.equ	OCR2SAL5	= 5 ; Output Compare SA Register  Low Bit 5
.equ	OCR2SAL6	= 6 ; Output Compare SA Register  Low Bit 6
.equ	OCR2SAL7	= 7 ; Output Compare SA Register  Low Bit 7

; POM2 - PSC 2 Output Matrix
.equ	POMV2A0	= 0 ; Output Matrix Output A Ramps
.equ	POMV2A1	= 1 ; Output Matrix Output A Ramps
.equ	POMV2A2	= 2 ; Output Matrix Output A Ramps
.equ	POMV2A3	= 3 ; Output Matrix Output A Ramps
.equ	POMV2B0	= 4 ; Output Matrix Output B Ramps
.equ	POMV2B1	= 5 ; Output Matrix Output B Ramps
.equ	POMV2B2	= 6 ; Output Matrix Output B Ramps
.equ	POMV2B3	= 7 ; Output Matrix Output B Ramps

; PSOC2 - PSC2 Synchro and Output Configuration
.equ	POEN2A	= 0 ; PSCOUT20 Output Enable
.equ	POEN2C	= 1 ; PSCOUT22 Output Enable
.equ	POEN2B	= 2 ; PSCOUT21 Output Enable
.equ	POEN2D	= 3 ; PSCOUT23 Output Enable
.equ	PSYNC20	= 4 ; Synchronization Out for ADC Selection
.equ	PSYNC21	= 5 ; Synchronization Out for ADC Selection
.equ	POS22	= 6 ; PSC 2 Output 23 Select
.equ	POS23	= 7 ; PSC 2 Output 23 Select

; PIM2 - PSC2 Interrupt Mask Register
.equ	PEOPE2	= 0 ; End of Cycle Interrupt Enable
.equ	PEOEPE2	= 1 ; End of Enhanced Cycle Interrupt Enable
.equ	PEVE2A	= 3 ; External Event A Interrupt Enable
.equ	PEVE2B	= 4 ; External Event B Interrupt Enable
.equ	PSEIE2	= 5 ; PSC 2 Synchro Error Interrupt Enable

; PIFR2 - PSC2 Interrupt Flag Register
.equ	PEOP2	= 0 ; End of PSC2 Interrupt
.equ	PRN20	= 1 ; Ramp Number
.equ	PRN21	= 2 ; Ramp Number
.equ	PEV2A	= 3 ; External Event A Interrupt
.equ	PEV2B	= 4 ; External Event B Interrupt
.equ	PSEI2	= 5 ; PSC 2 Synchro Error Interrupt
.equ	POAC2A	= 6 ; PSC 2 Output A Activity
.equ	POAC2B	= 7 ; PSC 2 Output A Activity

; PASDLY2 - Analog Synchronization Delay Register
.equ	PASDLY20	= 0 ; Analog Synchronization Delay Register Bit 0
.equ	PASDLY21	= 1 ; Analog Synchronization Delay Register Bit 1
.equ	PASDLY22	= 2 ; Analog Synchronization Delay Register Bit 2
.equ	PASDLY23	= 3 ; Analog Synchronization Delay Register Bit 3
.equ	PASDLY24	= 4 ; Analog Synchronization Delay Register Bit 4
.equ	PASDLY25	= 5 ; Analog Synchronization Delay Register Bit 5
.equ	PASDLY26	= 6 ; Analog Synchronization Delay Register Bit 6
.equ	PASDLY27	= 7 ; Analog Synchronization Delay Register Bit 7


; ***** TIMER_COUNTER_1 *****************

; TIMSK1 - Timer/Counter Interrupt Mask Register
.equ	TOIE1	= 0 ; Timer/Counter1 Overflow Interrupt Enable
.equ	ICIE1	= 5 ; Timer/Counter1 Input Capture Interrupt Enable

; TIFR1 - Timer/Counter Interrupt Flag register
.equ	TOV1	= 0 ; Timer/Counter1 Overflow Flag
.equ	ICF1	= 5 ; Input Capture Flag 1

; TCCR1B - Timer/Counter1 Control Register B
.equ	CS10	= 0 ; Prescaler source of Timer/Counter 1
.equ	CS11	= 1 ; Prescaler source of Timer/Counter 1
.equ	CS12	= 2 ; Prescaler source of Timer/Counter 1
.equ	WGM13	= 4 ; Waveform Generation Mode
.equ	ICES1	= 6 ; Input Capture 1 Edge Select
.equ	ICNC1	= 7 ; Input Capture 1 Noise Canceler

; TCNT1 - Timer/Counter1  Bytes
.equ	TCNT1H0	= 0 ; Timer/Counter1  Bytes High Bit 0
.equ	TCNT1H1	= 1 ; Timer/Counter1  Bytes High Bit 1
.equ	TCNT1H2	= 2 ; Timer/Counter1  Bytes High Bit 2
.equ	TCNT1H3	= 3 ; Timer/Counter1  Bytes High Bit 3
.equ	TCNT1H4	= 4 ; Timer/Counter1  Bytes High Bit 4
.equ	TCNT1H5	= 5 ; Timer/Counter1  Bytes High Bit 5
.equ	TCNT1H6	= 6 ; Timer/Counter1  Bytes High Bit 6
.equ	TCNT1H7	= 7 ; Timer/Counter1  Bytes High Bit 7


.equ	TCNT1L0	= 0 ; Timer/Counter1  Bytes Low Bit 0
.equ	TCNT1L1	= 1 ; Timer/Counter1  Bytes Low Bit 1
.equ	TCNT1L2	= 2 ; Timer/Counter1  Bytes Low Bit 2
.equ	TCNT1L3	= 3 ; Timer/Counter1  Bytes Low Bit 3
.equ	TCNT1L4	= 4 ; Timer/Counter1  Bytes Low Bit 4
.equ	TCNT1L5	= 5 ; Timer/Counter1  Bytes Low Bit 5
.equ	TCNT1L6	= 6 ; Timer/Counter1  Bytes Low Bit 6
.equ	TCNT1L7	= 7 ; Timer/Counter1  Bytes Low Bit 7

; ICR1 - Timer/Counter1 Input Capture Register  Bytes
.equ	ICR1H0	= 0 ; Timer/Counter1 Input Capture Register  Bytes High Bit 0
.equ	ICR1H1	= 1 ; Timer/Counter1 Input Capture Register  Bytes High Bit 1
.equ	ICR1H2	= 2 ; Timer/Counter1 Input Capture Register  Bytes High Bit 2
.equ	ICR1H3	= 3 ; Timer/Counter1 Input Capture Register  Bytes High Bit 3
.equ	ICR1H4	= 4 ; Timer/Counter1 Input Capture Register  Bytes High Bit 4
.equ	ICR1H5	= 5 ; Timer/Counter1 Input Capture Register  Bytes High Bit 5
.equ	ICR1H6	= 6 ; Timer/Counter1 Input Capture Register  Bytes High Bit 6
.equ	ICR1H7	= 7 ; Timer/Counter1 Input Capture Register  Bytes High Bit 7


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
.equ	BLBSET	= 3 ; Boot Lock Bit Set
.equ	RWWSRE	= 4 ; Read While Write section read enable
.equ	SIGRD	= 5 ; Signature Row Read
.equ	RWWSB	= 6 ; Read While Write Section Busy
.equ	SPMIE	= 7 ; SPM Interrupt Enable


; ***** FUSE *****************

; ***** LOCKBIT *****************
; ***** CPU REGISTER DEFINITIONS *****************************************
.def	XH	= r27
.def	XL	= r26
.def	YH	= r29
.def	YL	= r28
.def	ZH	= r31
.def	ZL	= r30

; ***** DATA MEMORY DECLARATIONS *****************************************
.equ	FLASHEND	= 0x0FFF ; Note: Word address
.equ	IOEND	= 0x00FF
.equ	SRAM_START	= 0x0100
.equ	SRAM_SIZE	= 1024
.equ	RAMEND	= 0x04FF
.equ	E2END	= 0x01FF
.equ	EEPROMEND	= 0x01FF
.equ	EEADRBITS	= 9
.equ	XRAMEND	= 0x0000
#pragma AVRPART MEMORY PROG_FLASH 8192
#pragma AVRPART MEMORY INT_SRAM SIZE 1024
#pragma AVRPART MEMORY INT_SRAM START_ADDR 0x100
#pragma AVRPART MEMORY EEPROM 512

; ***** INTERRUPT VECTORS ************************************************
.equ	PSC2_CAPTaddr	 = 0x0001 ; PSC2 Capture Event
.equ	PSC2_ECaddr	 = 0x0002 ; PSC2 End Cycle
.equ	PSC2_EECaddr	 = 0x0003 ; PSC2 End Of Enhanced Cycle
.equ	PSC0_CAPTaddr	 = 0x0004 ; PSC0 Capture Event
.equ	PSC0_ECaddr	 = 0x0005 ; PSC0 End Cycle
.equ	PSC0_EECaddr	 = 0x0006 ; PSC0 End Of Enhanced Cycle
.equ	ANALOG_COMP_1addr	 = 0x0007 ; Analog Comparator 1
.equ	ANALOG_COMP_2addr	 = 0x0008 ; Analog Comparator 2
.equ	ANALOG_COMP_3addr	 = 0x0009 ; Analog Comparator 3
.equ	INT0addr	 = 0x000A ; External Interrupt Request 0
.equ	TIMER1_CAPTaddr	 = 0x000B ; Timer/Counter1 Capture Event
.equ	TIMER1_OVFaddr	 = 0x000C ; Timer/Counter1 Overflow
.equ	ADCaddr	 = 0x000D ; ADC Conversion Complete
.equ	INT1addr	 = 0x000E ; External Interrupt Request 1
.equ	SPI__STCaddr	 = 0x000F ; SPI Serial Transfer Complet
.equ	INT2addr	 = 0x0010 ; External Interrupt Request 2
.equ	WDTaddr	 = 0x0011 ; Watchdog Timeout Interrupt
.equ	EE_READYaddr	 = 0x0012 ; EEPROM Ready
.equ	SPM_READYaddr	 = 0x0013 ; Store Program Memory Read

.equ	INT_VECTOR_SIZE	= 20 ; size in words

#endif /* _PWM161DEF_INC_ */

; ***** END OF FILE ******************************************************



