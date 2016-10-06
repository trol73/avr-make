;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ********************

;*************************************************************************
;* A P P L I C A T I O N   N O T E   F O R   T H E   A V R   F A M I L Y
;* 
;* Number            : AVR000
;* File Name         : A5790def.inc
;* Title             : Register/Bit Definitions for the ATA5790
;* Created           : 2014-02-06 16:08
;* Version           : 1.00
;* Support e-mail    : avr@atmel.com
;* Target MCU        : ATA5790
;* 
;* DESCRIPTION
;* When including this file in the assembly program file, all I/O register 
;* names and I/O register bit names appearing in the data book can be used.
;* In addition, the six registers forming the three data pointers X, Y and 
;* Z have been assigned names XL - ZH. Highest RAM address for Internal 
;* SRAM is also defined 
;* 
;*************************************************************************

#ifndef _A5790DEF_INC_
#define _A5790DEF_INC_


#pragma partinc 0

; ***** SPECIFY DEVICE ***************************************************
.device	ATA5790
#pragma AVRPART ADMIN PART_NAME ATA5790
.equ	SIGNATURE_000	= 0x1E
.equ	SIGNATURE_001	= 0x94
.equ	SIGNATURE_002	= 0x61

#pragma AVRPART CORE CORE_VERSION V3

; ***** I/O REGISTER DEFINITIONS *****************************************
; NOTE:
; Definitions marked "MEMORY MAPPED" are extended I/O ports
; and cannot be used with IN/OUT instructions
.equ	CRCSR	= 0xAF ; MEMORY MAPPED
.equ	CRCCR	= 0xAE ; MEMORY MAPPED
.equ	CRCDR	= 0xAD ; MEMORY MAPPED
.equ	TMSR	= 0xAB ; MEMORY MAPPED
.equ	TMTDR	= 0xAA ; MEMORY MAPPED
.equ	TMBDR	= 0xA9 ; MEMORY MAPPED
.equ	TMMDR	= 0xA8 ; MEMORY MAPPED
.equ	RTCDR	= 0x9F ; MEMORY MAPPED
.equ	RTCCR	= 0x9E ; MEMORY MAPPED
.equ	TPIMR	= 0x9C ; MEMORY MAPPED
.equ	LFCC3	= 0x98 ; MEMORY MAPPED
.equ	LFCC2	= 0x97 ; MEMORY MAPPED
.equ	LFCC1	= 0x96 ; MEMORY MAPPED
.equ	LFRSD3	= 0x95 ; MEMORY MAPPED
.equ	LFRSD2	= 0x94 ; MEMORY MAPPED
.equ	LFRSD1	= 0x93 ; MEMORY MAPPED
.equ	LFRDF	= 0x92 ; MEMORY MAPPED
.equ	LFID1M	= 0x91 ; MEMORY MAPPED
.equ	LFID0M	= 0x90 ; MEMORY MAPPED
.equ	LFRD3	= 0x8F ; MEMORY MAPPED
.equ	LFRD2	= 0x8E ; MEMORY MAPPED
.equ	LFRD1	= 0x8D ; MEMORY MAPPED
.equ	LFRD0	= 0x8C ; MEMORY MAPPED
.equ	LFID13	= 0x8B ; MEMORY MAPPED
.equ	LFID12	= 0x8A ; MEMORY MAPPED
.equ	LFID11	= 0x89 ; MEMORY MAPPED
.equ	LFID10	= 0x88 ; MEMORY MAPPED
.equ	LFID03	= 0x87 ; MEMORY MAPPED
.equ	LFID02	= 0x86 ; MEMORY MAPPED
.equ	LFID01	= 0x85 ; MEMORY MAPPED
.equ	LFID00	= 0x84 ; MEMORY MAPPED
.equ	LFCAD	= 0x83 ; MEMORY MAPPED
.equ	LFIMR	= 0x82 ; MEMORY MAPPED
.equ	TMIMR	= 0x7F ; MEMORY MAPPED
.equ	TMMR	= 0x7E ; MEMORY MAPPED
.equ	TMCR	= 0x7D ; MEMORY MAPPED
.equ	T3IMR	= 0x7B ; MEMORY MAPPED
.equ	T3MRB	= 0x7A ; MEMORY MAPPED
.equ	T3MRA	= 0x79 ; MEMORY MAPPED
.equ	T3ICR	= 0x78 ; MEMORY MAPPED
.equ	T3COR	= 0x77 ; MEMORY MAPPED
.equ	T3CNT	= 0x76 ; MEMORY MAPPED
.equ	T2IMR	= 0x74 ; MEMORY MAPPED
.equ	T2MR	= 0x73 ; MEMORY MAPPED
.equ	T2COR	= 0x71 ; MEMORY MAPPED
.equ	T2CNT	= 0x70 ; MEMORY MAPPED
.equ	LDCR	= 0x6D ; MEMORY MAPPED
.equ	PCMSK1	= 0x6B ; MEMORY MAPPED
.equ	PCMSK0	= 0x6A ; MEMORY MAPPED
.equ	EICRA	= 0x69 ; MEMORY MAPPED
.equ	FRCCAL	= 0x66 ; MEMORY MAPPED
.equ	SRCCAL	= 0x65 ; MEMORY MAPPED
.equ	PRR1	= 0x64 ; MEMORY MAPPED
.equ	PRR0	= 0x63 ; MEMORY MAPPED
.equ	WDTCR	= 0x60 ; MEMORY MAPPED
.equ	SREG	= 0x3F ; 
.equ	SPH	= 0x3E ; 
.equ	SPL	= 0x3D ; 
.equ	CLKPR	= 0x3C ; 
.equ	CMIMR	= 0x3B ; 
.equ	T0CR	= 0x39 ; 
.equ	T1CR	= 0x38 ; 
.equ	SPMCSR	= 0x37 ; 
.equ	LFSR	= 0x36 ; 
.equ	MCUCR	= 0x35 ; 
.equ	MCUSR	= 0x34 ; 
.equ	SMCR	= 0x33 ; 
.equ	LFRDB	= 0x32 ; 
.equ	LFCR1	= 0x30 ; 
.equ	LFCR0	= 0x2F ; 
.equ	SPDR	= 0x2E ; 
.equ	SPSR	= 0x2D ; 
.equ	SPCR	= 0x2C ; 
.equ	VMCR	= 0x2B ; 
.equ	AESKR	= 0x2A ; 
.equ	AESDR	= 0x29 ; 
.equ	TMDR	= 0x28 ; 
.equ	EIMSK	= 0x27 ; 
.equ	PCICR	= 0x26 ; 
.equ	EECCR	= 0x24 ; 
.equ	EEPR	= 0x23 ; 
.equ	EEARH	= 0x22 ; 
.equ	EEARL	= 0x21 ; 
.equ	EEDR	= 0x20 ; 
.equ	EECR	= 0x1F ; 
.equ	GPIOR	= 0x1E ; 
.equ	EIFR	= 0x1D ; 
.equ	T3IFR	= 0x1C ; 
.equ	T2IFR	= 0x1B ; 
.equ	T1IFR	= 0x1A ; 
.equ	T0IFR	= 0x19 ; 
.equ	LFFR	= 0x18 ; 
.equ	PCIFR	= 0x17 ; 
.equ	VMSR	= 0x16 ; 
.equ	TMIFR	= 0x15 ; 
.equ	AESSR	= 0x14 ; 
.equ	AESCR	= 0x13 ; 
.equ	T3CR	= 0x12 ; 
.equ	T2CR	= 0x11 ; 
.equ	CMSR	= 0x10 ; 
.equ	CMCR	= 0x0F ; 
.equ	TPFR	= 0x0E ; 
.equ	TPCR	= 0x0D ; 
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
.equ	CLKPCE	= 7 ; Clock Prescaler Change Enable Bit

; CMCR - Clock Management Control Register
.equ	CMM0	= 0 ; Clock Management Mode Bitss
.equ	CMM1	= 1 ; Clock Management Mode Bitss
.equ	SRCD	= 2 ; Slow RC-oscillator Disable Bit
.equ	CO32D	= 3 ; Crystal Oscillator 32 kHz Disable Bit
.equ	CCS	= 4 ; Core Clock Select Bit
.equ	ECINS	= 5 ; External Clock Input Select Bit
.equ	CMONEN	= 6 ; Clock Monitoring Enable Bit
.equ	CMCCE	= 7 ; Clock Management Control Change Enable Bit

; CMSR - Clock Management Status Register
.equ	ECF	= 0 ; External Clock input Flag Bit
.equ	SXF	= 1 ; Slow Crystal Oscillator Flag
.equ	RTCF	= 2 ; Real-Time Clock Flag

; CMIMR - Clock Management Interrupt Mask Register
.equ	ECIE	= 0 ; External Clock input Interrupt Enable Bit
.equ	SXIE	= 1 ; Slow Crystal Oscillator Interrupt Enable Bit
.equ	RTCIE	= 2 ; Real-Time Clock Interrupt Enable Bit

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

; VMCR - Voltage Monitor Control Register
.equ	VMLS0	= 0 ; Voltage Monitor Level Select Bits
.equ	VMLS1	= 1 ; Voltage Monitor Level Select Bits
.equ	VMLS2	= 2 ; Voltage Monitor Level Select Bits
.equ	VMLS3	= 3 ; Voltage Monitor Level Select Bits
.equ	VMIM	= 4 ; Voltage Monitor Interrupt Mask Bit
.equ	VMPS	= 5 ; Voltage Monitor Power supply Select Bit
.equ	BODPD	= 6 ; Brown-Out Detection on Power-Down Bit
.equ	BODLS	= 7 ; Brown-Out Detection Level Select Bit

; VMSR - Voltage Monitor Status Register
.equ	VMF	= 0 ; Voltage Monitor Flag

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

; SPMCSR - Store Program Memory Control Register
.equ	SPMEN	= 0 ; Self Programming Enable
.equ	PGERS	= 1 ; Page Erase
.equ	PGWRT	= 2 ; Page Write
.equ	BLBSET	= 3 ; Boot Lock Bit Set
.equ	RWWSRE	= 4 ; Read-While-Write section read enable
.equ	SIGRD	= 5 ; Signature Row Read Bit
.equ	RWWSB	= 6 ; Read-While-Write Section Busy
.equ	SPMIE	= 7 ; SPM Interrupt Enable

; MCUCR - MCU Control Register
.equ	IVCE	= 0 ; Interrupt Vector Change Enable
.equ	IVSEL	= 1 ; Interrupt Vector Select
.equ	PUD	= 4 ; Pull-up Disable Flag

; MCUSR - MCU Status Register
.equ	PORF	= 0 ; Power-on reset flag
.equ	EXTRF	= 1 ; External Reset Flag
.equ	BORF	= 2 ; Brown-out Reset Flag
.equ	WDRF	= 3 ; Watchdog Reset Flag
.equ	TPRF	= 5 ; TransPonder Reset Flag

; SMCR - Sleep Mode Control Register
.equ	SE	= 0 ; Sleep Enable Bit
.equ	SM0	= 1 ; Sleep Mode Select Bit2
.equ	SM1	= 2 ; Sleep Mode Select Bit2
.equ	SM2	= 3 ; Sleep Mode Select Bit2

; PRR0 - Power Reduction Register
.equ	PRLFR	= 0 ; Power Reduction LF-Receiver Interface
.equ	PRT1	= 1 ; Power Reduction Timers
.equ	PRT2	= 2 ; Power Reduction Timers
.equ	PRT3	= 3 ; Power Reduction Timers
.equ	PRTM	= 4 ; Power Reduction Timer Modulator
.equ	PRCU	= 5 ; Power Reduction Crypto Unit
.equ	PRDS	= 6 ; Power Reduction IR Driver Stage
.equ	PRVM	= 7 ; Power Reduction Voltage Monitor

; PRR1 - Power Reduction Register
.equ	PRCI	= 0 ; Power Reduction Contactless Interface
.equ	PRSPI	= 1 ; Power Reduction Serial Peripheral Interface

; GPIOR - General Purpose I/O Register 0
.equ	GPIOR0	= 0 ; General Purpose I/O Register 0 Bit 0
.equ	GPIOR1	= 1 ; General Purpose I/O Register 0 Bit 1
.equ	GPIOR2	= 2 ; General Purpose I/O Register 0 Bit 2
.equ	GPIOR3	= 3 ; General Purpose I/O Register 0 Bit 3
.equ	GPIOR4	= 4 ; General Purpose I/O Register 0 Bit 4
.equ	GPIOR5	= 5 ; General Purpose I/O Register 0 Bit 5
.equ	GPIOR6	= 6 ; General Purpose I/O Register 0 Bit 6
.equ	GPIOR7	= 7 ; General Purpose I/O Register 0 Bit 7


; ***** AFE *****************
; TPCR - Transponder Control Register
.equ	TPMA	= 0 ; Transponder Mode Acknowledgment Bit
.equ	TPMOD	= 1 ; Transponder Modulator Bit
.equ	TPMS0	= 2 ; Transponder Modulation Select Bits
.equ	TPMS1	= 3 ; Transponder Modulation Select Bits
.equ	TPMD0	= 4 ; Transponder Modulation Damping level select Bit1
.equ	TPMD1	= 5 ; Transponder Modulation Damping level select Bit1
.equ	TPPSD	= 6 ; Transponder Power Switch Disable Bit
.equ	TPD	= 7 ; Transponder Disable Bit

; TPIMR - Transponder Interrupt Mask Register
.equ	TPIM	= 0 ; Transponder Interrupt Mask Bit

; TPFR - Transponder Status & Flag Register
.equ	TPF	= 0 ; Transponder Flag
.equ	TPA	= 1 ; Transponder Active Bit
.equ	TPGAP	= 2 ; Transponder Gap Signal Bit
.equ	TPPSW	= 3 ; Transponder Power Switch Bit


; ***** DDDLFRX *****************
; LFCR0 - Low Frequency Receiver Control Register 0
.equ	LFCE1	= 0 ; LF receiver Channel Enable Bits
.equ	LFCE2	= 1 ; LF receiver Channel Enable Bits
.equ	LFCE3	= 2 ; LF receiver Channel Enable Bits
.equ	LFBRS	= 3 ; LF receiver Baud Rate Select Bit
.equ	LFRBS	= 4 ; LF Receiver Buffer Data Frame Select Bit
.equ	LFMG	= 5 ; LF receiver Max Gain Bit
.equ	LFVC0	= 6 ; LF Receiver Velocity Control Bits
.equ	LFVC1	= 7 ; LF Receiver Velocity Control Bits

; LFCR1 - LF receiver Control Register 1
.equ	LFM0	= 0 ; LF Mode Bits
.equ	LFM1	= 1 ; LF Mode Bits
.equ	LFFM0	= 2 ; LF Function Mode Bits
.equ	LFFM1	= 3 ; LF Function Mode Bits
.equ	LFRMS	= 4 ; LF receiver RSSI Measurement Start Bit
.equ	LFRMSA	= 5 ; LF receiver Rssi Measurement Start Additional Bit
.equ	LFQCE	= 6 ; LF Receiver Quality Check Bit
.equ	LFRE	= 7 ; LF Receiver Enable Bit

; LFCC1 - Low Frequency Channel Capacity select register 1
.equ	LFCC10	= 0 ; Low Frequency Channel Capacity select register 1 Bit 0
.equ	LFCC11	= 1 ; Low Frequency Channel Capacity select register 1 Bit 1
.equ	LFCC12	= 2 ; Low Frequency Channel Capacity select register 1 Bit 2
.equ	LFCC13	= 3 ; Low Frequency Channel Capacity select register 1 Bit 3

; LFCC2 - Low Frequency Channel Capacity select register 2
.equ	LFCC20	= 0 ; Low Frequency Channel Capacity select register 2 Bit 0
.equ	LFCC21	= 1 ; Low Frequency Channel Capacity select register 2 Bit 1
.equ	LFCC22	= 2 ; Low Frequency Channel Capacity select register 2 Bit 2
.equ	LFCC23	= 3 ; Low Frequency Channel Capacity select register 2 Bit 3

; LFCC3 - Low Frequency Channel Capacity select register 3
.equ	LFCC30	= 0 ; Low Frequency Channel Capacity select register 3 Bit 0
.equ	LFCC31	= 1 ; Low Frequency Channel Capacity select register 3 Bit 1
.equ	LFCC32	= 2 ; Low Frequency Channel Capacity select register 3 Bit 2
.equ	LFCC33	= 3 ; Low Frequency Channel Capacity select register 3 Bit 3

; LFRDB - LF Receiver Data Buffer
.equ	LFRDB0	= 0 ; LF Receiver Data Buffer Bit 0
.equ	LFRDB1	= 1 ; LF Receiver Data Buffer Bit 1
.equ	LFRDB2	= 2 ; LF Receiver Data Buffer Bit 2
.equ	LFRDB3	= 3 ; LF Receiver Data Buffer Bit 3
.equ	LFRDB4	= 4 ; LF Receiver Data Buffer Bit 4
.equ	LFRDB5	= 5 ; LF Receiver Data Buffer Bit 5
.equ	LFRDB6	= 6 ; LF Receiver Data Buffer Bit 6
.equ	LFRDB7	= 7 ; LF Receiver Data Buffer Bit 7

; LFRSD1 - LF RSSI Data Register 1
.equ	LFRSD10	= 0 ; LF RSSI Data Register 1 Bit 0
.equ	LFRSD11	= 1 ; LF RSSI Data Register 1 Bit 1
.equ	LFRSD12	= 2 ; LF RSSI Data Register 1 Bit 2
.equ	LFRSD13	= 3 ; LF RSSI Data Register 1 Bit 3
.equ	LFRSD14	= 4 ; LF RSSI Data Register 1 Bit 4
.equ	LFRSD15	= 5 ; LF RSSI Data Register 1 Bit 5
.equ	LFRSD16	= 6 ; LF RSSI Data Register 1 Bit 6
.equ	LFRSD17	= 7 ; LF RSSI Data Register 1 Bit 7

; LFRSD2 - LF RSSI Data Register 2
.equ	LFRSD20	= 0 ; LF RSSI Data Register 2 Bit 0
.equ	LFRSD21	= 1 ; LF RSSI Data Register 2 Bit 1
.equ	LFRSD22	= 2 ; LF RSSI Data Register 2 Bit 2
.equ	LFRSD23	= 3 ; LF RSSI Data Register 2 Bit 3
.equ	LFRSD24	= 4 ; LF RSSI Data Register 2 Bit 4
.equ	LFRSD25	= 5 ; LF RSSI Data Register 2 Bit 5
.equ	LFRSD26	= 6 ; LF RSSI Data Register 2 Bit 6
.equ	LFRSD27	= 7 ; LF RSSI Data Register 2 Bit 7

; LFRSD3 - LF RSSI Data Register 3
.equ	LFRSD30	= 0 ; LF RSSI Data Register 3 Bit 0
.equ	LFRSD31	= 1 ; LF RSSI Data Register 3 Bit 1
.equ	LFRSD32	= 2 ; LF RSSI Data Register 3 Bit 2
.equ	LFRSD33	= 3 ; LF RSSI Data Register 3 Bit 3
.equ	LFRSD34	= 4 ; LF RSSI Data Register 3 Bit 4
.equ	LFRSD35	= 5 ; LF RSSI Data Register 3 Bit 5
.equ	LFRSD36	= 6 ; LF RSSI Data Register 3 Bit 6
.equ	LFRSD37	= 7 ; LF RSSI Data Register 3 Bit 7

; LFCAD - LF Clock Adjustment Data Register
.equ	LFCAD0	= 0 ; LF Clock Adjustment Data Register Bit 0
.equ	LFCAD1	= 1 ; LF Clock Adjustment Data Register Bit 1
.equ	LFCAD2	= 2 ; LF Clock Adjustment Data Register Bit 2
.equ	LFCAD3	= 3 ; LF Clock Adjustment Data Register Bit 3
.equ	LFCAD4	= 4 ; LF Clock Adjustment Data Register Bit 4
.equ	LFCAD5	= 5 ; LF Clock Adjustment Data Register Bit 5
.equ	LFCAD6	= 6 ; LF Clock Adjustment Data Register Bit 6
.equ	LFCAD7	= 7 ; LF Clock Adjustment Data Register Bit 7

; LFID03 - LF ID 0 Data Register Byte 3
.equ	LFID030	= 0 ; LF ID 0 Data Register Byte 3 Bit 0
.equ	LFID031	= 1 ; LF ID 0 Data Register Byte 3 Bit 1
.equ	LFID032	= 2 ; LF ID 0 Data Register Byte 3 Bit 2
.equ	LFID033	= 3 ; LF ID 0 Data Register Byte 3 Bit 3
.equ	LFID034	= 4 ; LF ID 0 Data Register Byte 3 Bit 4
.equ	LFID035	= 5 ; LF ID 0 Data Register Byte 3 Bit 5
.equ	LFID036	= 6 ; LF ID 0 Data Register Byte 3 Bit 6
.equ	LFID037	= 7 ; LF ID 0 Data Register Byte 3 Bit 7

; LFID02 - LF ID 0 Data Register Byte 2
.equ	LFID020	= 0 ; LF ID 0 Data Register Byte 2 Bit 0
.equ	LFID021	= 1 ; LF ID 0 Data Register Byte 2 Bit 1
.equ	LFID022	= 2 ; LF ID 0 Data Register Byte 2 Bit 2
.equ	LFID023	= 3 ; LF ID 0 Data Register Byte 2 Bit 3
.equ	LFID024	= 4 ; LF ID 0 Data Register Byte 2 Bit 4
.equ	LFID025	= 5 ; LF ID 0 Data Register Byte 2 Bit 5
.equ	LFID026	= 6 ; LF ID 0 Data Register Byte 2 Bit 6
.equ	LFID027	= 7 ; LF ID 0 Data Register Byte 2 Bit 7

; LFID01 - LF ID 0 Data Register Byte 1
.equ	LFID010	= 0 ; LF ID 0 Data Register Byte 1 Bit 0
.equ	LFID011	= 1 ; LF ID 0 Data Register Byte 1 Bit 1
.equ	LFID012	= 2 ; LF ID 0 Data Register Byte 1 Bit 2
.equ	LFID013	= 3 ; LF ID 0 Data Register Byte 1 Bit 3
.equ	LFID014	= 4 ; LF ID 0 Data Register Byte 1 Bit 4
.equ	LFID015	= 5 ; LF ID 0 Data Register Byte 1 Bit 5
.equ	LFID016	= 6 ; LF ID 0 Data Register Byte 1 Bit 6
.equ	LFID017	= 7 ; LF ID 0 Data Register Byte 1 Bit 7

; LFID00 - LF ID 0 Data Register Byte 0
.equ	LFID000	= 0 ; LF ID 0 Data Register Byte 0 Bit 0
.equ	LFID001	= 1 ; LF ID 0 Data Register Byte 0 Bit 1
.equ	LFID002	= 2 ; LF ID 0 Data Register Byte 0 Bit 2
.equ	LFID003	= 3 ; LF ID 0 Data Register Byte 0 Bit 3
.equ	LFID004	= 4 ; LF ID 0 Data Register Byte 0 Bit 4
.equ	LFID005	= 5 ; LF ID 0 Data Register Byte 0 Bit 5
.equ	LFID006	= 6 ; LF ID 0 Data Register Byte 0 Bit 6
.equ	LFID007	= 7 ; LF ID 0 Data Register Byte 0 Bit 7

; LFID13 - LF ID 1 Data Register Byte 3
.equ	LFID130	= 0 ; LF ID 1 Data Register Byte 3 Bit 0
.equ	LFID131	= 1 ; LF ID 1 Data Register Byte 3 Bit 1
.equ	LFID132	= 2 ; LF ID 1 Data Register Byte 3 Bit 2
.equ	LFID133	= 3 ; LF ID 1 Data Register Byte 3 Bit 3
.equ	LFID134	= 4 ; LF ID 1 Data Register Byte 3 Bit 4
.equ	LFID135	= 5 ; LF ID 1 Data Register Byte 3 Bit 5
.equ	LFID136	= 6 ; LF ID 1 Data Register Byte 3 Bit 6
.equ	LFID137	= 7 ; LF ID 1 Data Register Byte 3 Bit 7

; LFID12 - LF ID 1 Data Register Byte 2
.equ	LFID120	= 0 ; LF ID 1 Data Register Byte 2 Bit 0
.equ	LFID121	= 1 ; LF ID 1 Data Register Byte 2 Bit 1
.equ	LFID122	= 2 ; LF ID 1 Data Register Byte 2 Bit 2
.equ	LFID123	= 3 ; LF ID 1 Data Register Byte 2 Bit 3
.equ	LFID124	= 4 ; LF ID 1 Data Register Byte 2 Bit 4
.equ	LFID125	= 5 ; LF ID 1 Data Register Byte 2 Bit 5
.equ	LFID126	= 6 ; LF ID 1 Data Register Byte 2 Bit 6
.equ	LFID127	= 7 ; LF ID 1 Data Register Byte 2 Bit 7

; LFID11 - LF ID 1 Data Register Byte 1
.equ	LFID110	= 0 ; LF ID 1 Data Register Byte 1 Bit 0
.equ	LFID111	= 1 ; LF ID 1 Data Register Byte 1 Bit 1
.equ	LFID112	= 2 ; LF ID 1 Data Register Byte 1 Bit 2
.equ	LFID113	= 3 ; LF ID 1 Data Register Byte 1 Bit 3
.equ	LFID114	= 4 ; LF ID 1 Data Register Byte 1 Bit 4
.equ	LFID115	= 5 ; LF ID 1 Data Register Byte 1 Bit 5
.equ	LFID116	= 6 ; LF ID 1 Data Register Byte 1 Bit 6
.equ	LFID117	= 7 ; LF ID 1 Data Register Byte 1 Bit 7

; LFID10 - LF ID 1 Data Register Byte 0
.equ	LFID100	= 0 ; LF ID 1 Data Register Byte 0 Bit 0
.equ	LFID101	= 1 ; LF ID 1 Data Register Byte 0 Bit 1
.equ	LFID102	= 2 ; LF ID 1 Data Register Byte 0 Bit 2
.equ	LFID103	= 3 ; LF ID 1 Data Register Byte 0 Bit 3
.equ	LFID104	= 4 ; LF ID 1 Data Register Byte 0 Bit 4
.equ	LFID105	= 5 ; LF ID 1 Data Register Byte 0 Bit 5
.equ	LFID106	= 6 ; LF ID 1 Data Register Byte 0 Bit 6
.equ	LFID107	= 7 ; LF ID 1 Data Register Byte 0 Bit 7

; LFRD3 - LF Receive Data Register Byte 3
.equ	LFRD30	= 0 ; LF Receive Data Register Byte 3 Bit 0
.equ	LFRD31	= 1 ; LF Receive Data Register Byte 3 Bit 1
.equ	LFRD32	= 2 ; LF Receive Data Register Byte 3 Bit 2
.equ	LFRD33	= 3 ; LF Receive Data Register Byte 3 Bit 3
.equ	LFRD34	= 4 ; LF Receive Data Register Byte 3 Bit 4
.equ	LFRD35	= 5 ; LF Receive Data Register Byte 3 Bit 5
.equ	LFRD36	= 6 ; LF Receive Data Register Byte 3 Bit 6
.equ	LFRD37	= 7 ; LF Receive Data Register Byte 3 Bit 7

; LFRD2 - LF Receive Data Register Byte 2
.equ	LFRD20	= 0 ; LF Receive Data Register Byte 2 Bit 0
.equ	LFRD21	= 1 ; LF Receive Data Register Byte 2 Bit 1
.equ	LFRD22	= 2 ; LF Receive Data Register Byte 2 Bit 2
.equ	LFRD23	= 3 ; LF Receive Data Register Byte 2 Bit 3
.equ	LFRD24	= 4 ; LF Receive Data Register Byte 2 Bit 4
.equ	LFRD25	= 5 ; LF Receive Data Register Byte 2 Bit 5
.equ	LFRD26	= 6 ; LF Receive Data Register Byte 2 Bit 6
.equ	LFRD27	= 7 ; LF Receive Data Register Byte 2 Bit 7

; LFRD1 - LF Receive Data Register Byte 1
.equ	LFRD10	= 0 ; LF Receive Data Register Byte 1 Bit 0
.equ	LFRD11	= 1 ; LF Receive Data Register Byte 1 Bit 1
.equ	LFRD12	= 2 ; LF Receive Data Register Byte 1 Bit 2
.equ	LFRD13	= 3 ; LF Receive Data Register Byte 1 Bit 3
.equ	LFRD14	= 4 ; LF Receive Data Register Byte 1 Bit 4
.equ	LFRD15	= 5 ; LF Receive Data Register Byte 1 Bit 5
.equ	LFRD16	= 6 ; LF Receive Data Register Byte 1 Bit 6
.equ	LFRD17	= 7 ; LF Receive Data Register Byte 1 Bit 7

; LFRD0 - LF Receive Data Register Byte 0
.equ	LFRD00	= 0 ; LF Receive Data Register Byte 0 Bit 0
.equ	LFRD01	= 1 ; LF Receive Data Register Byte 0 Bit 1
.equ	LFRD02	= 2 ; LF Receive Data Register Byte 0 Bit 2
.equ	LFRD03	= 3 ; LF Receive Data Register Byte 0 Bit 3
.equ	LFRD04	= 4 ; LF Receive Data Register Byte 0 Bit 4
.equ	LFRD05	= 5 ; LF Receive Data Register Byte 0 Bit 5
.equ	LFRD06	= 6 ; LF Receive Data Register Byte 0 Bit 6
.equ	LFRD07	= 7 ; LF Receive Data Register Byte 0 Bit 7

; LFID0M - LF Identifier 0 Mask Register
.equ	ID0FS0	= 0 ; Identifier 0 Frame Select Bits
.equ	ID0FS1	= 1 ; Identifier 0 Frame Select Bits
.equ	ID0FS2	= 2 ; Identifier 0 Frame Select Bits
.equ	ID0FS3	= 3 ; Identifier 0 Frame Select Bits
.equ	ID0FS4	= 4 ; Identifier 0 Frame Select Bits
.equ	ID0E	= 7 ; Identifier 0 Enable Bit

; LFID1M - LF Identifier 1 Mask Register
.equ	ID1FS0	= 0 ; Identifier 1 Frame Select Bits
.equ	ID1FS1	= 1 ; Identifier 1 Frame Select Bits
.equ	ID1FS2	= 2 ; Identifier 1 Frame Select Bits
.equ	ID1FS3	= 3 ; Identifier 1 Frame Select Bits
.equ	ID1FS4	= 4 ; Identifier 1 Frame Select Bits
.equ	ID1E	= 7 ; Identifier 1 Enable Bit

; LFRDF - LF Receive Data Frame Register
.equ	RDFS0	= 0 ; Receive Data Frame Select Bits
.equ	RDFS1	= 1 ; Receive Data Frame Select Bits
.equ	RDFS2	= 2 ; Receive Data Frame Select Bits
.equ	RDFS3	= 3 ; Receive Data Frame Select Bits
.equ	RDFS4	= 4 ; Receive Data Frame Select Bits
.equ	RDFE	= 7 ; Receive Data Frame Enable Bit

; LFIMR - LF Interrupt Mask Register
.equ	LFID0IM	= 0 ; LF Identifier 0 Interrupt Mask Bit
.equ	LFID1IM	= 1 ; LF Identifier 1 Interrupt Mask Bit
.equ	LFFEIM	= 2 ; LF Receiver Frame End Interrupt Mask Bit
.equ	LFDBIM	= 3 ; LF Receiver Data Buffer Interrupt Mask Bit
.equ	LFRSIM	= 4 ; LF RSSI Data Interrupt Mask Bit
.equ	LFSDIM	= 5 ; LF Signal Detected Interrupt Mask Bit
.equ	LFMDIM	= 6 ; LF Manchester Decoder Error Interrupt Mask Bit

; LFFR - LF Flag Register
.equ	LFID0F	= 0 ; LF Identifier 0 Flag
.equ	LFID1F	= 1 ; LF Identifier 1 Flag
.equ	LFFEF	= 2 ; LF Frame End Flag
.equ	LFDBF	= 3 ; LF Data Buffer Full Flag
.equ	LFRSF	= 4 ; LF RSSI Data Flag
.equ	LFSDF	= 5 ; LF Signal Detect Flag
.equ	LFMDF	= 6 ; LF Manchester Decoder Error Flag
.equ	LFCAF	= 7 ; LF Clock Adjustment Flag

; LFSR - LF Status Register
.equ	LFES	= 0 ; LF Envelope Signal Bit
.equ	LFSD	= 1 ; LF Signal Data Bit


; ***** IRLED *****************
; LDCR - LED Driver Control Register
.equ	LDE	= 0 ; LED Driver Enable Bit
.equ	LDCS0	= 1 ; LED Driver Current Select Bits
.equ	LDCS1	= 2 ; LED Driver Current Select Bits


; ***** AES *****************
; AESCR - AES Control Register
.equ	AESWK	= 0 ; AES Write Key Bit
.equ	AESWD	= 1 ; AES Write Data Bit
.equ	AESIM	= 2 ; AES Interrupt Mask Bit
.equ	AESD	= 3 ; AES Direction Bit
.equ	AESXOR	= 4 ; AES State XOR load bit
.equ	AESRES	= 5 ; AES Reset Bit
.equ	AESE	= 7 ; AES Enable Bit

; AESSR - AES Status Register
.equ	AESRF	= 0 ; AES Ready Flag Bit
.equ	AESERF	= 7 ; AES Error Flag Bit

; AESDR - AES Data Register
.equ	AESDR0	= 0 ; AES Data Register Bit 0
.equ	AESDR1	= 1 ; AES Data Register Bit 1
.equ	AESDR2	= 2 ; AES Data Register Bit 2
.equ	AESDR3	= 3 ; AES Data Register Bit 3
.equ	AESDR4	= 4 ; AES Data Register Bit 4
.equ	AESDR5	= 5 ; AES Data Register Bit 5
.equ	AESDR6	= 6 ; AES Data Register Bit 6
.equ	AESDR7	= 7 ; AES Data Register Bit 7

; AESKR - AES Key Register
.equ	AESKR0	= 0 ; AES Key Register Bits
.equ	AESKR1	= 1 ; AES Key Register Bits
.equ	AESKR2	= 2 ; AES Key Register Bits
.equ	AESKR3	= 3 ; AES Key Register Bits
.equ	AESKR4	= 4 ; AES Key Register Bits
.equ	AESKR5	= 5 ; AES Key Register Bits
.equ	AESKR6	= 6 ; AES Key Register Bits
.equ	AESKR7	= 7 ; AES Key Register Bits


; ***** MOD *****************
; TMCR - Timer Modulator Control Register
.equ	MI1S0	= 0 ; Modulator Interface 1 Select Bits
.equ	MI1S1	= 1 ; Modulator Interface 1 Select Bits
.equ	MI2S0	= 2 ; Modulator Interface 2 Select Bits
.equ	MI2S1	= 3 ; Modulator Interface 2 Select Bits
.equ	MI4S0	= 4 ; Modulator Interface 4 Select Bits
.equ	MI4S1	= 5 ; Modulator Interface 4 Select Bits
.equ	TMCPOL	= 6 ; Timer Modulator Clock Polarity for SSI shift clock
.equ	TMSSIE	= 7 ; Timer Modulator SSI Enable Bit

; TMMR - Timer Modulator Mode Register
.equ	MOS0	= 0 ; Modulator Output Select Bits
.equ	MOS1	= 1 ; Modulator Output Select Bits
.equ	MSCS0	= 2 ; Modulator Shift Clock Select Bits
.equ	MSCS1	= 3 ; Modulator Shift Clock Select Bits
.equ	MOUTC	= 4 ; Modulator OUT signal Complement Bit
.equ	TMMS0	= 5 ; Timer Modulator Mode Select Bits
.equ	TMMS1	= 6 ; Timer Modulator Mode Select Bits
.equ	TM12S	= 7 ; Timer Modulator 1/2 output Select bit

; TMDR - Timer Modulator Data Register
.equ	TMDR0	= 0 ; Timer Modulator Data Register Bit 0
.equ	TMDR1	= 1 ; Timer Modulator Data Register Bit 1
.equ	TMDR2	= 2 ; Timer Modulator Data Register Bit 2
.equ	TMDR3	= 3 ; Timer Modulator Data Register Bit 3
.equ	TMDR4	= 4 ; Timer Modulator Data Register Bit 4
.equ	TMDR5	= 5 ; Timer Modulator Data Register Bit 5
.equ	TMDR6	= 6 ; Timer Modulator Data Register Bit 6
.equ	TMDR7	= 7 ; Timer Modulator Data Register Bit 7

; TMTDR - Timer Modulator Transmit Data Register
.equ	TMTDR0	= 0 ; Timer Modulator Transmit Data Register Bit 0
.equ	TMTDR1	= 1 ; Timer Modulator Transmit Data Register Bit 1
.equ	TMTDR2	= 2 ; Timer Modulator Transmit Data Register Bit 2
.equ	TMTDR3	= 3 ; Timer Modulator Transmit Data Register Bit 3
.equ	TMTDR4	= 4 ; Timer Modulator Transmit Data Register Bit 4
.equ	TMTDR5	= 5 ; Timer Modulator Transmit Data Register Bit 5
.equ	TMTDR6	= 6 ; Timer Modulator Transmit Data Register Bit 6
.equ	TMTDR7	= 7 ; Timer Modulator Transmit Data Register Bit 7

; TMSR - Timer Modulator Shift Register
.equ	TMSR0	= 0 ; Timer Modulator Shift Register Bit 0
.equ	TMSR1	= 1 ; Timer Modulator Shift Register Bit 1
.equ	TMSR2	= 2 ; Timer Modulator Shift Register Bit 2
.equ	TMSR3	= 3 ; Timer Modulator Shift Register Bit 3
.equ	TMSR4	= 4 ; Timer Modulator Shift Register Bit 4
.equ	TMSR5	= 5 ; Timer Modulator Shift Register Bit 5
.equ	TMSR6	= 6 ; Timer Modulator Shift Register Bit 6
.equ	TMSR7	= 7 ; Timer Modulator Shift Register Bit 7

; TMMDR - Timer Modulator Manchester Data Register
.equ	TMMDR0	= 0 ; Timer Modulator Manchester Data Register Bit 0
.equ	TMMDR1	= 1 ; Timer Modulator Manchester Data Register Bit 1
.equ	TMMDR2	= 2 ; Timer Modulator Manchester Data Register Bit 2
.equ	TMMDR3	= 3 ; Timer Modulator Manchester Data Register Bit 3

; TMBDR - Timer Modulator Biphase Data Register
.equ	TMBDR0	= 0 ; Timer Modulator Biphase Data Register Bit 0
.equ	TMBDR1	= 1 ; Timer Modulator Biphase Data Register Bit 1
.equ	TMBDR2	= 2 ; Timer Modulator Biphase Data Register Bit 2
.equ	TMBDR3	= 3 ; Timer Modulator Biphase Data Register Bit 3

; TMIFR - Timer Modulator Interrupt Flag Register
.equ	TMRXF	= 0 ; Timer Modulator SSI Receive Flag Bit
.equ	TMTXF	= 1 ; Timer Modulator SSI Transmit Flag Bit
.equ	TMTCF	= 2 ; Timer Modulator SSI Transmit Complete Flag Bit
.equ	TMRXS	= 3 ; Timer Modulator SSI Receive Status Bit
.equ	TMTXS	= 4 ; Timer Modulator SSI Transmit Status Bit

; TMIMR - Timer Modulator Interrupt Mask Register
.equ	TMRXIM	= 0 ; Timer Modulator SSI Receive Interrupt Mask Bit
.equ	TMTXIM	= 1 ; Timer Modulator SSI Transmit Interrupt Mask Bit
.equ	TMTCIM	= 2 ; Timer Modulator SSI Transmit Complete Interrupt Mask Bit


; ***** VMON *****************
; VMCR - Voltage Monitor Control Register

; VMSR - Voltage Monitor Status Register


; ***** EXTERNAL_INTERRUPT *****************
; EICRA - External Interrupt Control Register
.equ	ISC00	= 0 ; External Interrupt Sense Control 0 Bit 0
.equ	ISC01	= 1 ; External Interrupt Sense Control 0 Bit 1

; EIMSK - External Interrupt Mask Register
.equ	INT0	= 0 ; External Interrupt Request 0 Enable

; EIFR - External Interrupt Flag Register
.equ	INTF0	= 0 ; External Interrupt Flag 0

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
.equ	PCINT11	= 3 ; Pin Change Enable Masks
.equ	PCINT12	= 4 ; Pin Change Enable Masks
.equ	PCINT13	= 5 ; Pin Change Enable Masks
.equ	PCINT14	= 6 ; Pin Change Enable Masks
.equ	PCINT15	= 7 ; Pin Change Enable Masks

; PCIFR - Pin Change Interrupt Flag Register
.equ	PCIF0	= 0 ; Pin Change Interrupt Flags
.equ	PCIF1	= 1 ; Pin Change Interrupt Flags

; PCICR - Pin Change Interrupt Control Register
.equ	PCIE0	= 0 ; Pin Change Interrupt Enables
.equ	PCIE1	= 1 ; Pin Change Interrupt Enables


; ***** EEPROM *****************
; EEAR - EEPROM Address Register  Bytes
.equ	EEARH0	= 0 ; EEPROM Address Register  Bytes High Bit 8
.equ	EEARH1	= 1 ; EEPROM Address Register  Bytes High Bit 9
.equ	EEARH2	= 2 ; EEPROM Address Register  Bytes High Bit 10
.equ	EEARH3	= 3 ; EEPROM Address Register  Bytes High Bit 11

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

; EECCR - EEPROM Error Correction Code Register
.equ	EEL0	= 0 ; EEPROM Lookup Table Data Bits
.equ	EEL1	= 1 ; EEPROM Lookup Table Data Bits
.equ	EEL2	= 2 ; EEPROM Lookup Table Data Bits
.equ	EEL3	= 3 ; EEPROM Lookup Table Data Bits

; EEPR - EEPROM Protect Register
.equ	EEAP0	= 0 ; EEPROM Access Protect Bits
.equ	EEAP1	= 1 ; EEPROM Access Protect Bits
.equ	EEAP2	= 2 ; EEPROM Access Protect Bits
.equ	EEAP3	= 3 ; EEPROM Access Protect Bits

; EECR - EEPROM Control Register
.equ	EERE	= 0 ; EEPROM Read Enable
.equ	EEWE	= 1 ; EEPROM Write Enable
.equ	EEMWE	= 2 ; EEPROM Master Write Enable
.equ	EERIE	= 3 ; EEPROM Ready Interrupt Enable
.equ	EEPM0	= 4 ; EEPROM Programming Mode Bits
.equ	EEPM1	= 5 ; EEPROM Programming Mode Bits
.equ	EELP	= 6 ; EEPROM Low Power Pump Enable Bit


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


; ***** TIMER_COUNTER_0 *****************
; T0CR - Timer 0 Control Register
.equ	T0PS0	= 0 ; Timer 0 Prescaler Select Bits
.equ	T0PS1	= 1 ; Timer 0 Prescaler Select Bits
.equ	T0PS2	= 2 ; Timer 0 Prescaler Select Bits
.equ	T0IE	= 3 ; Timer 0 Interrupt Enable Bit
.equ	T0PR	= 4 ; Timer 0 Prescaler Reset Bit

; T0IFR - Timer0 Interrupt Flag Register
.equ	T0F	= 0 ; Timer 0 Flag Bit


; ***** TIMER_COUNTER_1 *****************
; T1CR - Timer 1 Control Register
.equ	T1PS0	= 0 ; Timer 1 Prescaler Select Bits
.equ	T1PS1	= 1 ; Timer 1 Prescaler Select Bits
.equ	T1IE	= 2 ; Timer 1 Interrupt Enable Bit
.equ	T1CS0	= 3 ; Timer 1 Clock Select Bits
.equ	T1CS1	= 4 ; Timer 1 Clock Select Bits
.equ	T1E	= 7 ; Timer 1 Enable Bit

; T1IFR - Timer1 Interrupt Flag Register
.equ	T1F	= 0 ; Timer 1 Flag Bit


; ***** TIMER_COUNTER_2 *****************
; T2CR - Timer 2 Control Register
.equ	T2OTM	= 0 ; Timer 2 Overflow Toggle Mask Bit
.equ	T2CTM	= 1 ; Timer 2 Compare Toggle Mask Bit
.equ	T2CRM	= 2 ; Timer2 Compare Reset Mask Bit
.equ	T2GRM	= 3 ; Timer 2 Gap Reset Mask Bit
.equ	T2TOP	= 4 ; Toggle Output Preset Bit
.equ	T2RES	= 5 ; Timer 2 Reset Bit
.equ	T2TS	= 6 ; Timer 2 Toggle with Start Bit
.equ	T2E	= 7 ; Timer 2 Enable Bit

; T2CNT - Timer 2 Counter Register
.equ	T2CNT0	= 0 ; Timer 2 Counter Register Bit 0
.equ	T2CNT1	= 1 ; Timer 2 Counter Register Bit 1
.equ	T2CNT2	= 2 ; Timer 2 Counter Register Bit 2
.equ	T2CNT3	= 3 ; Timer 2 Counter Register Bit 3
.equ	T2CNT4	= 4 ; Timer 2 Counter Register Bit 4
.equ	T2CNT5	= 5 ; Timer 2 Counter Register Bit 5
.equ	T2CNT6	= 6 ; Timer 2 Counter Register Bit 6
.equ	T2CNT7	= 7 ; Timer 2 Counter Register Bit 7

; T2COR - Timer2 Compare Register
.equ	T2COR0	= 0 ; Timer2 Compare Register Bit 0
.equ	T2COR1	= 1 ; Timer2 Compare Register Bit 1
.equ	T2COR2	= 2 ; Timer2 Compare Register Bit 2
.equ	T2COR3	= 3 ; Timer2 Compare Register Bit 3
.equ	T2COR4	= 4 ; Timer2 Compare Register Bit 4
.equ	T2COR5	= 5 ; Timer2 Compare Register Bit 5
.equ	T2COR6	= 6 ; Timer2 Compare Register Bit 6
.equ	T2COR7	= 7 ; Timer2 Compare Register Bit 7

; T2IFR - Timer2 Interrupt Flag Register
.equ	T2OFF	= 0 ; Timer 2 Overflow Flag Bit
.equ	T2COF	= 1 ; Timer 2 Compare Flag Bit

; T2IMR - Timer 2 Interrupt Mask Register
.equ	T2OIM	= 0 ; Timer 2 Overflow Interrupt Mask Bit
.equ	T2CIM	= 1 ; Timer 2 Compare Interrupt Mask Bit

; T2MR - Timer 2 Mode Register
.equ	T2CS0	= 0 ; Timer 2 Clock Select Bits
.equ	T2CS1	= 1 ; Timer 2 Clock Select Bits
.equ	T2CS2	= 2 ; Timer 2 Clock Select Bits
.equ	T2PS0	= 3 ; Timer 2 Prescaler Select Bits
.equ	T2PS1	= 4 ; Timer 2 Prescaler Select Bits
.equ	T2PS2	= 5 ; Timer 2 Prescaler Select Bits
.equ	T2D0	= 6 ; Timer 2 Duty Cycle Bits
.equ	T2D1	= 7 ; Timer 2 Duty Cycle Bits


; ***** TIMER_COUNTER_3 *****************
; T3CR - Timer 3 Control Register
.equ	T3OTM	= 0 ; Timer 3 Overflow Toggle Mask Bit
.equ	T3CTM	= 1 ; Timer 3 Compare Toggle Mask Bit
.equ	T3CRM	= 2 ; Timer3 Compare Reset Mask Bit
.equ	T3CPRM	= 3 ; Timer 3 Capture Reset Mask Bit
.equ	T3TOP	= 4 ; Timer 3 Toggle Output Preset Bit
.equ	T3RES	= 5 ; Timer 3 Reset Bit
.equ	T3CPTM	= 6 ; Timer 3 Capture Toggle Mask Bit
.equ	T3E	= 7 ; Timer 3 Enable Bit

; T3MRA - Timer 3 Mode Register A
.equ	T3CS0	= 0 ; Timer 3 Clock Select Bits
.equ	T3CS1	= 1 ; Timer 3 Clock Select Bits
.equ	T3SCE	= 2 ; Timer 3 Software Capture Enable Bit
.equ	T3CE0	= 3 ; Timer 3 Capture Edge select Bits
.equ	T3CE1	= 4 ; Timer 3 Capture Edge select Bits
.equ	T3CNC	= 5 ; Timer 3 Input Capture Noise Canceler Bit
.equ	T3ICS0	= 6 ; Timer 3 Input Capture Select Bits
.equ	T3ICS1	= 7 ; Timer 3 Input Capture Select Bits

; T3MRB - Timer 3 Mode Register B
.equ	T3PS0	= 0 ; Timer 3 Prescaler Select Bits
.equ	T3PS1	= 1 ; Timer 3 Prescaler Select Bits
.equ	T3PS2	= 2 ; Timer 3 Prescaler Select Bits

; T3IFR - Timer3 Interrupt Flag Register
.equ	T3OFF	= 0 ; Timer3 OverFlow Flag bit
.equ	T3COF	= 1 ; Timer3 Compare Flag bit
.equ	T3ICF	= 2 ; Timer3 Input Capture Flag bit

; T3IMR - Timer3 Interrupt Mask Register
.equ	T3OIM	= 0 ; Timer3 Overflow Interrupt Mask bit
.equ	T3CIM	= 1 ; Timer3 Compare Interrupt Mask bit
.equ	T3CPIM	= 2 ; Timer3 Capture Interrupt Mask bit

; T3ICR - Timer3 Input Capture Register
.equ	T3ICR0	= 0 ; Timer3 Input Capture Register Bit 0
.equ	T3ICR1	= 1 ; Timer3 Input Capture Register Bit 1
.equ	T3ICR2	= 2 ; Timer3 Input Capture Register Bit 2
.equ	T3ICR3	= 3 ; Timer3 Input Capture Register Bit 3
.equ	T3ICR4	= 4 ; Timer3 Input Capture Register Bit 4
.equ	T3ICR5	= 5 ; Timer3 Input Capture Register Bit 5
.equ	T3ICR6	= 6 ; Timer3 Input Capture Register Bit 6
.equ	T3ICR7	= 7 ; Timer3 Input Capture Register Bit 7

; T3COR - Timer3 COmpare Register
.equ	T3COR0	= 0 ; Timer3 COmpare Register Bit 0
.equ	T3COR1	= 1 ; Timer3 COmpare Register Bit 1
.equ	T3COR2	= 2 ; Timer3 COmpare Register Bit 2
.equ	T3COR3	= 3 ; Timer3 COmpare Register Bit 3
.equ	T3COR4	= 4 ; Timer3 COmpare Register Bit 4
.equ	T3COR5	= 5 ; Timer3 COmpare Register Bit 5
.equ	T3COR6	= 6 ; Timer3 COmpare Register Bit 6
.equ	T3COR7	= 7 ; Timer3 COmpare Register Bit 7

; T3CNT - Timer3 Counter Register
.equ	T3CNT0	= 0 ; Timer3 Counter Register Bit 0
.equ	T3CNT1	= 1 ; Timer3 Counter Register Bit 1
.equ	T3CNT2	= 2 ; Timer3 Counter Register Bit 2
.equ	T3CNT3	= 3 ; Timer3 Counter Register Bit 3
.equ	T3CNT4	= 4 ; Timer3 Counter Register Bit 4
.equ	T3CNT5	= 5 ; Timer3 Counter Register Bit 5
.equ	T3CNT6	= 6 ; Timer3 Counter Register Bit 6
.equ	T3CNT7	= 7 ; Timer3 Counter Register Bit 7


; ***** RTC_TIMER *****************
; RTCCR - Real-Time Clock Control Register
.equ	RTCR	= 0 ; Real-Time Counter Reset Bit

; RTCDR - Real Time Clock Data Register
.equ	RTCDR0	= 0 ; Real Time Clock Data Register Bit 0
.equ	RTCDR1	= 1 ; Real Time Clock Data Register Bit 1
.equ	RTCDR2	= 2 ; Real Time Clock Data Register Bit 2
.equ	RTCDR3	= 3 ; Real Time Clock Data Register Bit 3
.equ	RTCDR4	= 4 ; Real Time Clock Data Register Bit 4
.equ	RTCDR5	= 5 ; Real Time Clock Data Register Bit 5
.equ	RTCDR6	= 6 ; Real Time Clock Data Register Bit 6
.equ	RTCDR7	= 7 ; Real Time Clock Data Register Bit 7


; ***** WATCHDOG *****************
; WDTCR - Watchdog Timer Control Register
.equ	WDPS0	= 0 ; Watch Dog Timer Prescaler Select bits
.equ	WDPS1	= 1 ; Watch Dog Timer Prescaler Select bits
.equ	WDPS2	= 2 ; Watch Dog Timer Prescaler Select bits
.equ	WDE	= 3 ; Watch Dog Enable
.equ	WDCE	= 4 ; Watchdog Change Enable


; ***** CRC *****************
; CRCDR - CRC Data Register
.equ	CRCDR0	= 0 ; CRC Data Register Bit 0
.equ	CRCDR1	= 1 ; CRC Data Register Bit 1
.equ	CRCDR2	= 2 ; CRC Data Register Bit 2
.equ	CRCDR3	= 3 ; CRC Data Register Bit 3
.equ	CRCDR4	= 4 ; CRC Data Register Bit 4
.equ	CRCDR5	= 5 ; CRC Data Register Bit 5
.equ	CRCDR6	= 6 ; CRC Data Register Bit 6
.equ	CRCDR7	= 7 ; CRC Data Register Bit 7

; CRCCR - CRC Control Register
.equ	CRCN0	= 0 ; Partial CRC Computation Bits
.equ	CRCN1	= 1 ; Partial CRC Computation Bits
.equ	CRCN2	= 2 ; Partial CRC Computation Bits
.equ	CRCSEL	= 3 ; CRC Mode Select Bit
.equ	REFLI	= 4 ; Reflect Input Data Bit
.equ	REFLO	= 5 ; Reflect Output Data Bit
.equ	CRCRS	= 7 ; CRC Reset Bit

; CRCSR - CRC Status Register
.equ	CRCBF	= 0 ; CRC Busy Flag


; ***** PORTC *****************
; PORTC - Port C Data Register
.equ	PORTC0	= 0 ; Port C Data Register Bit 0
.equ	PORTC1	= 1 ; Port C Data Register Bit 1
.equ	PORTC2	= 2 ; Port C Data Register Bit 2
.equ	PORTC3	= 3 ; Port C Data Register Bit 3
.equ	PORTC4	= 4 ; Port C Data Register Bit 4
.equ	PORTC5	= 5 ; Port C Data Register Bit 5
.equ	PORTC6	= 6 ; Port C Data Register Bit 6
.equ	PORTC7	= 7 ; Port C Data Register Bit 7

; DDRC - Port C Data Direction Register
.equ	DDRC0	= 0 ; Port C Data Direction Register Bit 0
.equ	DDRC1	= 1 ; Port C Data Direction Register Bit 1
.equ	DDRC2	= 2 ; Port C Data Direction Register Bit 2
.equ	DDRC3	= 3 ; Port C Data Direction Register Bit 3
.equ	DDRC4	= 4 ; Port C Data Direction Register Bit 4
.equ	DDRC5	= 5 ; Port C Data Direction Register Bit 5
.equ	DDRC6	= 6 ; Port C Data Direction Register Bit 6
.equ	DDRC7	= 7 ; Port C Data Direction Register Bit 7

; PINC - Port C Input Pins
.equ	PINC0	= 0 ; Port C Input Pins Bit 0
.equ	PINC1	= 1 ; Port C Input Pins Bit 1
.equ	PINC2	= 2 ; Port C Input Pins Bit 2
.equ	PINC3	= 3 ; Port C Input Pins Bit 3
.equ	PINC4	= 4 ; Port C Input Pins Bit 4
.equ	PINC5	= 5 ; Port C Input Pins Bit 5
.equ	PINC6	= 6 ; Port C Input Pins Bit 6
.equ	PINC7	= 7 ; Port C Input Pins Bit 7


; ***** FUSE *****************
; LOW - 
.equ	EXTCLKEN	= 0 ; External Clock enable
.equ	_32OEN	= 1 ; Enables the 32 kHz oscillator.
.equ	Reserved	= 2 ; This fuse bit must be set. 
.equ	EESAVE	= 3 ; Keep EEPROM contents during chip eraser
.equ	WDTON	= 4 ; Enable Watchdog Timer
.equ	SPIEN	= 5 ; SPI Enable
.equ	DWEN	= 6 ; DebugWIRE Enable
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
.equ	FLASHEND	= 0x1FFF ; Note: Word address
.equ	IOEND	= 0x00FF
.equ	SRAM_START	= 0x0100
.equ	SRAM_SIZE	= 512
.equ	RAMEND	= 0x02FF
.equ	E2END	= 0x07FF
.equ	EEPROMEND	= 0x07FF
.equ	EEADRBITS	= 11
.equ	XRAMEND	= 0x0000
#pragma AVRPART MEMORY PROG_FLASH 16384
#pragma AVRPART MEMORY INT_SRAM SIZE 512
#pragma AVRPART MEMORY INT_SRAM START_ADDR 0x100
#pragma AVRPART MEMORY EEPROM 2048

; ***** INTERRUPT VECTORS ************************************************
.equ	TPINTaddr	 = 0x0002 ; Transponder Mode Interrupt
.equ	INT0addr	 = 0x0004 ; External Interrupt Request 0
.equ	PCINT0addr	 = 0x0006 ; Pin Change Interrupt Request 0
.equ	PCINT1addr	 = 0x0008 ; Pin Change Interrupt Request 1
.equ	VMINTaddr	 = 0x000A ; Voltage Monitoring Interrupt
.equ	T0INTaddr	 = 0x000C ; Timer0 Interval Interrupt
.equ	LFID0INTaddr	 = 0x000E ; LF-Receiver Identifier 0 Interrupt
.equ	LFID1INTaddr	 = 0x0010 ; LF-Receiver Identifier 1 Interrupt
.equ	LFFEINTaddr	 = 0x0012 ; LF-Receiver Frame End Interrupt
.equ	LFDBINTaddr	 = 0x0014 ; LF-Receiver Data Buffer full Interrupt
.equ	T3CAPINTaddr	 = 0x0016 ; Timer/Counter3 Capture Event Interrupt
.equ	T3COMINTaddr	 = 0x0018 ; Timer/Counter3 Compare Match Interrupt
.equ	T3OVFINTaddr	 = 0x001A ; Timer/Counter3 Overflow Interrupt
.equ	T2COMINTaddr	 = 0x001C ; Timer/Counter2 Compare Match Interrupt
.equ	T2OVFINTaddr	 = 0x001E ; Timer/Counter2 Overflow Interrupt
.equ	T1INTaddr	 = 0x0020 ; Timer 1 Interval Interrupt
.equ	SPISTCaddr	 = 0x0022 ; SPI Serial Transfer Complete Interrupt
.equ	TMRXBINTaddr	 = 0x0024 ; Timer Modulator SSI Receive Buffer Interrupt
.equ	TMTXBINTaddr	 = 0x0026 ; Timer Modulator SSI Transmit Buffer Interrupt
.equ	TMTXCINTaddr	 = 0x0028 ; Timer Modulator Transmit Complete Interrupt
.equ	AESINTaddr	 = 0x002A ; AES Interrupt
.equ	LFRSSINTaddr	 = 0x002C ; LF-Receiver RSSi measurement Interrupt
.equ	LFSDINTaddr	 = 0x002E ; LF-Receiver Signal Detect Interrupt
.equ	LFMDINTaddr	 = 0x0030 ; LF-Receiver Manchester Decoder error Interrupt 
.equ	EXCMINTaddr	 = 0x0032 ; External Input Clock Monitoring Interrupt
.equ	EXXMINTaddr	 = 0x0034 ; External XTAL Oscillator Break Down Interrupt
.equ	RTCINTaddr	 = 0x0036 ; Real Time Clock Interrupt
.equ	EEREADYaddr	 = 0x0038 ; EEPROM Ready Interrupt
.equ	SPMREADYaddr	 = 0x003A ; Store Program Memory Ready 

.equ	INT_VECTORS_SIZE	= 60 ; size in words

#endif /* _A5790DEF_INC_ */

; ***** END OF FILE ******************************************************



