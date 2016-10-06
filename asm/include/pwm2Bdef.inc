;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ********************

;*************************************************************************
;* A P P L I C A T I O N   N O T E   F O R   T H E   A V R   F A M I L Y
;* 
;* Number            : AVR000
;* File Name         : pwm2bdef.inc
;* Title             : Register/Bit Definitions for the AT90PWM2B
;* Created           : 2014-02-06 16:08
;* Version           : 1.00
;* Support e-mail    : avr@atmel.com
;* Target MCU        : AT90PWM2B
;* 
;* DESCRIPTION
;* When including this file in the assembly program file, all I/O register 
;* names and I/O register bit names appearing in the data book can be used.
;* In addition, the six registers forming the three data pointers X, Y and 
;* Z have been assigned names XL - ZH. Highest RAM address for Internal 
;* SRAM is also defined 
;* 
;*************************************************************************

#ifndef _PWM2BDEF_INC_
#define _PWM2BDEF_INC_


#pragma partinc 0

; ***** SPECIFY DEVICE ***************************************************
.device	AT90PWM2B
#pragma AVRPART ADMIN PART_NAME AT90PWM2B
.equ	SIGNATURE_000	= 0x1E
.equ	SIGNATURE_001	= 0x93
.equ	SIGNATURE_002	= 0x83

#pragma AVRPART CORE CORE_VERSION V3

; ***** I/O REGISTER DEFINITIONS *****************************************
; NOTE:
; Definitions marked "MEMORY MAPPED" are extended I/O ports
; and cannot be used with IN/OUT instructions
.equ	PICR2H	= 0xFF ; MEMORY MAPPED
.equ	PICR2L	= 0xFE ; MEMORY MAPPED
.equ	PFRC2B	= 0xFD ; MEMORY MAPPED
.equ	PFRC2A	= 0xFC ; MEMORY MAPPED
.equ	PCTL2	= 0xFB ; MEMORY MAPPED
.equ	PCNF2	= 0xFA ; MEMORY MAPPED
.equ	OCR2RBH	= 0xF9 ; MEMORY MAPPED
.equ	OCR2RBL	= 0xF8 ; MEMORY MAPPED
.equ	OCR2SBH	= 0xF7 ; MEMORY MAPPED
.equ	OCR2SBL	= 0xF6 ; MEMORY MAPPED
.equ	OCR2RAH	= 0xF5 ; MEMORY MAPPED
.equ	OCR2RAL	= 0xF4 ; MEMORY MAPPED
.equ	OCR2SAH	= 0xF3 ; MEMORY MAPPED
.equ	OCR2SAL	= 0xF2 ; MEMORY MAPPED
.equ	POM2	= 0xF1 ; MEMORY MAPPED
.equ	PSOC2	= 0xF0 ; MEMORY MAPPED
.equ	PICR0H	= 0xDF ; MEMORY MAPPED
.equ	PICR0L	= 0xDE ; MEMORY MAPPED
.equ	PFRC0B	= 0xDD ; MEMORY MAPPED
.equ	PFRC0A	= 0xDC ; MEMORY MAPPED
.equ	PCTL0	= 0xDB ; MEMORY MAPPED
.equ	PCNF0	= 0xDA ; MEMORY MAPPED
.equ	OCR0RBH	= 0xD9 ; MEMORY MAPPED
.equ	OCR0RBL	= 0xD8 ; MEMORY MAPPED
.equ	OCR0SBH	= 0xD7 ; MEMORY MAPPED
.equ	OCR0SBL	= 0xD6 ; MEMORY MAPPED
.equ	OCR0RAH	= 0xD5 ; MEMORY MAPPED
.equ	OCR0RAL	= 0xD4 ; MEMORY MAPPED
.equ	OCR0SAH	= 0xD3 ; MEMORY MAPPED
.equ	OCR0SAL	= 0xD2 ; MEMORY MAPPED
.equ	PSOC0	= 0xD0 ; MEMORY MAPPED
.equ	EUDR	= 0xCE ; MEMORY MAPPED
.equ	MUBRRH	= 0xCD ; MEMORY MAPPED
.equ	MUBRRL	= 0xCC ; MEMORY MAPPED
.equ	EUCSRC	= 0xCA ; MEMORY MAPPED
.equ	EUCSRB	= 0xC9 ; MEMORY MAPPED
.equ	EUCSRA	= 0xC8 ; MEMORY MAPPED
.equ	UDR	= 0xC6 ; MEMORY MAPPED
.equ	UBRRH	= 0xC5 ; MEMORY MAPPED
.equ	UBRRL	= 0xC4 ; MEMORY MAPPED
.equ	UCSRC	= 0xC2 ; MEMORY MAPPED
.equ	UCSRB	= 0xC1 ; MEMORY MAPPED
.equ	UCSRA	= 0xC0 ; MEMORY MAPPED
.equ	AC2CON	= 0xAF ; MEMORY MAPPED
.equ	AC1CON	= 0xAE ; MEMORY MAPPED
.equ	AC0CON	= 0xAD ; MEMORY MAPPED
.equ	DACH	= 0xAC ; MEMORY MAPPED
.equ	DACL	= 0xAB ; MEMORY MAPPED
.equ	DACON	= 0xAA ; MEMORY MAPPED
.equ	PIM2	= 0xA5 ; MEMORY MAPPED
.equ	PIFR2	= 0xA4 ; MEMORY MAPPED
.equ	PIM0	= 0xA1 ; MEMORY MAPPED
.equ	PIFR0	= 0xA0 ; MEMORY MAPPED
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
.equ	ADMUX	= 0x7C ; MEMORY MAPPED
.equ	ADCSRB	= 0x7B ; MEMORY MAPPED
.equ	ADCSRA	= 0x7A ; MEMORY MAPPED
.equ	ADCH	= 0x79 ; MEMORY MAPPED
.equ	ADCL	= 0x78 ; MEMORY MAPPED
.equ	AMP1CSR	= 0x77 ; MEMORY MAPPED
.equ	AMP0CSR	= 0x76 ; MEMORY MAPPED
.equ	TIMSK1	= 0x6F ; MEMORY MAPPED
.equ	TIMSK0	= 0x6E ; MEMORY MAPPED
.equ	EICRA	= 0x69 ; MEMORY MAPPED
.equ	OSCCAL	= 0x66 ; MEMORY MAPPED
.equ	PRR	= 0x64 ; MEMORY MAPPED
.equ	CLKPR	= 0x61 ; MEMORY MAPPED
.equ	WDTCSR	= 0x60 ; MEMORY MAPPED
.equ	SREG	= 0x3F ; 
.equ	SPH	= 0x3E ; 
.equ	SPL	= 0x3D ; 
.equ	SPMCSR	= 0x37 ; 
.equ	MCUCR	= 0x35 ; 
.equ	MCUSR	= 0x34 ; 
.equ	SMCR	= 0x33 ; 
.equ	ACSR	= 0x30 ; 
.equ	SPDR	= 0x2E ; 
.equ	SPSR	= 0x2D ; 
.equ	SPCR	= 0x2C ; 
.equ	PLLCSR	= 0x29 ; 
.equ	OCR0B	= 0x28 ; 
.equ	OCR0A	= 0x27 ; 
.equ	TCNT0	= 0x26 ; 
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
.equ	GPIOR3	= 0x1B ; 
.equ	GPIOR2	= 0x1A ; 
.equ	GPIOR1	= 0x19 ; 
.equ	TIFR1	= 0x16 ; 
.equ	TIFR0	= 0x15 ; 
.equ	PORTE	= 0x0E ; 
.equ	DDRE	= 0x0D ; 
.equ	PINE	= 0x0C ; 
.equ	PORTD	= 0x0B ; 
.equ	DDRD	= 0x0A ; 
.equ	PIND	= 0x09 ; 
.equ	PORTB	= 0x05 ; 
.equ	DDRB	= 0x04 ; 
.equ	PINB	= 0x03 ; 


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


; ***** BOOT_LOAD *****************
; SPMCSR - Store Program Memory Control Register
.equ	SPMEN	= 0 ; Store Program Memory Enable
.equ	PGERS	= 1 ; Page Erase
.equ	PGWRT	= 2 ; Page Write
.equ	BLBSET	= 3 ; Boot Lock Bit Set
.equ	RWWSRE	= 4 ; Read While Write section read enable
.equ	RWWSB	= 6 ; Read While Write Section Busy
.equ	SPMIE	= 7 ; SPM Interrupt Enable


; ***** EUSART *****************
; EUDR - EUSART I/O Data Register
.equ	EUDR0	= 0 ; EUSART I/O Data Register Bit 0
.equ	EUDR1	= 1 ; EUSART I/O Data Register Bit 1
.equ	EUDR2	= 2 ; EUSART I/O Data Register Bit 2
.equ	EUDR3	= 3 ; EUSART I/O Data Register Bit 3
.equ	EUDR4	= 4 ; EUSART I/O Data Register Bit 4
.equ	EUDR5	= 5 ; EUSART I/O Data Register Bit 5
.equ	EUDR6	= 6 ; EUSART I/O Data Register Bit 6
.equ	EUDR7	= 7 ; EUSART I/O Data Register Bit 7

; EUCSRA - EUSART Control and Status Register A
.equ	URxS0	= 0 ; EUSART Control and Status Register A Bits
.equ	URxS1	= 1 ; EUSART Control and Status Register A Bits
.equ	URxS2	= 2 ; EUSART Control and Status Register A Bits
.equ	URxS3	= 3 ; EUSART Control and Status Register A Bits
.equ	UTxS0	= 4 ; EUSART Control and Status Register A Bits
.equ	UTxS1	= 5 ; EUSART Control and Status Register A Bits
.equ	UTxS2	= 6 ; EUSART Control and Status Register A Bits
.equ	UTxS3	= 7 ; EUSART Control and Status Register A Bits

; EUCSRB - EUSART Control Register B
.equ	BODR	= 0 ; Order Bit
.equ	EMCH	= 1 ; Manchester Mode Bit
.equ	EUSBS	= 3 ; EUSBS Enable Bit
.equ	EUSART	= 4 ; EUSART Enable Bit

; EUCSRC - EUSART Status Register C
.equ	STP0	= 0 ; Stop Bits
.equ	STP1	= 1 ; Stop Bits
.equ	F1617	= 2 ; F1617 Bit
.equ	FEM	= 3 ; Frame Error Manchester Bit

; MUBRRH - Manchester Receiver Baud Rate Register High Byte
.equ	MUBRR8	= 0 ; Manchester Receiver Baud Rate Register Bits
.equ	MUBRR9	= 1 ; Manchester Receiver Baud Rate Register Bits
.equ	MUBRR10	= 2 ; Manchester Receiver Baud Rate Register Bits
.equ	MUBRR11	= 3 ; Manchester Receiver Baud Rate Register Bits
.equ	MUBRR12	= 4 ; Manchester Receiver Baud Rate Register Bits
.equ	MUBRR13	= 5 ; Manchester Receiver Baud Rate Register Bits
.equ	MUBRR14	= 6 ; Manchester Receiver Baud Rate Register Bits
.equ	MUBRR15	= 7 ; Manchester Receiver Baud Rate Register Bits

; MUBRRL - Manchester Receiver Baud Rate Register Low Byte
.equ	MUBRR0	= 0 ; Manchester Receiver Baud Rate Register Bits
.equ	MUBRR1	= 1 ; Manchester Receiver Baud Rate Register Bits
.equ	MUBRR2	= 2 ; Manchester Receiver Baud Rate Register Bits
.equ	MUBRR3	= 3 ; Manchester Receiver Baud Rate Register Bits
.equ	MUBRR4	= 4 ; Manchester Receiver Baud Rate Register Bits
.equ	MUBRR5	= 5 ; Manchester Receiver Baud Rate Register Bits
.equ	MUBRR6	= 6 ; Manchester Receiver Baud Rate Register Bits
.equ	MUBRR7	= 7 ; Manchester Receiver Baud Rate Register Bits


; ***** ANALOG_COMPARATOR *****************
; AC0CON - Analog Comparator 0 Control Register
.equ	AC0M0	= 0 ; Analog Comparator 0 Multiplexer Register
.equ	AC0M1	= 1 ; Analog Comparator 0 Multiplexer Register
.equ	AC0M2	= 2 ; Analog Comparator 0 Multiplexer Register
.equ	AC0IS0	= 4 ; Analog Comparator 0  Interrupt Select Bit
.equ	AC0IS1	= 5 ; Analog Comparator 0  Interrupt Select Bit
.equ	AC0IE	= 6 ; Analog Comparator 0 Interrupt Enable Bit
.equ	AC0EN	= 7 ; Analog Comparator 0 Enable Bit

; AC1CON - Analog Comparator 1 Control Register
.equ	AC1M0	= 0 ; Analog Comparator 1 Multiplexer Register
.equ	AC1M1	= 1 ; Analog Comparator 1 Multiplexer Register
.equ	AC1M2	= 2 ; Analog Comparator 1 Multiplexer Register
.equ	AC1ICE	= 3 ; Analog Comparator 1 Interrupt Capture Enable Bit
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
.equ	AC0O	= 0 ; Analog Comparator 0 Output Bit
.equ	AC1O	= 1 ; Analog Comparator 1 Output Bit
.equ	AC2O	= 2 ; Analog Comparator 2 Output Bit
.equ	AC0IF	= 4 ; Analog Comparator 0 Interrupt Flag Bit
.equ	AC1IF	= 5 ; Analog Comparator 1  Interrupt Flag Bit
.equ	AC2IF	= 6 ; Analog Comparator 2 Interrupt Flag Bit
.equ	ACCKDIV	= 7 ; Analog Comparator Clock Divider


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
.equ	SPIPS	= 7 ; SPI Pin Select

; MCUSR - MCU Status Register
.equ	PORF	= 0 ; Power-on reset flag
.equ	EXTRF	= 1 ; External Reset Flag
.equ	BORF	= 2 ; Brown-out Reset Flag
.equ	WDRF	= 3 ; Watchdog Reset Flag

; OSCCAL - Oscillator Calibration Value
.equ	OSCCAL0	= 0 ; Oscillator Calibration 
.equ	OSCCAL1	= 1 ; Oscillator Calibration 
.equ	OSCCAL2	= 2 ; Oscillator Calibration 
.equ	OSCCAL3	= 3 ; Oscillator Calibration 
.equ	OSCCAL4	= 4 ; Oscillator Calibration 
.equ	OSCCAL5	= 5 ; Oscillator Calibration 
.equ	OSCCAL6	= 6 ; Oscillator Calibration 
.equ	OSCCAL7	= 7 ; Oscillator Calibration 

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

; GPIOR3 - General Purpose IO Register 3
.equ	GPIOR30	= 0 ; General Purpose IO Register 3 bis
.equ	GPIOR31	= 1 ; General Purpose IO Register 3 bis
.equ	GPIOR32	= 2 ; General Purpose IO Register 3 bis
.equ	GPIOR33	= 3 ; General Purpose IO Register 3 bis
.equ	GPIOR34	= 4 ; General Purpose IO Register 3 bis
.equ	GPIOR35	= 5 ; General Purpose IO Register 3 bis
.equ	GPIOR36	= 6 ; General Purpose IO Register 3 bis
.equ	GPIOR37	= 7 ; General Purpose IO Register 3 bis

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
.equ	PLLF	= 2 ; PLL Factor

; PRR - Power Reduction Register
.equ	PRADC	= 0 ; Power Reduction ADC
.equ	PRUSART0	= 1 ; Power Reduction USART
.equ	PRSPI	= 2 ; Power Reduction Serial Peripheral Interface
.equ	PRTIM0	= 3 ; Power Reduction Timer/Counter0
.equ	PRTIM1	= 4 ; Power Reduction Timer/Counter1
.equ	PRPSC0	= 5 ; Power Reduction PSC2
.equ	PRPSC1	= 6 ; Power Reduction PSC2
.equ	PRPSC2	= 7 ; Power Reduction PSC2


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


; ***** TIMER_COUNTER_0 *****************
; TIMSK0 - Timer/Counter0 Interrupt Mask Register
.equ	TOIE0	= 0 ; Timer/Counter0 Overflow Interrupt Enable
.equ	OCIE0A	= 1 ; Timer/Counter0 Output Compare Match A Interrupt Enable
.equ	OCIE0B	= 2 ; Timer/Counter0 Output Compare Match B Interrupt Enable

; TIFR0 - Timer/Counter0 Interrupt Flag register
.equ	TOV0	= 0 ; Timer/Counter0 Overflow Flag
.equ	OCF0A	= 1 ; Timer/Counter0 Output Compare Flag 0A
.equ	OCF0B	= 2 ; Timer/Counter0 Output Compare Flag 0B

; TCCR0A - Timer/Counter  Control Register A
.equ	WGM00	= 0 ; Waveform Generation Mode
.equ	WGM01	= 1 ; Waveform Generation Mode
.equ	COM0B0	= 4 ; Compare Output Mode, Fast PWm
.equ	COM0B1	= 5 ; Compare Output Mode, Fast PWm
.equ	COM0A0	= 6 ; Compare Output Mode, Phase Correct PWM Mode
.equ	COM0A1	= 7 ; Compare Output Mode, Phase Correct PWM Mode

; TCCR0B - Timer/Counter Control Register B
.equ	CS00	= 0 ; Clock Select
.equ	CS01	= 1 ; Clock Select
.equ	CS02	= 2 ; Clock Select
.equ	WGM02	= 3 ; 
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

; OCR0A - Timer/Counter0 Output Compare Register
.equ	OCR0A0	= 0 ; Timer/Counter0 Output Compare Register Bit 0
.equ	OCR0A1	= 1 ; Timer/Counter0 Output Compare Register Bit 1
.equ	OCR0A2	= 2 ; Timer/Counter0 Output Compare Register Bit 2
.equ	OCR0A3	= 3 ; Timer/Counter0 Output Compare Register Bit 3
.equ	OCR0A4	= 4 ; Timer/Counter0 Output Compare Register Bit 4
.equ	OCR0A5	= 5 ; Timer/Counter0 Output Compare Register Bit 5
.equ	OCR0A6	= 6 ; Timer/Counter0 Output Compare Register Bit 6
.equ	OCR0A7	= 7 ; Timer/Counter0 Output Compare Register Bit 7

; OCR0B - Timer/Counter0 Output Compare Register
.equ	OCR0B0	= 0 ; Timer/Counter0 Output Compare Register Bit 0
.equ	OCR0B1	= 1 ; Timer/Counter0 Output Compare Register Bit 1
.equ	OCR0B2	= 2 ; Timer/Counter0 Output Compare Register Bit 2
.equ	OCR0B3	= 3 ; Timer/Counter0 Output Compare Register Bit 3
.equ	OCR0B4	= 4 ; Timer/Counter0 Output Compare Register Bit 4
.equ	OCR0B5	= 5 ; Timer/Counter0 Output Compare Register Bit 5
.equ	OCR0B6	= 6 ; Timer/Counter0 Output Compare Register Bit 6
.equ	OCR0B7	= 7 ; Timer/Counter0 Output Compare Register Bit 7

; GTCCR - General Timer/Counter Control Register
.equ	PSR10	= 0 ; Prescaler Reset Timer/Counter1 and Timer/Counter0
.equ	ICPSEL1	= 6 ; Timer1 Input Capture Selection Bit
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

; OCR1A - Timer/Counter1 Output Compare Register  Bytes
.equ	OCR1AH0	= 0 ; Timer/Counter1 Output Compare Register  Bytes High Bit 8
.equ	OCR1AH1	= 1 ; Timer/Counter1 Output Compare Register  Bytes High Bit 9
.equ	OCR1AH2	= 2 ; Timer/Counter1 Output Compare Register  Bytes High Bit 10
.equ	OCR1AH3	= 3 ; Timer/Counter1 Output Compare Register  Bytes High Bit 11
.equ	OCR1AH4	= 4 ; Timer/Counter1 Output Compare Register  Bytes High Bit 12
.equ	OCR1AH5	= 5 ; Timer/Counter1 Output Compare Register  Bytes High Bit 13
.equ	OCR1AH6	= 6 ; Timer/Counter1 Output Compare Register  Bytes High Bit 14
.equ	OCR1AH7	= 7 ; Timer/Counter1 Output Compare Register  Bytes High Bit 15

.equ	OCR1AL0	= 0 ; Timer/Counter1 Output Compare Register  Bytes Low Bit 0
.equ	OCR1AL1	= 1 ; Timer/Counter1 Output Compare Register  Bytes Low Bit 1
.equ	OCR1AL2	= 2 ; Timer/Counter1 Output Compare Register  Bytes Low Bit 2
.equ	OCR1AL3	= 3 ; Timer/Counter1 Output Compare Register  Bytes Low Bit 3
.equ	OCR1AL4	= 4 ; Timer/Counter1 Output Compare Register  Bytes Low Bit 4
.equ	OCR1AL5	= 5 ; Timer/Counter1 Output Compare Register  Bytes Low Bit 5
.equ	OCR1AL6	= 6 ; Timer/Counter1 Output Compare Register  Bytes Low Bit 6
.equ	OCR1AL7	= 7 ; Timer/Counter1 Output Compare Register  Bytes Low Bit 7

; OCR1B - Timer/Counter1 Output Compare Register  Bytes
.equ	OCR1BH0	= 0 ; Timer/Counter1 Output Compare Register  Bytes High Bit 8
.equ	OCR1BH1	= 1 ; Timer/Counter1 Output Compare Register  Bytes High Bit 9
.equ	OCR1BH2	= 2 ; Timer/Counter1 Output Compare Register  Bytes High Bit 10
.equ	OCR1BH3	= 3 ; Timer/Counter1 Output Compare Register  Bytes High Bit 11
.equ	OCR1BH4	= 4 ; Timer/Counter1 Output Compare Register  Bytes High Bit 12
.equ	OCR1BH5	= 5 ; Timer/Counter1 Output Compare Register  Bytes High Bit 13
.equ	OCR1BH6	= 6 ; Timer/Counter1 Output Compare Register  Bytes High Bit 14
.equ	OCR1BH7	= 7 ; Timer/Counter1 Output Compare Register  Bytes High Bit 15

.equ	OCR1BL0	= 0 ; Timer/Counter1 Output Compare Register  Bytes Low Bit 0
.equ	OCR1BL1	= 1 ; Timer/Counter1 Output Compare Register  Bytes Low Bit 1
.equ	OCR1BL2	= 2 ; Timer/Counter1 Output Compare Register  Bytes Low Bit 2
.equ	OCR1BL3	= 3 ; Timer/Counter1 Output Compare Register  Bytes Low Bit 3
.equ	OCR1BL4	= 4 ; Timer/Counter1 Output Compare Register  Bytes Low Bit 4
.equ	OCR1BL5	= 5 ; Timer/Counter1 Output Compare Register  Bytes Low Bit 5
.equ	OCR1BL6	= 6 ; Timer/Counter1 Output Compare Register  Bytes Low Bit 6
.equ	OCR1BL7	= 7 ; Timer/Counter1 Output Compare Register  Bytes Low Bit 7

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
.equ	PSRSYNC	= 0 ; Prescaler Reset Timer/Counter1 and Timer/Counter0


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
.equ	ADCSRB0	= 0 ; ADC Control and Status Register B Bit 0
.equ	ADCSRB1	= 1 ; ADC Control and Status Register B Bit 1
.equ	ADCSRB2	= 2 ; ADC Control and Status Register B Bit 2
.equ	ADCSRB3	= 3 ; ADC Control and Status Register B Bit 3
.equ	ADCSRB4	= 4 ; ADC Control and Status Register B Bit 4

; DIDR0 - Digital Input Disable Register 0
.equ	DIDR00	= 0 ; Digital Input Disable Register 0 Bit 0
.equ	DIDR01	= 1 ; Digital Input Disable Register 0 Bit 1
.equ	DIDR02	= 2 ; Digital Input Disable Register 0 Bit 2
.equ	DIDR03	= 3 ; Digital Input Disable Register 0 Bit 3
.equ	DIDR04	= 4 ; Digital Input Disable Register 0 Bit 4
.equ	DIDR05	= 5 ; Digital Input Disable Register 0 Bit 5
.equ	DIDR06	= 6 ; Digital Input Disable Register 0 Bit 6
.equ	DIDR07	= 7 ; Digital Input Disable Register 0 Bit 7

; DIDR1 - Digital Input Disable Register 0
.equ	ADC8D	= 0 ; 
.equ	ADC9D	= 1 ; 
.equ	ADC10D	= 2 ; 
.equ	AMP0ND	= 3 ; 
.equ	AMP0PD	= 4 ; 
.equ	ACMP0D	= 5 ; 

; AMP0CSR - 
.equ	AMP0TS0	= 0 ; 
.equ	AMP0TS1	= 1 ; 
.equ	AMP0G0	= 4 ; 
.equ	AMP0G1	= 5 ; 
.equ	AMP0IS	= 6 ; 
.equ	AMP0EN	= 7 ; 

; AMP1CSR - 
.equ	AMP1TS0	= 0 ; 
.equ	AMP1TS1	= 1 ; 
.equ	AMP1G0	= 4 ; 
.equ	AMP1G1	= 5 ; 
.equ	AMP1IS	= 6 ; 
.equ	AMP1EN	= 7 ; 


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

; UCSRA - USART Control and Status register A
.equ	MPCM	= 0 ; Multi-processor Communication Mode
.equ	U2X	= 1 ; Double USART Transmission Bit
.equ	UPE	= 2 ; USART Parity Error
.equ	DOR	= 3 ; Data Overrun
.equ	FE	= 4 ; Framing Error
.equ	UDRE	= 5 ; USART Data Register Empty
.equ	TXC	= 6 ; USART Transmitt Complete
.equ	RXC	= 7 ; USART Receive Complete

; UCSRB - USART Control an Status register B
.equ	TXB8	= 0 ; Transmit Data Bit 8
.equ	RXB8	= 1 ; Receive Data Bit 8
.equ	UCSZ2	= 2 ; Character Size
.equ	TXEN	= 3 ; Transmitter Enable
.equ	RXEN	= 4 ; Receiver Enable
.equ	UDRIE	= 5 ; USART Data Register Empty Interrupt Enable
.equ	TXCIE	= 6 ; TX Complete Interrupt Enable
.equ	RXCIE	= 7 ; RX Complete Interrupt Enable

; UCSRC - USART Control an Status register C
.equ	UCPOL	= 0 ; Clock Polarity
.equ	UCSZ0	= 1 ; Character Size Bits
.equ	UCSZ1	= 2 ; Character Size Bits
.equ	USBS	= 3 ; Stop Bit Select
.equ	UPM0	= 4 ; Parity Mode Bits
.equ	UPM1	= 5 ; Parity Mode Bits
.equ	UMSEL0	= 6 ; USART Mode Select

; UBRRH - USART Baud Rate Register High Byte
.equ	UBRR8	= 0 ; USART Baud Rate Register Bits
.equ	UBRR9	= 1 ; USART Baud Rate Register Bits
.equ	UBRR10	= 2 ; USART Baud Rate Register Bits
.equ	UBRR11	= 3 ; USART Baud Rate Register Bits

; UBRRL - USART Baud Rate Register Low Byte
.equ	UBRR0	= 0 ; USART Baud Rate Register bits
.equ	UBRR1	= 1 ; USART Baud Rate Register bits
.equ	UBRR2	= 2 ; USART Baud Rate Register bits
.equ	UBRR3	= 3 ; USART Baud Rate Register bits
.equ	UBRR4	= 4 ; USART Baud Rate Register bits
.equ	UBRR5	= 5 ; USART Baud Rate Register bits
.equ	UBRR6	= 6 ; USART Baud Rate Register bits
.equ	UBRR7	= 7 ; USART Baud Rate Register bits


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
.equ	WDP3	= 5 ; Watchdog Timer Prescaler Bits
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


; ***** EEPROM *****************
; EEAR - EEPROM Read/Write Access  Bytes
.equ	EEARH0	= 0 ; EEPROM Read/Write Access  Bytes High Bit 8
.equ	EEARH1	= 1 ; EEPROM Read/Write Access  Bytes High Bit 9
.equ	EEARH2	= 2 ; EEPROM Read/Write Access  Bytes High Bit 10
.equ	EEARH3	= 3 ; EEPROM Read/Write Access  Bytes High Bit 11

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


; ***** PSC0 *****************
; PICR0 - PSC 0 Input Capture Register 
.equ	PICR0H0	= 0 ; PSC 0 Input Capture Register  High Bit 8
.equ	PICR0H1	= 1 ; PSC 0 Input Capture Register  High Bit 9
.equ	PICR0H2	= 2 ; PSC 0 Input Capture Register  High Bit 10
.equ	PICR0H3	= 3 ; PSC 0 Input Capture Register  High Bit 11
.equ	PICR0H4	= 4 ; PSC 0 Input Capture Register  High Bit 12

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
.equ	PARUN0	= 2 ; PSC0 Auto Run
.equ	PAOC0A	= 3 ; PSC 0 Asynchronous Output Control A
.equ	PAOC0B	= 4 ; PSC 0 Asynchronous Output Control B
.equ	PBFM0	= 5 ; PSC 0 Balance Flank Width Modulation
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
.equ	OCR0RBH0	= 0 ; Output Compare RB Register  High Bit 8
.equ	OCR0RBH1	= 1 ; Output Compare RB Register  High Bit 9
.equ	OCR0RBH2	= 2 ; Output Compare RB Register  High Bit 10
.equ	OCR0RBH3	= 3 ; Output Compare RB Register  High Bit 11
.equ	OCR0RBH4	= 4 ; Output Compare RB Register  High Bit 12
.equ	OCR0RBH5	= 5 ; Output Compare RB Register  High Bit 13
.equ	OCR0RBH6	= 6 ; Output Compare RB Register  High Bit 14
.equ	OCR0RBH7	= 7 ; Output Compare RB Register  High Bit 15

.equ	OCR0RBL0	= 0 ; Output Compare RB Register  Low Bit 0
.equ	OCR0RBL1	= 1 ; Output Compare RB Register  Low Bit 1
.equ	OCR0RBL2	= 2 ; Output Compare RB Register  Low Bit 2
.equ	OCR0RBL3	= 3 ; Output Compare RB Register  Low Bit 3
.equ	OCR0RBL4	= 4 ; Output Compare RB Register  Low Bit 4
.equ	OCR0RBL5	= 5 ; Output Compare RB Register  Low Bit 5
.equ	OCR0RBL6	= 6 ; Output Compare RB Register  Low Bit 6
.equ	OCR0RBL7	= 7 ; Output Compare RB Register  Low Bit 7

; OCR0SB - Output Compare SB Register 
.equ	OCR0SBH0	= 0 ; Output Compare SB Register  High Bit 8
.equ	OCR0SBH1	= 1 ; Output Compare SB Register  High Bit 9
.equ	OCR0SBH2	= 2 ; Output Compare SB Register  High Bit 10
.equ	OCR0SBH3	= 3 ; Output Compare SB Register  High Bit 11

.equ	OCR0SBL0	= 0 ; Output Compare SB Register  Low Bit 0
.equ	OCR0SBL1	= 1 ; Output Compare SB Register  Low Bit 1
.equ	OCR0SBL2	= 2 ; Output Compare SB Register  Low Bit 2
.equ	OCR0SBL3	= 3 ; Output Compare SB Register  Low Bit 3
.equ	OCR0SBL4	= 4 ; Output Compare SB Register  Low Bit 4
.equ	OCR0SBL5	= 5 ; Output Compare SB Register  Low Bit 5
.equ	OCR0SBL6	= 6 ; Output Compare SB Register  Low Bit 6
.equ	OCR0SBL7	= 7 ; Output Compare SB Register  Low Bit 7

; OCR0RA - Output Compare RA Register 
.equ	OCR0RAH0	= 0 ; Output Compare RA Register  High Bit 8
.equ	OCR0RAH1	= 1 ; Output Compare RA Register  High Bit 9
.equ	OCR0RAH2	= 2 ; Output Compare RA Register  High Bit 10
.equ	OCR0RAH3	= 3 ; Output Compare RA Register  High Bit 11

.equ	OCR0RAL0	= 0 ; Output Compare RA Register  Low Bit 0
.equ	OCR0RAL1	= 1 ; Output Compare RA Register  Low Bit 1
.equ	OCR0RAL2	= 2 ; Output Compare RA Register  Low Bit 2
.equ	OCR0RAL3	= 3 ; Output Compare RA Register  Low Bit 3
.equ	OCR0RAL4	= 4 ; Output Compare RA Register  Low Bit 4
.equ	OCR0RAL5	= 5 ; Output Compare RA Register  Low Bit 5
.equ	OCR0RAL6	= 6 ; Output Compare RA Register  Low Bit 6
.equ	OCR0RAL7	= 7 ; Output Compare RA Register  Low Bit 7

; OCR0SA - Output Compare SA Register 
.equ	OCR0SAH0	= 0 ; Output Compare SA Register  High Bit 8
.equ	OCR0SAH1	= 1 ; Output Compare SA Register  High Bit 9
.equ	OCR0SAH2	= 2 ; Output Compare SA Register  High Bit 10
.equ	OCR0SAH3	= 3 ; Output Compare SA Register  High Bit 11

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
.equ	PSYNC00	= 4 ; Synchronization Out for ADC Selection
.equ	PSYNC01	= 5 ; Synchronization Out for ADC Selection

; PIM0 - PSC0 Interrupt Mask Register
.equ	PEOPE0	= 0 ; End of Cycle Interrupt Enable
.equ	PEVE0A	= 3 ; External Event A Interrupt Enable
.equ	PEVE0B	= 4 ; External Event B Interrupt Enable
.equ	PSEIE0	= 5 ; PSC 0 Synchro Error Interrupt Enable

; PIFR0 - PSC0 Interrupt Flag Register
.equ	PEOP0	= 0 ; End of PSC0 Interrupt
.equ	PRN00	= 1 ; Ramp Number
.equ	PRN01	= 2 ; Ramp Number
.equ	PEV0A	= 3 ; External Event A Interrupt
.equ	PEV0B	= 4 ; External Event B Interrupt
.equ	PSEI0	= 5 ; PSC 0 Synchro Error Interrupt
.equ	POAC0A	= 6 ; PSC 0 Output A Activity
.equ	POAC0B	= 7 ; PSC 0 Output A Activity


; ***** PSC2 *****************
; PICR2 - PSC 2 Input Capture Register 
.equ	PICR2H0	= 0 ; PSC 2 Input Capture Register  High Bit 8
.equ	PICR2H1	= 1 ; PSC 2 Input Capture Register  High Bit 9
.equ	PICR2H2	= 2 ; PSC 2 Input Capture Register  High Bit 10
.equ	PICR2H3	= 3 ; PSC 2 Input Capture Register  High Bit 11
.equ	PICR2H4	= 4 ; PSC 2 Input Capture Register  High Bit 12

.equ	PICR2L0	= 0 ; PSC 2 Input Capture Register  Low Bit 0
.equ	PICR2L1	= 1 ; PSC 2 Input Capture Register  Low Bit 1
.equ	PICR2L2	= 2 ; PSC 2 Input Capture Register  Low Bit 2
.equ	PICR2L3	= 3 ; PSC 2 Input Capture Register  Low Bit 3
.equ	PICR2L4	= 4 ; PSC 2 Input Capture Register  Low Bit 4
.equ	PICR2L5	= 5 ; PSC 2 Input Capture Register  Low Bit 5
.equ	PICR2L6	= 6 ; PSC 2 Input Capture Register  Low Bit 6
.equ	PICR2L7	= 7 ; PSC 2 Input Capture Register  Low Bit 7

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

; OCR2RB - Output Compare RB Register 
.equ	OCR2RBH0	= 0 ; Output Compare RB Register  High Bit 8
.equ	OCR2RBH1	= 1 ; Output Compare RB Register  High Bit 9
.equ	OCR2RBH2	= 2 ; Output Compare RB Register  High Bit 10
.equ	OCR2RBH3	= 3 ; Output Compare RB Register  High Bit 11
.equ	OCR2RBH4	= 4 ; Output Compare RB Register  High Bit 12
.equ	OCR2RBH5	= 5 ; Output Compare RB Register  High Bit 13
.equ	OCR2RBH6	= 6 ; Output Compare RB Register  High Bit 14
.equ	OCR2RBH7	= 7 ; Output Compare RB Register  High Bit 15

.equ	OCR2RBL0	= 0 ; Output Compare RB Register  Low Bit 0
.equ	OCR2RBL1	= 1 ; Output Compare RB Register  Low Bit 1
.equ	OCR2RBL2	= 2 ; Output Compare RB Register  Low Bit 2
.equ	OCR2RBL3	= 3 ; Output Compare RB Register  Low Bit 3
.equ	OCR2RBL4	= 4 ; Output Compare RB Register  Low Bit 4
.equ	OCR2RBL5	= 5 ; Output Compare RB Register  Low Bit 5
.equ	OCR2RBL6	= 6 ; Output Compare RB Register  Low Bit 6
.equ	OCR2RBL7	= 7 ; Output Compare RB Register  Low Bit 7

; OCR2SB - Output Compare SB Register 
.equ	OCR2SBH0	= 0 ; Output Compare SB Register  High Bit 8
.equ	OCR2SBH1	= 1 ; Output Compare SB Register  High Bit 9
.equ	OCR2SBH2	= 2 ; Output Compare SB Register  High Bit 10
.equ	OCR2SBH3	= 3 ; Output Compare SB Register  High Bit 11

.equ	OCR2SBL0	= 0 ; Output Compare SB Register  Low Bit 0
.equ	OCR2SBL1	= 1 ; Output Compare SB Register  Low Bit 1
.equ	OCR2SBL2	= 2 ; Output Compare SB Register  Low Bit 2
.equ	OCR2SBL3	= 3 ; Output Compare SB Register  Low Bit 3
.equ	OCR2SBL4	= 4 ; Output Compare SB Register  Low Bit 4
.equ	OCR2SBL5	= 5 ; Output Compare SB Register  Low Bit 5
.equ	OCR2SBL6	= 6 ; Output Compare SB Register  Low Bit 6
.equ	OCR2SBL7	= 7 ; Output Compare SB Register  Low Bit 7

; OCR2RA - Output Compare RA Register 
.equ	OCR2RAH0	= 0 ; Output Compare RA Register  High Bit 8
.equ	OCR2RAH1	= 1 ; Output Compare RA Register  High Bit 9
.equ	OCR2RAH2	= 2 ; Output Compare RA Register  High Bit 10
.equ	OCR2RAH3	= 3 ; Output Compare RA Register  High Bit 11

.equ	OCR2RAL0	= 0 ; Output Compare RA Register  Low Bit 0
.equ	OCR2RAL1	= 1 ; Output Compare RA Register  Low Bit 1
.equ	OCR2RAL2	= 2 ; Output Compare RA Register  Low Bit 2
.equ	OCR2RAL3	= 3 ; Output Compare RA Register  Low Bit 3
.equ	OCR2RAL4	= 4 ; Output Compare RA Register  Low Bit 4
.equ	OCR2RAL5	= 5 ; Output Compare RA Register  Low Bit 5
.equ	OCR2RAL6	= 6 ; Output Compare RA Register  Low Bit 6
.equ	OCR2RAL7	= 7 ; Output Compare RA Register  Low Bit 7

; OCR2SA - Output Compare SA Register 
.equ	OCR2SAH0	= 0 ; Output Compare SA Register  High Bit 8
.equ	OCR2SAH1	= 1 ; Output Compare SA Register  High Bit 9
.equ	OCR2SAH2	= 2 ; Output Compare SA Register  High Bit 10
.equ	OCR2SAH3	= 3 ; Output Compare SA Register  High Bit 11

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
.equ	PSYNC2_0	= 4 ; Synchronization Out for ADC Selection
.equ	PSYNC2_1	= 5 ; Synchronization Out for ADC Selection
.equ	POS22	= 6 ; PSC 2 Output 23 Select
.equ	POS23	= 7 ; PSC 2 Output 23 Select

; PIM2 - PSC2 Interrupt Mask Register
.equ	PEOPE2	= 0 ; End of Cycle Interrupt Enable
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


; ***** FUSE *****************
; EXTENDED - 
.equ	BOOTRST	= 0 ; Select Reset Vector
.equ	BOOTSZ0	= 1 ; Select Boot Size
.equ	BOOTSZ1	= 2 ; Select Boot Size
.equ	PSCRV	= 4 ; PSCOUT Reset Value
.equ	PSC0RB	= 5 ; PSC0 Reset Behavior
.equ	PSC1RB	= 6 ; PSC1 Reset Behavior
.equ	PSC2RB	= 7 ; PSC2 Reset Behavior

; HIGH - 
.equ	BODLEVEL0	= 0 ; Brown-out Detector Trigger Level
.equ	BODLEVEL1	= 1 ; Brown-out Detector Trigger Level
.equ	BODLEVEL2	= 2 ; Brown-out Detector Trigger Level
.equ	EESAVE	= 3 ; Preserve EEPROM through the Chip Erase cycle
.equ	WDTON	= 4 ; Watch-dog Timer always on
.equ	SPIEN	= 5 ; Serial program downloading (SPI) enabled
.equ	DWEN	= 6 ; Debug Wire enable
.equ	RSTDISBL	= 7 ; Reset Disabled (Enable PC6 as i/o pin)

; LOW - 
.equ	SUT_CKSEL0	= 0 ; Select Clock Source
.equ	SUT_CKSEL1	= 1 ; Select Clock Source
.equ	SUT_CKSEL2	= 2 ; Select Clock Source
.equ	SUT_CKSEL3	= 3 ; Select Clock Source
.equ	SUT_CKSEL4	= 4 ; Select Clock Source
.equ	SUT_CKSEL5	= 5 ; Select Clock Source
.equ	CKOUT	= 6 ; Clock output on PORTB0
.equ	CKDIV8	= 7 ; Divide clock by 8 internally


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
.equ	PSC2_CAPTaddr	 = 0x0001 ; PSC2 Capture Event
.equ	PSC2_ECaddr	 = 0x0002 ; PSC2 End Cycle
.equ	PSC1_CAPTaddr	 = 0x0003 ; PSC1 Capture Event
.equ	PSC1_ECaddr	 = 0x0004 ; PSC1 End Cycle
.equ	PSC0_CAPTaddr	 = 0x0005 ; PSC0 Capture Event
.equ	PSC0_ECaddr	 = 0x0006 ; PSC0 End Cycle
.equ	ANALOG_COMP_0addr	 = 0x0007 ; Analog Comparator 0
.equ	ANALOG_COMP_1addr	 = 0x0008 ; Analog Comparator 1
.equ	ANALOG_COMP_2addr	 = 0x0009 ; Analog Comparator 2
.equ	INT0addr	 = 0x000A ; External Interrupt Request 0
.equ	TIMER1_CAPTaddr	 = 0x000B ; Timer/Counter1 Capture Event
.equ	TIMER1_COMPAaddr	 = 0x000C ; Timer/Counter1 Compare Match A
.equ	TIMER1_COMPBaddr	 = 0x000D ; Timer/Counter Compare Match B
.equ	RESERVED15addr	 = 0x000E ; 
.equ	TIMER1_OVFaddr	 = 0x000F ; Timer/Counter1 Overflow
.equ	TIMER0_COMP_Aaddr	 = 0x0010 ; Timer/Counter0 Compare Match A
.equ	TIMER0_OVFaddr	 = 0x0011 ; Timer/Counter0 Overflow
.equ	ADCaddr	 = 0x0012 ; ADC Conversion Complete
.equ	INT1addr	 = 0x0013 ; External Interrupt Request 1
.equ	SPI_STCaddr	 = 0x0014 ; SPI Serial Transfer Complete
.equ	USART_RXaddr	 = 0x0015 ; USART, Rx Complete
.equ	USART_UDREaddr	 = 0x0016 ; USART Data Register Empty
.equ	USART_TXaddr	 = 0x0017 ; USART, Tx Complete
.equ	INT2addr	 = 0x0018 ; External Interrupt Request 2
.equ	WDTaddr	 = 0x0019 ; Watchdog Timeout Interrupt
.equ	EE_READYaddr	 = 0x001A ; EEPROM Ready
.equ	TIMER0_COMPBaddr	 = 0x001B ; Timer Counter 0 Compare Match B
.equ	INT3addr	 = 0x001C ; External Interrupt Request 3
.equ	RESERVED30addr	 = 0x001D ; 
.equ	RESERVED31addr	 = 0x001E ; 
.equ	SPM_READYaddr	 = 0x001F ; Store Program Memory Read

.equ	INT_VECTORS_SIZE	= 32 ; size in words

#endif /* _PWM2BDEF_INC_ */

; ***** END OF FILE ******************************************************



