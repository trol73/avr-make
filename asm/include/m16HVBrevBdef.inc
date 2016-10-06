;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ********************

;*************************************************************************
;* A P P L I C A T I O N   N O T E   F O R   T H E   A V R   F A M I L Y
;* 
;* Number            : AVR000
;* File Name         : m16HVBrevBdef.inc
;* Title             : Register/Bit Definitions for the ATmega16HVBrevB
;* Created           : 2012-11-02 13:30
;* Version           : 1.00
;* Support e-mail    : avr@atmel.com
;* Target MCU        : ATmega16HVBrevB
;* 
;* DESCRIPTION
;* When including this file in the assembly program file, all I/O register 
;* names and I/O register bit names appearing in the data book can be used.
;* In addition, the six registers forming the three data pointers X, Y and 
;* Z have been assigned names XL - ZH. Highest RAM address for Internal 
;* SRAM is also defined 
;* 
;*************************************************************************

#ifndef _M16HVBREVBDEF_INC_
#define _M16HVBREVBDEF_INC_


#pragma partinc 0

; ***** SPECIFY DEVICE ***************************************************
.device	ATmega16HVBrevB
#pragma AVRPART ADMIN PART_NAME ATmega16HVBrevB
.equ	SIGNATURE_000	= 0x1E
.equ	SIGNATURE_001	= 0x94
.equ	SIGNATURE_002	= 0x0D

#pragma AVRPART CORE CORE_VERSION V3

; ***** I/O REGISTER DEFINITIONS *****************************************
; NOTE:
; Definitions marked "MEMORY MAPPED" are extended I/O ports
; and cannot be used with IN/OUT instructions
.equ	BPPLR	= 0xFE ; MEMORY MAPPED
.equ	BPCR	= 0xFD ; MEMORY MAPPED
.equ	BPHCTR	= 0xFC ; MEMORY MAPPED
.equ	BPOCTR	= 0xFB ; MEMORY MAPPED
.equ	BPSCTR	= 0xFA ; MEMORY MAPPED
.equ	BPCHCD	= 0xF9 ; MEMORY MAPPED
.equ	BPDHCD	= 0xF8 ; MEMORY MAPPED
.equ	BPCOCD	= 0xF7 ; MEMORY MAPPED
.equ	BPDOCD	= 0xF6 ; MEMORY MAPPED
.equ	BPSCD	= 0xF5 ; MEMORY MAPPED
.equ	BPIFR	= 0xF3 ; MEMORY MAPPED
.equ	BPIMSK	= 0xF2 ; MEMORY MAPPED
.equ	CBCR	= 0xF1 ; MEMORY MAPPED
.equ	FCSR	= 0xF0 ; MEMORY MAPPED
.equ	CADRDC	= 0xEA ; MEMORY MAPPED
.equ	CADRCC	= 0xE9 ; MEMORY MAPPED
.equ	CADCSRC	= 0xE8 ; MEMORY MAPPED
.equ	CADCSRB	= 0xE7 ; MEMORY MAPPED
.equ	CADCSRA	= 0xE6 ; MEMORY MAPPED
.equ	CADICH	= 0xE5 ; MEMORY MAPPED
.equ	CADICL	= 0xE4 ; MEMORY MAPPED
.equ	CADAC3	= 0xE3 ; MEMORY MAPPED
.equ	CADAC2	= 0xE2 ; MEMORY MAPPED
.equ	CADAC1	= 0xE1 ; MEMORY MAPPED
.equ	CADAC0	= 0xE0 ; MEMORY MAPPED
.equ	CHGDCSR	= 0xD4 ; MEMORY MAPPED
.equ	BGCSR	= 0xD2 ; MEMORY MAPPED
.equ	BGCRR	= 0xD1 ; MEMORY MAPPED
.equ	BGCCR	= 0xD0 ; MEMORY MAPPED
.equ	ROCR	= 0xC8 ; MEMORY MAPPED
.equ	TWBCSR	= 0xBE ; MEMORY MAPPED
.equ	TWAMR	= 0xBD ; MEMORY MAPPED
.equ	TWCR	= 0xBC ; MEMORY MAPPED
.equ	TWDR	= 0xBB ; MEMORY MAPPED
.equ	TWAR	= 0xBA ; MEMORY MAPPED
.equ	TWSR	= 0xB9 ; MEMORY MAPPED
.equ	TWBR	= 0xB8 ; MEMORY MAPPED
.equ	OCR1B	= 0x89 ; MEMORY MAPPED
.equ	OCR1A	= 0x88 ; MEMORY MAPPED
.equ	TCNT1H	= 0x85 ; MEMORY MAPPED
.equ	TCNT1L	= 0x84 ; MEMORY MAPPED
.equ	TCCR1B	= 0x81 ; MEMORY MAPPED
.equ	TCCR1A	= 0x80 ; MEMORY MAPPED
.equ	DIDR0	= 0x7E ; MEMORY MAPPED
.equ	VADMUX	= 0x7C ; MEMORY MAPPED
.equ	VADCSR	= 0x7A ; MEMORY MAPPED
.equ	VADCH	= 0x79 ; MEMORY MAPPED
.equ	VADCL	= 0x78 ; MEMORY MAPPED
.equ	TIMSK1	= 0x6F ; MEMORY MAPPED
.equ	TIMSK0	= 0x6E ; MEMORY MAPPED
.equ	PCMSK1	= 0x6C ; MEMORY MAPPED
.equ	PCMSK0	= 0x6B ; MEMORY MAPPED
.equ	EICRA	= 0x69 ; MEMORY MAPPED
.equ	PCICR	= 0x68 ; MEMORY MAPPED
.equ	FOSCCAL	= 0x66 ; MEMORY MAPPED
.equ	PRR0	= 0x64 ; MEMORY MAPPED
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
.equ	OSICSR	= 0x17 ; 
.equ	TIFR1	= 0x16 ; 
.equ	TIFR0	= 0x15 ; 
.equ	PORTC	= 0x08 ; 
.equ	PINC	= 0x06 ; 
.equ	PORTB	= 0x05 ; 
.equ	DDRB	= 0x04 ; 
.equ	PINB	= 0x03 ; 
.equ	PORTA	= 0x02 ; 
.equ	DDRA	= 0x01 ; 
.equ	PINA	= 0x00 ; 


; ***** BIT DEFINITIONS **************************************************

; ***** AD_CONVERTER *****************
; VADMUX - The VADC multiplexer Selection Register
.equ	VADMUX0	= 0 ; Analog Channel and Gain Selection Bits
.equ	VADMUX1	= 1 ; Analog Channel and Gain Selection Bits
.equ	VADMUX2	= 2 ; Analog Channel and Gain Selection Bits
.equ	VADMUX3	= 3 ; Analog Channel and Gain Selection Bits

; VADC - VADC Data Register  Bytes
.equ	VADCH0	= 0 ; VADC Data Register  Bytes High Bit 8
.equ	VADCH1	= 1 ; VADC Data Register  Bytes High Bit 9
.equ	VADCH2	= 2 ; VADC Data Register  Bytes High Bit 10
.equ	VADCH3	= 3 ; VADC Data Register  Bytes High Bit 11

.equ	VADCL0	= 0 ; VADC Data Register  Bytes Low Bit 0
.equ	VADCL1	= 1 ; VADC Data Register  Bytes Low Bit 1
.equ	VADCL2	= 2 ; VADC Data Register  Bytes Low Bit 2
.equ	VADCL3	= 3 ; VADC Data Register  Bytes Low Bit 3
.equ	VADCL4	= 4 ; VADC Data Register  Bytes Low Bit 4
.equ	VADCL5	= 5 ; VADC Data Register  Bytes Low Bit 5
.equ	VADCL6	= 6 ; VADC Data Register  Bytes Low Bit 6
.equ	VADCL7	= 7 ; VADC Data Register  Bytes Low Bit 7

; VADCSR - The VADC Control and Status register
.equ	VADCCIE	= 0 ; VADC Conversion Complete Interrupt Enable
.equ	VADCCIF	= 1 ; VADC Conversion Complete Interrupt Flag
.equ	VADSC	= 2 ; VADC Satrt Conversion
.equ	VADEN	= 3 ; VADC Enable


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


; ***** FET *****************
; FCSR - FET Control and Status Register
.equ	CFE	= 0 ; Charge FET Enable
.equ	DFE	= 1 ; Discharge FET Enable
.equ	CPS	= 2 ; Current Protection Status
.equ	DUVRD	= 3 ; Deep Under-Voltage Recovery Disable


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


; ***** COULOMB_COUNTER *****************
; CADCSRA - CC-ADC Control and Status Register A
.equ	CADSE	= 0 ; When the CADSE bit is written to one, the ongoing CC-ADC conversion is aborted, and the CC-ADC enters Regular Current detection mode.
.equ	CADSI0	= 1 ; The CADSI bits determine the current sampling interval for the Regular Current detection in Power-down mode. The actual settings remain to be determined.
.equ	CADSI1	= 2 ; The CADSI bits determine the current sampling interval for the Regular Current detection in Power-down mode. The actual settings remain to be determined.
.equ	CADAS0	= 3 ; CC_ADC Accumulate Current Select Bits
.equ	CADAS1	= 4 ; CC_ADC Accumulate Current Select Bits
.equ	CADUB	= 5 ; CC_ADC Update Busy
.equ	CADPOL	= 6 ; 
.equ	CADEN	= 7 ; When the CADEN bit is cleared (zero), the CC-ADC is disabled. When the CADEN bit is set (one), the CC-ADC will continuously measure the voltage drop over the external sense resistor RSENSE. In Power-down, only the Regular Current detection is active. In Power-off, the CC-ADC is always disabled.

; CADCSRB - CC-ADC Control and Status Register B
.equ	CADICIF	= 0 ; CC-ADC Instantaneous Current Interrupt Flag
.equ	CADRCIF	= 1 ; CC-ADC Accumulate Current Interrupt Flag
.equ	CADACIF	= 2 ; CC-ADC Accumulate Current Interrupt Flag
.equ	CADICIE	= 4 ; CAD Instantenous Current Interrupt Enable
.equ	CADRCIE	= 5 ; Regular Current Interrupt Enable
.equ	CADACIE	= 6 ; 

; CADCSRC - CC-ADC Control and Status Register C
.equ	CADVSE	= 0 ; CC-ADC Voltage Scaling Enable

; CADIC - CC-ADC Instantaneous Current
.equ	CADICH0	= 0 ; CC-ADC Instantaneous Current High Bit 8
.equ	CADICH1	= 1 ; CC-ADC Instantaneous Current High Bit 9
.equ	CADICH2	= 2 ; CC-ADC Instantaneous Current High Bit 10
.equ	CADICH3	= 3 ; CC-ADC Instantaneous Current High Bit 11
.equ	CADICH4	= 4 ; CC-ADC Instantaneous Current High Bit 12
.equ	CADICH5	= 5 ; CC-ADC Instantaneous Current High Bit 13
.equ	CADICH6	= 6 ; CC-ADC Instantaneous Current High Bit 14
.equ	CADICH7	= 7 ; CC-ADC Instantaneous Current High Bit 15

.equ	CADICL0	= 0 ; CC-ADC Instantaneous Current Low Bit 0
.equ	CADICL1	= 1 ; CC-ADC Instantaneous Current Low Bit 1
.equ	CADICL2	= 2 ; CC-ADC Instantaneous Current Low Bit 2
.equ	CADICL3	= 3 ; CC-ADC Instantaneous Current Low Bit 3
.equ	CADICL4	= 4 ; CC-ADC Instantaneous Current Low Bit 4
.equ	CADICL5	= 5 ; CC-ADC Instantaneous Current Low Bit 5
.equ	CADICL6	= 6 ; CC-ADC Instantaneous Current Low Bit 6
.equ	CADICL7	= 7 ; CC-ADC Instantaneous Current Low Bit 7

; CADAC3 - ADC Accumulate Current
.equ	CADAC30	= 0 ; ADC Accumulate Current Bit 0
.equ	CADAC31	= 1 ; ADC Accumulate Current Bit 1
.equ	CADAC32	= 2 ; ADC Accumulate Current Bit 2
.equ	CADAC33	= 3 ; ADC Accumulate Current Bit 3
.equ	CADAC34	= 4 ; ADC Accumulate Current Bit 4
.equ	CADAC35	= 5 ; ADC Accumulate Current Bit 5
.equ	CADAC36	= 6 ; ADC Accumulate Current Bit 6
.equ	CADAC37	= 7 ; ADC Accumulate Current Bit 7

; CADAC2 - ADC Accumulate Current
.equ	CADAC20	= 0 ; ADC Accumulate Current Bit 0
.equ	CADAC21	= 1 ; ADC Accumulate Current Bit 1
.equ	CADAC22	= 2 ; ADC Accumulate Current Bit 2
.equ	CADAC23	= 3 ; ADC Accumulate Current Bit 3
.equ	CADAC24	= 4 ; ADC Accumulate Current Bit 4
.equ	CADAC25	= 5 ; ADC Accumulate Current Bit 5
.equ	CADAC26	= 6 ; ADC Accumulate Current Bit 6
.equ	CADAC27	= 7 ; ADC Accumulate Current Bit 7

; CADAC1 - ADC Accumulate Current
.equ	CADAC10	= 0 ; ADC Accumulate Current Bit 0
.equ	CADAC11	= 1 ; ADC Accumulate Current Bit 1
.equ	CADAC12	= 2 ; ADC Accumulate Current Bit 2
.equ	CADAC13	= 3 ; ADC Accumulate Current Bit 3
.equ	CADAC14	= 4 ; ADC Accumulate Current Bit 4
.equ	CADAC15	= 5 ; ADC Accumulate Current Bit 5
.equ	CADAC16	= 6 ; ADC Accumulate Current Bit 6
.equ	CADAC17	= 7 ; ADC Accumulate Current Bit 7

; CADAC0 - ADC Accumulate Current
.equ	CADAC00	= 0 ; ADC Accumulate Current Bit 0
.equ	CADAC01	= 1 ; ADC Accumulate Current Bit 1
.equ	CADAC02	= 2 ; ADC Accumulate Current Bit 2
.equ	CADAC03	= 3 ; ADC Accumulate Current Bit 3
.equ	CADAC04	= 4 ; ADC Accumulate Current Bit 4
.equ	CADAC05	= 5 ; ADC Accumulate Current Bit 5
.equ	CADAC06	= 6 ; ADC Accumulate Current Bit 6
.equ	CADAC07	= 7 ; ADC Accumulate Current Bit 7

; CADRCC - CC-ADC Regular Charge Current
.equ	CADRCC0	= 0 ; CC-ADC Regular Charge Current Bit 0
.equ	CADRCC1	= 1 ; CC-ADC Regular Charge Current Bit 1
.equ	CADRCC2	= 2 ; CC-ADC Regular Charge Current Bit 2
.equ	CADRCC3	= 3 ; CC-ADC Regular Charge Current Bit 3
.equ	CADRCC4	= 4 ; CC-ADC Regular Charge Current Bit 4
.equ	CADRCC5	= 5 ; CC-ADC Regular Charge Current Bit 5
.equ	CADRCC6	= 6 ; CC-ADC Regular Charge Current Bit 6
.equ	CADRCC7	= 7 ; CC-ADC Regular Charge Current Bit 7

; CADRDC - CC-ADC Regular Discharge Current
.equ	CADRDC0	= 0 ; CC-ADC Regular Discharge Current Bit 0
.equ	CADRDC1	= 1 ; CC-ADC Regular Discharge Current Bit 1
.equ	CADRDC2	= 2 ; CC-ADC Regular Discharge Current Bit 2
.equ	CADRDC3	= 3 ; CC-ADC Regular Discharge Current Bit 3
.equ	CADRDC4	= 4 ; CC-ADC Regular Discharge Current Bit 4
.equ	CADRDC5	= 5 ; CC-ADC Regular Discharge Current Bit 5
.equ	CADRDC6	= 6 ; CC-ADC Regular Discharge Current Bit 6
.equ	CADRDC7	= 7 ; CC-ADC Regular Discharge Current Bit 7


; ***** TWI *****************
; TWBCSR - TWI Bus Control and Status Register
.equ	TWBCIP	= 0 ; TWI Bus Connect/Disconnect Interrupt Polarity
.equ	TWBDT0	= 1 ; TWI Bus Disconnect Time-out Period
.equ	TWBDT1	= 2 ; TWI Bus Disconnect Time-out Period
.equ	TWBCIE	= 6 ; TWI Bus Connect/Disconnect Interrupt Enable
.equ	TWBCIF	= 7 ; TWI Bus Connect/Disconnect Interrupt Flag

; TWAMR - TWI (Slave) Address Mask Register
.equ	TWAM0	= 1 ; 
.equ	TWAM1	= 2 ; 
.equ	TWAM2	= 3 ; 
.equ	TWAM3	= 4 ; 
.equ	TWAM4	= 5 ; 
.equ	TWAM5	= 6 ; 
.equ	TWAM6	= 7 ; 

; TWBR - TWI Bit Rate register
.equ	TWBR0	= 0 ; TWI Bit Rate register Bit 0
.equ	TWBR1	= 1 ; TWI Bit Rate register Bit 1
.equ	TWBR2	= 2 ; TWI Bit Rate register Bit 2
.equ	TWBR3	= 3 ; TWI Bit Rate register Bit 3
.equ	TWBR4	= 4 ; TWI Bit Rate register Bit 4
.equ	TWBR5	= 5 ; TWI Bit Rate register Bit 5
.equ	TWBR6	= 6 ; TWI Bit Rate register Bit 6
.equ	TWBR7	= 7 ; TWI Bit Rate register Bit 7

; TWCR - TWI Control Register
.equ	TWIE	= 0 ; TWI Interrupt Enable
.equ	TWEN	= 2 ; TWI Enable Bit
.equ	TWWC	= 3 ; TWI Write Collition Flag
.equ	TWSTO	= 4 ; TWI Stop Condition Bit
.equ	TWSTA	= 5 ; TWI Start Condition Bit
.equ	TWEA	= 6 ; TWI Enable Acknowledge Bit
.equ	TWINT	= 7 ; TWI Interrupt Flag

; TWSR - TWI Status Register
.equ	TWPS0	= 0 ; TWI Prescaler
.equ	TWPS1	= 1 ; TWI Prescaler
.equ	TWS3	= 3 ; TWI Status
.equ	TWS4	= 4 ; TWI Status
.equ	TWS5	= 5 ; TWI Status
.equ	TWS6	= 6 ; TWI Status
.equ	TWS7	= 7 ; TWI Status

; TWDR - TWI Data register
.equ	TWDR0	= 0 ; TWI Data register Bit 0
.equ	TWDR1	= 1 ; TWI Data register Bit 1
.equ	TWDR2	= 2 ; TWI Data register Bit 2
.equ	TWDR3	= 3 ; TWI Data register Bit 3
.equ	TWDR4	= 4 ; TWI Data register Bit 4
.equ	TWDR5	= 5 ; TWI Data register Bit 5
.equ	TWDR6	= 6 ; TWI Data register Bit 6
.equ	TWDR7	= 7 ; TWI Data register Bit 7

; TWAR - TWI (Slave) Address register
.equ	TWGCE	= 0 ; TWI General Call Recognition Enable Bit
.equ	TWA0	= 1 ; TWI (Slave) Address register Bits
.equ	TWA1	= 2 ; TWI (Slave) Address register Bits
.equ	TWA2	= 3 ; TWI (Slave) Address register Bits
.equ	TWA3	= 4 ; TWI (Slave) Address register Bits
.equ	TWA4	= 5 ; TWI (Slave) Address register Bits
.equ	TWA5	= 6 ; TWI (Slave) Address register Bits
.equ	TWA6	= 7 ; TWI (Slave) Address register Bits


; ***** EXTERNAL_INTERRUPT *****************
; EICRA - External Interrupt Control Register
.equ	ISC00	= 0 ; External Interrupt Sense Control 0 Bits
.equ	ISC01	= 1 ; External Interrupt Sense Control 0 Bits
.equ	ISC10	= 2 ; External Interrupt Sense Control 1 Bits
.equ	ISC11	= 3 ; External Interrupt Sense Control 1 Bits
.equ	ISC20	= 4 ; External Interrupt Sense Control 2 Bits
.equ	ISC21	= 5 ; External Interrupt Sense Control 2 Bits
.equ	ISC30	= 6 ; External Interrupt Sense Control 3 Bits
.equ	ISC31	= 7 ; External Interrupt Sense Control 3 Bits

; EIMSK - External Interrupt Mask Register
.equ	INT0	= 0 ; External Interrupt Request 3 Enable
.equ	INT1	= 1 ; External Interrupt Request 3 Enable
.equ	INT2	= 2 ; External Interrupt Request 3 Enable
.equ	INT3	= 3 ; External Interrupt Request 3 Enable

; EIFR - External Interrupt Flag Register
.equ	INTF0	= 0 ; External Interrupt Flags
.equ	INTF1	= 1 ; External Interrupt Flags
.equ	INTF2	= 2 ; External Interrupt Flags
.equ	INTF3	= 3 ; External Interrupt Flags

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
.equ	PCMSK02	= 2 ; Pin Change Enable Mask Register 0 Bit 2
.equ	PCMSK03	= 3 ; Pin Change Enable Mask Register 0 Bit 3


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


; ***** CELL_BALANCING *****************
; CBCR - Cell Balancing Control Register
.equ	CBE1	= 0 ; Cell Balancing Enables
.equ	CBE2	= 1 ; Cell Balancing Enables
.equ	CBE3	= 2 ; Cell Balancing Enables
.equ	CBE4	= 3 ; Cell Balancing Enables


; ***** BATTERY_PROTECTION *****************
; BPPLR - Battery Protection Parameter Lock Register
.equ	BPPL	= 0 ; Battery Protection Parameter Lock
.equ	BPPLE	= 1 ; Battery Protection Parameter Lock Enable

; BPCR - Battery Protection Control Register
.equ	CHCD	= 0 ; Charge High-current Protection Disable
.equ	DHCD	= 1 ; Discharge High-current Protection Disable
.equ	COCD	= 2 ; Charge Over-current Protection Disabled
.equ	DOCD	= 3 ; Discharge Over-current Protection Disabled
.equ	SCD	= 4 ; Short Circuit Protection Disabled
.equ	EPID	= 5 ; External Protection Input Disable

; BPHCTR - Battery Protection Short-current Timing Register
.equ	BPHCTR0	= 0 ; Battery Protection Short-current Timing Register Bit 0
.equ	BPHCTR1	= 1 ; Battery Protection Short-current Timing Register Bit 1
.equ	BPHCTR2	= 2 ; Battery Protection Short-current Timing Register Bit 2
.equ	BPHCTR3	= 3 ; Battery Protection Short-current Timing Register Bit 3
.equ	BPHCTR4	= 4 ; Battery Protection Short-current Timing Register Bit 4
.equ	BPHCTR5	= 5 ; Battery Protection Short-current Timing Register Bit 5

; BPOCTR - Battery Protection Over-current Timing Register
.equ	BPOCTR0	= 0 ; Battery Protection Over-current Timing Register Bit 0
.equ	BPOCTR1	= 1 ; Battery Protection Over-current Timing Register Bit 1
.equ	BPOCTR2	= 2 ; Battery Protection Over-current Timing Register Bit 2
.equ	BPOCTR3	= 3 ; Battery Protection Over-current Timing Register Bit 3
.equ	BPOCTR4	= 4 ; Battery Protection Over-current Timing Register Bit 4
.equ	BPOCTR5	= 5 ; Battery Protection Over-current Timing Register Bit 5

; BPSCTR - Battery Protection Short-current Timing Register
.equ	BPSCTR0	= 0 ; Battery Protection Short-current Timing Register Bit 0
.equ	BPSCTR1	= 1 ; Battery Protection Short-current Timing Register Bit 1
.equ	BPSCTR2	= 2 ; Battery Protection Short-current Timing Register Bit 2
.equ	BPSCTR3	= 3 ; Battery Protection Short-current Timing Register Bit 3
.equ	BPSCTR4	= 4 ; Battery Protection Short-current Timing Register Bit 4
.equ	BPSCTR5	= 5 ; Battery Protection Short-current Timing Register Bit 5
.equ	BPSCTR6	= 6 ; Battery Protection Short-current Timing Register Bit 6

; BPCHCD - Battery Protection Charge-High-current Detection Level Register
.equ	BPCHCD0	= 0 ; Battery Protection Charge-High-current Detection Level Register Bit 0
.equ	BPCHCD1	= 1 ; Battery Protection Charge-High-current Detection Level Register Bit 1
.equ	BPCHCD2	= 2 ; Battery Protection Charge-High-current Detection Level Register Bit 2
.equ	BPCHCD3	= 3 ; Battery Protection Charge-High-current Detection Level Register Bit 3
.equ	BPCHCD4	= 4 ; Battery Protection Charge-High-current Detection Level Register Bit 4
.equ	BPCHCD5	= 5 ; Battery Protection Charge-High-current Detection Level Register Bit 5
.equ	BPCHCD6	= 6 ; Battery Protection Charge-High-current Detection Level Register Bit 6
.equ	BPCHCD7	= 7 ; Battery Protection Charge-High-current Detection Level Register Bit 7

; BPDHCD - Battery Protection Discharge-High-current Detection Level Register
.equ	BPDHCD0	= 0 ; Battery Protection Discharge-High-current Detection Level Register Bit 0
.equ	BPDHCD1	= 1 ; Battery Protection Discharge-High-current Detection Level Register Bit 1
.equ	BPDHCD2	= 2 ; Battery Protection Discharge-High-current Detection Level Register Bit 2
.equ	BPDHCD3	= 3 ; Battery Protection Discharge-High-current Detection Level Register Bit 3
.equ	BPDHCD4	= 4 ; Battery Protection Discharge-High-current Detection Level Register Bit 4
.equ	BPDHCD5	= 5 ; Battery Protection Discharge-High-current Detection Level Register Bit 5
.equ	BPDHCD6	= 6 ; Battery Protection Discharge-High-current Detection Level Register Bit 6
.equ	BPDHCD7	= 7 ; Battery Protection Discharge-High-current Detection Level Register Bit 7

; BPCOCD - Battery Protection Charge-Over-current Detection Level Register
.equ	BPCOCD0	= 0 ; Battery Protection Charge-Over-current Detection Level Register Bit 0
.equ	BPCOCD1	= 1 ; Battery Protection Charge-Over-current Detection Level Register Bit 1
.equ	BPCOCD2	= 2 ; Battery Protection Charge-Over-current Detection Level Register Bit 2
.equ	BPCOCD3	= 3 ; Battery Protection Charge-Over-current Detection Level Register Bit 3
.equ	BPCOCD4	= 4 ; Battery Protection Charge-Over-current Detection Level Register Bit 4
.equ	BPCOCD5	= 5 ; Battery Protection Charge-Over-current Detection Level Register Bit 5
.equ	BPCOCD6	= 6 ; Battery Protection Charge-Over-current Detection Level Register Bit 6
.equ	BPCOCD7	= 7 ; Battery Protection Charge-Over-current Detection Level Register Bit 7

; BPDOCD - Battery Protection Discharge-Over-current Detection Level Register
.equ	BPDOCD0	= 0 ; Battery Protection Discharge-Over-current Detection Level Register Bit 0
.equ	BPDOCD1	= 1 ; Battery Protection Discharge-Over-current Detection Level Register Bit 1
.equ	BPDOCD2	= 2 ; Battery Protection Discharge-Over-current Detection Level Register Bit 2
.equ	BPDOCD3	= 3 ; Battery Protection Discharge-Over-current Detection Level Register Bit 3
.equ	BPDOCD4	= 4 ; Battery Protection Discharge-Over-current Detection Level Register Bit 4
.equ	BPDOCD5	= 5 ; Battery Protection Discharge-Over-current Detection Level Register Bit 5
.equ	BPDOCD6	= 6 ; Battery Protection Discharge-Over-current Detection Level Register Bit 6
.equ	BPDOCD7	= 7 ; Battery Protection Discharge-Over-current Detection Level Register Bit 7

; BPSCD - Battery Protection Short-Circuit Detection Level Register
.equ	BPSCD0	= 0 ; Battery Protection Short-Circuit Detection Level Register Bit 0
.equ	BPSCD1	= 1 ; Battery Protection Short-Circuit Detection Level Register Bit 1
.equ	BPSCD2	= 2 ; Battery Protection Short-Circuit Detection Level Register Bit 2
.equ	BPSCD3	= 3 ; Battery Protection Short-Circuit Detection Level Register Bit 3
.equ	BPSCD4	= 4 ; Battery Protection Short-Circuit Detection Level Register Bit 4
.equ	BPSCD5	= 5 ; Battery Protection Short-Circuit Detection Level Register Bit 5
.equ	BPSCD6	= 6 ; Battery Protection Short-Circuit Detection Level Register Bit 6
.equ	BPSCD7	= 7 ; Battery Protection Short-Circuit Detection Level Register Bit 7

; BPIFR - Battery Protection Interrupt Flag Register
.equ	CHCIF	= 0 ; Charge High-current Protection Activated Interrupt
.equ	DHCIF	= 1 ; Disharge High-current Protection Activated Interrupt
.equ	COCIF	= 2 ; Charge Over-current Protection Activated Interrupt Flag
.equ	DOCIF	= 3 ; Discharge Over-current Protection Activated Interrupt Flag
.equ	SCIF	= 4 ; Short-circuit Protection Activated Interrupt Flag

; BPIMSK - Battery Protection Interrupt Mask Register
.equ	CHCIE	= 0 ; Charger High-current Protection Activated Interrupt
.equ	DHCIE	= 1 ; Discharger High-current Protection Activated Interrupt
.equ	COCIE	= 2 ; Charge Over-current Protection Activated Interrupt Enable
.equ	DOCIE	= 3 ; Discharge Over-current Protection Activated Interrupt Enable
.equ	SCIE	= 4 ; Short-circuit Protection Activated Interrupt Enable


; ***** CHARGER_DETECT *****************
; CHGDCSR - Charger Detect Control and Status Register
.equ	CHGDIE	= 0 ; Charger Detect Interrupt Enable
.equ	CHGDIF	= 1 ; Charger Detect Interrupt Flag
.equ	CHGDISC0	= 2 ; Charger Detect Interrupt Sense Control
.equ	CHGDISC1	= 3 ; Charger Detect Interrupt Sense Control
.equ	BATTPVL	= 4 ; BATT Pin Voltage Level


; ***** VOLTAGE_REGULATOR *****************
; ROCR - Regulator Operating Condition Register
.equ	ROCWIE	= 0 ; ROC Warning Interrupt Enable
.equ	ROCWIF	= 1 ; ROC Warning Interrupt Flag
.equ	ROCD	= 4 ; ROC Disable
.equ	ROCS	= 7 ; ROC Status


; ***** BANDGAP *****************
; BGCSR - Bandgap Control and Status Register
.equ	BGSCDIE	= 0 ; Bandgap Short Circuit Detection Interrupt Enable
.equ	BGSCDIF	= 1 ; Bandgap Short Circuit Detection Interrupt Flag
.equ	BGSCDE	= 4 ; Bandgap Short Circuit Detection Enabled
.equ	BGD	= 5 ; Bandgap Disable

; BGCRR - Bandgap Calibration of Resistor Ladder
.equ	BGCRR0	= 0 ; Bandgap Calibration of Resistor Ladder Bit 0
.equ	BGCRR1	= 1 ; Bandgap Calibration of Resistor Ladder Bit 1
.equ	BGCRR2	= 2 ; Bandgap Calibration of Resistor Ladder Bit 2
.equ	BGCRR3	= 3 ; Bandgap Calibration of Resistor Ladder Bit 3
.equ	BGCRR4	= 4 ; Bandgap Calibration of Resistor Ladder Bit 4
.equ	BGCRR5	= 5 ; Bandgap Calibration of Resistor Ladder Bit 5
.equ	BGCRR6	= 6 ; Bandgap Calibration of Resistor Ladder Bit 6
.equ	BGCRR7	= 7 ; Bandgap Calibration of Resistor Ladder Bit 7

; BGCCR - Bandgap Calibration Register
.equ	BGCC0	= 0 ; BG Calibration of PTAT Current Bits
.equ	BGCC1	= 1 ; BG Calibration of PTAT Current Bits
.equ	BGCC2	= 2 ; BG Calibration of PTAT Current Bits
.equ	BGCC3	= 3 ; BG Calibration of PTAT Current Bits
.equ	BGCC4	= 4 ; BG Calibration of PTAT Current Bits
.equ	BGCC5	= 5 ; BG Calibration of PTAT Current Bits


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

; FOSCCAL - Fast Oscillator Calibration Value
.equ	FOSCCAL0	= 0 ; Fast Oscillator Calibration Value Bit 0
.equ	FOSCCAL1	= 1 ; Fast Oscillator Calibration Value Bit 1
.equ	FOSCCAL2	= 2 ; Fast Oscillator Calibration Value Bit 2
.equ	FOSCCAL3	= 3 ; Fast Oscillator Calibration Value Bit 3
.equ	FOSCCAL4	= 4 ; Fast Oscillator Calibration Value Bit 4
.equ	FOSCCAL5	= 5 ; Fast Oscillator Calibration Value Bit 5
.equ	FOSCCAL6	= 6 ; Fast Oscillator Calibration Value Bit 6
.equ	FOSCCAL7	= 7 ; Fast Oscillator Calibration Value Bit 7

; OSICSR - Oscillator Sampling Interface Control and Status Register
.equ	OSIEN	= 0 ; Oscillator Sampling Interface Enable
.equ	OSIST	= 1 ; Oscillator Sampling Interface Status
.equ	OSISEL0	= 4 ; Oscillator Sampling Interface Select 0

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
.equ	PRVADC	= 0 ; Power Reduction V-ADC
.equ	PRTIM0	= 1 ; Power Reduction Timer/Counter0
.equ	PRTIM1	= 2 ; Power Reduction Timer/Counter1
.equ	PRSPI	= 3 ; Power reduction SPI
.equ	PRVRM	= 5 ; Power Reduction Voltage Regulator Monitor
.equ	PRTWI	= 6 ; Power Reduction TWI

; CLKPR - Clock Prescale Register
.equ	CLKPS0	= 0 ; Clock Prescaler Select Bits
.equ	CLKPS1	= 1 ; Clock Prescaler Select Bits
.equ	CLKPCE	= 7 ; Clock Prescaler Change Enable


; ***** PORTA *****************
; PORTA - Port A Data Register
.equ	PORTA0	= 0 ; Port A Data Register Bit 0
.equ	PORTA1	= 1 ; Port A Data Register Bit 1
.equ	PORTA2	= 2 ; Port A Data Register Bit 2
.equ	PORTA3	= 3 ; Port A Data Register Bit 3

; DDRA - Port A Data Direction Register
.equ	DDRA0	= 0 ; Port A Data Direction Register Bit 0
.equ	DDRA1	= 1 ; Port A Data Direction Register Bit 1
.equ	DDRA2	= 2 ; Port A Data Direction Register Bit 2
.equ	DDRA3	= 3 ; Port A Data Direction Register Bit 3

; PINA - Port A Input Pins
.equ	PINA0	= 0 ; Port A Input Pins Bit 0
.equ	PINA1	= 1 ; Port A Input Pins Bit 1
.equ	PINA2	= 2 ; Port A Input Pins Bit 2
.equ	PINA3	= 3 ; Port A Input Pins Bit 3


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


; ***** PORTC *****************
; PORTC - Port C Data Register
.equ	PORTC0	= 0 ; Port C Data Register Bit 0
.equ	PORTC1	= 1 ; Port C Data Register Bit 1
.equ	PORTC2	= 2 ; Port C Data Register Bit 2
.equ	PORTC3	= 3 ; Port C Data Register Bit 3
.equ	PORTC4	= 4 ; Port C Data Register Bit 4
.equ	PORTC5	= 5 ; Port C Data Register Bit 5

; PINC - Port C Input Pins
.equ	PINC0	= 0 ; Port C Input Pins Bit 0
.equ	PINC1	= 1 ; Port C Input Pins Bit 1
.equ	PINC2	= 2 ; Port C Input Pins Bit 2
.equ	PINC3	= 3 ; Port C Input Pins Bit 3
.equ	PINC4	= 4 ; Port C Input Pins Bit 4


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


; ***** FUSE *****************
; LOW - 
.equ	SUT0	= 2 ; Select start-up time
.equ	SUT1	= 3 ; Select start-up time
.equ	SUT2	= 4 ; Select start-up time
.equ	SPIEN	= 5 ; Serial program downloading (SPI) enabled
.equ	EESAVE	= 6 ; Preserve EEPROM through the Chip Erase cycle
.equ	WDTON	= 7 ; Watch-dog Timer always on

; HIGH - 
.equ	BOOTRST	= 0 ; Boot Reset vector Enabled
.equ	BOOTSZ0	= 1 ; Select Boot Size
.equ	BOOTSZ1	= 2 ; Select Boot Size
.equ	DWEN	= 3 ; Debug Wire enable
.equ	DUVRDINIT	= 4 ; DUVR mode on


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
.equ	FLASHEND	= 0x1FFF ; Note: Word address
.equ	IOEND	= 0x00FF
.equ	SRAM_START	= 0x0100
.equ	SRAM_SIZE	= 1024
.equ	RAMEND	= 0x04FF
.equ	E2END	= 0x01FF
.equ	EEPROMEND	= 0x01FF
.equ	EEADRBITS	= 9
.equ	XRAMEND	= 0x0000
#pragma AVRPART MEMORY PROG_FLASH 16384
#pragma AVRPART MEMORY INT_SRAM SIZE 1024
#pragma AVRPART MEMORY INT_SRAM START_ADDR 0x100
#pragma AVRPART MEMORY EEPROM 512

; ***** INTERRUPT VECTORS ************************************************
.equ	BPINTaddr	 = 0x0002 ; Battery Protection Interrupt
.equ	VREGMONaddr	 = 0x0004 ; Voltage regulator monitor interrupt
.equ	INT0addr	 = 0x0006 ; External Interrupt Request 0
.equ	INT1addr	 = 0x0008 ; External Interrupt Request 1
.equ	INT2addr	 = 0x000A ; External Interrupt Request 2
.equ	INT3addr	 = 0x000C ; External Interrupt Request 3
.equ	PCINT0addr	 = 0x000E ; Pin Change Interrupt 0
.equ	PCINT1addr	 = 0x0010 ; Pin Change Interrupt 1
.equ	WDTaddr	 = 0x0012 ; Watchdog Timeout Interrupt
.equ	BGSCDaddr	 = 0x0014 ; Bandgap Buffer Short Circuit Detected
.equ	CHDETaddr	 = 0x0016 ; Charger Detect
.equ	TIMER1_ICaddr	 = 0x0018 ; Timer 1 Input capture
.equ	TIMER1_COMPAaddr	 = 0x001A ; Timer 1 Compare Match A
.equ	TIMER1_COMPBaddr	 = 0x001C ; Timer 1 Compare Match B
.equ	TIMER1_OVFaddr	 = 0x001E ; Timer 1 overflow
.equ	TIMER0_ICaddr	 = 0x0020 ; Timer 0 Input Capture
.equ	TIMER0_COMPAaddr	 = 0x0022 ; Timer 0 Comapre Match A
.equ	TIMER0_COMPBaddr	 = 0x0024 ; Timer 0 Compare Match B
.equ	TIMER0_OVFaddr	 = 0x0026 ; Timer 0 Overflow
.equ	TWIBUSCDaddr	 = 0x0028 ; Two-Wire Bus Connect/Disconnect
.equ	TWIaddr	 = 0x002A ; Two-Wire Serial Interface
.equ	SPI_STCaddr	 = 0x002C ; SPI Serial transfer complete
.equ	VADCaddr	 = 0x002E ; Voltage ADC Conversion Complete
.equ	CCADC_CONVaddr	 = 0x0030 ; Coulomb Counter ADC Conversion Complete
.equ	CCADC_REG_CURaddr	 = 0x0032 ; Coloumb Counter ADC Regular Current
.equ	CCADC_ACCaddr	 = 0x0034 ; Coloumb Counter ADC Accumulator
.equ	EE_READYaddr	 = 0x0036 ; EEPROM Ready
.equ	SPMaddr	 = 0x0038 ; SPM Ready

.equ	INT_VECTORS_SIZE	= 58 ; size in words

#endif /* _M16HVBREVBDEF_INC_ */

; ***** END OF FILE ******************************************************



