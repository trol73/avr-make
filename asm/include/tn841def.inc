;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ********************

;*************************************************************************
;* A P P L I C A T I O N   N O T E   F O R   T H E   A V R   F A M I L Y
;* 
;* Number            : AVR000
;* File Name         : tn841def.inc
;* Title             : Register/Bit Definitions for the ATtiny841
;* Created           : 2014-02-06 16:10
;* Version           : 1.00
;* Support e-mail    : avr@atmel.com
;* Target MCU        : ATtiny841
;* 
;* DESCRIPTION
;* When including this file in the assembly program file, all I/O register 
;* names and I/O register bit names appearing in the data book can be used.
;* In addition, the six registers forming the three data pointers X, Y and 
;* Z have been assigned names XL - ZH. Highest RAM address for Internal 
;* SRAM is also defined 
;* 
;*************************************************************************

#ifndef _TN841DEF_INC_
#define _TN841DEF_INC_


#pragma partinc 0

; ***** SPECIFY DEVICE ***************************************************
.device	ATtiny841
#pragma AVRPART ADMIN PART_NAME ATtiny841
.equ	SIGNATURE_000	= 0x1E
.equ	SIGNATURE_001	= 0x93
.equ	SIGNATURE_002	= 0x15

#pragma AVRPART CORE CORE_VERSION V3

; ***** I/O REGISTER DEFINITIONS *****************************************
; NOTE:
; Definitions marked "MEMORY MAPPED" are extended I/O ports
; and cannot be used with IN/OUT instructions
.equ	TCCR2A	= 0xCA ; MEMORY MAPPED
.equ	TCCR2B	= 0xC9 ; MEMORY MAPPED
.equ	TCCR2C	= 0xC8 ; MEMORY MAPPED
.equ	TCNT2H	= 0xC7 ; MEMORY MAPPED
.equ	TCNT2L	= 0xC6 ; MEMORY MAPPED
.equ	OCR2AH	= 0xC5 ; MEMORY MAPPED
.equ	OCR2AL	= 0xC4 ; MEMORY MAPPED
.equ	OCR2BH	= 0xC3 ; MEMORY MAPPED
.equ	OCR2BL	= 0xC2 ; MEMORY MAPPED
.equ	ICR2H	= 0xC1 ; MEMORY MAPPED
.equ	ICR2L	= 0xC0 ; MEMORY MAPPED
.equ	SPCR	= 0xB2 ; MEMORY MAPPED
.equ	SPSR	= 0xB1 ; MEMORY MAPPED
.equ	SPDR	= 0xB0 ; MEMORY MAPPED
.equ	TWSCRA	= 0xA5 ; MEMORY MAPPED
.equ	TWSCRB	= 0xA4 ; MEMORY MAPPED
.equ	TWSSRA	= 0xA3 ; MEMORY MAPPED
.equ	TWSA	= 0xA2 ; MEMORY MAPPED
.equ	TWSAM	= 0xA1 ; MEMORY MAPPED
.equ	TWSD	= 0xA0 ; MEMORY MAPPED
.equ	UCSR1A	= 0x96 ; MEMORY MAPPED
.equ	UCSR1B	= 0x95 ; MEMORY MAPPED
.equ	UCSR1C	= 0x94 ; MEMORY MAPPED
.equ	UCSR1D	= 0x93 ; MEMORY MAPPED
.equ	UBRR1H	= 0x92 ; MEMORY MAPPED
.equ	UBRR1L	= 0x91 ; MEMORY MAPPED
.equ	UDR1	= 0x90 ; MEMORY MAPPED
.equ	UCSR0A	= 0x86 ; MEMORY MAPPED
.equ	UCSR0B	= 0x85 ; MEMORY MAPPED
.equ	UCSR0C	= 0x84 ; MEMORY MAPPED
.equ	UCSR0D	= 0x83 ; MEMORY MAPPED
.equ	UBRR0H	= 0x82 ; MEMORY MAPPED
.equ	UBRR0L	= 0x81 ; MEMORY MAPPED
.equ	UDR0	= 0x80 ; MEMORY MAPPED
.equ	OSCCAL1	= 0x77 ; MEMORY MAPPED
.equ	OSCTCAL0B	= 0x76 ; MEMORY MAPPED
.equ	OSCTCAL0A	= 0x75 ; MEMORY MAPPED
.equ	OSCCAL0	= 0x74 ; MEMORY MAPPED
.equ	CLKPR	= 0x73 ; MEMORY MAPPED
.equ	CLKCR	= 0x72 ; MEMORY MAPPED
.equ	CCP	= 0x71 ; MEMORY MAPPED
.equ	PRR	= 0x70 ; MEMORY MAPPED
.equ	PHDE	= 0x6A ; MEMORY MAPPED
.equ	TOCPMSA1	= 0x68 ; MEMORY MAPPED
.equ	TOCPMSA0	= 0x67 ; MEMORY MAPPED
.equ	TOCPMCOE	= 0x66 ; MEMORY MAPPED
.equ	REMAP	= 0x65 ; MEMORY MAPPED
.equ	PORTCR	= 0x64 ; MEMORY MAPPED
.equ	PUEA	= 0x63 ; MEMORY MAPPED
.equ	PUEB	= 0x62 ; MEMORY MAPPED
.equ	DIDR1	= 0x61 ; MEMORY MAPPED
.equ	DIDR0	= 0x60 ; MEMORY MAPPED
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
.equ	TCCR0A	= 0x30 ; 
.equ	TCCR1A	= 0x2F ; 
.equ	TCCR1B	= 0x2E ; 
.equ	TCNT1H	= 0x2D ; 
.equ	TCNT1L	= 0x2C ; 
.equ	OCR1AH	= 0x2B ; 
.equ	OCR1AL	= 0x2A ; 
.equ	OCR1BH	= 0x29 ; 
.equ	OCR1BL	= 0x28 ; 
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
.equ	TIMSK2	= 0x11 ; 
.equ	TIFR2	= 0x10 ; 
.equ	TIMSK1	= 0x0F ; 
.equ	TIFR1	= 0x0E ; 
.equ	ACSR1B	= 0x0D ; 
.equ	ACSR1A	= 0x0C ; 
.equ	ACSR0B	= 0x0B ; 
.equ	ACSR0A	= 0x0A ; 
.equ	ADMUXA	= 0x09 ; 
.equ	ADMUXB	= 0x08 ; 
.equ	ADCH	= 0x07 ; 
.equ	ADCL	= 0x06 ; 
.equ	ADCSRA	= 0x05 ; 
.equ	ADCSRB	= 0x04 ; 


; ***** BIT DEFINITIONS **************************************************

; ***** PORTB *****************
; PORTCR - Port Control Register
.equ	BBMB	= 1 ; Break-Before-Make Mode Enable

; PUEB - Pull-up Enable Control Register
.equ	PUEB0	= 0 ; Pull-up Enable Control Register Bit 0
.equ	PUEB1	= 1 ; Pull-up Enable Control Register Bit 1
.equ	PUEB2	= 2 ; Pull-up Enable Control Register Bit 2
.equ	PUEB3	= 3 ; Pull-up Enable Control Register Bit 3

; DDRB - Data Direction Register, Port B
.equ	DDRB0	= 0 ; Data Direction Register, Port B Bit 0
.equ	DDRB1	= 1 ; Data Direction Register, Port B Bit 1
.equ	DDRB2	= 2 ; Data Direction Register, Port B Bit 2
.equ	DDRB3	= 3 ; Data Direction Register, Port B Bit 3

; PINB - Port B Data register
.equ	PINB0	= 0 ; Port B Data register Bit 0
.equ	PINB1	= 1 ; Port B Data register Bit 1
.equ	PINB2	= 2 ; Port B Data register Bit 2
.equ	PINB3	= 3 ; Port B Data register Bit 3

; PORTB - Input Pins, Port B
.equ	PORTB0	= 0 ; Input Pins, Port B Bit 0
.equ	PORTB1	= 1 ; Input Pins, Port B Bit 1
.equ	PORTB2	= 2 ; Input Pins, Port B Bit 2
.equ	PORTB3	= 3 ; Input Pins, Port B Bit 3


; ***** USART1 *****************
; UDR1 - USART I/O Data Register
.equ	UDR10	= 0 ; USART I/O Data Register Bit 0
.equ	UDR11	= 1 ; USART I/O Data Register Bit 1
.equ	UDR12	= 2 ; USART I/O Data Register Bit 2
.equ	UDR13	= 3 ; USART I/O Data Register Bit 3
.equ	UDR14	= 4 ; USART I/O Data Register Bit 4
.equ	UDR15	= 5 ; USART I/O Data Register Bit 5
.equ	UDR16	= 6 ; USART I/O Data Register Bit 6
.equ	UDR17	= 7 ; USART I/O Data Register Bit 7

; UCSR1A - USART Control and Status Register A
.equ	MPCM1	= 0 ; Multi-processor Communication Mode
.equ	U2X1	= 1 ; Double the USART transmission speed
.equ	UPE1	= 2 ; Parity Error
.equ	DOR1	= 3 ; Data overRun
.equ	FE1	= 4 ; Framing Error
.equ	UDRE1	= 5 ; USART Data Register Empty
.equ	TXC1	= 6 ; USART Transmitt Complete
.equ	RXC1	= 7 ; USART Receive Complete

; UCSR1B - USART Control and Status Register B
.equ	TXB81	= 0 ; Transmit Data Bit 8
.equ	RXB81	= 1 ; Receive Data Bit 8
.equ	UCSZ12	= 2 ; Character Size
.equ	TXEN1	= 3 ; Transmitter Enable
.equ	RXEN1	= 4 ; Receiver Enable
.equ	UDRIE1	= 5 ; USART Data register Empty Interrupt Enable
.equ	TXCIE1	= 6 ; TX Complete Interrupt Enable
.equ	RXCIE1	= 7 ; RX Complete Interrupt Enable

; UCSR1C - USART Control and Status Register C
.equ	UCPOL1	= 0 ; Clock Polarity
.equ	UCSZ10	= 1 ; Character Size
.equ	UCSZ11	= 2 ; Character Size
.equ	USBS1	= 3 ; Stop Bit Select
.equ	UPM10	= 4 ; Parity Mode Bits
.equ	UPM11	= 5 ; Parity Mode Bits
.equ	UMSEL10	= 6 ; USART Mode Select
.equ	UMSEL11	= 7 ; USART Mode Select

; UCSR1D - USART Control and Status Register D
.equ	SFDE1	= 5 ; USART RX Start Frame Detection Enable
.equ	RXS1	= 6 ; USART RX Start Flag
.equ	RXSIE1	= 7 ; USART RX Start Interrupt Enable

; UBRR1 - USART Baud Rate Register  Bytes
.equ	UBRR1H0	= 0 ; USART Baud Rate Register  Bytes High Bit 8
.equ	UBRR1H1	= 1 ; USART Baud Rate Register  Bytes High Bit 9
.equ	UBRR1H2	= 2 ; USART Baud Rate Register  Bytes High Bit 10
.equ	UBRR1H3	= 3 ; USART Baud Rate Register  Bytes High Bit 11

.equ	UBRR1L0	= 0 ; USART Baud Rate Register  Bytes Low Bit 0
.equ	UBRR1L1	= 1 ; USART Baud Rate Register  Bytes Low Bit 1
.equ	UBRR1L2	= 2 ; USART Baud Rate Register  Bytes Low Bit 2
.equ	UBRR1L3	= 3 ; USART Baud Rate Register  Bytes Low Bit 3
.equ	UBRR1L4	= 4 ; USART Baud Rate Register  Bytes Low Bit 4
.equ	UBRR1L5	= 5 ; USART Baud Rate Register  Bytes Low Bit 5
.equ	UBRR1L6	= 6 ; USART Baud Rate Register  Bytes Low Bit 6
.equ	UBRR1L7	= 7 ; USART Baud Rate Register  Bytes Low Bit 7


; ***** WATCHDOG *****************
; WDTCSR - Watchdog Timer Control and Status Register
.equ	WDE	= 3 ; Watch Dog Enable
.equ	WDP0	= 0 ; Watchdog Timer Prescaler Bits
.equ	WDP1	= 1 ; Watchdog Timer Prescaler Bits
.equ	WDP2	= 2 ; Watchdog Timer Prescaler Bits
.equ	WDP3	= 5 ; Watchdog Timer Prescaler Bits
.equ	WDIE	= 6 ; Watchdog Timer Interrupt Enable
.equ	WDIF	= 7 ; Watchdog Timer Interrupt Flag


; ***** TWI *****************
; TWSCRA - TWI Slave Control Register A
.equ	TWSME	= 0 ; TWI Smart Mode Enable
.equ	TWPME	= 1 ; TWI Promiscuous Mode Enable
.equ	TWSIE	= 2 ; TWI Stop Interrupt Enable
.equ	TWEN	= 3 ; Two-Wire Interface Enable
.equ	TWASIE	= 4 ; TWI Address/Stop Interrupt Enable
.equ	TWDIE	= 5 ; TWI Data Interrupt Enable
.equ	TWSHE	= 7 ; TWI SDA Hold Time Enable

; TWSCRB - TWI Slave Control Register B
.equ	TWCMD0	= 0 ; 
.equ	TWCMD1	= 1 ; 
.equ	TWAA	= 2 ; TWI Acknowledge Action
.equ	TWHNM	= 3 ; TWI High Noise Mode

; TWSSRA - TWI Slave Status Register A
.equ	TWAS	= 0 ; TWI Address or Stop
.equ	TWDIR	= 1 ; TWI Read/Write Direction
.equ	TWBE	= 2 ; TWI Bus Error
.equ	TWC	= 3 ; TWI Collision
.equ	TWRA	= 4 ; TWI Receive Acknowledge
.equ	TWCH	= 5 ; TWI Clock Hold
.equ	TWASIF	= 6 ; TWI Address/Stop Interrupt Flag
.equ	TWDIF	= 7 ; TWI Data Interrupt Flag.

; TWSA - TWI Slave Address Register
.equ	TWSA0	= 0 ; TWI Slave Address Register Bit 0
.equ	TWSA1	= 1 ; TWI Slave Address Register Bit 1
.equ	TWSA2	= 2 ; TWI Slave Address Register Bit 2
.equ	TWSA3	= 3 ; TWI Slave Address Register Bit 3
.equ	TWSA4	= 4 ; TWI Slave Address Register Bit 4
.equ	TWSA5	= 5 ; TWI Slave Address Register Bit 5
.equ	TWSA6	= 6 ; TWI Slave Address Register Bit 6
.equ	TWSA7	= 7 ; TWI Slave Address Register Bit 7

; TWSD - TWI Slave Data Register
.equ	TWSD0	= 0 ; TWI slave data bit
.equ	TWSD1	= 1 ; TWI slave data bit
.equ	TWSD2	= 2 ; TWI slave data bit
.equ	TWSD3	= 3 ; TWI slave data bit
.equ	TWSD4	= 4 ; TWI slave data bit
.equ	TWSD5	= 5 ; TWI slave data bit
.equ	TWSD6	= 6 ; TWI slave data bit
.equ	TWSD7	= 7 ; TWI slave data bit

; TWSAM - TWI Slave Address Mask Register
.equ	TWAE	= 0 ; TWI Address Enable
.equ	TWSAM1	= 1 ; TWI Address Mask Bits
.equ	TWSAM2	= 2 ; TWI Address Mask Bits
.equ	TWSAM3	= 3 ; TWI Address Mask Bits
.equ	TWSAM4	= 4 ; TWI Address Mask Bits
.equ	TWSAM5	= 5 ; TWI Address Mask Bits
.equ	TWSAM6	= 6 ; TWI Address Mask Bits
.equ	TWSAM7	= 7 ; TWI Address Mask Bits


; ***** AD_CONVERTER *****************
; ADMUXA - The ADC multiplexer Selection Register A
.equ	MUX0	= 0 ; Analog Channel and Gain Selection Bits
.equ	MUX1	= 1 ; Analog Channel and Gain Selection Bits
.equ	MUX2	= 2 ; Analog Channel and Gain Selection Bits
.equ	MUX3	= 3 ; Analog Channel and Gain Selection Bits
.equ	MUX4	= 4 ; Analog Channel and Gain Selection Bits
.equ	MUX5	= 5 ; Analog Channel and Gain Selection Bits

; ADMUXB - The ADC multiplexer Selection Register B
.equ	GSEL0	= 0 ; Gain Selection Bits
.equ	GSEL1	= 1 ; Gain Selection Bits
.equ	REFS0	= 5 ; Reference Selection Bits
.equ	REFS1	= 6 ; Reference Selection Bits
.equ	REFS2	= 7 ; Reference Selection Bits

; ADCSRA - The ADC Control and Status register
.equ	ADPS0	= 0 ; ADC Prescaler Select Bits
.equ	ADPS1	= 1 ; ADC Prescaler Select Bits
.equ	ADPS2	= 2 ; ADC Prescaler Select Bits
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
.equ	ADTS0	= 0 ; ADC Auto Trigger Sources
.equ	ADTS1	= 1 ; ADC Auto Trigger Sources
.equ	ADTS2	= 2 ; ADC Auto Trigger Sources
.equ	ADLAR	= 3 ; 

; DIDR1 - Digital Input Disable Register 1
.equ	ADC11D	= 0 ; ADC11 Digital input Disable
.equ	ADC10D	= 1 ; ADC10 Digital input Disable
.equ	ADC8D	= 2 ; ADC8 Digital input Disable
.equ	ADC9D	= 3 ; ADC9 Digital Input Disable

; DIDR0 - Digital Input Disable Register 0
.equ	ADC0D	= 0 ; ADC0/AREF Digital input Disable
.equ	ADC1D	= 1 ; ADC1/AIN00 Digital input Disable
.equ	ADC2D	= 2 ; ADC2/AIN01 Digital input Disable
.equ	ADC3D	= 3 ; ADC3/AIN10 Digital Input Disable
.equ	ADC4D	= 4 ; ADC4/AIN11 Digital input Disable
.equ	ADC5D	= 5 ; ADC5 Digital input Disable
.equ	ADC6D	= 6 ; ADC6 Digital input Disable
.equ	ADC7D	= 7 ; ADC7 Digital input Disable


; ***** ANALOG_COMPARATOR *****************
; ACSR0B - Analog Comparator 0 Control And Status Register B
.equ	ACPMUX0	= 0 ; Analog Comparator 0 Positive Input Multiplexer Bits 1:0
.equ	ACPMUX1	= 1 ; Analog Comparator 0 Positive Input Multiplexer Bits 1:0
.equ	ACNMUX0	= 2 ; Analog Comparator 0 Negative Input Multiplexer
.equ	ACNMUX1	= 3 ; Analog Comparator 0 Negative Input Multiplexer
.equ	ACOE0	= 4 ; Analog Comparator 0 Output Pin Enable
.equ	HLEV0	= 6 ; Analog Comparator 0 Hysteresis Level
.equ	HSEL0	= 7 ; Analog Comparator 0 Hysteresis Select

; ACSR0A - Analog Comparator 0 Control And Status Register A
.equ	ACIS0	= 0 ; Analog Comparator 0 Interrupt Mode Select bits
.equ	ACIS1	= 1 ; Analog Comparator 0 Interrupt Mode Select bits
.equ	ACIC0	= 2 ; Analog Comparator 0 Input Capture Enable
.equ	ACIE0	= 3 ; Analog Comparator 0 Interrupt Enable
.equ	ACI0	= 4 ; Analog Comparator 0 Interrupt Flag
.equ	ACO0	= 5 ; Analog Comparator 0 Output
.equ	ACPMUX2	= 6 ; Analog Comparator 0 Positive Input Multiplexer Bit 2
.equ	ACD0	= 7 ; Analog Comparator 0 Disable

; ACSR1B - Analog Comparator 1 Control And Status Register B
.equ	ACME1	= 2 ; Analog Comparator 1 Multiplexer Enable
.equ	ACOE1	= 4 ; Analog Comparator 1 Output Pin Enable
.equ	HLEV1	= 6 ; Analog Comparator 1 Hysteresis Level
.equ	HSEL1	= 7 ; Analog Comparator 1 Hysteresis Select

; ACSR1A - Analog Comparator 1 Control And Status Register A
.equ	ACIC1	= 2 ; Analog Comparator 1 Input Capture Enable
.equ	ACIE1	= 3 ; Analog Comparator 1 Interrupt Enable
.equ	ACI1	= 4 ; Analog Comparator 1 Interrupt Flag
.equ	ACO1	= 5 ; Analog Comparator 1 Output
.equ	ACBG1	= 6 ; Analog Comparator 1 Bandgap Select
.equ	ACD1	= 7 ; Analog Comparator 1 Disable


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
.equ	CS10	= 0 ; Clock Select bits
.equ	CS11	= 1 ; Clock Select bits
.equ	CS12	= 2 ; Clock Select bits
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

; GTCCR - General Timer/Counter Control Register
.equ	PSR	= 0 ; Prescaler Reset Timer/CounterN
.equ	TSM	= 7 ; Timer/Counter Synchronization Mode


; ***** TIMER_COUNTER_2 *****************
; TIMSK2 - Timer/Counter2 Interrupt Mask Register
.equ	TOIE2	= 0 ; Timer/Counter2 Overflow Interrupt Enable
.equ	OCIE2A	= 1 ; Timer/Counter2 Output Compare A Match Interrupt Enable
.equ	OCIE2B	= 2 ; Timer/Counter2 Output Compare B Match Interrupt Enable
.equ	ICIE2	= 5 ; Timer/Counter2 Input Capture Interrupt Enable

; TIFR2 - Timer/Counter Interrupt Flag register
.equ	TOV2	= 0 ; Timer/Counter2 Overflow Flag
.equ	OCF2A	= 1 ; Timer/Counter2 Output Compare A Match Flag
.equ	OCF2B	= 2 ; Timer/Counter2 Output Compare B Match Flag
.equ	ICF2	= 5 ; Timer/Counter2 Input Capture Flag

; TCCR2A - Timer/Counter2 Control Register A
.equ	WGM20	= 0 ; Pulse Width Modulator Select Bits
.equ	WGM21	= 1 ; Pulse Width Modulator Select Bits
.equ	COM2B0	= 4 ; Compare Output Mode 2B, bits
.equ	COM2B1	= 5 ; Compare Output Mode 2B, bits
.equ	COM2A0	= 6 ; Compare Output Mode 2A, bits
.equ	COM2A1	= 7 ; Compare Output Mode 2A, bits

; TCCR2B - Timer/Counter2 Control Register B
.equ	CS20	= 0 ; Clock Select bits
.equ	CS21	= 1 ; Clock Select bits
.equ	CS22	= 2 ; Clock Select bits
.equ	WGM22	= 3 ; Waveform Generation Mode Bits
.equ	WGM23	= 4 ; Waveform Generation Mode Bits
.equ	ICES2	= 6 ; Input Capture 2 Edge Select
.equ	ICNC2	= 7 ; Input Capture 2 Noise Canceler

; TCCR2C - Timer/Counter2 Control Register C
.equ	FOC2B	= 6 ; Force Output Compare for Channel B
.equ	FOC2A	= 7 ; Force Output Compare for Channel A

; TCNT2 - Timer/Counter2  Bytes
.equ	TCNT2H0	= 0 ; Timer/Counter2  Bytes High Bit 8
.equ	TCNT2H1	= 1 ; Timer/Counter2  Bytes High Bit 9
.equ	TCNT2H2	= 2 ; Timer/Counter2  Bytes High Bit 10
.equ	TCNT2H3	= 3 ; Timer/Counter2  Bytes High Bit 11
.equ	TCNT2H4	= 4 ; Timer/Counter2  Bytes High Bit 12
.equ	TCNT2H5	= 5 ; Timer/Counter2  Bytes High Bit 13
.equ	TCNT2H6	= 6 ; Timer/Counter2  Bytes High Bit 14
.equ	TCNT2H7	= 7 ; Timer/Counter2  Bytes High Bit 15

.equ	TCNT2L0	= 0 ; Timer/Counter2  Bytes Low Bit 0
.equ	TCNT2L1	= 1 ; Timer/Counter2  Bytes Low Bit 1
.equ	TCNT2L2	= 2 ; Timer/Counter2  Bytes Low Bit 2
.equ	TCNT2L3	= 3 ; Timer/Counter2  Bytes Low Bit 3
.equ	TCNT2L4	= 4 ; Timer/Counter2  Bytes Low Bit 4
.equ	TCNT2L5	= 5 ; Timer/Counter2  Bytes Low Bit 5
.equ	TCNT2L6	= 6 ; Timer/Counter2  Bytes Low Bit 6
.equ	TCNT2L7	= 7 ; Timer/Counter2  Bytes Low Bit 7

; OCR2A - Timer/Counter2 Output Compare Register A  Bytes
.equ	OCR2AH0	= 0 ; Timer/Counter2 Output Compare Register A  Bytes High Bit 8
.equ	OCR2AH1	= 1 ; Timer/Counter2 Output Compare Register A  Bytes High Bit 9
.equ	OCR2AH2	= 2 ; Timer/Counter2 Output Compare Register A  Bytes High Bit 10
.equ	OCR2AH3	= 3 ; Timer/Counter2 Output Compare Register A  Bytes High Bit 11
.equ	OCR2AH4	= 4 ; Timer/Counter2 Output Compare Register A  Bytes High Bit 12
.equ	OCR2AH5	= 5 ; Timer/Counter2 Output Compare Register A  Bytes High Bit 13
.equ	OCR2AH6	= 6 ; Timer/Counter2 Output Compare Register A  Bytes High Bit 14
.equ	OCR2AH7	= 7 ; Timer/Counter2 Output Compare Register A  Bytes High Bit 15

.equ	OCR2AL0	= 0 ; Timer/Counter2 Output Compare Register A  Bytes Low Bit 0
.equ	OCR2AL1	= 1 ; Timer/Counter2 Output Compare Register A  Bytes Low Bit 1
.equ	OCR2AL2	= 2 ; Timer/Counter2 Output Compare Register A  Bytes Low Bit 2
.equ	OCR2AL3	= 3 ; Timer/Counter2 Output Compare Register A  Bytes Low Bit 3
.equ	OCR2AL4	= 4 ; Timer/Counter2 Output Compare Register A  Bytes Low Bit 4
.equ	OCR2AL5	= 5 ; Timer/Counter2 Output Compare Register A  Bytes Low Bit 5
.equ	OCR2AL6	= 6 ; Timer/Counter2 Output Compare Register A  Bytes Low Bit 6
.equ	OCR2AL7	= 7 ; Timer/Counter2 Output Compare Register A  Bytes Low Bit 7

; OCR2B - Timer/Counter2 Output Compare Register B  Bytes
.equ	OCR2BH0	= 0 ; Timer/Counter2 Output Compare Register B  Bytes High Bit 8
.equ	OCR2BH1	= 1 ; Timer/Counter2 Output Compare Register B  Bytes High Bit 9
.equ	OCR2BH2	= 2 ; Timer/Counter2 Output Compare Register B  Bytes High Bit 10
.equ	OCR2BH3	= 3 ; Timer/Counter2 Output Compare Register B  Bytes High Bit 11
.equ	OCR2BH4	= 4 ; Timer/Counter2 Output Compare Register B  Bytes High Bit 12
.equ	OCR2BH5	= 5 ; Timer/Counter2 Output Compare Register B  Bytes High Bit 13
.equ	OCR2BH6	= 6 ; Timer/Counter2 Output Compare Register B  Bytes High Bit 14
.equ	OCR2BH7	= 7 ; Timer/Counter2 Output Compare Register B  Bytes High Bit 15

.equ	OCR2BL0	= 0 ; Timer/Counter2 Output Compare Register B  Bytes Low Bit 0
.equ	OCR2BL1	= 1 ; Timer/Counter2 Output Compare Register B  Bytes Low Bit 1
.equ	OCR2BL2	= 2 ; Timer/Counter2 Output Compare Register B  Bytes Low Bit 2
.equ	OCR2BL3	= 3 ; Timer/Counter2 Output Compare Register B  Bytes Low Bit 3
.equ	OCR2BL4	= 4 ; Timer/Counter2 Output Compare Register B  Bytes Low Bit 4
.equ	OCR2BL5	= 5 ; Timer/Counter2 Output Compare Register B  Bytes Low Bit 5
.equ	OCR2BL6	= 6 ; Timer/Counter2 Output Compare Register B  Bytes Low Bit 6
.equ	OCR2BL7	= 7 ; Timer/Counter2 Output Compare Register B  Bytes Low Bit 7

; ICR2 - Timer/Counter2 Input Capture Register  Bytes
.equ	ICR2H0	= 0 ; Timer/Counter2 Input Capture Register  Bytes High Bit 8
.equ	ICR2H1	= 1 ; Timer/Counter2 Input Capture Register  Bytes High Bit 9
.equ	ICR2H2	= 2 ; Timer/Counter2 Input Capture Register  Bytes High Bit 10
.equ	ICR2H3	= 3 ; Timer/Counter2 Input Capture Register  Bytes High Bit 11
.equ	ICR2H4	= 4 ; Timer/Counter2 Input Capture Register  Bytes High Bit 12
.equ	ICR2H5	= 5 ; Timer/Counter2 Input Capture Register  Bytes High Bit 13
.equ	ICR2H6	= 6 ; Timer/Counter2 Input Capture Register  Bytes High Bit 14
.equ	ICR2H7	= 7 ; Timer/Counter2 Input Capture Register  Bytes High Bit 15

.equ	ICR2L0	= 0 ; Timer/Counter2 Input Capture Register  Bytes Low Bit 0
.equ	ICR2L1	= 1 ; Timer/Counter2 Input Capture Register  Bytes Low Bit 1
.equ	ICR2L2	= 2 ; Timer/Counter2 Input Capture Register  Bytes Low Bit 2
.equ	ICR2L3	= 3 ; Timer/Counter2 Input Capture Register  Bytes Low Bit 3
.equ	ICR2L4	= 4 ; Timer/Counter2 Input Capture Register  Bytes Low Bit 4
.equ	ICR2L5	= 5 ; Timer/Counter2 Input Capture Register  Bytes Low Bit 5
.equ	ICR2L6	= 6 ; Timer/Counter2 Input Capture Register  Bytes Low Bit 6
.equ	ICR2L7	= 7 ; Timer/Counter2 Input Capture Register  Bytes Low Bit 7

; GTCCR - General Timer/Counter Control Register


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


; ***** CPU *****************
; PRR - Power Reduction Register
.equ	PRADC	= 0 ; Power Reduction ADC
.equ	PRTIM0	= 1 ; Power Reduction Timer/Counter0
.equ	PRTIM1	= 2 ; Power Reduction Timer/Counter1
.equ	PRTIM2	= 3 ; Power Reduction Timer/Counter2
.equ	PRSPI	= 4 ; Power Reduction SPI
.equ	PRUSART0	= 5 ; Power Reduction USARTs
.equ	PRUSART1	= 6 ; Power Reduction USARTs
.equ	PRTWI	= 7 ; Power Reduction TWI

; CCP - Configuration Change Protection
.equ	CCP0	= 0 ; Configuration Change Protection Bit 0
.equ	CCP1	= 1 ; Configuration Change Protection Bit 1
.equ	CCP2	= 2 ; Configuration Change Protection Bit 2
.equ	CCP3	= 3 ; Configuration Change Protection Bit 3
.equ	CCP4	= 4 ; Configuration Change Protection Bit 4
.equ	CCP5	= 5 ; Configuration Change Protection Bit 5
.equ	CCP6	= 6 ; Configuration Change Protection Bit 6
.equ	CCP7	= 7 ; Configuration Change Protection Bit 7

; OSCCAL0 - Oscillator Calibration Value
.equ	OSCCAL00	= 0 ; Oscillator Calibration Value Bit 0
.equ	OSCCAL01	= 1 ; Oscillator Calibration Value Bit 1
.equ	OSCCAL02	= 2 ; Oscillator Calibration Value Bit 2
.equ	OSCCAL03	= 3 ; Oscillator Calibration Value Bit 3
.equ	OSCCAL04	= 4 ; Oscillator Calibration Value Bit 4
.equ	OSCCAL05	= 5 ; Oscillator Calibration Value Bit 5
.equ	OSCCAL06	= 6 ; Oscillator Calibration Value Bit 6
.equ	OSCCAL07	= 7 ; Oscillator Calibration Value Bit 7

; OSCCAL1 - 
.equ	OSCCAL10	= 0 ;  Bit 0
.equ	OSCCAL11	= 1 ;  Bit 1

; OSCTCAL0A - 
.equ	OSCTCAL0A0	= 0 ;  Bit 0
.equ	OSCTCAL0A1	= 1 ;  Bit 1
.equ	OSCTCAL0A2	= 2 ;  Bit 2
.equ	OSCTCAL0A3	= 3 ;  Bit 3
.equ	OSCTCAL0A4	= 4 ;  Bit 4
.equ	OSCTCAL0A5	= 5 ;  Bit 5
.equ	OSCTCAL0A6	= 6 ;  Bit 6
.equ	OSCTCAL0A7	= 7 ;  Bit 7

; OSCTCAL0B - 
.equ	OSCTCAL0B0	= 0 ;  Bit 0
.equ	OSCTCAL0B1	= 1 ;  Bit 1
.equ	OSCTCAL0B2	= 2 ;  Bit 2
.equ	OSCTCAL0B3	= 3 ;  Bit 3
.equ	OSCTCAL0B4	= 4 ;  Bit 4
.equ	OSCTCAL0B5	= 5 ;  Bit 5
.equ	OSCTCAL0B6	= 6 ;  Bit 6
.equ	OSCTCAL0B7	= 7 ;  Bit 7

; CLKPR - Clock Prescale Register
.equ	CLKPS0	= 0 ; Clock Prescaler Select Bits
.equ	CLKPS1	= 1 ; Clock Prescaler Select Bits
.equ	CLKPS2	= 2 ; Clock Prescaler Select Bits
.equ	CLKPS3	= 3 ; Clock Prescaler Select Bits

; CLKCR - Clock Control Register
.equ	CKSEL0	= 0 ; Clock Select Bits
.equ	CKSEL1	= 1 ; Clock Select Bits
.equ	CKSEL2	= 2 ; Clock Select Bits
.equ	CKSEL3	= 3 ; Clock Select Bits
.equ	SUT	= 4 ; Start-up Time
.equ	CKOUTC	= 5 ; Clock Output (Copy). Active low.
.equ	CSTR	= 6 ; Clock Switch Trigger
.equ	OSCRDY	= 7 ; Oscillator Ready

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

; SPMCSR - Store Program Memory Control and Status Register
.equ	SPMEN	= 0 ; Store program Memory Enable
.equ	PGERS	= 1 ; Page Erase
.equ	PGWRT	= 2 ; Page Write
.equ	RFLB	= 3 ; Read Fuse and Lock Bits
.equ	CTPB	= 4 ; Clear Temporary Page Buffer
.equ	RSIG	= 5 ; Read Device Signature Imprint Table


; ***** TOCPM *****************
; TOCPMSA1 - Timer Output Compare Pin Mux Selection 1
.equ	TOCC4S0	= 0 ; Timer Output Compare Channel 4 Selection Bits
.equ	TOCC4S1	= 1 ; Timer Output Compare Channel 4 Selection Bits
.equ	TOCC5S0	= 2 ; Timer Output Compare Channel 5 Selection Bits
.equ	TOCC5S1	= 3 ; Timer Output Compare Channel 5 Selection Bits
.equ	TOCC6S0	= 4 ; Timer Output Compare Channel 6 Selection Bits
.equ	TOCC6S1	= 5 ; Timer Output Compare Channel 6 Selection Bits
.equ	TOCC7S0	= 6 ; Timer Output Compare Channel 7 Selection Bits
.equ	TOCC7S1	= 7 ; Timer Output Compare Channel 7 Selection Bits

; TOCPMSA0 - Timer Output Compare Pin Mux Selection 0
.equ	TOCC0S0	= 0 ; Timer Output Compare Channel 0 Selection Bits
.equ	TOCC0S1	= 1 ; Timer Output Compare Channel 0 Selection Bits
.equ	TOCC1S0	= 2 ; Timer Output Compare Channel 1 Selection Bits
.equ	TOCC1S1	= 3 ; Timer Output Compare Channel 1 Selection Bits
.equ	TOCC2S0	= 4 ; Timer Output Compare Channel 2 Selection Bits
.equ	TOCC2S1	= 5 ; Timer Output Compare Channel 2 Selection Bits
.equ	TOCC3S0	= 6 ; Timer Output Compare Channel 3 Selection Bits
.equ	TOCC3S1	= 7 ; Timer Output Compare Channel 3 Selection Bits

; TOCPMCOE - Timer Output Compare Pin Mux Channel Output Enable
.equ	TOCC0OE	= 0 ; Timer Output Compare Channel 0 Output Enable
.equ	TOCC1OE	= 1 ; Timer Output Compare Channel 1 Output Enable
.equ	TOCC2OE	= 2 ; Timer Output Compare Channel 2 Output Enable
.equ	TOCC3OE	= 3 ; Timer Output Compare Channel 3 Output Enable
.equ	TOCC4OE	= 4 ; Timer Output Compare Channel 4 Output Enable
.equ	TOCC5OE	= 5 ; Timer Output Compare Channel 5 Output Enable
.equ	TOCC6OE	= 6 ; Timer Output Compare Channel 6 Output Enable
.equ	TOCC7OE	= 7 ; Timer Output Compare Channel 7 Output Enable


; ***** USART0 *****************
; UDR0 - USART I/O Data Register
.equ	UDR00	= 0 ; USART I/O Data Register Bit 0
.equ	UDR01	= 1 ; USART I/O Data Register Bit 1
.equ	UDR02	= 2 ; USART I/O Data Register Bit 2
.equ	UDR03	= 3 ; USART I/O Data Register Bit 3
.equ	UDR04	= 4 ; USART I/O Data Register Bit 4
.equ	UDR05	= 5 ; USART I/O Data Register Bit 5
.equ	UDR06	= 6 ; USART I/O Data Register Bit 6
.equ	UDR07	= 7 ; USART I/O Data Register Bit 7

; UCSR0A - USART Control and Status Register A
.equ	MPCM0	= 0 ; Multi-processor Communication Mode
.equ	U2X0	= 1 ; Double the USART transmission speed
.equ	UPE0	= 2 ; Parity Error
.equ	DOR0	= 3 ; Data overRun
.equ	FE0	= 4 ; Framing Error
.equ	UDRE0	= 5 ; USART Data Register Empty
.equ	TXC0	= 6 ; USART Transmitt Complete
.equ	RXC0	= 7 ; USART Receive Complete

; UCSR0B - USART Control and Status Register B
.equ	TXB80	= 0 ; Transmit Data Bit 8
.equ	RXB80	= 1 ; Receive Data Bit 8
.equ	UCSZ02	= 2 ; Character Size
.equ	TXEN0	= 3 ; Transmitter Enable
.equ	RXEN0	= 4 ; Receiver Enable
.equ	UDRIE0	= 5 ; USART Data register Empty Interrupt Enable
.equ	TXCIE0	= 6 ; TX Complete Interrupt Enable
.equ	RXCIE0	= 7 ; RX Complete Interrupt Enable

; UCSR0C - USART Control and Status Register C
.equ	UCPOL0	= 0 ; Clock Polarity
.equ	UCSZ00	= 1 ; Character Size
.equ	UCSZ01	= 2 ; Character Size
.equ	USBS0	= 3 ; Stop Bit Select
.equ	UPM00	= 4 ; Parity Mode Bits
.equ	UPM01	= 5 ; Parity Mode Bits
.equ	UMSEL00	= 6 ; USART Mode Select
.equ	UMSEL01	= 7 ; USART Mode Select

; UCSR0D - USART Control and Status Register D
.equ	SFDE0	= 5 ; USART RX Start Frame Detection Enable
.equ	RXS0	= 6 ; USART RX Start Flag
.equ	RXSIE0	= 7 ; USART RX Start Interrupt Enable

; UBRR0 - USART Baud Rate Register  Bytes
.equ	UBRR0H0	= 0 ; USART Baud Rate Register  Bytes High Bit 8
.equ	UBRR0H1	= 1 ; USART Baud Rate Register  Bytes High Bit 9
.equ	UBRR0H2	= 2 ; USART Baud Rate Register  Bytes High Bit 10
.equ	UBRR0H3	= 3 ; USART Baud Rate Register  Bytes High Bit 11

.equ	UBRR0L0	= 0 ; USART Baud Rate Register  Bytes Low Bit 0
.equ	UBRR0L1	= 1 ; USART Baud Rate Register  Bytes Low Bit 1
.equ	UBRR0L2	= 2 ; USART Baud Rate Register  Bytes Low Bit 2
.equ	UBRR0L3	= 3 ; USART Baud Rate Register  Bytes Low Bit 3
.equ	UBRR0L4	= 4 ; USART Baud Rate Register  Bytes Low Bit 4
.equ	UBRR0L5	= 5 ; USART Baud Rate Register  Bytes Low Bit 5
.equ	UBRR0L6	= 6 ; USART Baud Rate Register  Bytes Low Bit 6
.equ	UBRR0L7	= 7 ; USART Baud Rate Register  Bytes Low Bit 7

; REMAP - Remap Port Pins
.equ	U0MAP	= 0 ; USART0 Pin Mapping


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

; REMAP - Remap Port Pins
.equ	SPIMAP	= 1 ; SPI Pin Mapping


; ***** PORTA *****************
; PORTCR - Port Control Register
.equ	BBMA	= 0 ; Break-Before-Make Mode Enable

; PUEA - Pull-up Enable Control Register
.equ	PUEA0	= 0 ; Pull-up Enable Control Register Bit 0
.equ	PUEA1	= 1 ; Pull-up Enable Control Register Bit 1
.equ	PUEA2	= 2 ; Pull-up Enable Control Register Bit 2
.equ	PUEA3	= 3 ; Pull-up Enable Control Register Bit 3
.equ	PUEA4	= 4 ; Pull-up Enable Control Register Bit 4
.equ	PUEA5	= 5 ; Pull-up Enable Control Register Bit 5
.equ	PUEA6	= 6 ; Pull-up Enable Control Register Bit 6
.equ	PUEA7	= 7 ; Pull-up Enable Control Register Bit 7

; PORTA - Port A Data Register
.equ	PORTA0	= 0 ; Port A Data Register Bit 0
.equ	PORTA1	= 1 ; Port A Data Register Bit 1
.equ	PORTA2	= 2 ; Port A Data Register Bit 2
.equ	PORTA3	= 3 ; Port A Data Register Bit 3
.equ	PORTA4	= 4 ; Port A Data Register Bit 4
.equ	PORTA5	= 5 ; Port A Data Register Bit 5
.equ	PORTA6	= 6 ; Port A Data Register Bit 6
.equ	PORTA7	= 7 ; Port A Data Register Bit 7

; DDRA - Data Direction Register, Port A
.equ	DDRA0	= 0 ; Data Direction Register, Port A Bit 0
.equ	DDRA1	= 1 ; Data Direction Register, Port A Bit 1
.equ	DDRA2	= 2 ; Data Direction Register, Port A Bit 2
.equ	DDRA3	= 3 ; Data Direction Register, Port A Bit 3
.equ	DDRA4	= 4 ; Data Direction Register, Port A Bit 4
.equ	DDRA5	= 5 ; Data Direction Register, Port A Bit 5
.equ	DDRA6	= 6 ; Data Direction Register, Port A Bit 6
.equ	DDRA7	= 7 ; Data Direction Register, Port A Bit 7

; PINA - Port A Input Pins
.equ	PINA0	= 0 ; Port A Input Pins Bit 0
.equ	PINA1	= 1 ; Port A Input Pins Bit 1
.equ	PINA2	= 2 ; Port A Input Pins Bit 2
.equ	PINA3	= 3 ; Port A Input Pins Bit 3
.equ	PINA4	= 4 ; Port A Input Pins Bit 4
.equ	PINA5	= 5 ; Port A Input Pins Bit 5
.equ	PINA6	= 6 ; Port A Input Pins Bit 6
.equ	PINA7	= 7 ; Port A Input Pins Bit 7

; PHDE - Port High Drive Enable Register
.equ	PHDEA0	= 0 ; PortA High Drive Enable
.equ	PHDEA1	= 1 ; PortA High Drive Enable


; ***** FUSE *****************
; EXTENDED - 
.equ	SELFPRGEN	= 0 ; Self Programming enable
.equ	BODACT0	= 1 ; BOD mode of operation when the device is active or idle
.equ	BODACT1	= 2 ; BOD mode of operation when the device is active or idle
.equ	BODPD0	= 3 ; BOD mode of operation when the device is in sleep mode
.equ	BODPD1	= 4 ; BOD mode of operation when the device is in sleep mode
.equ	ULPOSCSEL0	= 5 ; Frequency selection for internal ULP oscillator. The selection only affects system clock, watchdog and reset timeout always use 32 kHz clock.
.equ	ULPOSCSEL1	= 6 ; Frequency selection for internal ULP oscillator. The selection only affects system clock, watchdog and reset timeout always use 32 kHz clock.
.equ	ULPOSCSEL2	= 7 ; Frequency selection for internal ULP oscillator. The selection only affects system clock, watchdog and reset timeout always use 32 kHz clock.

; HIGH - 
.equ	BODLEVEL0	= 0 ; Brown-out Detector trigger level
.equ	BODLEVEL1	= 1 ; Brown-out Detector trigger level
.equ	BODLEVEL2	= 2 ; Brown-out Detector trigger level
.equ	EESAVE	= 3 ; Preserve EEPROM through the Chip Erase cycle
.equ	WDTON	= 4 ; Watch-dog Timer always on
.equ	SPIEN	= 5 ; Serial program downloading (SPI) enabled
.equ	DWEN	= 6 ; Debug Wire enable
.equ	RSTDISBL	= 7 ; Reset Disabled (Enable PC2 as i/o pin)

; LOW - 
.equ	SUT_CKSEL0	= 0 ; Select Clock Source
.equ	SUT_CKSEL1	= 1 ; Select Clock Source
.equ	SUT_CKSEL2	= 2 ; Select Clock Source
.equ	SUT_CKSEL3	= 3 ; Select Clock Source
.equ	SUT_CKSEL4	= 4 ; Select Clock Source
.equ	CKOUT	= 6 ; Clock output on PORTC2
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
.equ	FLASHEND	= 0x0FFF ; Note: Word address
.equ	IOEND	= 0x00FF
.equ	SRAM_START	= 0x0100
.equ	SRAM_SIZE	= 512
.equ	RAMEND	= 0x02FF
.equ	E2END	= 0x01FF
.equ	EEPROMEND	= 0x01FF
.equ	EEADRBITS	= 9
.equ	XRAMEND	= 0x0000
#pragma AVRPART MEMORY PROG_FLASH 8192
#pragma AVRPART MEMORY INT_SRAM SIZE 512
#pragma AVRPART MEMORY INT_SRAM START_ADDR 0x100
#pragma AVRPART MEMORY EEPROM 512

; ***** INTERRUPT VECTORS ************************************************
.equ	INT0addr	 = 0x0001 ; External Interrupt Request 0
.equ	PCINT0addr	 = 0x0002 ; Pin Change Interrupt Request 0
.equ	PCINT1addr	 = 0x0003 ; Pin Change Interrupt Request 1
.equ	WDTaddr	 = 0x0004 ; Watchdog Time-out Interrupt
.equ	TIMER1_CAPTaddr	 = 0x0005 ; Timer/Counter1 Capture Event
.equ	TIMER1_COMPAaddr	 = 0x0006 ; Timer/Counter1 Compare Match A
.equ	TIMER1_COMPBaddr	 = 0x0007 ; Timer/Counter1 Compare Match B
.equ	TIMER1_OVFaddr	 = 0x0008 ; Timer/Counter1 Overflow
.equ	TIMER0_COMPAaddr	 = 0x0009 ; TimerCounter0 Compare Match A
.equ	TIMER0_COMPBaddr	 = 0x000A ; TimerCounter0 Compare Match B
.equ	TIMER0_OVFaddr	 = 0x000B ; Timer/Couner0 Overflow
.equ	ANA_COMP0addr	 = 0x000C ; Analog Comparator 0
.equ	ADCaddr	 = 0x000D ; ADC Conversion Complete
.equ	EE_RDYaddr	 = 0x000E ; EEPROM Ready
.equ	ANA_COMP1addr	 = 0x000F ; Analog Comparator 1
.equ	TIMER2_CAPTaddr	 = 0x0010 ; Timer/Counter2 Capture Event
.equ	TIMER2_COMPAaddr	 = 0x0011 ; Timer/Counter2 Compare Match A
.equ	TIMER2_COMPBaddr	 = 0x0012 ; Timer/Counter2 Compare Match B
.equ	TIMER2_OVFaddr	 = 0x0013 ; Timer/Counter2 Overflow
.equ	SPIaddr	 = 0x0014 ; Serial Peripheral Interface
.equ	USART0_STARTaddr	 = 0x0015 ; USART0, Start
.equ	USART0_RXaddr	 = 0x0016 ; USART0, Rx Complete
.equ	USART0_UDREaddr	 = 0x0017 ; USART0 Data Register Empty
.equ	USART0_TXaddr	 = 0x0018 ; USART0, Tx Complete
.equ	USART1_STARTaddr	 = 0x0019 ; USART1, Start
.equ	USART1_RXaddr	 = 0x001A ; USART1, Rx Complete
.equ	USART1_UDREaddr	 = 0x001B ; USART1 Data Register Empty
.equ	USART1_TXaddr	 = 0x001C ; USART1, Tx Complete
.equ	TWI_SLAVEaddr	 = 0x001D ; Two-wire Serial Interface

.equ	INT_VECTORS_SIZE	= 30 ; size in words

#endif /* _TN841DEF_INC_ */

; ***** END OF FILE ******************************************************



