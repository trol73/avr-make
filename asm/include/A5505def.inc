;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ********************

;*************************************************************************
;* A P P L I C A T I O N   N O T E   F O R   T H E   A V R   F A M I L Y
;* 
;* Number            : AVR000
;* File Name         : A5505def.inc
;* Title             : Register/Bit Definitions for the ATA5505
;* Created           : 2014-02-06 16:08
;* Version           : 1.00
;* Support e-mail    : avr@atmel.com
;* Target MCU        : ATA5505
;* 
;* DESCRIPTION
;* When including this file in the assembly program file, all I/O register 
;* names and I/O register bit names appearing in the data book can be used.
;* In addition, the six registers forming the three data pointers X, Y and 
;* Z have been assigned names XL - ZH. Highest RAM address for Internal 
;* SRAM is also defined 
;* 
;*************************************************************************

#ifndef _A5505DEF_INC_
#define _A5505DEF_INC_


#pragma partinc 0

; ***** SPECIFY DEVICE ***************************************************
.device	ATA5505
#pragma AVRPART ADMIN PART_NAME ATA5505
.equ	SIGNATURE_000	= 0x1E
.equ	SIGNATURE_001	= 0x94
.equ	SIGNATURE_002	= 0x87

#pragma AVRPART CORE CORE_VERSION V3

; ***** I/O REGISTER DEFINITIONS *****************************************
; NOTE:
; Definitions marked "MEMORY MAPPED" are extended I/O ports
; and cannot be used with IN/OUT instructions
.equ	LINDAT	= 0xD2 ; MEMORY MAPPED
.equ	LINSEL	= 0xD1 ; MEMORY MAPPED
.equ	LINIDR	= 0xD0 ; MEMORY MAPPED
.equ	LINDLR	= 0xCF ; MEMORY MAPPED
.equ	LINBRRH	= 0xCE ; MEMORY MAPPED
.equ	LINBRRL	= 0xCD ; MEMORY MAPPED
.equ	LINBTR	= 0xCC ; MEMORY MAPPED
.equ	LINERR	= 0xCB ; MEMORY MAPPED
.equ	LINENIR	= 0xCA ; MEMORY MAPPED
.equ	LINSIR	= 0xC9 ; MEMORY MAPPED
.equ	LINCR	= 0xC8 ; MEMORY MAPPED
.equ	USIPP	= 0xBC ; MEMORY MAPPED
.equ	USIBR	= 0xBB ; MEMORY MAPPED
.equ	USIDR	= 0xBA ; MEMORY MAPPED
.equ	USISR	= 0xB9 ; MEMORY MAPPED
.equ	USICR	= 0xB8 ; MEMORY MAPPED
.equ	ASSR	= 0xB6 ; MEMORY MAPPED
.equ	OCR1BH	= 0x8B ; MEMORY MAPPED
.equ	OCR1BL	= 0x8A ; MEMORY MAPPED
.equ	OCR1AH	= 0x89 ; MEMORY MAPPED
.equ	OCR1AL	= 0x88 ; MEMORY MAPPED
.equ	ICR1H	= 0x87 ; MEMORY MAPPED
.equ	ICR1L	= 0x86 ; MEMORY MAPPED
.equ	TCNT1H	= 0x85 ; MEMORY MAPPED
.equ	TCNT1L	= 0x84 ; MEMORY MAPPED
.equ	TCCR1D	= 0x83 ; MEMORY MAPPED
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
.equ	AMISCR	= 0x77 ; MEMORY MAPPED
.equ	TIMSK1	= 0x6F ; MEMORY MAPPED
.equ	TIMSK0	= 0x6E ; MEMORY MAPPED
.equ	PCMSK1	= 0x6C ; MEMORY MAPPED
.equ	PCMSK0	= 0x6B ; MEMORY MAPPED
.equ	EICRA	= 0x69 ; MEMORY MAPPED
.equ	PCICR	= 0x68 ; MEMORY MAPPED
.equ	OSCCAL	= 0x66 ; MEMORY MAPPED
.equ	PRR	= 0x64 ; MEMORY MAPPED
.equ	CLKSELR	= 0x63 ; MEMORY MAPPED
.equ	CLKCSR	= 0x62 ; MEMORY MAPPED
.equ	CLKPR	= 0x61 ; MEMORY MAPPED
.equ	WDTCR	= 0x60 ; MEMORY MAPPED
.equ	SREG	= 0x3F ; 
.equ	SPH	= 0x3E ; 
.equ	SPL	= 0x3D ; 
.equ	SPMCSR	= 0x37 ; 
.equ	MCUCR	= 0x35 ; 
.equ	MCUSR	= 0x34 ; 
.equ	SMCR	= 0x33 ; 
.equ	DWDR	= 0x31 ; 
.equ	ACSR	= 0x30 ; 
.equ	SPDR	= 0x2E ; 
.equ	SPSR	= 0x2D ; 
.equ	SPCR	= 0x2C ; 
.equ	GPIOR2	= 0x2B ; 
.equ	GPIOR1	= 0x2A ; 
.equ	OCR0A	= 0x28 ; 
.equ	TCNT2	= 0x27 ; 
.equ	TCCR0B	= 0x26 ; 
.equ	TCCR0A	= 0x25 ; 
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
.equ	PORTCR	= 0x12 ; 
.equ	PORTB	= 0x05 ; 
.equ	DDRB	= 0x04 ; 
.equ	PINB	= 0x03 ; 
.equ	PORTA	= 0x02 ; 
.equ	DDRA	= 0x01 ; 
.equ	PINA	= 0x00 ; 


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


; ***** USI *****************
; USIPP - USI Pin Position
.equ	USIPP0	= 0 ; USI Pin Position Bit 0

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


; ***** TIMER_COUNTER_0 *****************
; TIMSK0 - Timer/Counter0 Interrupt Mask register
.equ	TOIE0	= 0 ; Timer/Counter0 Overflow Interrupt Enable
.equ	OCIE0A	= 1 ; Timer/Counter0 Output Compare Match A Interrupt Enable

; TIFR0 - Timer/Counter0 Interrupt Flag Register
.equ	TOV0	= 0 ; Timer/Counter0 Overflow Flag
.equ	OCF0A	= 1 ; Output Compare Flag 0A

; TCCR0A - Timer/Counter0 Control Register A
.equ	WGM00	= 0 ; Waveform Genration Mode bits
.equ	WGM01	= 1 ; Waveform Genration Mode bits
.equ	COM0A0	= 6 ; Compare Output Mode bits
.equ	COM0A1	= 7 ; Compare Output Mode bits

; TCCR0B - Timer/Counter0 Control Register B
.equ	CS00	= 0 ; Clock Select bits
.equ	CS01	= 1 ; Clock Select bits
.equ	CS02	= 2 ; Clock Select bits
.equ	FOC0A	= 7 ; Force Output Compare A

; TCNT2 - Timer/Counter0
.equ	TCNT20	= 0 ; Timer/Counter0 Bit 0
.equ	TCNT21	= 1 ; Timer/Counter0 Bit 1
.equ	TCNT22	= 2 ; Timer/Counter0 Bit 2
.equ	TCNT23	= 3 ; Timer/Counter0 Bit 3
.equ	TCNT24	= 4 ; Timer/Counter0 Bit 4
.equ	TCNT25	= 5 ; Timer/Counter0 Bit 5
.equ	TCNT26	= 6 ; Timer/Counter0 Bit 6
.equ	TCNT27	= 7 ; Timer/Counter0 Bit 7

; OCR0A - Timer/Counter0 Output Compare Register A
.equ	OCR0A0	= 0 ; Timer/Counter0 Output Compare Register A Bit 0
.equ	OCR0A1	= 1 ; Timer/Counter0 Output Compare Register A Bit 1
.equ	OCR0A2	= 2 ; Timer/Counter0 Output Compare Register A Bit 2
.equ	OCR0A3	= 3 ; Timer/Counter0 Output Compare Register A Bit 3
.equ	OCR0A4	= 4 ; Timer/Counter0 Output Compare Register A Bit 4
.equ	OCR0A5	= 5 ; Timer/Counter0 Output Compare Register A Bit 5
.equ	OCR0A6	= 6 ; Timer/Counter0 Output Compare Register A Bit 6
.equ	OCR0A7	= 7 ; Timer/Counter0 Output Compare Register A Bit 7

; ASSR - Asynchronous Status Register
.equ	TCR0BUB	= 0 ; Timer/Counter0 Control Register B Update Busy
.equ	TCR0AUB	= 1 ; Timer/Counter0 Control Register A Update Busy
.equ	OCR0AUB	= 3 ; Output Compare Register 0A  Update Busy
.equ	TCN0UB	= 4 ; Timer/Counter0 Update Busy
.equ	AS0	= 5 ; Asynchronous Timer/Counter0
.equ	EXCLK	= 6 ; Enable External Clock Input

; GTCCR - General Timer Counter Control register
.equ	PSR1	= 0 ; Prescaler Reset Synchronous 16-bit Timer/Counter1
.equ	PSR0	= 1 ; Prescaler Reset Asynchronous 8-bit Timer/Counter0
.equ	TSM	= 7 ; Timer/Counter Synchronization Mode


; ***** TIMER_COUNTER_1 *****************
; TIMSK1 - Timer/Counter1 Interrupt Mask Register
.equ	TOIE1	= 0 ; Timer/Counter1 Overflow Interrupt Enable
.equ	OCIE1A	= 1 ; Timer/Counter1 Output Compare A Match Interrupt Enable
.equ	OCIE1B	= 2 ; Timer/Counter1 Output Compare B Match Interrupt Enable
.equ	ICIE1	= 5 ; Timer/Counter1 Input Capture Interrupt Enable

; TIFR1 - Timer/Counter1 Interrupt Flag register
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
.equ	CS10	= 0 ; Timer/Counter1 Clock Select bits
.equ	CS11	= 1 ; Timer/Counter1 Clock Select bits
.equ	CS12	= 2 ; Timer/Counter1 Clock Select bits
.equ	WGM12	= 3 ; Waveform Generation Mode Bits
.equ	WGM13	= 4 ; Waveform Generation Mode Bits
.equ	ICES1	= 6 ; Input Capture 1 Edge Select
.equ	ICNC1	= 7 ; Input Capture 1 Noise Canceler

; TCCR1C - Timer/Counter1 Control Register C
.equ	FOC1B	= 6 ; Timer/Counter1 Force Output Compare for Channel B
.equ	FOC1A	= 7 ; Timer/Counter1 Force Output Compare for Channel A

; TCCR1D - Timer/Counter1 Control Register D
.equ	OC1AU	= 0 ; Timer/Counter1 Output Compare U-pin Enable for Channel A
.equ	OC1AV	= 1 ; Timer/Counter1 Output Compare V-pin Enable for Channel A
.equ	OC1AW	= 2 ; Timer/Counter1 Output Compare W-pin Enable for Channel A
.equ	OC1AX	= 3 ; Timer/Counter1 Output Compare X-pin Enable for Channel A
.equ	OC1BU	= 4 ; Timer/Counter1 Output Compare U-pin Enable for Channel B
.equ	OC1BV	= 5 ; Timer/Counter1 Output Compare V-pin Enable for Channel B
.equ	OC1BW	= 6 ; Timer/Counter1 Output Compare W-pin Enable for Channel B
.equ	OC1BX	= 7 ; Timer/Counter1 Output Compare X-pin Enable for Channel B

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


; ***** WATCHDOG *****************
; WDTCR - Watchdog Timer Control Register
.equ	WDE	= 3 ; Watch Dog Enable
.equ	WDCE	= 4 ; Watchdog Change Enable
.equ	WDP0	= 0 ; Watchdog Timer Prescaler Bits
.equ	WDP1	= 1 ; Watchdog Timer Prescaler Bits
.equ	WDP2	= 2 ; Watchdog Timer Prescaler Bits
.equ	WDP3	= 5 ; Watchdog Timer Prescaler Bits
.equ	WDIE	= 6 ; Watchdog Timeout Interrupt Enable
.equ	WDIF	= 7 ; Watchdog Timeout Interrupt Flag


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


; ***** AD_CONVERTER *****************
; ADMUX - The ADC multiplexer Selection Register
.equ	MUX0	= 0 ; Analog Channel and Gain Selection Bits
.equ	MUX1	= 1 ; Analog Channel and Gain Selection Bits
.equ	MUX2	= 2 ; Analog Channel and Gain Selection Bits
.equ	MUX3	= 3 ; Analog Channel and Gain Selection Bits
.equ	MUX4	= 4 ; Analog Channel and Gain Selection Bits
.equ	ADLAR	= 5 ; Left Adjust Result
.equ	REFS0	= 6 ; Reference Selection Bits
.equ	REFS1	= 7 ; Reference Selection Bits

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

; ADCSRA - The ADC Control and Status register A
.equ	ADPS0	= 0 ; ADC  Prescaler Select Bits
.equ	ADPS1	= 1 ; ADC  Prescaler Select Bits
.equ	ADPS2	= 2 ; ADC  Prescaler Select Bits
.equ	ADIE	= 3 ; ADC Interrupt Enable
.equ	ADIF	= 4 ; ADC Interrupt Flag
.equ	ADATE	= 5 ; ADC  Auto Trigger Enable
.equ	ADSC	= 6 ; ADC Start Conversion
.equ	ADEN	= 7 ; ADC Enable

; ADCSRB - The ADC Control and Status register B (Shared with ANALOG_COMPARATOR IO_MODULE)
.equ	ADTS0	= 0 ; ADC Auto Trigger Source bits
.equ	ADTS1	= 1 ; ADC Auto Trigger Source bits
.equ	ADTS2	= 2 ; ADC Auto Trigger Source bits
.equ	BIN	= 7 ; Bipolar Input Mode

; AMISCR - Analog Miscellaneous Control Register (Shared with CURRENT_SOURCE IO_MODULE)
.equ	XREFEN	= 1 ; Internal Voltage Reference Output Enable
.equ	AREFEN	= 2 ; External Voltage Reference Input Enable

; DIDR1 - Digital Input Disable Register 1
.equ	ADC8D	= 0 ; 
.equ	ADC9D	= 1 ; 
.equ	ADC10D	= 2 ; 

; DIDR0 - Digital Input Disable Register 0
.equ	ADC0D	= 0 ; 
.equ	ADC1D	= 1 ; 
.equ	ADC2D	= 2 ; 
.equ	ADC3D	= 3 ; 
.equ	ADC4D	= 4 ; 
.equ	ADC5D	= 5 ; 
.equ	ADC6D	= 6 ; 
.equ	ADC7D	= 7 ; 


; ***** CURRENT_SOURCE *****************
; AMISCR - Analog Miscellaneous Control Register (Shared with AD_CONVERTER IO_MODULE)
.equ	ISRCEN	= 0 ; Current Source Enable


; ***** ANALOG_COMPARATOR *****************
; ADCSRB - Analog Comparator & ADC Control and Status Register B (Shared with AD_CONVERTER IO_MODULE)
.equ	ACIR0	= 4 ; Analog Comparator Internal Voltage Reference Select Bits
.equ	ACIR1	= 5 ; Analog Comparator Internal Voltage Reference Select Bits
.equ	ACME	= 6 ; Analog Comparator Multiplexer Enable

; ACSR - Analog Comparator Control And Status Register
.equ	ACIS0	= 0 ; Analog Comparator Interrupt Mode Select bits
.equ	ACIS1	= 1 ; Analog Comparator Interrupt Mode Select bits
.equ	ACIC	= 2 ; Analog Comparator Input Capture Enable
.equ	ACIE	= 3 ; Analog Comparator Interrupt Enable
.equ	ACI	= 4 ; Analog Comparator Interrupt Flag
.equ	ACO	= 5 ; Analog Compare Output
.equ	ACIRS	= 6 ; Analog Comparator Internal Reference Select
.equ	ACD	= 7 ; Analog Comparator Disable


; ***** EXTERNAL_INTERRUPT *****************
; EICRA - External Interrupt Control Register
.equ	ISC00	= 0 ; External Interrupt Sense Control 0 Bits
.equ	ISC01	= 1 ; External Interrupt Sense Control 0 Bits
.equ	ISC10	= 2 ; External Interrupt Sense Control 1 Bits
.equ	ISC11	= 3 ; External Interrupt Sense Control 1 Bits

; EIMSK - External Interrupt Mask Register
.equ	INT0	= 0 ; External Interrupt Request 1 Enable
.equ	INT1	= 1 ; External Interrupt Request 1 Enable

; EIFR - External Interrupt Flag Register
.equ	INTF0	= 0 ; External Interrupt Flags
.equ	INTF1	= 1 ; External Interrupt Flags

; PCICR - Pin Change Interrupt Control Register
.equ	PCIE0	= 0 ; Pin Change Interrupt Enable  on any PCINT14..8 pin
.equ	PCIE1	= 1 ; Pin Change Interrupt Enable  on any PCINT14..8 pin

; PCIFR - Pin Change Interrupt Flag Register
.equ	PCIF0	= 0 ; Pin Change Interrupt Flags
.equ	PCIF1	= 1 ; Pin Change Interrupt Flags

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


; ***** BOOT_LOAD *****************
; SPMCSR - Store Program Memory Control Register
.equ	SPMEN	= 0 ; Store Program Memory Enable
.equ	PGERS	= 1 ; Page Erase
.equ	PGWRT	= 2 ; Page Write
.equ	RFLB	= 3 ; Read Fuse and Lock Bits
.equ	CTPB	= 4 ; Clear Temporary Page Buffer
.equ	SIGRD	= 5 ; Signature Row Read
.equ	RWWSB	= 6 ; Read While Write Section Busy


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

; PRR - Power Reduction Register
.equ	PRADC	= 0 ; Power Reduction ADC
.equ	PRUSI	= 1 ; Power Reduction USI
.equ	PRTIM0	= 2 ; Power Reduction Timer/Counter0
.equ	PRTIM1	= 3 ; Power Reduction Timer/Counter1
.equ	PRSPI	= 4 ; Power Reduction SPI
.equ	PRLIN	= 5 ; Power Reduction LINUART

; SP - Stack Pointer  Bytes
.equ	SPH0	= 0 ; Stack Pointer  Bytes High Bit 8
.equ	SPH1	= 1 ; Stack Pointer  Bytes High Bit 9
.equ	SPH2	= 2 ; Stack Pointer  Bytes High Bit 10

.equ	SPL0	= 0 ; Stack Pointer  Bytes Low Bit 0
.equ	SPL1	= 1 ; Stack Pointer  Bytes Low Bit 1
.equ	SPL2	= 2 ; Stack Pointer  Bytes Low Bit 2
.equ	SPL3	= 3 ; Stack Pointer  Bytes Low Bit 3
.equ	SPL4	= 4 ; Stack Pointer  Bytes Low Bit 4
.equ	SPL5	= 5 ; Stack Pointer  Bytes Low Bit 5
.equ	SPL6	= 6 ; Stack Pointer  Bytes Low Bit 6
.equ	SPL7	= 7 ; Stack Pointer  Bytes Low Bit 7

; MCUCR - MCU Control Register
.equ	PUD	= 4 ; Pull-up Disable
.equ	BODS	= 5 ; BOD Sleep
.equ	BODSE	= 6 ; BOD Sleep Enable

; MCUSR - MCU Status register
.equ	PORF	= 0 ; Power-On Reset Flag
.equ	EXTRF	= 1 ; External Reset Flag
.equ	BORF	= 2 ; Brown-out Reset Flag
.equ	WDRF	= 3 ; Watchdog Reset Flag

; SMCR - Sleep Mode Control Register
.equ	SE	= 0 ; Sleep Enable
.equ	SM0	= 1 ; Sleep Mode Select Bits
.equ	SM1	= 2 ; Sleep Mode Select Bits

; OSCCAL - Oscillator Calibration Register
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

; CLKSELR - Clock Selection Register
.equ	CSEL0	= 0 ; Clock Source Select bit 3 - CKSEL3 fuse substitution
.equ	CSEL1	= 1 ; Clock Source Select bit 3 - CKSEL3 fuse substitution
.equ	CSEL2	= 2 ; Clock Source Select bit 3 - CKSEL3 fuse substitution
.equ	CSEL3	= 3 ; Clock Source Select bit 3 - CKSEL3 fuse substitution
.equ	CSUT0	= 4 ; Clock Start-up Time bit 1 - SUT1 fuse substitution
.equ	CSUT1	= 5 ; Clock Start-up Time bit 1 - SUT1 fuse substitution
.equ	COUT	= 6 ; Clock Out - CKOUT fuse substitution

; CLKCSR - Clock Control & Status Register
.equ	CLKC0	= 0 ; Clock Control bits
.equ	CLKC1	= 1 ; Clock Control bits
.equ	CLKC2	= 2 ; Clock Control bits
.equ	CLKC3	= 3 ; Clock Control bits
.equ	CLKRDY	= 4 ; Clock Ready Flag
.equ	CLKCCE	= 7 ; Clock Control Change Enable

; DWDR - debugWire communication register
.equ	DWDR0	= 0 ; debugWire communication register Bit 0
.equ	DWDR1	= 1 ; debugWire communication register Bit 1
.equ	DWDR2	= 2 ; debugWire communication register Bit 2
.equ	DWDR3	= 3 ; debugWire communication register Bit 3
.equ	DWDR4	= 4 ; debugWire communication register Bit 4
.equ	DWDR5	= 5 ; debugWire communication register Bit 5
.equ	DWDR6	= 6 ; debugWire communication register Bit 6
.equ	DWDR7	= 7 ; debugWire communication register Bit 7

; GPIOR2 - General Purpose IO register 2
.equ	GPIOR20	= 0 ; General Purpose IO register 2 Bit 0
.equ	GPIOR21	= 1 ; General Purpose IO register 2 Bit 1
.equ	GPIOR22	= 2 ; General Purpose IO register 2 Bit 2
.equ	GPIOR23	= 3 ; General Purpose IO register 2 Bit 3
.equ	GPIOR24	= 4 ; General Purpose IO register 2 Bit 4
.equ	GPIOR25	= 5 ; General Purpose IO register 2 Bit 5
.equ	GPIOR26	= 6 ; General Purpose IO register 2 Bit 6
.equ	GPIOR27	= 7 ; General Purpose IO register 2 Bit 7

; GPIOR1 - General Purpose register 1
.equ	GPIOR10	= 0 ; General Purpose register 1 Bit 0
.equ	GPIOR11	= 1 ; General Purpose register 1 Bit 1
.equ	GPIOR12	= 2 ; General Purpose register 1 Bit 2
.equ	GPIOR13	= 3 ; General Purpose register 1 Bit 3
.equ	GPIOR14	= 4 ; General Purpose register 1 Bit 4
.equ	GPIOR15	= 5 ; General Purpose register 1 Bit 5
.equ	GPIOR16	= 6 ; General Purpose register 1 Bit 6
.equ	GPIOR17	= 7 ; General Purpose register 1 Bit 7

; GPIOR0 - General purpose register 0
.equ	GPIOR00	= 0 ; General purpose register 0 Bit 0
.equ	GPIOR01	= 1 ; General purpose register 0 Bit 1
.equ	GPIOR02	= 2 ; General purpose register 0 Bit 2
.equ	GPIOR03	= 3 ; General purpose register 0 Bit 3
.equ	GPIOR04	= 4 ; General purpose register 0 Bit 4
.equ	GPIOR05	= 5 ; General purpose register 0 Bit 5
.equ	GPIOR06	= 6 ; General purpose register 0 Bit 6
.equ	GPIOR07	= 7 ; General purpose register 0 Bit 7

; PORTCR - General purpose register 0
.equ	PORTCR0	= 0 ; General purpose register 0 Bit 0


; ***** FUSE *****************
; EXTENDED - 
.equ	SELFPRGEN	= 0 ; Self Programming enable

; HIGH - 
.equ	BODLEVEL0	= 0 ; Brown-out Detector trigger level
.equ	BODLEVEL1	= 1 ; Brown-out Detector trigger level
.equ	BODLEVEL2	= 2 ; Brown-out Detector trigger level
.equ	EESAVE	= 3 ; Preserve EEPROM through the Chip Erase cycle
.equ	WDTON	= 4 ; Watch-dog Timer always ON
.equ	SPIEN	= 5 ; Serial program downloading (SPI) enabled
.equ	DWEN	= 6 ; Debug Wire enable
.equ	RSTDISBL	= 7 ; Reset Disabled (Enable PB7 as i/o pin)

; LOW - 
.equ	SUT_CKSEL0	= 0 ; Select Clock source
.equ	SUT_CKSEL1	= 1 ; Select Clock source
.equ	SUT_CKSEL2	= 2 ; Select Clock source
.equ	SUT_CKSEL3	= 3 ; Select Clock source
.equ	SUT_CKSEL4	= 4 ; Select Clock source
.equ	SUT_CKSEL5	= 5 ; Select Clock source
.equ	CKOUT	= 6 ; Clock output on PORTB5
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
.equ	FLASHEND	= 0x1FFF ; Note: Word address
.equ	IOEND	= 0x00FF
.equ	SRAM_START	= 0x0100
.equ	SRAM_SIZE	= 512
.equ	RAMEND	= 0x02FF
.equ	E2END	= 0x01FF
.equ	EEPROMEND	= 0x01FF
.equ	EEADRBITS	= 9
.equ	XRAMEND	= 0x0000
#pragma AVRPART MEMORY PROG_FLASH 16384
#pragma AVRPART MEMORY INT_SRAM SIZE 512
#pragma AVRPART MEMORY INT_SRAM START_ADDR 0x100
#pragma AVRPART MEMORY EEPROM 512

; ***** INTERRUPT VECTORS ************************************************
.equ	INT0addr	 = 0x0002 ; External Interrupt Request 0
.equ	INT1addr	 = 0x0004 ; External Interrupt Request 1
.equ	PCINT0addr	 = 0x0006 ; Pin Change Interrupt Request 0
.equ	PCINT1addr	 = 0x0008 ; Pin Change Interrupt Request 1
.equ	WDTaddr	 = 0x000A ; Watchdog Time-Out Interrupt
.equ	TIMER1_CAPTaddr	 = 0x000C ; Timer/Counter1 Capture Event
.equ	TIMER1_COMPAaddr	 = 0x000E ; Timer/Counter1 Compare Match 1A
.equ	TIMER1_COMPBaddr	 = 0x0010 ; Timer/Counter1 Compare Match 1B
.equ	TIMER1_OVFaddr	 = 0x0012 ; Timer/Counter1 Overflow
.equ	TIMER0_COMPAaddr	 = 0x0014 ; Timer/Counter0 Compare Match 0A
.equ	TIMER0_OVFaddr	 = 0x0016 ; Timer/Counter0 Overflow
.equ	LIN_TCaddr	 = 0x0018 ; LIN Transfer Complete
.equ	LIN_ERRaddr	 = 0x001A ; LIN Error
.equ	SPI_STCaddr	 = 0x001C ; SPI Serial Transfer Complete
.equ	ADCaddr	 = 0x001E ; ADC Conversion Complete
.equ	EE_RDYaddr	 = 0x0020 ; EEPROM Ready
.equ	ANA_COMPaddr	 = 0x0022 ; Analog Comparator
.equ	USI_STARTaddr	 = 0x0024 ; USI Start
.equ	USI_OVFaddr	 = 0x0026 ; USI Overflow

.equ	INT_VECTORS_SIZE	= 40 ; size in words

#endif /* _A5505DEF_INC_ */

; ***** END OF FILE ******************************************************



