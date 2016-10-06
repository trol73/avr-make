;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ********************

;*************************************************************************
;* A P P L I C A T I O N   N O T E   F O R   T H E   A V R   F A M I L Y
;* 
;* Number            : AVR000
;* File Name         : tn828def.inc
;* Title             : Register/Bit Definitions for the ATxmega128A1
;* Date              : Apr 27 2012
;* Version           : 1.00
;* Support E-mail    : avr@atmel.com
;* Target MCU        : ATtiny828
;* 
;* DESCRIPTION
;* When including this file in the assembly program file, all I/O register 
;* names and I/O register bit names appearing in the data book can be used.
;* In addition, the six registers forming the three data pointers X, Y and 
;* Z have been assigned names XL - ZH. Highest RAM address for Internal 
;* SRAM is also defined 
;* 
;*************************************************************************

#ifndef _TN828DEF_INC_
#define _TN828DEF_INC_


#pragma partinc 0

; ***** SPECIFY DEVICE ***************************************************
.device	ATtiny828
#pragma AVRPART ADMIN PART_NAME ATtiny828
.equ	SIGNATURE_000	= 0x1E
.equ	SIGNATURE_001	= 0x93
.equ	SIGNATURE_002	= 0x14

#pragma AVRPART CORE CORE_VERSION V3

; ***** I/O REGISTER DEFINITIONS *****************************************
; NOTE:
; Definitions marked "MEMORY MAPPED"are extended I/O ports
; and cannot be used with IN/OUT instructions
.equ	OSCTCAL0B	= 0xF1 ; MEMORY MAPPED
.equ	OSCTCAL0A	= 0xF0 ; MEMORY MAPPED
.equ	TOCPMSA1	= 0xE9 ; MEMORY MAPPED
.equ	TOCPMSA0	= 0xE8 ; MEMORY MAPPED
.equ	TOCPMCOE	= 0xE2 ; MEMORY MAPPED
.equ	DIDR3	= 0xDF ; MEMORY MAPPED
.equ	DIDR2	= 0xDE ; MEMORY MAPPED
.equ	UDR	= 0xC6 ; MEMORY MAPPED
.equ	UBRRH	= 0xC5 ; MEMORY MAPPED
.equ	UBRRL	= 0xC4 ; MEMORY MAPPED
.equ	UCSRD	= 0xC3 ; MEMORY MAPPED
.equ	UCSRC	= 0xC2 ; MEMORY MAPPED
.equ	UCSRB	= 0xC1 ; MEMORY MAPPED
.equ	UCSRA	= 0xC0 ; MEMORY MAPPED
.equ	TWSD	= 0xBD ; MEMORY MAPPED
.equ	TWSA	= 0xBC ; MEMORY MAPPED
.equ	TWSAM	= 0xBB ; MEMORY MAPPED
.equ	TWSSRA	= 0xBA ; MEMORY MAPPED
.equ	TWSCRB	= 0xB9 ; MEMORY MAPPED
.equ	TWSCRA	= 0xB8 ; MEMORY MAPPED
.equ	OCR1BH	= 0x8B ; MEMORY MAPPED
.equ	OCR1BL	= 0x8A ; MEMORY MAPPED
.equ	OCR1AH	= 0x89 ; MEMORY MAPPED
.equ	OCR1AL	= 0x88 ; MEMORY MAPPED
.equ	ICR1H	= 0x87 ; MEMORY MAPPED
.equ	ICR1L	= 0x86 ; MEMORY MAPPED
.equ	TCNT1H	= 0x85 ; MEMORY MAPPED
.equ	TCNT1L	= 0x84 ; MEMORY MAPPED
.equ	TCCR1C	= 0x82 ; MEMORY MAPPED
.equ	TCCR1B	= 0x81 ; MEMORY MAPPED
.equ	TCCR1A	= 0x80 ; MEMORY MAPPED
.equ	DIDR1	= 0x7F ; MEMORY MAPPED
.equ	DIDR0	= 0x7E ; MEMORY MAPPED
.equ	ADMUXB	= 0x7D ; MEMORY MAPPED
.equ	ADMUXA	= 0x7C ; MEMORY MAPPED
.equ	ADCSRB	= 0x7B ; MEMORY MAPPED
.equ	ADCSRA	= 0x7A ; MEMORY MAPPED
.equ	ADCH	= 0x79 ; MEMORY MAPPED
.equ	ADCL	= 0x78 ; MEMORY MAPPED
.equ	PCMSK3	= 0x73 ; MEMORY MAPPED
.equ	TIMSK1	= 0x6F ; MEMORY MAPPED
.equ	TIMSK0	= 0x6E ; MEMORY MAPPED
.equ	PCMSK2	= 0x6D ; MEMORY MAPPED
.equ	PCMSK1	= 0x6C ; MEMORY MAPPED
.equ	PCMSK0	= 0x6B ; MEMORY MAPPED
.equ	EICRA	= 0x69 ; MEMORY MAPPED
.equ	PCICR	= 0x68 ; MEMORY MAPPED
.equ	OSCCAL1	= 0x67 ; MEMORY MAPPED
.equ	OSCCAL0	= 0x66 ; MEMORY MAPPED
.equ	PRR	= 0x64 ; MEMORY MAPPED
.equ	CLKPR	= 0x61 ; MEMORY MAPPED
.equ	WDTCSR	= 0x60 ; MEMORY MAPPED
.equ	SREG	= 0x3F ; 
.equ	SPH	= 0x3E ; 
.equ	SPL	= 0x3D ; 
.equ	SPMCSR	= 0x37 ; 
.equ	CCP	= 0x36 ; 
.equ	MCUCR	= 0x35 ; 
.equ	MCUSR	= 0x34 ; 
.equ	SMCR	= 0x33 ; 
.equ	ACSRA	= 0x30 ; 
.equ	ACSRB	= 0x2F ; 
.equ	SPDR	= 0x2E ; 
.equ	SPSR	= 0x2D ; 
.equ	SPCR	= 0x2C ; 
.equ	GPIOR2	= 0x2B ; 
.equ	GPIOR1	= 0x2A ; 
.equ	OCR0B	= 0x28 ; 
.equ	OCR0A	= 0x27 ; 
.equ	TCNT0	= 0x26 ; 
.equ	TCCR0B	= 0x25 ; 
.equ	TCCR0A	= 0x24 ; 
.equ	GTCCR	= 0x23 ; 
.equ	EEAR	= 0x21 ; 
.equ	EEDR	= 0x20 ; 
.equ	EECR	= 0x1F ; 
.equ	GPIOR0	= 0x1E ; 
.equ	EIMSK	= 0x1D ; 
.equ	EIFR	= 0x1C ; 
.equ	PCIFR	= 0x1B ; 
.equ	TIFR1	= 0x16 ; 
.equ	TIFR0	= 0x15 ; 
.equ	PHDE	= 0x14 ; 
.equ	PUED	= 0x0F ; 
.equ	PORTD	= 0x0E ; 
.equ	DDRD	= 0x0D ; 
.equ	PIND	= 0x0C ; 
.equ	PUEC	= 0x0B ; 
.equ	PORTC	= 0x0A ; 
.equ	DDRC	= 0x09 ; 
.equ	PINC	= 0x08 ; 
.equ	PUEB	= 0x07 ; 
.equ	PORTB	= 0x06 ; 
.equ	DDRB	= 0x05 ; 
.equ	PINB	= 0x04 ; 
.equ	PUEA	= 0x03 ; 
.equ	PORTA	= 0x02 ; 
.equ	DDRA	= 0x01 ; 
.equ	PINA	= 0x00 ; 


; ***** BIT DEFINITIONS **************************************************

; ***** SPI *****************

; SPDR - SPI Data Register
.equ	SPDR0	= 0 ; SPI Data Register Bit 0
.equ	SPDR1	= 1 ; SPI Data Register Bit 1
.equ	SPDR2	= 2 ; SPI Data Register Bit 2
.equ	SPDR3	= 3 ; SPI Data Register Bit 3
.equ	SPDR4	= 4 ; SPI Data Register Bit 4
.equ	SPDR5	= 5 ; SPI Data Register Bit 5
.equ	SPDR6	= 6 ; SPI Data Register Bit 6
.equ	SPDR7	= 7 ; SPI Data Register Bit 7

; SPSR - SPI Status Register
.equ	SPI2X	= 0 ; Double SPI Speed Bit
.equ	WCOL	= 6 ; Write Collision Flag
.equ	SPIF	= 7 ; SPI Interrupt Flag

; SPCR - SPI Control Register
.equ	SPR0	= 0 ; SPI Clock Rate Selects
.equ	SPR1	= 1 ; SPI Clock Rate Selects
.equ	CPHA	= 2 ; Clock Phase
.equ	CPOL	= 3 ; Clock polarity
.equ	MSTR	= 4 ; Master/Slave Select
.equ	DORD	= 5 ; Data Order
.equ	SPE	= 6 ; SPI Enable
.equ	SPIE	= 7 ; SPI Interrupt Enable


; ***** PORTA *****************

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


; ***** PORTB *****************

; PUEB - Pull-up Enable Control Register
.equ	PUEB0	= 0 ; Pull-up Enable Control Register Bit 0
.equ	PUEB1	= 1 ; Pull-up Enable Control Register Bit 1
.equ	PUEB2	= 2 ; Pull-up Enable Control Register Bit 2
.equ	PUEB3	= 3 ; Pull-up Enable Control Register Bit 3
.equ	PUEB4	= 4 ; Pull-up Enable Control Register Bit 4
.equ	PUEB5	= 5 ; Pull-up Enable Control Register Bit 5
.equ	PUEB6	= 6 ; Pull-up Enable Control Register Bit 6
.equ	PUEB7	= 7 ; Pull-up Enable Control Register Bit 7

; PORTB - Port B Data Register
.equ	PORTB0	= 0 ; Port B Data Register Bit 0
.equ	PORTB1	= 1 ; Port B Data Register Bit 1
.equ	PORTB2	= 2 ; Port B Data Register Bit 2
.equ	PORTB3	= 3 ; Port B Data Register Bit 3
.equ	PORTB4	= 4 ; Port B Data Register Bit 4
.equ	PORTB5	= 5 ; Port B Data Register Bit 5
.equ	PORTB6	= 6 ; Port B Data Register Bit 6
.equ	PORTB7	= 7 ; Port B Data Register Bit 7

; DDRB - Data Direction Register, Port B
.equ	DDRB0	= 0 ; Data Direction Register, Port B Bit 0
.equ	DDRB1	= 1 ; Data Direction Register, Port B Bit 1
.equ	DDRB2	= 2 ; Data Direction Register, Port B Bit 2
.equ	DDRB3	= 3 ; Data Direction Register, Port B Bit 3
.equ	DDRB4	= 4 ; Data Direction Register, Port B Bit 4
.equ	DDRB5	= 5 ; Data Direction Register, Port B Bit 5
.equ	DDRB6	= 6 ; Data Direction Register, Port B Bit 6
.equ	DDRB7	= 7 ; Data Direction Register, Port B Bit 7

; PINB - Port B Input Pins
.equ	PINB0	= 0 ; Port B Input Pins Bit 0
.equ	PINB1	= 1 ; Port B Input Pins Bit 1
.equ	PINB2	= 2 ; Port B Input Pins Bit 2
.equ	PINB3	= 3 ; Port B Input Pins Bit 3
.equ	PINB4	= 4 ; Port B Input Pins Bit 4
.equ	PINB5	= 5 ; Port B Input Pins Bit 5
.equ	PINB6	= 6 ; Port B Input Pins Bit 6
.equ	PINB7	= 7 ; Port B Input Pins Bit 7


; ***** PORTC *****************

; PHDE - Port High Drive Enable Register
.equ	PHDEC	= 2 ; Port C High Drive Enable

; PUEC - Pull-up Enable Control Register
.equ	PUEC0	= 0 ; Pull-up Enable Control Register Bit 0
.equ	PUEC1	= 1 ; Pull-up Enable Control Register Bit 1
.equ	PUEC2	= 2 ; Pull-up Enable Control Register Bit 2
.equ	PUEC3	= 3 ; Pull-up Enable Control Register Bit 3
.equ	PUEC4	= 4 ; Pull-up Enable Control Register Bit 4
.equ	PUEC5	= 5 ; Pull-up Enable Control Register Bit 5
.equ	PUEC6	= 6 ; Pull-up Enable Control Register Bit 6
.equ	PUEC7	= 7 ; Pull-up Enable Control Register Bit 7

; PORTC - Port C Data Register
.equ	PORTC0	= 0 ; Port C Data Register Bit 0
.equ	PORTC1	= 1 ; Port C Data Register Bit 1
.equ	PORTC2	= 2 ; Port C Data Register Bit 2
.equ	PORTC3	= 3 ; Port C Data Register Bit 3
.equ	PORTC4	= 4 ; Port C Data Register Bit 4
.equ	PORTC5	= 5 ; Port C Data Register Bit 5
.equ	PORTC6	= 6 ; Port C Data Register Bit 6
.equ	PORTC7	= 7 ; Port C Data Register Bit 7

; DDRC - Data Direction Register, Port C
.equ	DDRC0	= 0 ; Data Direction Register, Port C Bit 0
.equ	DDRC1	= 1 ; Data Direction Register, Port C Bit 1
.equ	DDRC2	= 2 ; Data Direction Register, Port C Bit 2
.equ	DDRC3	= 3 ; Data Direction Register, Port C Bit 3
.equ	DDRC4	= 4 ; Data Direction Register, Port C Bit 4
.equ	DDRC5	= 5 ; Data Direction Register, Port C Bit 5
.equ	DDRC6	= 6 ; Data Direction Register, Port C Bit 6
.equ	DDRC7	= 7 ; Data Direction Register, Port C Bit 7

; PINC - Port C Input Pins
.equ	PINC0	= 0 ; Port C Input Pins Bit 0
.equ	PINC1	= 1 ; Port C Input Pins Bit 1
.equ	PINC2	= 2 ; Port C Input Pins Bit 2
.equ	PINC3	= 3 ; Port C Input Pins Bit 3
.equ	PINC4	= 4 ; Port C Input Pins Bit 4
.equ	PINC5	= 5 ; Port C Input Pins Bit 5
.equ	PINC6	= 6 ; Port C Input Pins Bit 6
.equ	PINC7	= 7 ; Port C Input Pins Bit 7


; ***** PORTD *****************

; PUED - Pull-up Enable Control Register
.equ	PUED0	= 0 ; Pull-up Enable Control Register Bit 0
.equ	PUED1	= 1 ; Pull-up Enable Control Register Bit 1
.equ	PUED2	= 2 ; Pull-up Enable Control Register Bit 2
.equ	PUED3	= 3 ; Pull-up Enable Control Register Bit 3

; PORTD - Port D Data Register
.equ	PORTD0	= 0 ; Port D Data Register Bit 0
.equ	PORTD1	= 1 ; Port D Data Register Bit 1
.equ	PORTD2	= 2 ; Port D Data Register Bit 2
.equ	PORTD3	= 3 ; Port D Data Register Bit 3

; DDRD - Data Direction Register, Port D
.equ	DDRD0	= 0 ; Data Direction Register, Port D Bit 0
.equ	DDRD1	= 1 ; Data Direction Register, Port D Bit 1
.equ	DDRD2	= 2 ; Data Direction Register, Port D Bit 2
.equ	DDRD3	= 3 ; Data Direction Register, Port D Bit 3

; PIND - Port D Input Pins
.equ	PIND0	= 0 ; Port D Input Pins Bit 0
.equ	PIND1	= 1 ; Port D Input Pins Bit 1
.equ	PIND2	= 2 ; Port D Input Pins Bit 2
.equ	PIND3	= 3 ; Port D Input Pins Bit 3


; ***** CPU *****************

; PRR - Power Reduction Register
.equ	PRADC	= 0 ; Power Reduction ADC
.equ	PRUSART0	= 1 ; Power Reduction USART 0
.equ	PRSPI	= 2 ; Power Reduction SPI
.equ	PRTIM1	= 3 ; Power Reduction Timer/Counter1
.equ	PRTIM0	= 5 ; Power Reduction Timer/Counter0
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
.equ	IVSEL	= 1 ; Interrupt Vector Select

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

; SMCR - Sleep Mode Control Register
.equ	SE	= 0 ; Sleep Enable
.equ	SM0	= 1 ; Sleep Mode Select Bits
.equ	SM1	= 2 ; Sleep Mode Select Bits

; SPMCSR - Store Program Memory Control and Status Register
.equ	SPMEN	= 0 ; Store Program Memory Enable
.equ	PGERS	= 1 ; Page Erase
.equ	PGWRT	= 2 ; Page Write
.equ	RWFLB	= 3 ; Read/Write Fuse and Lock Bits
.equ	RWWSRE	= 4 ; Read-While-Write section read enable
.equ	RSIG	= 5 ; Read Device Signature Imprint Table
.equ	RWWSB	= 6 ; Read-While-Write Section Busy
.equ	SPMIE	= 7 ; SPM Interrupt Enable


; ***** TIMER_COUNTER_0 *****************

; OCR0B - Timer/Counter0 Output Compare Register
.equ	OCR0B0	= 0 ; Timer/Counter0 Output Compare Register Bit 0
.equ	OCR0B1	= 1 ; Timer/Counter0 Output Compare Register Bit 1
.equ	OCR0B2	= 2 ; Timer/Counter0 Output Compare Register Bit 2
.equ	OCR0B3	= 3 ; Timer/Counter0 Output Compare Register Bit 3
.equ	OCR0B4	= 4 ; Timer/Counter0 Output Compare Register Bit 4
.equ	OCR0B5	= 5 ; Timer/Counter0 Output Compare Register Bit 5
.equ	OCR0B6	= 6 ; Timer/Counter0 Output Compare Register Bit 6
.equ	OCR0B7	= 7 ; Timer/Counter0 Output Compare Register Bit 7

; OCR0A - Timer/Counter0 Output Compare Register
.equ	OCR0A0	= 0 ; Timer/Counter0 Output Compare Register Bit 0
.equ	OCR0A1	= 1 ; Timer/Counter0 Output Compare Register Bit 1
.equ	OCR0A2	= 2 ; Timer/Counter0 Output Compare Register Bit 2
.equ	OCR0A3	= 3 ; Timer/Counter0 Output Compare Register Bit 3
.equ	OCR0A4	= 4 ; Timer/Counter0 Output Compare Register Bit 4
.equ	OCR0A5	= 5 ; Timer/Counter0 Output Compare Register Bit 5
.equ	OCR0A6	= 6 ; Timer/Counter0 Output Compare Register Bit 6
.equ	OCR0A7	= 7 ; Timer/Counter0 Output Compare Register Bit 7

; TCNT0 - Timer/Counter0
.equ	TCNT00	= 0 ; Timer/Counter0 Bit 0
.equ	TCNT01	= 1 ; Timer/Counter0 Bit 1
.equ	TCNT02	= 2 ; Timer/Counter0 Bit 2
.equ	TCNT03	= 3 ; Timer/Counter0 Bit 3
.equ	TCNT04	= 4 ; Timer/Counter0 Bit 4
.equ	TCNT05	= 5 ; Timer/Counter0 Bit 5
.equ	TCNT06	= 6 ; Timer/Counter0 Bit 6
.equ	TCNT07	= 7 ; Timer/Counter0 Bit 7

; TCCR0B - Timer/Counter Control Register B
.equ	CS00	= 0 ; Clock Select
.equ	CS01	= 1 ; Clock Select
.equ	CS02	= 2 ; Clock Select
.equ	WGM02	= 3 ; 
.equ	FOC0B	= 6 ; Force Output Compare B
.equ	FOC0A	= 7 ; Force Output Compare A

; TCCR0A - Timer/Counter  Control Register A
.equ	WGM00	= 0 ; Waveform Generation Mode
.equ	WGM01	= 1 ; Waveform Generation Mode
.equ	COM0B0	= 4 ; Compare Output Mode, Fast PWm
.equ	COM0B1	= 5 ; Compare Output Mode, Fast PWm
.equ	COM0A0	= 6 ; Compare Output Mode, Phase Correct PWM Mode
.equ	COM0A1	= 7 ; Compare Output Mode, Phase Correct PWM Mode

; TIMSK0 - Timer/Counter0 Interrupt Mask Register
.equ	TOIE0	= 0 ; Timer/Counter0 Overflow Interrupt Enable
.equ	OCIE0A	= 1 ; Timer/Counter0 Output Compare Match A Interrupt Enable
.equ	OCIE0B	= 2 ; Timer/Counter0 Output Compare Match B Interrupt Enable

; TIFR0 - Timer/Counter0 Interrupt Flag register
.equ	TOV0	= 0 ; Timer/Counter0 Overflow Flag
.equ	OCF0A	= 1 ; Timer/Counter0 Output Compare Flag 0A
.equ	OCF0B	= 2 ; Timer/Counter0 Output Compare Flag 0B

; GTCCR - General Timer/Counter Control Register
.equ	PSRSYNC	= 0 ; Prescaler Reset Timer/Counter1 and Timer/Counter0
.equ	TSM	= 7 ; Timer/Counter Synchronization Mode


; ***** TIMER_COUNTER_1 *****************

; TIMSK1 - Timer/Counter Interrupt Mask Register
.equ	TOIE1	= 0 ; Timer/Counter1 Overflow Interrupt Enable
.equ	OCIE1A	= 1 ; Timer/Counter1 Output CompareA Match Interrupt Enable
.equ	OCIE1B	= 2 ; Timer/Counter1 Output CompareB Match Interrupt Enable
.equ	ICIE1	= 5 ; Timer/Counter1 Input Capture Interrupt Enable

; TIFR1 - Timer/Counter Interrupt Flag register
.equ	TOV1	= 0 ; Timer/Counter1 Overflow Flag
.equ	OCF1A	= 1 ; Output Compare Flag 1A
.equ	OCF1B	= 2 ; Output Compare Flag 1B
.equ	ICF1	= 5 ; Input Capture Flag 1

; TCCR1A - Timer/Counter1 Control Register A
.equ	WGM10	= 0 ; Waveform Generation Mode
.equ	WGM11	= 1 ; Waveform Generation Mode
.equ	COM1B0	= 4 ; Compare Output Mode 1B, bits
.equ	COM1B1	= 5 ; Compare Output Mode 1B, bits
.equ	COM1A0	= 6 ; Compare Output Mode 1A, bits
.equ	COM1A1	= 7 ; Compare Output Mode 1A, bits

; TCCR1B - Timer/Counter1 Control Register B
.equ	CS10	= 0 ; Prescaler source of Timer/Counter 1
.equ	CS11	= 1 ; Prescaler source of Timer/Counter 1
.equ	CS12	= 2 ; Prescaler source of Timer/Counter 1
.equ	WGM12	= 3 ; Waveform Generation Mode
.equ	WGM13	= 4 ; Waveform Generation Mode
.equ	ICES1	= 6 ; Input Capture 1 Edge Select
.equ	ICNC1	= 7 ; Input Capture 1 Noise Canceler

; TCCR1C - Timer/Counter1 Control Register C
.equ	FOC1B	= 6 ; 
.equ	FOC1A	= 7 ; 

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

; OCR1A - Timer/Counter1 Output Compare Register  Bytes
.equ	OCR1AH0	= 0 ; Timer/Counter1 Output Compare Register  Bytes High Bit 0
.equ	OCR1AH1	= 1 ; Timer/Counter1 Output Compare Register  Bytes High Bit 1
.equ	OCR1AH2	= 2 ; Timer/Counter1 Output Compare Register  Bytes High Bit 2
.equ	OCR1AH3	= 3 ; Timer/Counter1 Output Compare Register  Bytes High Bit 3
.equ	OCR1AH4	= 4 ; Timer/Counter1 Output Compare Register  Bytes High Bit 4
.equ	OCR1AH5	= 5 ; Timer/Counter1 Output Compare Register  Bytes High Bit 5
.equ	OCR1AH6	= 6 ; Timer/Counter1 Output Compare Register  Bytes High Bit 6
.equ	OCR1AH7	= 7 ; Timer/Counter1 Output Compare Register  Bytes High Bit 7


.equ	OCR1AL0	= 0 ; Timer/Counter1 Output Compare Register  Bytes Low Bit 0
.equ	OCR1AL1	= 1 ; Timer/Counter1 Output Compare Register  Bytes Low Bit 1
.equ	OCR1AL2	= 2 ; Timer/Counter1 Output Compare Register  Bytes Low Bit 2
.equ	OCR1AL3	= 3 ; Timer/Counter1 Output Compare Register  Bytes Low Bit 3
.equ	OCR1AL4	= 4 ; Timer/Counter1 Output Compare Register  Bytes Low Bit 4
.equ	OCR1AL5	= 5 ; Timer/Counter1 Output Compare Register  Bytes Low Bit 5
.equ	OCR1AL6	= 6 ; Timer/Counter1 Output Compare Register  Bytes Low Bit 6
.equ	OCR1AL7	= 7 ; Timer/Counter1 Output Compare Register  Bytes Low Bit 7

; OCR1B - Timer/Counter1 Output Compare Register  Bytes
.equ	OCR1BH0	= 0 ; Timer/Counter1 Output Compare Register  Bytes High Bit 0
.equ	OCR1BH1	= 1 ; Timer/Counter1 Output Compare Register  Bytes High Bit 1
.equ	OCR1BH2	= 2 ; Timer/Counter1 Output Compare Register  Bytes High Bit 2
.equ	OCR1BH3	= 3 ; Timer/Counter1 Output Compare Register  Bytes High Bit 3
.equ	OCR1BH4	= 4 ; Timer/Counter1 Output Compare Register  Bytes High Bit 4
.equ	OCR1BH5	= 5 ; Timer/Counter1 Output Compare Register  Bytes High Bit 5
.equ	OCR1BH6	= 6 ; Timer/Counter1 Output Compare Register  Bytes High Bit 6
.equ	OCR1BH7	= 7 ; Timer/Counter1 Output Compare Register  Bytes High Bit 7


.equ	OCR1BL0	= 0 ; Timer/Counter1 Output Compare Register  Bytes Low Bit 0
.equ	OCR1BL1	= 1 ; Timer/Counter1 Output Compare Register  Bytes Low Bit 1
.equ	OCR1BL2	= 2 ; Timer/Counter1 Output Compare Register  Bytes Low Bit 2
.equ	OCR1BL3	= 3 ; Timer/Counter1 Output Compare Register  Bytes Low Bit 3
.equ	OCR1BL4	= 4 ; Timer/Counter1 Output Compare Register  Bytes Low Bit 4
.equ	OCR1BL5	= 5 ; Timer/Counter1 Output Compare Register  Bytes Low Bit 5
.equ	OCR1BL6	= 6 ; Timer/Counter1 Output Compare Register  Bytes Low Bit 6
.equ	OCR1BL7	= 7 ; Timer/Counter1 Output Compare Register  Bytes Low Bit 7

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

; GTCCR - General Timer/Counter Control Register


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


; ***** AD_CONVERTER *****************

; ADMUXA - The ADC multiplexer Selection Register A
.equ	MUX0	= 0 ; Analog Channel Selection Bits 4:0
.equ	MUX1	= 1 ; Analog Channel Selection Bits 4:0
.equ	MUX2	= 2 ; Analog Channel Selection Bits 4:0
.equ	MUX3	= 3 ; Analog Channel Selection Bits 4:0
.equ	MUX4	= 4 ; Analog Channel Selection Bits 4:0

; ADMUXB - The ADC multiplexer Selection Register B
.equ	MUX5	= 0 ; Analog Channel Selection Bit 5
.equ	REFS	= 5 ; Reference Selection Bit

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
.equ	ADLAR	= 3 ; 

; DIDR3 - Digital Input Disable Register 2
.equ	ADC24D	= 0 ; ADC24 Digital input Disable
.equ	ADC25D	= 1 ; ADC25 Digital input Disable
.equ	ADC26D	= 2 ; ADC26 Digital input Disable
.equ	ADC27D	= 3 ; ADC27 Digital input Disable

; DIDR2 - Digital Input Disable Register 2
.equ	ADC16D	= 0 ; ADC16 Digital input Disable
.equ	ADC17D	= 1 ; ADC17 Digital input Disable
.equ	ADC18D	= 2 ; ADC18 Digital input Disable
.equ	ADC19D	= 3 ; ADC19 Digital input Disable
.equ	ADC20D	= 4 ; ADC20 Digital input Disable
.equ	ADC21D	= 5 ; ADC21 Digital input Disable
.equ	ADC22D	= 6 ; ADC22 Digital input Disable
.equ	ADC23D	= 7 ; ADC23 Digital input Disable

; DIDR1 - Digital Input Disable Register 1
.equ	ADC8D	= 0 ; ADC8 Digital input Disable
.equ	ADC9D	= 1 ; ADC9 Digital input Disable
.equ	ADC10D	= 2 ; ADC10 Digital input Disable
.equ	ADC11D	= 3 ; ADC11 Digital input Disable
.equ	ADC12D	= 4 ; ADC12 Digital input Disable
.equ	ADC13D	= 5 ; ADC13 Digital input Disable
.equ	ADC14D	= 6 ; ADC14 Digital input Disable
.equ	ADC15D	= 7 ; ADC15 Digital input Disable

; DIDR0 - Digital Input Disable Register 0
.equ	ADC0D	= 0 ; ADC0 Digital input Disable
.equ	ADC1D	= 1 ; ADC1 Digital input Disable
.equ	ADC2D	= 2 ; ADC2 Digital input Disable
.equ	ADC3D	= 3 ; ADC3 Digital input Disable
.equ	ADC4D	= 4 ; ADC4 Digital input Disable
.equ	ADC5D	= 5 ; ADC5 Digital input Disable
.equ	ADC6D	= 6 ; ADC6 Digital input Disable
.equ	ADC7D	= 7 ; ADC7 Digital input Disable


; ***** ANALOG_COMPARATOR *****************

; ACSRB - Analog Comparator Control And Status Register B
.equ	ACPMUX0	= 0 ; Analog Comparator Positive Input Multiplexer Bits 1:0
.equ	ACPMUX1	= 1 ; Analog Comparator Positive Input Multiplexer Bits 1:0
.equ	ACNMUX0	= 2 ; Analog Comparator Negative Input Multiplexer
.equ	ACNMUX1	= 3 ; Analog Comparator Negative Input Multiplexer
.equ	HLEV	= 6 ; Hysteresis Level
.equ	HSEL	= 7 ; Hysteresis Select

; ACSRA - Analog Comparator Control And Status Register A
.equ	ACIS0	= 0 ; Analog Comparator Interrupt Mode Select bits
.equ	ACIS1	= 1 ; Analog Comparator Interrupt Mode Select bits
.equ	ACIC	= 2 ; Analog Comparator Input Capture Enable
.equ	ACIE	= 3 ; Analog Comparator Interrupt Enable
.equ	ACI	= 4 ; Analog Comparator Interrupt Flag
.equ	ACO	= 5 ; Analog Compare Output
.equ	ACPMUX2	= 6 ; Analog Comparator Positive Input Multiplexer Bit 2
.equ	ACD	= 7 ; Analog Comparator Disable


; ***** EXTERNAL_INTERRUPT *****************

; EICRA - External Interrupt Control Register
.equ	ISC00	= 0 ; External Interrupt Sense Control 0 Bits
.equ	ISC01	= 1 ; External Interrupt Sense Control 0 Bits
.equ	ISC10	= 2 ; External Interrupt Sense Control 1 Bits
.equ	ISC11	= 3 ; External Interrupt Sense Control 1 Bits

; EIMSK - External Interrupt Mask Register
.equ	INT0	= 0 ; External Interrupt Request Enables
.equ	INT1	= 1 ; External Interrupt Request Enables

; EIFR - External Interrupt Flag Register
.equ	INTF0	= 0 ; External Interrupt Flags
.equ	INTF1	= 1 ; External Interrupt Flags

; PCICR - Pin Change Interrupt Control Register
.equ	PCIE0	= 0 ; Pin Change Interrupt Enables
.equ	PCIE1	= 1 ; Pin Change Interrupt Enables
.equ	PCIE2	= 2 ; Pin Change Interrupt Enables
.equ	PCIE3	= 3 ; Pin Change Interrupt Enables

; PCMSK3 - Pin Change Mask Register 3
.equ	PCINT24	= 0 ; Pin Change Enable Masks
.equ	PCINT25	= 1 ; Pin Change Enable Masks
.equ	PCINT26	= 2 ; Pin Change Enable Masks
.equ	PCINT27	= 3 ; Pin Change Enable Masks

; PCMSK2 - Pin Change Mask Register 2
.equ	PCINT16	= 0 ; Pin Change Enable Masks
.equ	PCINT17	= 1 ; Pin Change Enable Masks
.equ	PCINT18	= 2 ; Pin Change Enable Masks
.equ	PCINT19	= 3 ; Pin Change Enable Masks
.equ	PCINT20	= 4 ; Pin Change Enable Masks
.equ	PCINT21	= 5 ; Pin Change Enable Masks
.equ	PCINT22	= 6 ; Pin Change Enable Masks
.equ	PCINT23	= 7 ; Pin Change Enable Masks

; PCMSK1 - Pin Change Mask Register 1
.equ	PCINT8	= 0 ; Pin Change Enable Masks
.equ	PCINT9	= 1 ; Pin Change Enable Masks
.equ	PCINT10	= 2 ; Pin Change Enable Masks
.equ	PCINT11	= 3 ; Pin Change Enable Masks
.equ	PCINT12	= 4 ; Pin Change Enable Masks
.equ	PCINT13	= 5 ; Pin Change Enable Masks
.equ	PCINT14	= 6 ; Pin Change Enable Masks
.equ	PCINT15	= 7 ; Pin Change Enable Masks

; PCMSK0 - Pin Change Mask Register 0
.equ	PCINT0	= 0 ; Pin Change Enable Masks
.equ	PCINT1	= 1 ; Pin Change Enable Masks
.equ	PCINT2	= 2 ; Pin Change Enable Masks
.equ	PCINT3	= 3 ; Pin Change Enable Masks
.equ	PCINT4	= 4 ; Pin Change Enable Masks
.equ	PCINT5	= 5 ; Pin Change Enable Masks
.equ	PCINT6	= 6 ; Pin Change Enable Masks
.equ	PCINT7	= 7 ; Pin Change Enable Masks

; PCIFR - Pin Change Interrupt Flag Register
.equ	PCIF0	= 0 ; Pin Change Interrupt Flags
.equ	PCIF1	= 1 ; Pin Change Interrupt Flags
.equ	PCIF2	= 2 ; Pin Change Interrupt Flags
.equ	PCIF3	= 3 ; Pin Change Interrupt Flags


; ***** WATCHDOG *****************

; WDTCSR - Watchdog Timer Control and Status Register
.equ	WDE	= 3 ; Watch Dog Enable
.equ	WDP0	= 0 ; Watchdog Timer Prescaler Bits
.equ	WDP1	= 1 ; Watchdog Timer Prescaler Bits
.equ	WDP2	= 2 ; Watchdog Timer Prescaler Bits
.equ	WDIE	= 6 ; Watchdog Timer Interrupt Enable
.equ	WDIF	= 7 ; Watchdog Timer Interrupt Flag


; ***** EEPROM *****************

; EEAR - EEPROM Read/Write Access
.equ	EEAR0	= 0 ; EEPROM Read/Write Access Bit 0
.equ	EEAR1	= 1 ; EEPROM Read/Write Access Bit 1
.equ	EEAR2	= 2 ; EEPROM Read/Write Access Bit 2
.equ	EEAR3	= 3 ; EEPROM Read/Write Access Bit 3
.equ	EEAR4	= 4 ; EEPROM Read/Write Access Bit 4
.equ	EEAR5	= 5 ; EEPROM Read/Write Access Bit 5
.equ	EEAR6	= 6 ; EEPROM Read/Write Access Bit 6
.equ	EEAR7	= 7 ; EEPROM Read/Write Access Bit 7

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
.equ	EEPM0	= 4 ; EEPROM Programming Mode Bits
.equ	EEPM1	= 5 ; EEPROM Programming Mode Bits


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


; ***** USART *****************

; UDR - USART I/O Data Register
.equ	UDR0	= 0 ; USART I/O Data Register Bit 0
.equ	UDR1	= 1 ; USART I/O Data Register Bit 1
.equ	UDR2	= 2 ; USART I/O Data Register Bit 2
.equ	UDR3	= 3 ; USART I/O Data Register Bit 3
.equ	UDR4	= 4 ; USART I/O Data Register Bit 4
.equ	UDR5	= 5 ; USART I/O Data Register Bit 5
.equ	UDR6	= 6 ; USART I/O Data Register Bit 6
.equ	UDR7	= 7 ; USART I/O Data Register Bit 7

; UCSRA - USART Control and Status Register A
.equ	MPCM	= 0 ; Multi-processor Communication Mode
.equ	U2X	= 1 ; Double the USART transmission speed
.equ	UPE	= 2 ; Parity Error
.equ	DOR	= 3 ; Data overRun
.equ	FE	= 4 ; Framing Error
.equ	UDRE	= 5 ; USART Data Register Empty
.equ	TXC	= 6 ; USART Transmitt Complete
.equ	RXC	= 7 ; USART Receive Complete

; UCSRB - USART Control and Status Register B
.equ	TXB8	= 0 ; Transmit Data Bit 8
.equ	RXB8	= 1 ; Receive Data Bit 8
.equ	UCSZ2	= 2 ; Character Size
.equ	TXEN	= 3 ; Transmitter Enable
.equ	RXEN	= 4 ; Receiver Enable
.equ	UDRIE	= 5 ; USART Data register Empty Interrupt Enable
.equ	TXCIE	= 6 ; TX Complete Interrupt Enable
.equ	RXCIE	= 7 ; RX Complete Interrupt Enable

; UCSRC - USART Control and Status Register C
.equ	UCPOL	= 0 ; Clock Polarity
.equ	UCSZ0	= 1 ; Character Size
.equ	UCSZ1	= 2 ; Character Size
.equ	USBS	= 3 ; Stop Bit Select
.equ	UPM0	= 4 ; Parity Mode Bits
.equ	UPM1	= 5 ; Parity Mode Bits
.equ	UMSEL0	= 6 ; USART Mode Select
.equ	UMSEL1	= 7 ; USART Mode Select

; UCSRD - USART Control and Status Register D
.equ	SFDE	= 5 ; USART RX Start Frame Detection Enable
.equ	RXS	= 6 ; USART RX Start Flag
.equ	RXSIE	= 7 ; USART RX Start Interrupt Enable

; UBRR - USART Baud Rate Register  Bytes
.equ	UBRRH0	= 0 ; USART Baud Rate Register  Bytes High Bit 0
.equ	UBRRH1	= 1 ; USART Baud Rate Register  Bytes High Bit 1
.equ	UBRRH2	= 2 ; USART Baud Rate Register  Bytes High Bit 2
.equ	UBRRH3	= 3 ; USART Baud Rate Register  Bytes High Bit 3
.equ	UBRRH4	= 4 ; USART Baud Rate Register  Bytes High Bit 4
.equ	UBRRH5	= 5 ; USART Baud Rate Register  Bytes High Bit 5
.equ	UBRRH6	= 6 ; USART Baud Rate Register  Bytes High Bit 6
.equ	UBRRH7	= 7 ; USART Baud Rate Register  Bytes High Bit 7


.equ	UBRRL0	= 0 ; USART Baud Rate Register  Bytes Low Bit 0
.equ	UBRRL1	= 1 ; USART Baud Rate Register  Bytes Low Bit 1
.equ	UBRRL2	= 2 ; USART Baud Rate Register  Bytes Low Bit 2
.equ	UBRRL3	= 3 ; USART Baud Rate Register  Bytes Low Bit 3
.equ	UBRRL4	= 4 ; USART Baud Rate Register  Bytes Low Bit 4
.equ	UBRRL5	= 5 ; USART Baud Rate Register  Bytes Low Bit 5
.equ	UBRRL6	= 6 ; USART Baud Rate Register  Bytes Low Bit 6
.equ	UBRRL7	= 7 ; USART Baud Rate Register  Bytes Low Bit 7


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
.equ	SRAM_SIZE	= 512
.equ	RAMEND	= 0x02FF
.equ	E2END	= 0x00FF
.equ	EEPROMEND	= 0x00FF
.equ	EEADRBITS	= 8
.equ	XRAMEND	= 0x0000
#pragma AVRPART MEMORY PROG_FLASH 8192
#pragma AVRPART MEMORY INT_SRAM SIZE 512
#pragma AVRPART MEMORY INT_SRAM START_ADDR 0x100
#pragma AVRPART MEMORY EEPROM 256

; ***** INTERRUPT VECTORS ************************************************
.equ	INT0addr	 = 0x0001 ; External Interrupt Request 0
.equ	INT1addr	 = 0x0002 ; External Interrupt Request 1
.equ	PCINT0addr	 = 0x0003 ; Pin Change Interrupt Request 0
.equ	PCINT1addr	 = 0x0004 ; Pin Change Interrupt Request 1
.equ	PCINT2addr	 = 0x0005 ; Pin Change Interrupt Request 2
.equ	PCINT3addr	 = 0x0006 ; Pin Change Interrupt Request 3
.equ	WDTaddr	 = 0x0007 ; Watchdog Time-out Interrupt
.equ	TIMER1_CAPTaddr	 = 0x0008 ; Timer/Counter1 Capture Event
.equ	TIMER1_COMPAaddr	 = 0x0009 ; Timer/Counter1 Compare Match A
.equ	TIMER1_COMPBaddr	 = 0x000A ; Timer/Counter1 Compare Match B
.equ	TIMER1_OVFaddr	 = 0x000B ; Timer/Counter1 Overflow
.equ	TIMER0_COMPAaddr	 = 0x000C ; Timer/Counter0 Compare Match A
.equ	TIMER0_COMPBaddr	 = 0x000D ; Timer/Counter0 Compare Match B
.equ	TIMER0_OVFaddr	 = 0x000E ; Timer/Counter0 Overflow
.equ	SPI__STCaddr	 = 0x000F ; SPI Serial Transfer Complete
.equ	USART__STARTaddr	 = 0x0010 ; USART, Start
.equ	USART__RXaddr	 = 0x0011 ; USART Rx Complete
.equ	USART__UDREaddr	 = 0x0012 ; USART, Data Register Empty
.equ	USART__TXaddr	 = 0x0013 ; USART Tx Complete
.equ	ADCaddr	 = 0x0014 ; ADC Conversion Complete
.equ	EE_READYaddr	 = 0x0015 ; EEPROM Ready
.equ	ANALOG_COMPaddr	 = 0x0016 ; Analog Comparator
.equ	TWI_SLAVEaddr	 = 0x0017 ; Two-wire Serial Interface
.equ	SPM_Readyaddr	 = 0x0018 ; Store Program Memory Read
.equ	QTRIPaddr	 = 0x0019 ; Touch Sensing

.equ	INT_VECTOR_SIZE	= 26 ; size in words

#endif /* _TN828DEF_INC_ */

; ***** END OF FILE ******************************************************



