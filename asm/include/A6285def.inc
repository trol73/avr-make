;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ********************

;*************************************************************************
;* A P P L I C A T I O N   N O T E   F O R   T H E   A V R   F A M I L Y
;* 
;* Number            : AVR000
;* File Name         : A6285def.inc
;* Title             : Register/Bit Definitions for the ATxmega128A1
;* Date              : Apr 27 2012
;* Version           : 1.00
;* Support E-mail    : avr@atmel.com
;* Target MCU        : ATA6285
;* 
;* DESCRIPTION
;* When including this file in the assembly program file, all I/O register 
;* names and I/O register bit names appearing in the data book can be used.
;* In addition, the six registers forming the three data pointers X, Y and 
;* Z have been assigned names XL - ZH. Highest RAM address for Internal 
;* SRAM is also defined 
;* 
;*************************************************************************

#ifndef _A6285DEF_INC_
#define _A6285DEF_INC_


#pragma partinc 0

; ***** SPECIFY DEVICE ***************************************************
.device	ATA6285
#pragma AVRPART ADMIN PART_NAME ATA6285
.equ	SIGNATURE_000	= 0x1E
.equ	SIGNATURE_001	= 0x93
.equ	SIGNATURE_002	= 0x82

#pragma AVRPART CORE CORE_VERSION V3

; ***** I/O REGISTER DEFINITIONS *****************************************
; NOTE:
; Definitions marked "MEMORY MAPPED"are extended I/O ports
; and cannot be used with IN/OUT instructions
.equ	LFCALH	= 0x87 ; MEMORY MAPPED
.equ	LFCALL	= 0x86 ; MEMORY MAPPED
.equ	LFIDCH	= 0x85 ; MEMORY MAPPED
.equ	LFIDCL	= 0x84 ; MEMORY MAPPED
.equ	LFHCR	= 0x83 ; MEMORY MAPPED
.equ	LFRCR	= 0x82 ; MEMORY MAPPED
.equ	LFIMR	= 0x81 ; MEMORY MAPPED
.equ	T3IMR	= 0x7F ; MEMORY MAPPED
.equ	T3CRB	= 0x7E ; MEMORY MAPPED
.equ	T3MRB	= 0x7D ; MEMORY MAPPED
.equ	T3MRA	= 0x7C ; MEMORY MAPPED
.equ	T3CORBH	= 0x7B ; MEMORY MAPPED
.equ	T3CORBL	= 0x7A ; MEMORY MAPPED
.equ	T3CORAH	= 0x79 ; MEMORY MAPPED
.equ	T3CORAL	= 0x78 ; MEMORY MAPPED
.equ	T3ICRH	= 0x77 ; MEMORY MAPPED
.equ	T3ICRL	= 0x76 ; MEMORY MAPPED
.equ	T2IMR	= 0x74 ; MEMORY MAPPED
.equ	T2MRB	= 0x73 ; MEMORY MAPPED
.equ	T2MRA	= 0x72 ; MEMORY MAPPED
.equ	T2CORH	= 0x71 ; MEMORY MAPPED
.equ	T2CORL	= 0x70 ; MEMORY MAPPED
.equ	T2ICR	= 0x6F ; MEMORY MAPPED
.equ	T2ICRL	= 0x6E ; MEMORY MAPPED
.equ	PCMSK2	= 0x6C ; MEMORY MAPPED
.equ	PCMSK1	= 0x6B ; MEMORY MAPPED
.equ	PCMSK0	= 0x6A ; MEMORY MAPPED
.equ	EICRA	= 0x69 ; MEMORY MAPPED
.equ	MSVCAL	= 0x67 ; MEMORY MAPPED
.equ	FRCCAL	= 0x66 ; MEMORY MAPPED
.equ	SRCCAL	= 0x65 ; MEMORY MAPPED
.equ	TSCR	= 0x64 ; MEMORY MAPPED
.equ	SIMSK	= 0x61 ; MEMORY MAPPED
.equ	WDTCR	= 0x60 ; MEMORY MAPPED
.equ	SREG	= 0x3F ; 
.equ	SPH	= 0x3E ; 
.equ	SPL	= 0x3D ; 
.equ	CLKPR	= 0x3C ; 
.equ	CMIMR	= 0x3B ; 
.equ	T0CR	= 0x39 ; 
.equ	T1CR	= 0x38 ; 
.equ	SPMCSR	= 0x37 ; 
.equ	LFRB	= 0x36 ; 
.equ	MCUCR	= 0x35 ; 
.equ	MCUSR	= 0x34 ; 
.equ	SMCR	= 0x33 ; 
.equ	LFCDR	= 0x32 ; 
.equ	LFRR	= 0x30 ; 
.equ	T2MDR	= 0x2F ; 
.equ	SPDR	= 0x2E ; 
.equ	SPSR	= 0x2D ; 
.equ	SPCR	= 0x2C ; 
.equ	GPIOR2	= 0x2B ; 
.equ	GPIOR1	= 0x2A ; 
.equ	SCCR	= 0x29 ; 
.equ	SCR	= 0x28 ; 
.equ	SVCR	= 0x27 ; 
.equ	EIMSK	= 0x24 ; 
.equ	PCICR	= 0x23 ; 
.equ	EEARH	= 0x22 ; 
.equ	EEARL	= 0x21 ; 
.equ	EEDR	= 0x20 ; 
.equ	EECR	= 0x1F ; 
.equ	GPIOR0	= 0x1E ; 
.equ	EIFR	= 0x1D ; 
.equ	T3IFR	= 0x1C ; 
.equ	T2IFR	= 0x1B ; 
.equ	T10IFR	= 0x1A ; 
.equ	SSFR	= 0x19 ; 
.equ	LFFR	= 0x18 ; 
.equ	PCIFR	= 0x17 ; 
.equ	VMCSR	= 0x16 ; 
.equ	T3CRA	= 0x14 ; 
.equ	T2CRB	= 0x12 ; 
.equ	T2CRA	= 0x11 ; 
.equ	CMSR	= 0x10 ; 
.equ	CMCR	= 0x0F ; 
.equ	PORTD	= 0x0B ; 
.equ	DDRD	= 0x0A ; 
.equ	PIND	= 0x09 ; 
.equ	PORTC	= 0x08 ; 
.equ	DDRC	= 0x07 ; 
.equ	PINC	= 0x06 ; 
.equ	PORTB	= 0x05 ; 
.equ	DDRB	= 0x04 ; 
.equ	PINB	= 0x03 ; 


; ***** BIT DEFINITIONS **************************************************

; ***** SENSOR_INTERFACE *****************

; MSVCAL - Motion Sensor Voltage Calibration Register
.equ	MSVCAL0	= 0 ; Motion Sensor Voltage Calibration Register Bit 0
.equ	MSVCAL1	= 1 ; Motion Sensor Voltage Calibration Register Bit 1
.equ	MSVCAL2	= 2 ; Motion Sensor Voltage Calibration Register Bit 2
.equ	MSVCAL3	= 3 ; Motion Sensor Voltage Calibration Register Bit 3
.equ	MSVCAL4	= 4 ; Motion Sensor Voltage Calibration Register Bit 4
.equ	MSVCAL5	= 5 ; Motion Sensor Voltage Calibration Register Bit 5
.equ	MSVCAL6	= 6 ; Motion Sensor Voltage Calibration Register Bit 6
.equ	MSVCAL7	= 7 ; Motion Sensor Voltage Calibration Register Bit 7

; SCR - Sensor Control Register
.equ	SMS	= 0 ; Sensor Measurement Start Bit
.equ	SEN0	= 1 ; Sensor enable Bits
.equ	SEN1	= 2 ; Sensor enable Bits
.equ	SMEN	= 3 ; Sensor Motion Enable Bit

; SCCR - Sensor Capacitor Control Register
.equ	SRCC0	= 0 ; Sensor Reference Charge Current Bit1
.equ	SRCC1	= 1 ; Sensor Reference Charge Current Bit1
.equ	SCCS0	= 2 ; Sensor Capacitor Channel Select Bit2
.equ	SCCS1	= 3 ; Sensor Capacitor Channel Select Bit2
.equ	SCCS2	= 4 ; Sensor Capacitor Channel Select Bit2

; SVCR - Sensor Voltage Control Register
.equ	SVCR0	= 0 ; Sensor Voltage Control Register Bit 0
.equ	SVCR1	= 1 ; Sensor Voltage Control Register Bit 1
.equ	SVCR2	= 2 ; Sensor Voltage Control Register Bit 2
.equ	SVCR3	= 3 ; Sensor Voltage Control Register Bit 3
.equ	SVCR4	= 4 ; Sensor Voltage Control Register Bit 4

; SIMSK - Sensor Interrupt Mask register
.equ	MSIE	= 0 ; Motion Sensor Interrupt Enable Bit

; SSFR - Sensor Status + Flag Register
.equ	MSENF	= 0 ; Motion Sensor Flag
.equ	MSENO	= 1 ; Motion Sensor Output

; TSCR - Temperature Sensor Control Register
.equ	TSSD	= 0 ; Temperature Sensor Shutdown mode Disable


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


; ***** CPU *****************

; CLKPR - Clock Prescaler Register
.equ	CLKPS0	= 0 ; Clock system Prescaler Select Bits
.equ	CLKPS1	= 1 ; Clock system Prescaler Select Bits
.equ	CLKPS2	= 2 ; Clock system Prescaler Select Bits
.equ	CLTPS0	= 3 ; Clock Timer Prescaler Select Bits
.equ	CLTPS1	= 4 ; Clock Timer Prescaler Select Bits
.equ	CLTPS2	= 5 ; Clock Timer Prescaler Select Bits
.equ	CLPCE	= 7 ; Clock Prescaler Change Enable Bit

; CMCR - Clock Management Control Register
.equ	CMM0	= 0 ; Clock Management Mode Bitss
.equ	CMM1	= 1 ; Clock Management Mode Bitss
.equ	SRCD	= 2 ; Slow RC-oscillator Disable Bit
.equ	CMONEN	= 3 ; Clock Monitoring Enable
.equ	CCS	= 4 ; Core Clock Select Bit
.equ	ECINS	= 5 ; External Clock Input Select Bit
.equ	CMCCE	= 7 ; Clock Management Control Change Enable Bit

; CMSR - Clock Management Status Register
.equ	ECF	= 0 ; External Clock input Flag Bit

; CMIMR - Clock Management Interrupt Mask Register
.equ	ECIE	= 0 ; External Clock input Interrupt Enable Bit

; FRCCAL - FRC-Oscillator Calibration Register
.equ	FRCCAL0	= 0 ; FRC-Oscillator Calibration Register Bit 0
.equ	FRCCAL1	= 1 ; FRC-Oscillator Calibration Register Bit 1
.equ	FRCCAL2	= 2 ; FRC-Oscillator Calibration Register Bit 2
.equ	FRCCAL3	= 3 ; FRC-Oscillator Calibration Register Bit 3
.equ	FRCCAL4	= 4 ; FRC-Oscillator Calibration Register Bit 4
.equ	FRCCAL5	= 5 ; FRC-Oscillator Calibration Register Bit 5

; SRCCAL - SRC-Oscillator Calibration Register
.equ	SRCCAL0	= 0 ; SRC-Oscillator Calibration Register Bit 0
.equ	SRCCAL1	= 1 ; SRC-Oscillator Calibration Register Bit 1
.equ	SRCCAL2	= 2 ; SRC-Oscillator Calibration Register Bit 2
.equ	SRCCAL3	= 3 ; SRC-Oscillator Calibration Register Bit 3
.equ	SRCCAL4	= 4 ; SRC-Oscillator Calibration Register Bit 4
.equ	SRCCAL5	= 5 ; SRC-Oscillator Calibration Register Bit 5
.equ	SRCCAL6	= 6 ; SRC-Oscillator Calibration Register Bit 6
.equ	SRCCAL7	= 7 ; SRC-Oscillator Calibration Register Bit 7

; VMCSR - Voltage Monitor Control and Status Register
.equ	VMEN	= 0 ; Voltage Monitor Enable Bit
.equ	VMLS0	= 1 ; Voltage Monitor Level Select Bits
.equ	VMLS1	= 2 ; Voltage Monitor Level Select Bits
.equ	VMLS2	= 3 ; Voltage Monitor Level Select Bits
.equ	VMIM	= 4 ; Voltage Monitor Interrupt Mask Bit
.equ	VMF	= 5 ; Voltage Monitor Flag
.equ	BODPD	= 6 ; Brown-Out Detection on Power-Down Bit
.equ	BODLS	= 7 ; Brown-Out Detection Level Select Bit

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

; SPMCSR - Store Program Memory Control Register
.equ	SELFPRGEN	= 0 ; Self Programming Enable
.equ	PGERS	= 1 ; Page Erase
.equ	PGWRT	= 2 ; Page Write
.equ	BLBSET	= 3 ; Boot Lock Bit Set
.equ	RWWSRE	= 4 ; Read-While-Write section read enable
.equ	RWWSB	= 6 ; Read-While-Write Section Busy
.equ	SPMIE	= 7 ; SPM Interrupt Enable

; MCUCR - MCU Control Register
.equ	IVCE	= 0 ; Interrupt Vector Change Enable
.equ	IVSEL	= 1 ; Interrupt Vector Select
.equ	PUD	= 4 ; 

; MCUSR - MCU Status Register
.equ	PORF	= 0 ; Power-on reset flag
.equ	EXTRF	= 1 ; External Reset Flag
.equ	BORF	= 2 ; Brown-out Reset Flag
.equ	WDRF	= 3 ; Watchdog Reset Flag
.equ	TSRF	= 5 ; Temperature Shutdown Reset Flag

; SMCR - Sleep Mode Control Register
.equ	SE	= 0 ; 
.equ	SM0	= 1 ; 
.equ	SM1	= 2 ; 
.equ	SM2	= 3 ; 

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


; ***** LFRX *****************

; LFRCR - Low Frequency Receiver Control Register
.equ	LFEN	= 0 ; LF receiver Enable Bit
.equ	LFBM	= 1 ; LF receiver Burst Mode enable Bit
.equ	LFWM0	= 2 ; LF receiver Wake-up Mode Bits
.equ	LFWM1	= 3 ; LF receiver Wake-up Mode Bits
.equ	LFRSS	= 4 ; LF Receiver Sensitivity Select Bit
.equ	LFCS0	= 5 ; LF receiver Capacitor Select Bits
.equ	LFCS1	= 6 ; LF receiver Capacitor Select Bits
.equ	LFCS2	= 7 ; LF receiver Capacitor Select Bits

; LFCDR - LF receiver Control und Data Register
.equ	LFDO	= 0 ; LF receiver Data Output Bit
.equ	LFRST	= 6 ; LF receiver Reset Bit
.equ	LFSCE	= 7 ; LF receiver RSSI Software Capture Enable Bit

; LFRB - Low Frequency Receive data Buffer
.equ	LFRB0	= 0 ; Low Frequency Receive data Buffer Bit 0
.equ	LFRB1	= 1 ; Low Frequency Receive data Buffer Bit 1
.equ	LFRB2	= 2 ; Low Frequency Receive data Buffer Bit 2
.equ	LFRB3	= 3 ; Low Frequency Receive data Buffer Bit 3
.equ	LFRB4	= 4 ; Low Frequency Receive data Buffer Bit 4
.equ	LFRB5	= 5 ; Low Frequency Receive data Buffer Bit 5
.equ	LFRB6	= 6 ; Low Frequency Receive data Buffer Bit 6
.equ	LFRB7	= 7 ; Low Frequency Receive data Buffer Bit 7

; LFRR - LF RSSI Data Register
.equ	LFRR0	= 0 ; LF RSSI Data Register Bit 0
.equ	LFRR1	= 1 ; LF RSSI Data Register Bit 1
.equ	LFRR2	= 2 ; LF RSSI Data Register Bit 2
.equ	LFRR3	= 3 ; LF RSSI Data Register Bit 3
.equ	LFRR4	= 4 ; LF RSSI Data Register Bit 4
.equ	LFRR5	= 5 ; LF RSSI Data Register Bit 5
.equ	LFRR6	= 6 ; LF RSSI Data Register Bit 6

; LFHCR - LF Header Compare Register
.equ	LFHCR0	= 0 ; LF Header Compare Register Bit 0
.equ	LFHCR1	= 1 ; LF Header Compare Register Bit 1
.equ	LFHCR2	= 2 ; LF Header Compare Register Bit 2
.equ	LFHCR3	= 3 ; LF Header Compare Register Bit 3
.equ	LFHCR4	= 4 ; LF Header Compare Register Bit 4
.equ	LFHCR5	= 5 ; LF Header Compare Register Bit 5
.equ	LFHCR6	= 6 ; LF Header Compare Register Bit 6

; LFIDC - LF ID Compare Register 
.equ	LFIDCH0	= 0 ; LF ID Compare Register  High Bit 0
.equ	LFIDCH1	= 1 ; LF ID Compare Register  High Bit 1
.equ	LFIDCH2	= 2 ; LF ID Compare Register  High Bit 2
.equ	LFIDCH3	= 3 ; LF ID Compare Register  High Bit 3
.equ	LFIDCH4	= 4 ; LF ID Compare Register  High Bit 4
.equ	LFIDCH5	= 5 ; LF ID Compare Register  High Bit 5
.equ	LFIDCH6	= 6 ; LF ID Compare Register  High Bit 6
.equ	LFIDCH7	= 7 ; LF ID Compare Register  High Bit 7


.equ	LFIDCL0	= 0 ; LF ID Compare Register  Low Bit 0
.equ	LFIDCL1	= 1 ; LF ID Compare Register  Low Bit 1
.equ	LFIDCL2	= 2 ; LF ID Compare Register  Low Bit 2
.equ	LFIDCL3	= 3 ; LF ID Compare Register  Low Bit 3
.equ	LFIDCL4	= 4 ; LF ID Compare Register  Low Bit 4
.equ	LFIDCL5	= 5 ; LF ID Compare Register  Low Bit 5
.equ	LFIDCL6	= 6 ; LF ID Compare Register  Low Bit 6
.equ	LFIDCL7	= 7 ; LF ID Compare Register  Low Bit 7

; LFIMR - Low Frequency Interrupt Mask Register
.equ	LFWIM	= 0 ; LF receiver Wake-up Interrupt Mask bit
.equ	LFBIM	= 1 ; LF receiver data Buffer Interrupt Mask bit
.equ	LFEIM	= 2 ; LF receiver End of data Interrupt Mask bit

; LFFR - Low Frequency Flag Register
.equ	LFWPF	= 0 ; LF receiver Wake-up Flag
.equ	LFBF	= 1 ; LF receiver data Buffer full Flag
.equ	LFEDF	= 2 ; LF receiver End of data Flag
.equ	LFRF	= 3 ; LF receiver Rssi data Flag

; LFCAL - LF Calibration Register  Bytes
.equ	LFCALH0	= 0 ; LF Calibration Register  Bytes High Bit 0
.equ	LFCALH1	= 1 ; LF Calibration Register  Bytes High Bit 1
.equ	LFCALH2	= 2 ; LF Calibration Register  Bytes High Bit 2
.equ	LFCALH3	= 3 ; LF Calibration Register  Bytes High Bit 3
.equ	LFCALH4	= 4 ; LF Calibration Register  Bytes High Bit 4
.equ	LFCALH5	= 5 ; LF Calibration Register  Bytes High Bit 5
.equ	LFCALH6	= 6 ; LF Calibration Register  Bytes High Bit 6
.equ	LFCALH7	= 7 ; LF Calibration Register  Bytes High Bit 7


.equ	LFCALL0	= 0 ; LF Calibration Register  Bytes Low Bit 0
.equ	LFCALL1	= 1 ; LF Calibration Register  Bytes Low Bit 1
.equ	LFCALL2	= 2 ; LF Calibration Register  Bytes Low Bit 2
.equ	LFCALL3	= 3 ; LF Calibration Register  Bytes Low Bit 3
.equ	LFCALL4	= 4 ; LF Calibration Register  Bytes Low Bit 4
.equ	LFCALL5	= 5 ; LF Calibration Register  Bytes Low Bit 5
.equ	LFCALL6	= 6 ; LF Calibration Register  Bytes Low Bit 6
.equ	LFCALL7	= 7 ; LF Calibration Register  Bytes Low Bit 7


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

; PCMSK0 - Pin Change Mask Register 0
.equ	PCINT0	= 0 ; Pin Change Enable Masks
.equ	PCINT1	= 1 ; Pin Change Enable Masks
.equ	PCINT2	= 2 ; Pin Change Enable Masks
.equ	PCINT3	= 3 ; Pin Change Enable Masks
.equ	PCINT4	= 4 ; Pin Change Enable Masks
.equ	PCINT5	= 5 ; Pin Change Enable Masks
.equ	PCINT6	= 6 ; Pin Change Enable Masks
.equ	PCINT7	= 7 ; Pin Change Enable Masks

; PCMSK1 - Pin Change Mask Register 1
.equ	PCINT8	= 0 ; Pin Change Enable Masks
.equ	PCINT9	= 1 ; Pin Change Enable Masks
.equ	PCINT10	= 2 ; Pin Change Enable Masks

; PCMSK2 - Pin Change Mask Register 2
.equ	PCINT16	= 0 ; Pin Change Enable Masks
.equ	PCINT17	= 1 ; Pin Change Enable Masks
.equ	PCINT18	= 2 ; Pin Change Enable Masks
.equ	PCINT19	= 3 ; Pin Change Enable Masks
.equ	PCINT20	= 4 ; Pin Change Enable Masks
.equ	PCINT21	= 5 ; Pin Change Enable Masks
.equ	PCINT22	= 6 ; Pin Change Enable Masks
.equ	PCINT23	= 7 ; Pin Change Enable Masks

; PCIFR - Pin Change Interrupt Flag Register
.equ	PCIF0	= 0 ; Pin Change Interrupt Flags
.equ	PCIF1	= 1 ; Pin Change Interrupt Flags
.equ	PCIF2	= 2 ; Pin Change Interrupt Flags

; PCICR - Pin Change Interrupt Control Register
.equ	PCIE0	= 0 ; Pin Change Interrupt Enables
.equ	PCIE1	= 1 ; Pin Change Interrupt Enables
.equ	PCIE2	= 2 ; Pin Change Interrupt Enables


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


; ***** TIMER_COUNTER_1 *****************

; T1CR - Timer 1 Control Register
.equ	T1PS0	= 0 ; Timer 1 Prescaler Select Bits
.equ	T1PS1	= 1 ; Timer 1 Prescaler Select Bits
.equ	T1PS2	= 2 ; Timer 1 Prescaler Select Bits
.equ	T1CS0	= 3 ; Timer 1 Clock Select Bits
.equ	T1CS1	= 4 ; Timer 1 Clock Select Bits
.equ	T1CS2	= 5 ; Timer 1 Clock Select Bits
.equ	T1IE	= 7 ; Timer 1 Interrupt Enable Bit

; T10IFR - Timer1/0 Interrupt Flag Register
.equ	T0F	= 0 ; Timer 0 Flag Bit
.equ	T1F	= 1 ; Timer 1 Flag Bit


; ***** TIMER_COUNTER_2 *****************

; T2CRA - Timer 2 Control Register A
.equ	T2OTM	= 0 ; Timer 2 Overflow Toggle Mask Bit
.equ	T2CTM	= 1 ; Timer 2 Compare Toggle Mask Bit
.equ	T2CR	= 2 ; Timer2 Counter Reset
.equ	T2CRM	= 3 ; Timer 2 Compare Reset Mask Bit
.equ	T2ICS	= 5 ; Timer Input Capture Select Bit
.equ	T2TS	= 6 ; Timer 2 Toggle with Start Bit
.equ	T2E	= 7 ; Timer 2 Enable Bit

; T2CRB - Timer 2 Control Register B
.equ	T2SCE	= 0 ; Timer 2 Software Capture Enable Bit

; T2MDR - Timer 2 Modulator Data Register
.equ	T2MDR0	= 0 ; Timer 2 Modulator Data Register Bit 0
.equ	T2MDR1	= 1 ; Timer 2 Modulator Data Register Bit 1
.equ	T2MDR2	= 2 ; Timer 2 Modulator Data Register Bit 2
.equ	T2MDR3	= 3 ; Timer 2 Modulator Data Register Bit 3
.equ	T2MDR4	= 4 ; Timer 2 Modulator Data Register Bit 4
.equ	T2MDR5	= 5 ; Timer 2 Modulator Data Register Bit 5
.equ	T2MDR6	= 6 ; Timer 2 Modulator Data Register Bit 6
.equ	T2MDR7	= 7 ; Timer 2 Modulator Data Register Bit 7

; T2ICR - Timer 2 Input Capture Register High Byte
.equ	T2ICR0	= 0 ; Timer 2 Input Capture Register High Byte Bit 0
.equ	T2ICR1	= 1 ; Timer 2 Input Capture Register High Byte Bit 1
.equ	T2ICR2	= 2 ; Timer 2 Input Capture Register High Byte Bit 2
.equ	T2ICR3	= 3 ; Timer 2 Input Capture Register High Byte Bit 3
.equ	T2ICR4	= 4 ; Timer 2 Input Capture Register High Byte Bit 4
.equ	T2ICR5	= 5 ; Timer 2 Input Capture Register High Byte Bit 5
.equ	T2ICR6	= 6 ; Timer 2 Input Capture Register High Byte Bit 6
.equ	T2ICR7	= 7 ; Timer 2 Input Capture Register High Byte Bit 7

; T2ICRL - Timer 2 Input Capture Register Low Byte
.equ	T2ICRL0	= 0 ; Timer 2 Input Capture Register Low Byte Bit 0
.equ	T2ICRL1	= 1 ; Timer 2 Input Capture Register Low Byte Bit 1
.equ	T2ICRL2	= 2 ; Timer 2 Input Capture Register Low Byte Bit 2
.equ	T2ICRL3	= 3 ; Timer 2 Input Capture Register Low Byte Bit 3
.equ	T2ICRL4	= 4 ; Timer 2 Input Capture Register Low Byte Bit 4
.equ	T2ICRL5	= 5 ; Timer 2 Input Capture Register Low Byte Bit 5
.equ	T2ICRL6	= 6 ; Timer 2 Input Capture Register Low Byte Bit 6
.equ	T2ICRL7	= 7 ; Timer 2 Input Capture Register Low Byte Bit 7

; T2COR - Timer2 Compare Register  Bytes
.equ	T2CORH0	= 0 ; Timer2 Compare Register  Bytes High Bit 0
.equ	T2CORH1	= 1 ; Timer2 Compare Register  Bytes High Bit 1
.equ	T2CORH2	= 2 ; Timer2 Compare Register  Bytes High Bit 2
.equ	T2CORH3	= 3 ; Timer2 Compare Register  Bytes High Bit 3
.equ	T2CORH4	= 4 ; Timer2 Compare Register  Bytes High Bit 4
.equ	T2CORH5	= 5 ; Timer2 Compare Register  Bytes High Bit 5
.equ	T2CORH6	= 6 ; Timer2 Compare Register  Bytes High Bit 6
.equ	T2CORH7	= 7 ; Timer2 Compare Register  Bytes High Bit 7


.equ	T2CORL0	= 0 ; Timer2 Compare Register  Bytes Low Bit 0
.equ	T2CORL1	= 1 ; Timer2 Compare Register  Bytes Low Bit 1
.equ	T2CORL2	= 2 ; Timer2 Compare Register  Bytes Low Bit 2
.equ	T2CORL3	= 3 ; Timer2 Compare Register  Bytes Low Bit 3
.equ	T2CORL4	= 4 ; Timer2 Compare Register  Bytes Low Bit 4
.equ	T2CORL5	= 5 ; Timer2 Compare Register  Bytes Low Bit 5
.equ	T2CORL6	= 6 ; Timer2 Compare Register  Bytes Low Bit 6
.equ	T2CORL7	= 7 ; Timer2 Compare Register  Bytes Low Bit 7

; T2IFR - Timer2 Interrupt Flag Register
.equ	T2OFF	= 0 ; Timer 2 Overflow Flag Bit
.equ	T2COF	= 1 ; Timer 2 Compare Flag Bit
.equ	T2ICF	= 2 ; Timer2 Input Capture Flag Bit
.equ	T2RXF	= 3 ; Timer2 SSI Receive Flag Bit
.equ	T2TXF	= 4 ; Timer2 SSI Transmit Flag Bit
.equ	T2TCF	= 5 ; Timer2 SSI Transmit Complete Flag Bit

; T2IMR - Timer 2 Interrupt Mask Register
.equ	T2OIM	= 0 ; Timer 2 Overflow Interrupt Mask Bit
.equ	T2CIM	= 1 ; Timer 2 Compare Interrupt Mask Bit
.equ	T2CPIM	= 2 ; Timer 2 Capture Interrupt Mask Bit
.equ	T2RXIM	= 3 ; Timer2 SSI Receive Interrupt Mask Bit
.equ	T2TXIM	= 4 ; Timer2 SSI Transmit Interrupt Mask Bit
.equ	T2TCIM	= 5 ; Timer2 SSI Transmit Complete Interrupt Mask Bit

; T2MRA - Timer 2 Mode Register A
.equ	T2CS0	= 0 ; Timer 2 Clock Select Bits
.equ	T2CS1	= 1 ; Timer 2 Clock Select Bits
.equ	T2CS2	= 2 ; Timer 2 Clock Select Bits
.equ	T2CE0	= 3 ; Timer 2 Capture Edge Select Bits
.equ	T2CE1	= 4 ; Timer 2 Capture Edge Select Bits
.equ	T2CNC	= 5 ; Timer 2 Input Capture Noise Canceler Bit
.equ	T2TP0	= 6 ; Timer 2 Top select Bits
.equ	T2TP1	= 7 ; Timer 2 Top select Bits

; T2MRB - Timer 2 Mode Register B
.equ	T2M0	= 0 ; Timer 2 Mode Bits
.equ	T2M1	= 1 ; Timer 2 Mode Bits
.equ	T2M2	= 2 ; Timer 2 Mode Bits
.equ	T2M3	= 3 ; Timer 2 Mode Bits
.equ	T2TOP	= 4 ; Timer 2 Toggle Output Preset Bit
.equ	T2CPOL	= 6 ; Timer2 Clock Polarity for SSI shift clock
.equ	T2SSIE	= 7 ; Timer 2 SSI Enable Bit


; ***** TIMER_COUNTER_3 *****************

; T3CRA - Timer 3 Control Register A
.equ	T3AC	= 0 ; Timer 3 Alternate Compare register sequence bit
.equ	T3SCE	= 1 ; Timer 3 Software Capture Enable Bit
.equ	T3CR	= 2 ; Timer3 Counter Reset
.equ	T3TS	= 6 ; Timer 3 Toggle with Start Bit
.equ	T3E	= 7 ; Timer 3 Enable Bit

; T3CRB - Timer 3 Control Register B
.equ	T3CTMA	= 0 ; Timer 3 Compare Toggle Mask bit A
.equ	T3SAMA	= 1 ; Timer 3 Single Action Mask bit A
.equ	T3CRMA	= 2 ; Timer 3 Compare Reset Mask bit A
.equ	T3CTMB	= 3 ; Timer 3 Compare Toggle Mask bit B
.equ	T3SAMB	= 4 ; Timer 3 Single Action Mask bit B
.equ	T3CRMB	= 5 ; Timer 3 Compare Reset Mask bit B
.equ	T3CPRM	= 6 ; Timer 3 CaPture Reset Mask bit

; T3MRA - Timer 3 Mode Register A
.equ	T3CS0	= 0 ; Timer 3 Clock Select Bits
.equ	T3CS1	= 1 ; Timer 3 Clock Select Bits
.equ	T3CS2	= 2 ; Timer 3 Clock Select Bits
.equ	T3CE0	= 3 ; Timer 3 Capture Edge select Bits
.equ	T3CE1	= 4 ; Timer 3 Capture Edge select Bits
.equ	T3CNC	= 5 ; Timer 3 input Capture Noise Canceler Bit
.equ	T3ICS0	= 6 ; Timer 3 Input Capture Select Bits
.equ	T3ICS1	= 7 ; Timer 3 Input Capture Select Bits

; T3IFR - Timer3 Interrupt Flag Register
.equ	T3OFF	= 0 ; Timer3 OverFlow Flag bit
.equ	T3COAF	= 1 ; Timer3 Compare A Flag bit
.equ	T3COBF	= 2 ; Timer3 Compare B Flag bit
.equ	T3ICF	= 3 ; Timer3 Input Capture Flag bit

; T3IMR - Timer3 Interrupt Mask Register
.equ	T3OIM	= 0 ; Timer3 Overflow Interrupt Mask bit
.equ	T3CAIM	= 1 ; Timer3 Compare A Interrupt Mask bit
.equ	T3CBIM	= 2 ; Timer3 Compare B Interrupt Mask bit
.equ	T3CPIM	= 3 ; Timer3 Capture Interrupt Mask bit

; T3MRB - Timer 3 Mode Register B
.equ	T3M0	= 0 ; Timer 3 Mode Bits
.equ	T3M1	= 1 ; Timer 3 Mode Bits
.equ	T3M2	= 2 ; Timer 3 Mode Bits
.equ	T3TOP	= 4 ; Timer 3 Toggle Output Preset Bit

; T3ICR - Timer3 Input Capture Register  Bytes
.equ	T3ICRH0	= 0 ; Timer3 Input Capture Register  Bytes High Bit 0
.equ	T3ICRH1	= 1 ; Timer3 Input Capture Register  Bytes High Bit 1
.equ	T3ICRH2	= 2 ; Timer3 Input Capture Register  Bytes High Bit 2
.equ	T3ICRH3	= 3 ; Timer3 Input Capture Register  Bytes High Bit 3
.equ	T3ICRH4	= 4 ; Timer3 Input Capture Register  Bytes High Bit 4
.equ	T3ICRH5	= 5 ; Timer3 Input Capture Register  Bytes High Bit 5
.equ	T3ICRH6	= 6 ; Timer3 Input Capture Register  Bytes High Bit 6
.equ	T3ICRH7	= 7 ; Timer3 Input Capture Register  Bytes High Bit 7


.equ	T3ICRL0	= 0 ; Timer3 Input Capture Register  Bytes Low Bit 0
.equ	T3ICRL1	= 1 ; Timer3 Input Capture Register  Bytes Low Bit 1
.equ	T3ICRL2	= 2 ; Timer3 Input Capture Register  Bytes Low Bit 2
.equ	T3ICRL3	= 3 ; Timer3 Input Capture Register  Bytes Low Bit 3
.equ	T3ICRL4	= 4 ; Timer3 Input Capture Register  Bytes Low Bit 4
.equ	T3ICRL5	= 5 ; Timer3 Input Capture Register  Bytes Low Bit 5
.equ	T3ICRL6	= 6 ; Timer3 Input Capture Register  Bytes Low Bit 6
.equ	T3ICRL7	= 7 ; Timer3 Input Capture Register  Bytes Low Bit 7

; T3CORA - Timer3 COmpare Register A  Bytes
.equ	T3CORAH0	= 0 ; Timer3 COmpare Register A  Bytes High Bit 0
.equ	T3CORAH1	= 1 ; Timer3 COmpare Register A  Bytes High Bit 1
.equ	T3CORAH2	= 2 ; Timer3 COmpare Register A  Bytes High Bit 2
.equ	T3CORAH3	= 3 ; Timer3 COmpare Register A  Bytes High Bit 3
.equ	T3CORAH4	= 4 ; Timer3 COmpare Register A  Bytes High Bit 4
.equ	T3CORAH5	= 5 ; Timer3 COmpare Register A  Bytes High Bit 5
.equ	T3CORAH6	= 6 ; Timer3 COmpare Register A  Bytes High Bit 6
.equ	T3CORAH7	= 7 ; Timer3 COmpare Register A  Bytes High Bit 7


.equ	T3CORAL0	= 0 ; Timer3 COmpare Register A  Bytes Low Bit 0
.equ	T3CORAL1	= 1 ; Timer3 COmpare Register A  Bytes Low Bit 1
.equ	T3CORAL2	= 2 ; Timer3 COmpare Register A  Bytes Low Bit 2
.equ	T3CORAL3	= 3 ; Timer3 COmpare Register A  Bytes Low Bit 3
.equ	T3CORAL4	= 4 ; Timer3 COmpare Register A  Bytes Low Bit 4
.equ	T3CORAL5	= 5 ; Timer3 COmpare Register A  Bytes Low Bit 5
.equ	T3CORAL6	= 6 ; Timer3 COmpare Register A  Bytes Low Bit 6
.equ	T3CORAL7	= 7 ; Timer3 COmpare Register A  Bytes Low Bit 7

; T3CORB - Timer3 COmpare Register B  Bytes
.equ	T3CORBH0	= 0 ; Timer3 COmpare Register B  Bytes High Bit 0
.equ	T3CORBH1	= 1 ; Timer3 COmpare Register B  Bytes High Bit 1
.equ	T3CORBH2	= 2 ; Timer3 COmpare Register B  Bytes High Bit 2
.equ	T3CORBH3	= 3 ; Timer3 COmpare Register B  Bytes High Bit 3
.equ	T3CORBH4	= 4 ; Timer3 COmpare Register B  Bytes High Bit 4
.equ	T3CORBH5	= 5 ; Timer3 COmpare Register B  Bytes High Bit 5
.equ	T3CORBH6	= 6 ; Timer3 COmpare Register B  Bytes High Bit 6
.equ	T3CORBH7	= 7 ; Timer3 COmpare Register B  Bytes High Bit 7


.equ	T3CORBL0	= 0 ; Timer3 COmpare Register B  Bytes Low Bit 0
.equ	T3CORBL1	= 1 ; Timer3 COmpare Register B  Bytes Low Bit 1
.equ	T3CORBL2	= 2 ; Timer3 COmpare Register B  Bytes Low Bit 2
.equ	T3CORBL3	= 3 ; Timer3 COmpare Register B  Bytes Low Bit 3
.equ	T3CORBL4	= 4 ; Timer3 COmpare Register B  Bytes Low Bit 4
.equ	T3CORBL5	= 5 ; Timer3 COmpare Register B  Bytes Low Bit 5
.equ	T3CORBL6	= 6 ; Timer3 COmpare Register B  Bytes Low Bit 6
.equ	T3CORBL7	= 7 ; Timer3 COmpare Register B  Bytes Low Bit 7


; ***** WATCHDOG *****************

; WDTCR - Watchdog Timer Control Register
.equ	WDPS0	= 0 ; Watch Dog Timer Prescaler Select bits
.equ	WDPS1	= 1 ; Watch Dog Timer Prescaler Select bits
.equ	WDPS2	= 2 ; Watch Dog Timer Prescaler Select bits
.equ	WDE	= 3 ; Watch Dog Enable
.equ	WDCE	= 4 ; Watchdog Change Enable


; ***** TIMER_COUNTER_0 *****************

; T0CR - Timer 0 Control Register
.equ	T0PAS0	= 0 ; Timer 0 Prescaler A Select Bits
.equ	T0PAS1	= 1 ; Timer 0 Prescaler A Select Bits
.equ	T0PAS2	= 2 ; Timer 0 Prescaler A Select Bits
.equ	T0IE	= 3 ; Timer 0 Interrupt Enable Bit
.equ	T0PR	= 4 ; Timer 0 Prescaler Reset Bit
.equ	T0PBS0	= 5 ; Timer 0 Prescaler B Select Bits
.equ	T0PBS1	= 6 ; Timer 0 Prescaler B Select Bits
.equ	T0PBS2	= 7 ; Timer 0 Prescaler B Select Bits

; T10IFR - Timer1/0 Interrupt Flag Register


; ***** EEPROM *****************

; EEAR - EEPROM Address Register  Bytes
.equ	EEARH0	= 0 ; EEPROM Address Register  Bytes High Bit 0
.equ	EEARH1	= 1 ; EEPROM Address Register  Bytes High Bit 1
.equ	EEARH2	= 2 ; EEPROM Address Register  Bytes High Bit 2
.equ	EEARH3	= 3 ; EEPROM Address Register  Bytes High Bit 3
.equ	EEARH4	= 4 ; EEPROM Address Register  Bytes High Bit 4
.equ	EEARH5	= 5 ; EEPROM Address Register  Bytes High Bit 5
.equ	EEARH6	= 6 ; EEPROM Address Register  Bytes High Bit 6
.equ	EEARH7	= 7 ; EEPROM Address Register  Bytes High Bit 7


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
.equ	EEWE	= 1 ; EEPROM Write Enable
.equ	EEMWE	= 2 ; EEPROM Master Write Enable
.equ	EERIE	= 3 ; EEPROM Ready Interrupt Enable
.equ	EEPM0	= 4 ; EEPROM Programming Mode Bits
.equ	EEPM1	= 5 ; EEPROM Programming Mode Bits


; ***** PORTC *****************

; PORTC - Port C Data Register
.equ	PORTC0	= 0 ; Port C Data Register Bit 0
.equ	PORTC1	= 1 ; Port C Data Register Bit 1
.equ	PORTC2	= 2 ; Port C Data Register Bit 2

; DDRC - Port C Data Direction Register
.equ	DDRC0	= 0 ; Port C Data Direction Register Bit 0
.equ	DDRC1	= 1 ; Port C Data Direction Register Bit 1
.equ	DDRC2	= 2 ; Port C Data Direction Register Bit 2

; PINC - Port C Input Pins
.equ	PINC0	= 0 ; Port C Input Pins Bit 0
.equ	PINC1	= 1 ; Port C Input Pins Bit 1
.equ	PINC2	= 2 ; Port C Input Pins Bit 2


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
.equ	E2END	= 0x013F
.equ	EEPROMEND	= 0x013F
.equ	EEADRBITS	= 9
.equ	XRAMEND	= 0x0000
#pragma AVRPART MEMORY PROG_FLASH 8192
#pragma AVRPART MEMORY INT_SRAM SIZE 512
#pragma AVRPART MEMORY INT_SRAM START_ADDR 0x100
#pragma AVRPART MEMORY EEPROM 320

; ***** INTERRUPT VECTORS ************************************************
.equ	INT0addr	 = 0x0001 ; External Interrupt Request 0
.equ	INT1addr	 = 0x0002 ; External Interrupt Request 1
.equ	PCINT0addr	 = 0x0003 ; Pin Change Interrupt Request 0
.equ	PCINT1addr	 = 0x0004 ; Pin Change Interrupt Request 1
.equ	PCINT2addr	 = 0x0005 ; Pin Change Interrupt Request 2
.equ	INTVMaddr	 = 0x0006 ; Voltage Monitor Interrupt
.equ	SENINTaddr	 = 0x0007 ; Sensor Interface Interrupt
.equ	INTT0addr	 = 0x0008 ; Timer0 Interval Interrupt
.equ	LFWPaddr	 = 0x0009 ; LF-Receiver Wake-up Interrupt
.equ	T3CAPaddr	 = 0x000A ; Timer/Counter3 Capture Event
.equ	T3COMAaddr	 = 0x000B ; Timer/Counter3 Compare Match A
.equ	T3COMBaddr	 = 0x000C ; Timer/Counter3 Compare Match B
.equ	T3OVFaddr	 = 0x000D ; Timer/Counter3 Overflow
.equ	T2CAPaddr	 = 0x000E ; Timer/Counter2 Capture Event
.equ	T2COMaddr	 = 0x000F ; Timer/Counter2 Compare Match
.equ	T2OVFaddr	 = 0x0010 ; Timer/Counter2 Overflow
.equ	SPISTCaddr	 = 0x0011 ; SPI Serial Transfer Complete
.equ	LFRXBaddr	 = 0x0012 ; LF Receive Buffer Interrupt
.equ	INTT1addr	 = 0x0013 ; Timer1 Interval Interrupt
.equ	T2RXBaddr	 = 0x0014 ; Timer2 SSI Receive Buffer Interrupt
.equ	T2TXBaddr	 = 0x0015 ; Timer2 SSI Transmit Buffer Interrupt
.equ	T2TXCaddr	 = 0x0016 ; Timer2 SSI Transmit Complete Interrupt
.equ	LFREOBaddr	 = 0x0017 ; LF-Receiver End of Burst Interrupt
.equ	EXCMaddr	 = 0x0018 ; External Input Clock break down Interrupt
.equ	EEREADYaddr	 = 0x0019 ; EEPROM Ready Interrupt
.equ	SPM_RDYaddr	 = 0x001A ; Store Program Memory Ready

.equ	INT_VECTOR_SIZE	= 27 ; size in words

#endif /* _A6285DEF_INC_ */

; ***** END OF FILE ******************************************************



