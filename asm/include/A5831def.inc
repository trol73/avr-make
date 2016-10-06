;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ********************

;*************************************************************************
;* A P P L I C A T I O N   N O T E   F O R   T H E   A V R   F A M I L Y
;* 
;* Number            : AVR000
;* File Name         : A5831def.inc
;* Title             : Register/Bit Definitions for the ATA5831
;* Created           : 2014-02-06 16:08
;* Version           : 1.00
;* Support e-mail    : avr@atmel.com
;* Target MCU        : ATA5831
;* 
;* DESCRIPTION
;* When including this file in the assembly program file, all I/O register 
;* names and I/O register bit names appearing in the data book can be used.
;* In addition, the six registers forming the three data pointers X, Y and 
;* Z have been assigned names XL - ZH. Highest RAM address for Internal 
;* SRAM is also defined 
;* 
;*************************************************************************

#ifndef _A5831DEF_INC_
#define _A5831DEF_INC_


#pragma partinc 0

; ***** SPECIFY DEVICE ***************************************************
.device	ATA5831
#pragma AVRPART ADMIN PART_NAME ATA5831
.equ	SIGNATURE_000	= 0x1E
.equ	SIGNATURE_001	= 0x95
.equ	SIGNATURE_002	= 0x61

#pragma AVRPART CORE CORE_VERSION V3

; ***** I/O REGISTER DEFINITIONS *****************************************
; NOTE:
; Definitions marked "MEMORY MAPPED" are extended I/O ports
; and cannot be used with IN/OUT instructions
.equ	RSCOM	= 0x15F ; MEMORY MAPPED
.equ	RSHDV	= 0x15E ; MEMORY MAPPED
.equ	RSLDV	= 0x15D ; MEMORY MAPPED
.equ	RSIFG	= 0x15C ; MEMORY MAPPED
.equ	EEST	= 0x15B ; MEMORY MAPPED
.equ	PGMST	= 0x15A ; MEMORY MAPPED
.equ	EECR2	= 0x159 ; MEMORY MAPPED
.equ	SFIR	= 0x158 ; MEMORY MAPPED
.equ	SFFR	= 0x157 ; MEMORY MAPPED
.equ	DBGSW	= 0x156 ; MEMORY MAPPED
.equ	DBENC	= 0x155 ; MEMORY MAPPED
.equ	DBENB	= 0x154 ; MEMORY MAPPED
.equ	DBTC	= 0x153 ; MEMORY MAPPED
.equ	DBCR	= 0x152 ; MEMORY MAPPED
.equ	RSSC	= 0x151 ; MEMORY MAPPED
.equ	RSSH	= 0x150 ; MEMORY MAPPED
.equ	RSSL	= 0x14F ; MEMORY MAPPED
.equ	RSSPK	= 0x14E ; MEMORY MAPPED
.equ	RSSAV	= 0x14D ; MEMORY MAPPED
.equ	IDS	= 0x14C ; MEMORY MAPPED
.equ	IDC	= 0x14B ; MEMORY MAPPED
.equ	IDB3	= 0x14A ; MEMORY MAPPED
.equ	IDB2	= 0x149 ; MEMORY MAPPED
.equ	IDB1	= 0x148 ; MEMORY MAPPED
.equ	IDB0	= 0x147 ; MEMORY MAPPED
.equ	CRCDOR	= 0x146 ; MEMORY MAPPED
.equ	CRCCR	= 0x145 ; MEMORY MAPPED
.equ	RXDSA	= 0x144 ; MEMORY MAPPED
.equ	RXCPHA	= 0x143 ; MEMORY MAPPED
.equ	RXCPLA	= 0x142 ; MEMORY MAPPED
.equ	RXCIHA	= 0x141 ; MEMORY MAPPED
.equ	RXCILA	= 0x140 ; MEMORY MAPPED
.equ	RXCSBA	= 0x13F ; MEMORY MAPPED
.equ	RXCRHA	= 0x13E ; MEMORY MAPPED
.equ	RXCRLA	= 0x13D ; MEMORY MAPPED
.equ	RXTLHA	= 0x13C ; MEMORY MAPPED
.equ	RXTLLA	= 0x13B ; MEMORY MAPPED
.equ	RXDSB	= 0x13A ; MEMORY MAPPED
.equ	RXCPHB	= 0x139 ; MEMORY MAPPED
.equ	RXCPLB	= 0x138 ; MEMORY MAPPED
.equ	RXCIHB	= 0x137 ; MEMORY MAPPED
.equ	RXCILB	= 0x136 ; MEMORY MAPPED
.equ	RXCSBB	= 0x135 ; MEMORY MAPPED
.equ	RXCRHB	= 0x134 ; MEMORY MAPPED
.equ	RXCRLB	= 0x133 ; MEMORY MAPPED
.equ	RXTLHB	= 0x132 ; MEMORY MAPPED
.equ	RXTLLB	= 0x131 ; MEMORY MAPPED
.equ	RXBC2	= 0x130 ; MEMORY MAPPED
.equ	RXBC1	= 0x12F ; MEMORY MAPPED
.equ	TMCR1	= 0x12E ; MEMORY MAPPED
.equ	TMCR2	= 0x12D ; MEMORY MAPPED
.equ	TMSR	= 0x12C ; MEMORY MAPPED
.equ	TMSSC	= 0x12B ; MEMORY MAPPED
.equ	TMTLH	= 0x12A ; MEMORY MAPPED
.equ	TMTLL	= 0x129 ; MEMORY MAPPED
.equ	TMSHR	= 0x128 ; MEMORY MAPPED
.equ	TMCPH	= 0x127 ; MEMORY MAPPED
.equ	TMCPL	= 0x126 ; MEMORY MAPPED
.equ	TMCIH	= 0x125 ; MEMORY MAPPED
.equ	TMCIL	= 0x124 ; MEMORY MAPPED
.equ	TMCSB	= 0x123 ; MEMORY MAPPED
.equ	TMCRH	= 0x122 ; MEMORY MAPPED
.equ	TMCRL	= 0x121 ; MEMORY MAPPED
.equ	TMFSM	= 0x120 ; MEMORY MAPPED
.equ	FEBIA	= 0x10E ; MEMORY MAPPED
.equ	FEANT	= 0x10D ; MEMORY MAPPED
.equ	FEALR	= 0x10C ; MEMORY MAPPED
.equ	FEVCO	= 0x10B ; MEMORY MAPPED
.equ	FECR	= 0x10A ; MEMORY MAPPED
.equ	FETN4	= 0x109 ; MEMORY MAPPED
.equ	FEMS	= 0x108 ; MEMORY MAPPED
.equ	FEBT	= 0x107 ; MEMORY MAPPED
.equ	FEVCT	= 0x106 ; MEMORY MAPPED
.equ	FEPAC	= 0x105 ; MEMORY MAPPED
.equ	FEAT	= 0x104 ; MEMORY MAPPED
.equ	FELNA	= 0x103 ; MEMORY MAPPED
.equ	FEEN2	= 0x102 ; MEMORY MAPPED
.equ	FEEN1	= 0x101 ; MEMORY MAPPED
.equ	FESR	= 0x100 ; MEMORY MAPPED
.equ	SSMFCR	= 0xFF ; MEMORY MAPPED
.equ	SOTTOB	= 0xFE ; MEMORY MAPPED
.equ	SOTTOA	= 0xFD ; MEMORY MAPPED
.equ	WCOTOB	= 0xFC ; MEMORY MAPPED
.equ	WCOTOA	= 0xFB ; MEMORY MAPPED
.equ	EOTC3B	= 0xFA ; MEMORY MAPPED
.equ	EOTC2B	= 0xF9 ; MEMORY MAPPED
.equ	EOTC1B	= 0xF8 ; MEMORY MAPPED
.equ	EOTC3A	= 0xF7 ; MEMORY MAPPED
.equ	EOTC2A	= 0xF6 ; MEMORY MAPPED
.equ	EOTC1A	= 0xF5 ; MEMORY MAPPED
.equ	SOTC2B	= 0xF4 ; MEMORY MAPPED
.equ	SOTC1B	= 0xF3 ; MEMORY MAPPED
.equ	SOTC2A	= 0xF2 ; MEMORY MAPPED
.equ	SOTC1A	= 0xF1 ; MEMORY MAPPED
.equ	GTCR	= 0xF0 ; MEMORY MAPPED
.equ	MSMCR4	= 0xEF ; MEMORY MAPPED
.equ	MSMCR3	= 0xEE ; MEMORY MAPPED
.equ	MSMCR2	= 0xED ; MEMORY MAPPED
.equ	MSMCR1	= 0xEC ; MEMORY MAPPED
.equ	SSMXSR	= 0xEB ; MEMORY MAPPED
.equ	SSMSTR	= 0xEA ; MEMORY MAPPED
.equ	MSMSTR	= 0xE9 ; MEMORY MAPPED
.equ	SSMIMR	= 0xE8 ; MEMORY MAPPED
.equ	SSMIFR	= 0xE7 ; MEMORY MAPPED
.equ	SSMSR	= 0xE6 ; MEMORY MAPPED
.equ	SSMRR	= 0xE5 ; MEMORY MAPPED
.equ	SSMFBR	= 0xE4 ; MEMORY MAPPED
.equ	SSMRCR	= 0xE3 ; MEMORY MAPPED
.equ	SSMCR	= 0xE2 ; MEMORY MAPPED
.equ	SFC	= 0xE1 ; MEMORY MAPPED
.equ	SFI	= 0xE0 ; MEMORY MAPPED
.equ	SFD	= 0xDF ; MEMORY MAPPED
.equ	SFRP	= 0xDE ; MEMORY MAPPED
.equ	SFWP	= 0xDD ; MEMORY MAPPED
.equ	SFL	= 0xDC ; MEMORY MAPPED
.equ	SFS	= 0xDB ; MEMORY MAPPED
.equ	DFC	= 0xDA ; MEMORY MAPPED
.equ	DFI	= 0xD9 ; MEMORY MAPPED
.equ	DFD	= 0xD8 ; MEMORY MAPPED
.equ	DFRP	= 0xD7 ; MEMORY MAPPED
.equ	DFWP	= 0xD6 ; MEMORY MAPPED
.equ	DFL	= 0xD5 ; MEMORY MAPPED
.equ	DFTLH	= 0xD4 ; MEMORY MAPPED
.equ	DFTLL	= 0xD3 ; MEMORY MAPPED
.equ	DFS	= 0xD2 ; MEMORY MAPPED
.equ	VMCAL	= 0xD1 ; MEMORY MAPPED
.equ	CALRDY	= 0xD0 ; MEMORY MAPPED
.equ	SUPCA4	= 0xCF ; MEMORY MAPPED
.equ	SUPCA3	= 0xCE ; MEMORY MAPPED
.equ	SUPCA2	= 0xCD ; MEMORY MAPPED
.equ	SUPCA1	= 0xCC ; MEMORY MAPPED
.equ	SUPCR	= 0xCB ; MEMORY MAPPED
.equ	SUPFR	= 0xCA ; MEMORY MAPPED
.equ	CMOCR	= 0xC9 ; MEMORY MAPPED
.equ	CMSR	= 0xC8 ; MEMORY MAPPED
.equ	FRCCAL	= 0xC7 ; MEMORY MAPPED
.equ	SRCCAL	= 0xC6 ; MEMORY MAPPED
.equ	XFUSE	= 0xC5 ; MEMORY MAPPED
.equ	CLKOCR	= 0xC4 ; MEMORY MAPPED
.equ	CLKOD	= 0xC3 ; MEMORY MAPPED
.equ	WUP4A	= 0xC2 ; MEMORY MAPPED
.equ	WUP3A	= 0xC1 ; MEMORY MAPPED
.equ	WUP2A	= 0xC0 ; MEMORY MAPPED
.equ	WUP1A	= 0xBF ; MEMORY MAPPED
.equ	SFID4A	= 0xBE ; MEMORY MAPPED
.equ	SFID3A	= 0xBD ; MEMORY MAPPED
.equ	SFID2A	= 0xBC ; MEMORY MAPPED
.equ	SFID1A	= 0xBB ; MEMORY MAPPED
.equ	WUPLA	= 0xBA ; MEMORY MAPPED
.equ	WUPTA	= 0xB9 ; MEMORY MAPPED
.equ	SFIDLA	= 0xB8 ; MEMORY MAPPED
.equ	SFIDCA	= 0xB7 ; MEMORY MAPPED
.equ	WUP4B	= 0xB6 ; MEMORY MAPPED
.equ	WUP3B	= 0xB5 ; MEMORY MAPPED
.equ	WUP2B	= 0xB4 ; MEMORY MAPPED
.equ	WUP1B	= 0xB3 ; MEMORY MAPPED
.equ	SFID4B	= 0xB2 ; MEMORY MAPPED
.equ	SFID3B	= 0xB1 ; MEMORY MAPPED
.equ	SFID2B	= 0xB0 ; MEMORY MAPPED
.equ	SFID1B	= 0xAF ; MEMORY MAPPED
.equ	WUPLB	= 0xAE ; MEMORY MAPPED
.equ	WUPTB	= 0xAD ; MEMORY MAPPED
.equ	SFIDLB	= 0xAC ; MEMORY MAPPED
.equ	SFIDCB	= 0xAB ; MEMORY MAPPED
.equ	CHDN	= 0xAA ; MEMORY MAPPED
.equ	CHCR	= 0xA9 ; MEMORY MAPPED
.equ	DMDRA	= 0xA8 ; MEMORY MAPPED
.equ	DMDRB	= 0xA7 ; MEMORY MAPPED
.equ	DMCRA	= 0xA6 ; MEMORY MAPPED
.equ	DMCRB	= 0xA5 ; MEMORY MAPPED
.equ	DMCDA	= 0xA4 ; MEMORY MAPPED
.equ	DMCDB	= 0xA3 ; MEMORY MAPPED
.equ	DMMA	= 0xA2 ; MEMORY MAPPED
.equ	DMMB	= 0xA1 ; MEMORY MAPPED
.equ	RXFOA	= 0xA0 ; MEMORY MAPPED
.equ	RXFOB	= 0x9F ; MEMORY MAPPED
.equ	SYCA	= 0x9E ; MEMORY MAPPED
.equ	SYCB	= 0x9D ; MEMORY MAPPED
.equ	TEMPH	= 0x9C ; MEMORY MAPPED
.equ	TEMPL	= 0x9B ; MEMORY MAPPED
.equ	RDOCR	= 0x99 ; MEMORY MAPPED
.equ	RDSIMR	= 0x98 ; MEMORY MAPPED
.equ	TESRA	= 0x96 ; MEMORY MAPPED
.equ	TESRB	= 0x95 ; MEMORY MAPPED
.equ	SOTCA	= 0x94 ; MEMORY MAPPED
.equ	SOTCB	= 0x93 ; MEMORY MAPPED
.equ	SOTSA	= 0x92 ; MEMORY MAPPED
.equ	SOTSB	= 0x91 ; MEMORY MAPPED
.equ	GTCCR	= 0x90 ; MEMORY MAPPED
.equ	T5IMR	= 0x8F ; MEMORY MAPPED
.equ	T5CNTH	= 0x8E ; MEMORY MAPPED
.equ	T5CNTL	= 0x8D ; MEMORY MAPPED
.equ	T5CCR	= 0x8C ; MEMORY MAPPED
.equ	T5OCRH	= 0x8B ; MEMORY MAPPED
.equ	T5OCRL	= 0x8A ; MEMORY MAPPED
.equ	T4IMR	= 0x88 ; MEMORY MAPPED
.equ	T4MRB	= 0x87 ; MEMORY MAPPED
.equ	T4MRA	= 0x86 ; MEMORY MAPPED
.equ	T4ICRH	= 0x85 ; MEMORY MAPPED
.equ	T4ICRL	= 0x84 ; MEMORY MAPPED
.equ	T4CORH	= 0x83 ; MEMORY MAPPED
.equ	T4CORL	= 0x82 ; MEMORY MAPPED
.equ	T4CNTH	= 0x81 ; MEMORY MAPPED
.equ	T4CNTL	= 0x80 ; MEMORY MAPPED
.equ	T3IMR	= 0x7F ; MEMORY MAPPED
.equ	T3MRB	= 0x7E ; MEMORY MAPPED
.equ	T3MRA	= 0x7D ; MEMORY MAPPED
.equ	T3ICRH	= 0x7C ; MEMORY MAPPED
.equ	T3ICRL	= 0x7B ; MEMORY MAPPED
.equ	T3CORH	= 0x7A ; MEMORY MAPPED
.equ	T3CORL	= 0x79 ; MEMORY MAPPED
.equ	T3CNTH	= 0x78 ; MEMORY MAPPED
.equ	T3CNTL	= 0x77 ; MEMORY MAPPED
.equ	T2IMR	= 0x76 ; MEMORY MAPPED
.equ	T2MR	= 0x75 ; MEMORY MAPPED
.equ	T2COR	= 0x74 ; MEMORY MAPPED
.equ	T2CNT	= 0x73 ; MEMORY MAPPED
.equ	T1IMR	= 0x72 ; MEMORY MAPPED
.equ	T1MR	= 0x71 ; MEMORY MAPPED
.equ	T1COR	= 0x70 ; MEMORY MAPPED
.equ	T1CNT	= 0x6F ; MEMORY MAPPED
.equ	WDTCR	= 0x6E ; MEMORY MAPPED
.equ	PCMSK1	= 0x6D ; MEMORY MAPPED
.equ	PCMSK0	= 0x6C ; MEMORY MAPPED
.equ	EICRA	= 0x6B ; MEMORY MAPPED
.equ	FFREQ2H	= 0x69 ; MEMORY MAPPED
.equ	FFREQ2M	= 0x68 ; MEMORY MAPPED
.equ	FFREQ2L	= 0x67 ; MEMORY MAPPED
.equ	FFREQ1H	= 0x66 ; MEMORY MAPPED
.equ	FFREQ1M	= 0x65 ; MEMORY MAPPED
.equ	FFREQ1L	= 0x64 ; MEMORY MAPPED
.equ	GACDIVH	= 0x63 ; MEMORY MAPPED
.equ	GACDIVL	= 0x62 ; MEMORY MAPPED
.equ	FSFCR	= 0x61 ; MEMORY MAPPED
.equ	FSEN	= 0x60 ; MEMORY MAPPED
.equ	SREG	= 0x3F ; 
.equ	SPH	= 0x3E ; 
.equ	SPL	= 0x3D ; 
.equ	SPMCSR	= 0x3C ; 
.equ	CLPR	= 0x3B ; 
.equ	CMIMR	= 0x3A ; 
.equ	CMCR	= 0x39 ; 
.equ	SMCR	= 0x38 ; 
.equ	EOTCB	= 0x37 ; 
.equ	EOTSB	= 0x36 ; 
.equ	EOTCA	= 0x35 ; 
.equ	EOTSA	= 0x34 ; 
.equ	RDCR	= 0x33 ; 
.equ	DWDR	= 0x31 ; 
.equ	T0IFR	= 0x2F ; 
.equ	SPDR	= 0x2E ; 
.equ	SPSR	= 0x2D ; 
.equ	SPCR	= 0x2C ; 
.equ	MCUSR	= 0x2B ; 
.equ	VMCSR	= 0x2A ; 
.equ	CRCDIR	= 0x29 ; 
.equ	EIFR	= 0x28 ; 
.equ	EIMSK	= 0x27 ; 
.equ	PCICR	= 0x26 ; 
.equ	GPIOR2	= 0x25 ; 
.equ	GPIOR1	= 0x24 ; 
.equ	EEPR	= 0x23 ; 
.equ	EEARH	= 0x22 ; 
.equ	EEARL	= 0x21 ; 
.equ	EEDR	= 0x20 ; 
.equ	EECR	= 0x1F ; 
.equ	GPIOR6	= 0x1E ; 
.equ	GPIOR5	= 0x1D ; 
.equ	GPIOR4	= 0x1C ; 
.equ	GPIOR3	= 0x1B ; 
.equ	GPIOR0	= 0x1A ; 
.equ	T5IFR	= 0x19 ; 
.equ	T4IFR	= 0x18 ; 
.equ	T3IFR	= 0x17 ; 
.equ	T2IFR	= 0x16 ; 
.equ	T1IFR	= 0x15 ; 
.equ	T4CR	= 0x14 ; 
.equ	T3CR	= 0x13 ; 
.equ	T2CR	= 0x12 ; 
.equ	T1CR	= 0x11 ; 
.equ	T0CR	= 0x10 ; 
.equ	PCIFR	= 0x0F ; 
.equ	MCUCR	= 0x0E ; 
.equ	RDSIFR	= 0x0D ; 
.equ	FSCR	= 0x0B ; 
.equ	PORTC	= 0x0A ; 
.equ	DDRC	= 0x09 ; 
.equ	PINC	= 0x08 ; 
.equ	PORTB	= 0x07 ; 
.equ	DDRB	= 0x06 ; 
.equ	PINB	= 0x05 ; 
.equ	RDPR	= 0x04 ; 
.equ	PRR2	= 0x03 ; 
.equ	PRR1	= 0x02 ; 
.equ	PRR0	= 0x01 ; 


; ***** BIT DEFINITIONS **************************************************

; ***** CHFLT *****************
; CHCR - Channel Filter Configuration Register
.equ	BWM0	= 0 ; Bandwidth Mode
.equ	BWM1	= 1 ; Bandwidth Mode
.equ	BWM2	= 2 ; Bandwidth Mode
.equ	BWM3	= 3 ; Bandwidth Mode

; CHDN - Channel Filter Down Sampling Register
.equ	BBDN0	= 0 ; Baseband Filter Down Sampling Ratio
.equ	BBDN1	= 1 ; Baseband Filter Down Sampling Ratio
.equ	BBDN2	= 2 ; Baseband Filter Down Sampling Ratio
.equ	BBDN3	= 3 ; Baseband Filter Down Sampling Ratio
.equ	BBDN4	= 4 ; Baseband Filter Down Sampling Ratio
.equ	ADCDN	= 5 ; ADC Down Sampling Configuration


; ***** CLK *****************
; CLKOCR - Clock output control Register
.equ	CLKOS0	= 0 ; Clock output source
.equ	CLKOS1	= 1 ; Clock output source
.equ	CLKOEN	= 2 ; Clock output driver enable

; CLKOD - Clock output divider settings Register
.equ	CLKOD0	= 0 ; Clock output divider settings Register Bit 0
.equ	CLKOD1	= 1 ; Clock output divider settings Register Bit 1
.equ	CLKOD2	= 2 ; Clock output divider settings Register Bit 2
.equ	CLKOD3	= 3 ; Clock output divider settings Register Bit 3
.equ	CLKOD4	= 4 ; Clock output divider settings Register Bit 4
.equ	CLKOD5	= 5 ; Clock output divider settings Register Bit 5
.equ	CLKOD6	= 6 ; Clock output divider settings Register Bit 6
.equ	CLKOD7	= 7 ; Clock output divider settings Register Bit 7

; CMOCR - Clock management override control register
.equ	FRCAO	= 0 ; FRC Always On
.equ	SRCAO	= 1 ; SRC Always On
.equ	FRCACT	= 2 ; FRC Active
.equ	SRCACT	= 3 ; SRC Active

; CMSR - Clock management status Register
.equ	ECF	= 0 ; External clock fail

; FRCCAL - Fast RC oscillator calibration Register
.equ	FRCCAL0	= 0 ; Fast RC oscillator calibration
.equ	FRCCAL1	= 1 ; Fast RC oscillator calibration
.equ	FRCCAL2	= 2 ; Fast RC oscillator calibration
.equ	FRCCAL3	= 3 ; Fast RC oscillator calibration
.equ	FRCCAL4	= 4 ; Fast RC oscillator calibration
.equ	FRCTC	= 5 ; Fast RC oscillator temperature compensation

; PRR0 - Power Reduction Register 0
.equ	PRSPI	= 0 ; Power Reduction Serial Peripheral Interface
.equ	PRRXDC	= 1 ; Power Reduction Receive DSP Control
.equ	PRTXDC	= 2 ; Power Reduction Transmit DSP Control
.equ	PRCRC	= 3 ; Power Reduction CRC
.equ	PRVM	= 4 ; Power Reduction Voltage Monitor
.equ	PRCO	= 5 ; Power Reduction Clock Output

; PRR1 - Power Reduction Register 1
.equ	PRT1	= 0 ; Power Reduction Timer 1
.equ	PRT2	= 1 ; Power Reduction Timer 2
.equ	PRT3	= 2 ; Power Reduction Timer 3
.equ	PRT4	= 3 ; Power Reduction Timer 4
.equ	PRT5	= 4 ; Power Reduction Timer 5

; PRR2 - Power Reduction Register 2
.equ	PRXB	= 0 ; Power Reduction Rx Buffer B
.equ	PRXA	= 1 ; Power Reduction Rx Buffer A
.equ	PRSF	= 2 ; Power Reduction Preamble/RSSI FIFO
.equ	PRDF	= 3 ; Power Reduction Data FIFO
.equ	PRIDS	= 4 ; Power Reduction ID Scan
.equ	PRRS	= 5 ; Power Reduction RSSI Buffer
.equ	PRTM	= 6 ; Power Reduction Tx Modulator
.equ	PRSSM	= 7 ; Power Reduction Sequencer State Machine

; RDPR - Rx DSP power reduction register
.equ	PRPTB	= 0 ; Power reduction register for the demodulator and receiving path A
.equ	PRPTA	= 1 ; Power reduction register for the demodulator and receiving path B
.equ	PRFLT	= 2 ; Power reduction register for the digital channel filter
.equ	PRTMP	= 3 ; Power reduction register for temperature measurement
.equ	APRPTB	= 4 ; Automatic Power Reduction of Path B
.equ	APRPTA	= 5 ; Automatic Power Reduction of Path A
.equ	ARDPRF	= 6 ; Automatic Rx DSP Power Reduction Flag
.equ	RDPRF	= 7 ; Rx DSP power reduction register(RDPR) busy flag

; SRCCAL - Slow RC oscillator calibration Register
.equ	SRCCAL0	= 0 ; Slow RC oscillator calibration
.equ	SRCCAL1	= 1 ; Slow RC oscillator calibration
.equ	SRCCAL2	= 2 ; Slow RC oscillator calibration
.equ	SRCCAL3	= 3 ; Slow RC oscillator calibration
.equ	SRCCAL4	= 4 ; Slow RC oscillator calibration
.equ	SRCCAL5	= 5 ; Slow RC oscillator calibration
.equ	SRCTC0	= 6 ; Slow RC oscillator temperature compensation
.equ	SRCTC1	= 7 ; Slow RC oscillator temperature compensation

; XFUSE - 
.equ	XFUSE0	= 0 ;  Bit 0
.equ	XFUSE1	= 1 ;  Bit 1
.equ	XFUSE2	= 2 ;  Bit 2
.equ	XFUSE3	= 3 ;  Bit 3
.equ	XFUSE4	= 4 ;  Bit 4
.equ	XFUSE5	= 5 ;  Bit 5
.equ	XFUSE6	= 6 ;  Bit 6
.equ	XFUSE7	= 7 ;  Bit 7


; ***** CPU *****************
; CLPR - Clock Prescaler Register
.equ	CLKPS0	= 0 ; Clock Prescaler Select
.equ	CLKPS1	= 1 ; Clock Prescaler Select
.equ	CLKPS2	= 2 ; Clock Prescaler Select
.equ	CLTPS0	= 3 ; Timer Clock Prescaler Select
.equ	CLTPS1	= 4 ; Timer Clock Prescaler Select
.equ	CLTPS2	= 5 ; Timer Clock Prescaler Select
.equ	CLPCE	= 7 ; Clock Prescaler Change Enable

; CMCR - Clock Management Control Register
.equ	CMM0	= 0 ; Clock Management Mode
.equ	CMM1	= 1 ; Clock Management Mode
.equ	CMM2	= 2 ; Clock Management Mode
.equ	CCS	= 3 ; Core Clock Select
.equ	SRCD	= 4 ; Slow RC oscillator disable
.equ	CMONEN	= 6 ; Clock monitor enable
.equ	CMCCE	= 7 ; Clock management control change enable

; CMIMR - Clock Interrupt Mask Register
.equ	ECIE	= 0 ; External clock interrupt enable

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

; SPMCSR - Store Program Memory Control and Status Register
.equ	SELFPRGEN	= 0 ; Self Programming Enable
.equ	PGERS	= 1 ; Page Erase
.equ	PGWRT	= 2 ; Page Write
.equ	BLBSET	= 3 ; Boot Lock Bit Set
.equ	SPMIE	= 7 ; SPM Interrupt Enable

; MCUCR - MCU Control Register
.equ	IVCE	= 0 ; Interrupt Vector Change Enable
.equ	IVSEL	= 1 ; Interrupt Vector Select
.equ	SPIIO	= 2 ; SPI Interrupt Only
.equ	ENPS	= 3 ; Enable Port Settings
.equ	PUD	= 4 ; Pull-up Resistors Disable
.equ	PB4HS	= 5 ; Port B4 High Side Driver enable
.equ	PB7LS	= 6 ; Port B7 Low Side Driver enable
.equ	PB7HS	= 7 ; Port B7 High Side Driver enable

; MCUSR - MCU Status Register
.equ	PORF	= 0 ; Power-on Reset flag
.equ	EXTRF	= 1 ; External Reset Flag
.equ	WDRF	= 3 ; Watchdog Reset Flag

; SMCR - Sleep mode control Register
.equ	SE	= 0 ; Sleep Enable
.equ	SM0	= 1 ; Sleep Mode Select
.equ	SM1	= 2 ; Sleep Mode Select
.equ	SM2	= 3 ; Sleep Mode Select

; DWDR - debugWire communication Register
.equ	DWDR0	= 0 ; debugWire communication Register Bit 0
.equ	DWDR1	= 1 ; debugWire communication Register Bit 1
.equ	DWDR2	= 2 ; debugWire communication Register Bit 2
.equ	DWDR3	= 3 ; debugWire communication Register Bit 3
.equ	DWDR4	= 4 ; debugWire communication Register Bit 4
.equ	DWDR5	= 5 ; debugWire communication Register Bit 5
.equ	DWDR6	= 6 ; debugWire communication Register Bit 6
.equ	DWDR7	= 7 ; debugWire communication Register Bit 7


; ***** CRC *****************
; CRCCR - CRC Control Register
.equ	CRCRS	= 0 ; CRC Data Register Reset
.equ	REFLI	= 1 ; Reflect Data Input Byte
.equ	REFLO	= 2 ; Reflect Data Output Byte

; CRCDIR - CRC Data Input Register
.equ	CRCDIR0	= 0 ; CRC Data Input Register Bit 0
.equ	CRCDIR1	= 1 ; CRC Data Input Register Bit 1
.equ	CRCDIR2	= 2 ; CRC Data Input Register Bit 2
.equ	CRCDIR3	= 3 ; CRC Data Input Register Bit 3
.equ	CRCDIR4	= 4 ; CRC Data Input Register Bit 4
.equ	CRCDIR5	= 5 ; CRC Data Input Register Bit 5
.equ	CRCDIR6	= 6 ; CRC Data Input Register Bit 6
.equ	CRCDIR7	= 7 ; CRC Data Input Register Bit 7

; CRCDOR - CRC Data Output Register
.equ	CRCDOR0	= 0 ; CRC Data Output Register Bit 0
.equ	CRCDOR1	= 1 ; CRC Data Output Register Bit 1
.equ	CRCDOR2	= 2 ; CRC Data Output Register Bit 2
.equ	CRCDOR3	= 3 ; CRC Data Output Register Bit 3
.equ	CRCDOR4	= 4 ; CRC Data Output Register Bit 4
.equ	CRCDOR5	= 5 ; CRC Data Output Register Bit 5
.equ	CRCDOR6	= 6 ; CRC Data Output Register Bit 6
.equ	CRCDOR7	= 7 ; CRC Data Output Register Bit 7


; ***** DEBOUNCE *****************
; DBCR - DeBounce Control Register
.equ	DBMD	= 0 ; Debounce Mode
.equ	DBCS	= 1 ; Debounce Clock Select
.equ	DBTMS	= 2 ; Debounce Timer Mask Select
.equ	DBHA	= 3 ; Debounce Handshake Active

; DBENB - DeBounce Enable Port B
.equ	DBENB0	= 0 ; DeBounce Enable Port B Bit 0
.equ	DBENB1	= 1 ; DeBounce Enable Port B Bit 1
.equ	DBENB2	= 2 ; DeBounce Enable Port B Bit 2
.equ	DBENB3	= 3 ; DeBounce Enable Port B Bit 3
.equ	DBENB4	= 4 ; DeBounce Enable Port B Bit 4
.equ	DBENB5	= 5 ; DeBounce Enable Port B Bit 5
.equ	DBENB6	= 6 ; DeBounce Enable Port B Bit 6
.equ	DBENB7	= 7 ; DeBounce Enable Port B Bit 7

; DBENC - DeBounce Enable Port C
.equ	DBENC0	= 0 ; DeBounce Enable Port C Bit 0
.equ	DBENC1	= 1 ; DeBounce Enable Port C Bit 1
.equ	DBENC2	= 2 ; DeBounce Enable Port C Bit 2
.equ	DBENC3	= 3 ; DeBounce Enable Port C Bit 3
.equ	DBENC4	= 4 ; DeBounce Enable Port C Bit 4
.equ	DBENC5	= 5 ; DeBounce Enable Port C Bit 5

; DBTC - Debounce Timer Compare Register
.equ	DBTC0	= 0 ; Debounce Timer Compare Register Bit 0
.equ	DBTC1	= 1 ; Debounce Timer Compare Register Bit 1
.equ	DBTC2	= 2 ; Debounce Timer Compare Register Bit 2
.equ	DBTC3	= 3 ; Debounce Timer Compare Register Bit 3
.equ	DBTC4	= 4 ; Debounce Timer Compare Register Bit 4
.equ	DBTC5	= 5 ; Debounce Timer Compare Register Bit 5
.equ	DBTC6	= 6 ; Debounce Timer Compare Register Bit 6
.equ	DBTC7	= 7 ; Debounce Timer Compare Register Bit 7


; ***** DEBUG *****************
; DBGSW - Debugging Support Switch
.equ	DBGGS0	= 0 ; Debugging Support Group Select
.equ	DBGGS1	= 1 ; Debugging Support Group Select
.equ	DBGGS2	= 2 ; Debugging Support Group Select
.equ	DBGGS3	= 3 ; Debugging Support Group Select
.equ	CPBFOS0	= 4 ; CPU Busy Flag Output Select
.equ	CPBFOS1	= 5 ; CPU Busy Flag Output Select
.equ	CPBF	= 6 ; CPU Busy Flag
.equ	DBGSE	= 7 ; Debugging Support Switch Enable


; ***** DEMOD *****************
; DMCDA - Demodulator Carrier Detect for path A
.equ	DMCLA0	= 0 ; Demodulator Carrier Detect Limit for path A
.equ	DMCLA1	= 1 ; Demodulator Carrier Detect Limit for path A
.equ	DMCLA2	= 2 ; Demodulator Carrier Detect Limit for path A
.equ	DMCLA3	= 3 ; Demodulator Carrier Detect Limit for path A
.equ	DMCLA4	= 4 ; Demodulator Carrier Detect Limit for path A
.equ	DMCTA0	= 5 ; Demodulator Carrier Detect Time for path A
.equ	DMCTA1	= 6 ; Demodulator Carrier Detect Time for path A
.equ	DMCTA2	= 7 ; Demodulator Carrier Detect Time for path A

; DMCDB - Demodulator Carrier Detect for path B
.equ	DMCLB0	= 0 ; Demodulator Carrier Detect Limit for path B
.equ	DMCLB1	= 1 ; Demodulator Carrier Detect Limit for path B
.equ	DMCLB2	= 2 ; Demodulator Carrier Detect Limit for path B
.equ	DMCLB3	= 3 ; Demodulator Carrier Detect Limit for path B
.equ	DMCLB4	= 4 ; Demodulator Carrier Detect Limit for path B
.equ	DMCTB0	= 5 ; Demodulator Carrier Detect Time for path B
.equ	DMCTB1	= 6 ; Demodulator Carrier Detect Time for path B
.equ	DMCTB2	= 7 ; Demodulator Carrier Detect Time for path B

; DMCRA - Demodulator Control Register for path A
.equ	DMPGA0	= 0 ; Demodulator PLL loop gain for path A
.equ	DMPGA1	= 1 ; Demodulator PLL loop gain for path A
.equ	DMPGA2	= 2 ; Demodulator PLL loop gain for path A
.equ	DMPGA3	= 3 ; Demodulator PLL loop gain for path A
.equ	DMPGA4	= 4 ; Demodulator PLL loop gain for path A
.equ	SASKA	= 5 ; Select ASK input for path A
.equ	SY1TA	= 6 ; Symbol check with only 1T on path A
.equ	DMARA	= 7 ; Demodulator automatic restart on path A

; DMCRB - Demodulator Control Register for path B
.equ	DMPGB0	= 0 ; Demodulator PLL loop gain for path B
.equ	DMPGB1	= 1 ; Demodulator PLL loop gain for path B
.equ	DMPGB2	= 2 ; Demodulator PLL loop gain for path B
.equ	DMPGB3	= 3 ; Demodulator PLL loop gain for path B
.equ	DMPGB4	= 4 ; Demodulator PLL loop gain for path B
.equ	SASKB	= 5 ; Select ASK input for path B
.equ	SY1TB	= 6 ; Symbol check with only 1T on path B
.equ	DMARB	= 7 ; Demodulator automatic restart on path B

; DMDRA - Demodulator Data Rate on path A
.equ	DMAA0	= 0 ; Demodulator Moving Average Data Rate factor on path A
.equ	DMAA1	= 1 ; Demodulator Moving Average Data Rate factor on path A
.equ	DMAA2	= 2 ; Demodulator Moving Average Data Rate factor on path A
.equ	DMAA3	= 3 ; Demodulator Moving Average Data Rate factor on path A
.equ	DMDNA0	= 4 ; Demodulator Downsampling on path A
.equ	DMDNA1	= 5 ; Demodulator Downsampling on path A
.equ	DMDNA2	= 6 ; Demodulator Downsampling on path A
.equ	DMDNA3	= 7 ; Demodulator Downsampling on path A

; DMDRB - Demodulator Data Rate on path B
.equ	DMAB0	= 0 ; Demodulator Moving Average Data Rate factor on path B
.equ	DMAB1	= 1 ; Demodulator Moving Average Data Rate factor on path B
.equ	DMAB2	= 2 ; Demodulator Moving Average Data Rate factor on path B
.equ	DMAB3	= 3 ; Demodulator Moving Average Data Rate factor on path B
.equ	DMDNB0	= 4 ; Demodulator Downsampling on path B
.equ	DMDNB1	= 5 ; Demodulator Downsampling on path B
.equ	DMDNB2	= 6 ; Demodulator Downsampling on path B
.equ	DMDNB3	= 7 ; Demodulator Downsampling on path B

; DMMA - Demodulator Mode for path A
.equ	DMATA0	= 0 ; Demodulator Amplitude Threshold for path A
.equ	DMATA1	= 1 ; Demodulator Amplitude Threshold for path A
.equ	DMATA2	= 2 ; Demodulator Amplitude Threshold for path A
.equ	DMATA3	= 3 ; Demodulator Amplitude Threshold for path A
.equ	DMATA4	= 4 ; Demodulator Amplitude Threshold for path A
.equ	DMPA	= 5 ; Demodulator Data Polarity Selection for path A
.equ	DMHA	= 6 ; Demodulator Hold Mode for path A
.equ	DMNEA	= 7 ; Demodulator NRZ Enable for path A

; DMMB - Demodulator Mode for Path B
.equ	DMATB0	= 0 ; Demodulator Amplitude Threshold for path B
.equ	DMATB1	= 1 ; Demodulator Amplitude Threshold for path B
.equ	DMATB2	= 2 ; Demodulator Amplitude Threshold for path B
.equ	DMATB3	= 3 ; Demodulator Amplitude Threshold for path B
.equ	DMATB4	= 4 ; Demodulator Amplitude Threshold for path B
.equ	DMPB	= 5 ; Demodulator Data Polarity Selection for path B
.equ	DMHB	= 6 ; Demodulator Hold Mode for path B
.equ	DMNEB	= 7 ; Demodulator NRZ Enable for path B

; RXFOA - Received Frequency Offset vs Intermediate Frequency on path A
.equ	RXFOA0	= 0 ; Received Frequency Offset vs Intermediate Frequency on path A Bit 0
.equ	RXFOA1	= 1 ; Received Frequency Offset vs Intermediate Frequency on path A Bit 1
.equ	RXFOA2	= 2 ; Received Frequency Offset vs Intermediate Frequency on path A Bit 2
.equ	RXFOA3	= 3 ; Received Frequency Offset vs Intermediate Frequency on path A Bit 3
.equ	RXFOA4	= 4 ; Received Frequency Offset vs Intermediate Frequency on path A Bit 4
.equ	RXFOA5	= 5 ; Received Frequency Offset vs Intermediate Frequency on path A Bit 5
.equ	RXFOA6	= 6 ; Received Frequency Offset vs Intermediate Frequency on path A Bit 6
.equ	RXFOA7	= 7 ; Received Frequency Offset vs Intermediate Frequency on path A Bit 7

; RXFOB - Received Frequency Offset vs Intermediate Frequency on path B
.equ	RXFOB0	= 0 ; Received Frequency Offset vs Intermediate Frequency on path B Bit 0
.equ	RXFOB1	= 1 ; Received Frequency Offset vs Intermediate Frequency on path B Bit 1
.equ	RXFOB2	= 2 ; Received Frequency Offset vs Intermediate Frequency on path B Bit 2
.equ	RXFOB3	= 3 ; Received Frequency Offset vs Intermediate Frequency on path B Bit 3
.equ	RXFOB4	= 4 ; Received Frequency Offset vs Intermediate Frequency on path B Bit 4
.equ	RXFOB5	= 5 ; Received Frequency Offset vs Intermediate Frequency on path B Bit 5
.equ	RXFOB6	= 6 ; Received Frequency Offset vs Intermediate Frequency on path B Bit 6
.equ	RXFOB7	= 7 ; Received Frequency Offset vs Intermediate Frequency on path B Bit 7


; ***** DFIFO *****************
; DFC - Data FIFO Configuration Register
.equ	DFFLC0	= 0 ; Data FIFO Fill-Level Configuration
.equ	DFFLC1	= 1 ; Data FIFO Fill-Level Configuration
.equ	DFFLC2	= 2 ; Data FIFO Fill-Level Configuration
.equ	DFFLC3	= 3 ; Data FIFO Fill-Level Configuration
.equ	DFFLC4	= 4 ; Data FIFO Fill-Level Configuration
.equ	DFFLC5	= 5 ; Data FIFO Fill-Level Configuration
.equ	DFDRA	= 7 ; Data FIFO Direct Read Access Operational Mode

; DFD - Data FIFO Data Register
.equ	DFD0	= 0 ; Data FIFO Data Register Bit 0
.equ	DFD1	= 1 ; Data FIFO Data Register Bit 1
.equ	DFD2	= 2 ; Data FIFO Data Register Bit 2
.equ	DFD3	= 3 ; Data FIFO Data Register Bit 3
.equ	DFD4	= 4 ; Data FIFO Data Register Bit 4
.equ	DFD5	= 5 ; Data FIFO Data Register Bit 5
.equ	DFD6	= 6 ; Data FIFO Data Register Bit 6
.equ	DFD7	= 7 ; Data FIFO Data Register Bit 7

; DFI - Data FIFO Interrupt Mask Register
.equ	DFFLIM	= 0 ; Data FIFO Fill-level Interrupt Mask
.equ	DFERIM	= 1 ; Data FIFO Error Interrupt Mask

; DFL - Data FIFO Fill Level Register
.equ	DFFLS0	= 0 ; Data FIFO Fill Level Status
.equ	DFFLS1	= 1 ; Data FIFO Fill Level Status
.equ	DFFLS2	= 2 ; Data FIFO Fill Level Status
.equ	DFFLS3	= 3 ; Data FIFO Fill Level Status
.equ	DFFLS4	= 4 ; Data FIFO Fill Level Status
.equ	DFFLS5	= 5 ; Data FIFO Fill Level Status
.equ	DFCLR	= 7 ; Data FIFO Clear

; DFRP - Data FIFO Read Pointer
.equ	DFRP0	= 0 ; Data FIFO Read Pointer
.equ	DFRP1	= 1 ; Data FIFO Read Pointer
.equ	DFRP2	= 2 ; Data FIFO Read Pointer
.equ	DFRP3	= 3 ; Data FIFO Read Pointer
.equ	DFRP4	= 4 ; Data FIFO Read Pointer
.equ	DFRP5	= 5 ; Data FIFO Read Pointer

; DFS - Data FIFO Status Register
.equ	DFFLRF	= 0 ; Data FIFO Fill-Level Reached Status Flag
.equ	DFUFL	= 1 ; Data FIFO Underflow Flag
.equ	DFOFL	= 2 ; Data FIFO Overflow Flag

; DFTL - Data FIFO Telegram Length
.equ	DFTLH0	= 0 ; Data FIFO Telegram Length High Bit 8
.equ	DFTLH1	= 1 ; Data FIFO Telegram Length High Bit 9
.equ	DFTLH2	= 2 ; Data FIFO Telegram Length High Bit 10
.equ	DFTLH3	= 3 ; Data FIFO Telegram Length High Bit 11

.equ	DFTLL0	= 0 ; Data FIFO Telegram Length Low Bit 0
.equ	DFTLL1	= 1 ; Data FIFO Telegram Length Low Bit 1
.equ	DFTLL2	= 2 ; Data FIFO Telegram Length Low Bit 2
.equ	DFTLL3	= 3 ; Data FIFO Telegram Length Low Bit 3
.equ	DFTLL4	= 4 ; Data FIFO Telegram Length Low Bit 4
.equ	DFTLL5	= 5 ; Data FIFO Telegram Length Low Bit 5
.equ	DFTLL6	= 6 ; Data FIFO Telegram Length Low Bit 6
.equ	DFTLL7	= 7 ; Data FIFO Telegram Length Low Bit 7

; DFWP - Data FIFO Write Pointer
.equ	DFWP0	= 0 ; Data FIFO Write Pointer
.equ	DFWP1	= 1 ; Data FIFO Write Pointer
.equ	DFWP2	= 2 ; Data FIFO Write Pointer
.equ	DFWP3	= 3 ; Data FIFO Write Pointer
.equ	DFWP4	= 4 ; Data FIFO Write Pointer
.equ	DFWP5	= 5 ; Data FIFO Write Pointer


; ***** EEPROM *****************
; EEAR - EEPROM Address Register
.equ	EEARH0	= 0 ; EEPROM Address Register High Bit 8
.equ	EEARH1	= 1 ; EEPROM Address Register High Bit 9
.equ	EEARH2	= 2 ; EEPROM Address Register High Bit 10

.equ	EEARL0	= 0 ; EEPROM Address Register Low Bit 0
.equ	EEARL1	= 1 ; EEPROM Address Register Low Bit 1
.equ	EEARL2	= 2 ; EEPROM Address Register Low Bit 2
.equ	EEARL3	= 3 ; EEPROM Address Register Low Bit 3
.equ	EEARL4	= 4 ; EEPROM Address Register Low Bit 4
.equ	EEARL5	= 5 ; EEPROM Address Register Low Bit 5
.equ	EEARL6	= 6 ; EEPROM Address Register Low Bit 6
.equ	EEARL7	= 7 ; EEPROM Address Register Low Bit 7

; EECR - EEPROM Control Register
.equ	EERE	= 0 ; EEPROM Read Enable
.equ	EEWE	= 1 ; EEPROM Write Enable
.equ	EEMWE	= 2 ; EEPROM Master Write Enable
.equ	EERIE	= 3 ; EEPROM Ready Interrupt Enable
.equ	EEPM0	= 4 ; EEPROM Programming Mode
.equ	EEPM1	= 5 ; EEPROM Programming Mode
.equ	EEPAGE	= 6 ; EEPROM page access (multiple bytes access mode)
.equ	NVMBSY	= 7 ; Non-volatile memory busy

; EECR2 - EEPROM Control Register 2
.equ	EEBRE	= 0 ; EEPROM Burst Read Enable

; EEDR - EEPROM Data Register
.equ	EEDR0	= 0 ; EEPROM Data Register Bit 0
.equ	EEDR1	= 1 ; EEPROM Data Register Bit 1
.equ	EEDR2	= 2 ; EEPROM Data Register Bit 2
.equ	EEDR3	= 3 ; EEPROM Data Register Bit 3
.equ	EEDR4	= 4 ; EEPROM Data Register Bit 4
.equ	EEDR5	= 5 ; EEPROM Data Register Bit 5
.equ	EEDR6	= 6 ; EEPROM Data Register Bit 6
.equ	EEDR7	= 7 ; EEPROM Data Register Bit 7

; EEPR - EEPROM Protection Register
.equ	EEAP0	= 0 ; EEPROM Access Protection
.equ	EEAP1	= 1 ; EEPROM Access Protection
.equ	EEAP2	= 2 ; EEPROM Access Protection
.equ	EEAP3	= 3 ; EEPROM Access Protection


; ***** FE *****************
; FEALR - Front-End Antenna Level Detector Range
.equ	RNGE0	= 0 ; Range of the ANT_TUNE level detector
.equ	RNGE1	= 1 ; Range of the ANT_TUNE level detector

; FEANT - Front-End ANTenna
.equ	LVLC0	= 0 ; antenna signal LeVeL
.equ	LVLC1	= 1 ; antenna signal LeVeL
.equ	LVLC2	= 2 ; antenna signal LeVeL
.equ	LVLC3	= 3 ; antenna signal LeVeL

; FEAT - Front-End Antenna Tuning
.equ	ANTN0	= 0 ; Antenna Tuning
.equ	ANTN1	= 1 ; Antenna Tuning
.equ	ANTN2	= 2 ; Antenna Tuning
.equ	ANTN3	= 3 ; Antenna Tuning

; FEBIA - Front-End IF Amplifier BIAS
.equ	IFAEN	= 7 ; IF Amplifier Enable

; FEBT - Front-End RC Tuning Register
.equ	CTN20	= 0 ; Capacitor Tuning
.equ	CTN21	= 1 ; Capacitor Tuning
.equ	RTN20	= 2 ; Resistor Tuning
.equ	RTN21	= 3 ; Resistor Tuning

; FECR - Front-End Control Register
.equ	LBNHB	= 0 ; Select Low-Band Not High-Band
.equ	S4N3	= 1 ; Select 433 Not 315MHz Band
.equ	ANDP	= 2 ; Antenna Damping
.equ	ADHS	= 3 ; ADC High Sample Rate
.equ	PLCKG	= 4 ; PLL Lock Detect Gate
.equ	ANPS	= 5 ; ASK Not DPSK Switch

; FEEN1 - Front-End Enable Register 1
.equ	PLEN	= 0 ; PLL enable
.equ	PLCAL	= 1 ; PLL calibration mode
.equ	XTOEN	= 2 ; Cristal Oscillator enable
.equ	LNAEN	= 3 ; Low Noise Amplifier enable
.equ	ADEN	= 4 ; Analog Digital Converter enable
.equ	ADCLK	= 5 ; ADC Clock enable
.equ	PLSP1	= 6 ; PLL Speedup 1
.equ	ATEN	= 7 ; Antenna Tuning Enable

; FEEN2 - Front-End Enable Register 2
.equ	SDRX	= 0 ; Single Pole Double Throw (SPDT) Switch RX
.equ	SDTX	= 1 ; Single Pole Double Throw (SPDT) Switch TX
.equ	PAEN	= 2 ; Power Amplifier enable
.equ	TMPM	= 3 ; Temperature measurement
.equ	PLPEN	= 4 ; PLL Post En IQ divider
.equ	XTPEN	= 5 ; XTO VPump enable
.equ	CPBIA	= 6 ; Cap Array Bias

; FELNA - Front-End LNA Bias Register
.equ	LBH0	= 0 ; LNA Bias High band
.equ	LBH1	= 1 ; LNA Bias High band
.equ	LBH2	= 2 ; LNA Bias High band
.equ	LBH3	= 3 ; LNA Bias High band
.equ	LBL0	= 4 ; LNA Bias Low band
.equ	LBL1	= 5 ; LNA Bias Low band
.equ	LBL2	= 6 ; LNA Bias Low band
.equ	LBL3	= 7 ; LNA Bias Low band

; FEMS - Front-End Main and Swallow Control Register
.equ	PLLS0	= 0 ; PLL Swallow
.equ	PLLS1	= 1 ; PLL Swallow
.equ	PLLS2	= 2 ; PLL Swallow
.equ	PLLS3	= 3 ; PLL Swallow
.equ	PLLM0	= 4 ; PLL Mode
.equ	PLLM1	= 5 ; PLL Mode
.equ	PLLM2	= 6 ; PLL Mode
.equ	PLLM3	= 7 ; PLL Mode

; FEPAC - Front-End Power Amplifier Control Register Pout/dBm LowBand HighBand
.equ	FEPAC0	= 0 ; Front-End Power Amplifier Control Register Pout/dBm LowBand HighBand Bit 0
.equ	FEPAC1	= 1 ; Front-End Power Amplifier Control Register Pout/dBm LowBand HighBand Bit 1
.equ	FEPAC2	= 2 ; Front-End Power Amplifier Control Register Pout/dBm LowBand HighBand Bit 2
.equ	FEPAC3	= 3 ; Front-End Power Amplifier Control Register Pout/dBm LowBand HighBand Bit 3
.equ	FEPAC4	= 4 ; Front-End Power Amplifier Control Register Pout/dBm LowBand HighBand Bit 4
.equ	FEPAC5	= 5 ; Front-End Power Amplifier Control Register Pout/dBm LowBand HighBand Bit 5
.equ	FEPAC6	= 6 ; Front-End Power Amplifier Control Register Pout/dBm LowBand HighBand Bit 6
.equ	FEPAC7	= 7 ; Front-End Power Amplifier Control Register Pout/dBm LowBand HighBand Bit 7

; FESR - Front-End Status Register
.equ	LBSAT	= 0 ; LNA Low band saturated
.equ	HBSAT	= 1 ; LNA High band saturated
.equ	XRDY	= 2 ; XTO ready
.equ	PLCK	= 3 ; PLL locked
.equ	ANTS	= 4 ; Antenna saturated

; FETN4 - Front-End RC Tuning 4bit Register
.equ	CTN40	= 0 ; 4 bit Capacitor Tuning
.equ	CTN41	= 1 ; 4 bit Capacitor Tuning
.equ	CTN42	= 2 ; 4 bit Capacitor Tuning
.equ	CTN43	= 3 ; 4 bit Capacitor Tuning
.equ	RTN40	= 4 ; 4 bit Resistor Tuning
.equ	RTN41	= 5 ; 4 bit Resistor Tuning
.equ	RTN42	= 6 ; 4 bit Resistor Tuning
.equ	RTN43	= 7 ; 4 bit Resistor Tuning

; FEVCO - Front-End VCO and PLL control
.equ	CPCC0	= 0 ; Charge pump current control
.equ	CPCC1	= 1 ; Charge pump current control
.equ	CPCC2	= 2 ; Charge pump current control
.equ	CPCC3	= 3 ; Charge pump current control
.equ	VCOB0	= 4 ; VCO Bias
.equ	VCOB1	= 5 ; VCO Bias
.equ	VCOB2	= 6 ; VCO Bias
.equ	VCOB3	= 7 ; VCO Bias

; FEVCT - Front-End VCO Tuning Register
.equ	FEVCT0	= 0 ; Front-End VCO Tuning Register
.equ	FEVCT1	= 1 ; Front-End VCO Tuning Register
.equ	FEVCT2	= 2 ; Front-End VCO Tuning Register
.equ	FEVCT3	= 3 ; Front-End VCO Tuning Register


; ***** FREQS *****************
; FFREQ1H - Fractional Frequency 1 Setting, High Byte
.equ	FFREQ1H0	= 0 ; Fractional Frequency 1 Setting, High Byte Bit 0
.equ	FFREQ1H1	= 1 ; Fractional Frequency 1 Setting, High Byte Bit 1

; FFREQ1L - Fractional Frequency 1 Setting, Low Byte
.equ	FFREQ1L0	= 0 ; Fractional Frequency 1 Setting, Low Byte Bit 0
.equ	FFREQ1L1	= 1 ; Fractional Frequency 1 Setting, Low Byte Bit 1
.equ	FFREQ1L2	= 2 ; Fractional Frequency 1 Setting, Low Byte Bit 2
.equ	FFREQ1L3	= 3 ; Fractional Frequency 1 Setting, Low Byte Bit 3
.equ	FFREQ1L4	= 4 ; Fractional Frequency 1 Setting, Low Byte Bit 4
.equ	FFREQ1L5	= 5 ; Fractional Frequency 1 Setting, Low Byte Bit 5
.equ	FFREQ1L6	= 6 ; Fractional Frequency 1 Setting, Low Byte Bit 6
.equ	FFREQ1L7	= 7 ; Fractional Frequency 1 Setting, Low Byte Bit 7

; FFREQ1M - Fractional Frequency 1 Setting, Middle Byte
.equ	FFREQ1M0	= 0 ; Fractional Frequency 1 Setting, Middle Byte Bit 0
.equ	FFREQ1M1	= 1 ; Fractional Frequency 1 Setting, Middle Byte Bit 1
.equ	FFREQ1M2	= 2 ; Fractional Frequency 1 Setting, Middle Byte Bit 2
.equ	FFREQ1M3	= 3 ; Fractional Frequency 1 Setting, Middle Byte Bit 3
.equ	FFREQ1M4	= 4 ; Fractional Frequency 1 Setting, Middle Byte Bit 4
.equ	FFREQ1M5	= 5 ; Fractional Frequency 1 Setting, Middle Byte Bit 5
.equ	FFREQ1M6	= 6 ; Fractional Frequency 1 Setting, Middle Byte Bit 6
.equ	FFREQ1M7	= 7 ; Fractional Frequency 1 Setting, Middle Byte Bit 7

; FFREQ2H - Fractional Frequency 2 Setting, High Byte
.equ	FFREQ2H0	= 0 ; Fractional Frequency 2 Setting, High Byte Bit 0
.equ	FFREQ2H1	= 1 ; Fractional Frequency 2 Setting, High Byte Bit 1

; FFREQ2L - Fractional Frequency 2 Setting, Low Byte
.equ	FFREQ2L0	= 0 ; Fractional Frequency 2 Setting, Low Byte Bit 0
.equ	FFREQ2L1	= 1 ; Fractional Frequency 2 Setting, Low Byte Bit 1
.equ	FFREQ2L2	= 2 ; Fractional Frequency 2 Setting, Low Byte Bit 2
.equ	FFREQ2L3	= 3 ; Fractional Frequency 2 Setting, Low Byte Bit 3
.equ	FFREQ2L4	= 4 ; Fractional Frequency 2 Setting, Low Byte Bit 4
.equ	FFREQ2L5	= 5 ; Fractional Frequency 2 Setting, Low Byte Bit 5
.equ	FFREQ2L6	= 6 ; Fractional Frequency 2 Setting, Low Byte Bit 6
.equ	FFREQ2L7	= 7 ; Fractional Frequency 2 Setting, Low Byte Bit 7

; FFREQ2M - Fractional Frequency 2 Setting, Middle Byte
.equ	FFREQ2M0	= 0 ; Fractional Frequency 2 Setting, Middle Byte Bit 0
.equ	FFREQ2M1	= 1 ; Fractional Frequency 2 Setting, Middle Byte Bit 1
.equ	FFREQ2M2	= 2 ; Fractional Frequency 2 Setting, Middle Byte Bit 2
.equ	FFREQ2M3	= 3 ; Fractional Frequency 2 Setting, Middle Byte Bit 3
.equ	FFREQ2M4	= 4 ; Fractional Frequency 2 Setting, Middle Byte Bit 4
.equ	FFREQ2M5	= 5 ; Fractional Frequency 2 Setting, Middle Byte Bit 5
.equ	FFREQ2M6	= 6 ; Fractional Frequency 2 Setting, Middle Byte Bit 6
.equ	FFREQ2M7	= 7 ; Fractional Frequency 2 Setting, Middle Byte Bit 7

; FSCR - Frequency Synthesizer Control Register
.equ	TXMOD	= 0 ; Tx Modulation
.equ	SFM	= 1 ; Select FSK Modulation
.equ	TXMS0	= 2 ; Tx Modulation Source
.equ	TXMS1	= 3 ; Tx Modulation Source
.equ	PAOER	= 4 ; Power Amplifier Output Enable Register
.equ	PAON	= 7 ; Power Amplifier Output is On

; FSEN - Frequency Synthesizer Enable register
.equ	SDPU	= 0 ; Sigma-delta Modulator Power Up
.equ	SDEN	= 1 ; Sigma-delta Modulator Enable
.equ	GAEN	= 2 ; Gauss Filtering Enable
.equ	PEEN	= 3 ; Pre-emphasis Filtering Enable
.equ	ASEN	= 4 ; ASK Shaping Enable
.equ	ANTT	= 5 ; Antenna Tuning Active

; FSFCR - Frequency Synthesizer Filter Control Register
.equ	BTSEL0	= 0 ; Gauss Filter BT Selection
.equ	BTSEL1	= 1 ; Gauss Filter BT Selection
.equ	ASDIV0	= 4 ; ASK Shaping Divider
.equ	ASDIV1	= 5 ; ASK Shaping Divider
.equ	ASDIV2	= 6 ; ASK Shaping Divider
.equ	ASDIV3	= 7 ; ASK Shaping Divider

; GACDIV - Gauss Clock Divider
.equ	GACDIVH0	= 0 ; Gauss Clock Divider High Bit 8
.equ	GACDIVH1	= 1 ; Gauss Clock Divider High Bit 9
.equ	GACDIVH2	= 2 ; Gauss Clock Divider High Bit 10
.equ	GACDIVH3	= 3 ; Gauss Clock Divider High Bit 11
.equ	GACDIVH4	= 4 ; Gauss Clock Divider High Bit 12

.equ	GACDIVL0	= 0 ; Gauss Clock Divider Low Bit 0
.equ	GACDIVL1	= 1 ; Gauss Clock Divider Low Bit 1
.equ	GACDIVL2	= 2 ; Gauss Clock Divider Low Bit 2
.equ	GACDIVL3	= 3 ; Gauss Clock Divider Low Bit 3
.equ	GACDIVL4	= 4 ; Gauss Clock Divider Low Bit 4
.equ	GACDIVL5	= 5 ; Gauss Clock Divider Low Bit 5
.equ	GACDIVL6	= 6 ; Gauss Clock Divider Low Bit 6
.equ	GACDIVL7	= 7 ; Gauss Clock Divider Low Bit 7


; ***** FRSYNC *****************
; SFID1A - Start-Frame ID byte 1 for data path A
.equ	SFID1A0	= 0 ; Start-Frame ID byte 1 for data path A Bit 0
.equ	SFID1A1	= 1 ; Start-Frame ID byte 1 for data path A Bit 1
.equ	SFID1A2	= 2 ; Start-Frame ID byte 1 for data path A Bit 2
.equ	SFID1A3	= 3 ; Start-Frame ID byte 1 for data path A Bit 3
.equ	SFID1A4	= 4 ; Start-Frame ID byte 1 for data path A Bit 4
.equ	SFID1A5	= 5 ; Start-Frame ID byte 1 for data path A Bit 5
.equ	SFID1A6	= 6 ; Start-Frame ID byte 1 for data path A Bit 6
.equ	SFID1A7	= 7 ; Start-Frame ID byte 1 for data path A Bit 7

; SFID1B - Start-Frame ID byte 1 for data path B
.equ	SFID1B0	= 0 ; Start-Frame ID byte 1 for data path B Bit 0
.equ	SFID1B1	= 1 ; Start-Frame ID byte 1 for data path B Bit 1
.equ	SFID1B2	= 2 ; Start-Frame ID byte 1 for data path B Bit 2
.equ	SFID1B3	= 3 ; Start-Frame ID byte 1 for data path B Bit 3
.equ	SFID1B4	= 4 ; Start-Frame ID byte 1 for data path B Bit 4
.equ	SFID1B5	= 5 ; Start-Frame ID byte 1 for data path B Bit 5
.equ	SFID1B6	= 6 ; Start-Frame ID byte 1 for data path B Bit 6
.equ	SFID1B7	= 7 ; Start-Frame ID byte 1 for data path B Bit 7

; SFID2A - Start-Frame ID byte 2 for data path A
.equ	SFID2A0	= 0 ; Start-Frame ID byte 2 for data path A Bit 0
.equ	SFID2A1	= 1 ; Start-Frame ID byte 2 for data path A Bit 1
.equ	SFID2A2	= 2 ; Start-Frame ID byte 2 for data path A Bit 2
.equ	SFID2A3	= 3 ; Start-Frame ID byte 2 for data path A Bit 3
.equ	SFID2A4	= 4 ; Start-Frame ID byte 2 for data path A Bit 4
.equ	SFID2A5	= 5 ; Start-Frame ID byte 2 for data path A Bit 5
.equ	SFID2A6	= 6 ; Start-Frame ID byte 2 for data path A Bit 6
.equ	SFID2A7	= 7 ; Start-Frame ID byte 2 for data path A Bit 7

; SFID2B - Start-Frame ID byte 2 for data path B
.equ	SFID2B0	= 0 ; Start-Frame ID byte 2 for data path B Bit 0
.equ	SFID2B1	= 1 ; Start-Frame ID byte 2 for data path B Bit 1
.equ	SFID2B2	= 2 ; Start-Frame ID byte 2 for data path B Bit 2
.equ	SFID2B3	= 3 ; Start-Frame ID byte 2 for data path B Bit 3
.equ	SFID2B4	= 4 ; Start-Frame ID byte 2 for data path B Bit 4
.equ	SFID2B5	= 5 ; Start-Frame ID byte 2 for data path B Bit 5
.equ	SFID2B6	= 6 ; Start-Frame ID byte 2 for data path B Bit 6
.equ	SFID2B7	= 7 ; Start-Frame ID byte 2 for data path B Bit 7

; SFID3A - Start-Frame ID byte 3 for data path A
.equ	SFID3A0	= 0 ; Start-Frame ID byte 3 for data path A Bit 0
.equ	SFID3A1	= 1 ; Start-Frame ID byte 3 for data path A Bit 1
.equ	SFID3A2	= 2 ; Start-Frame ID byte 3 for data path A Bit 2
.equ	SFID3A3	= 3 ; Start-Frame ID byte 3 for data path A Bit 3
.equ	SFID3A4	= 4 ; Start-Frame ID byte 3 for data path A Bit 4
.equ	SFID3A5	= 5 ; Start-Frame ID byte 3 for data path A Bit 5
.equ	SFID3A6	= 6 ; Start-Frame ID byte 3 for data path A Bit 6
.equ	SFID3A7	= 7 ; Start-Frame ID byte 3 for data path A Bit 7

; SFID3B - Start-Frame ID byte 3 for data path B
.equ	SFID3B0	= 0 ; Start-Frame ID byte 3 for data path B Bit 0
.equ	SFID3B1	= 1 ; Start-Frame ID byte 3 for data path B Bit 1
.equ	SFID3B2	= 2 ; Start-Frame ID byte 3 for data path B Bit 2
.equ	SFID3B3	= 3 ; Start-Frame ID byte 3 for data path B Bit 3
.equ	SFID3B4	= 4 ; Start-Frame ID byte 3 for data path B Bit 4
.equ	SFID3B5	= 5 ; Start-Frame ID byte 3 for data path B Bit 5
.equ	SFID3B6	= 6 ; Start-Frame ID byte 3 for data path B Bit 6
.equ	SFID3B7	= 7 ; Start-Frame ID byte 3 for data path B Bit 7

; SFID4A - Start-Frame ID byte 4 for data path A
.equ	SFID4A0	= 0 ; Start-Frame ID byte 4 for data path A Bit 0
.equ	SFID4A1	= 1 ; Start-Frame ID byte 4 for data path A Bit 1
.equ	SFID4A2	= 2 ; Start-Frame ID byte 4 for data path A Bit 2
.equ	SFID4A3	= 3 ; Start-Frame ID byte 4 for data path A Bit 3
.equ	SFID4A4	= 4 ; Start-Frame ID byte 4 for data path A Bit 4
.equ	SFID4A5	= 5 ; Start-Frame ID byte 4 for data path A Bit 5
.equ	SFID4A6	= 6 ; Start-Frame ID byte 4 for data path A Bit 6
.equ	SFID4A7	= 7 ; Start-Frame ID byte 4 for data path A Bit 7

; SFID4B - Start-Frame ID byte 4 for data path B
.equ	SFID4B0	= 0 ; Start-Frame ID byte 4 for data path B Bit 0
.equ	SFID4B1	= 1 ; Start-Frame ID byte 4 for data path B Bit 1
.equ	SFID4B2	= 2 ; Start-Frame ID byte 4 for data path B Bit 2
.equ	SFID4B3	= 3 ; Start-Frame ID byte 4 for data path B Bit 3
.equ	SFID4B4	= 4 ; Start-Frame ID byte 4 for data path B Bit 4
.equ	SFID4B5	= 5 ; Start-Frame ID byte 4 for data path B Bit 5
.equ	SFID4B6	= 6 ; Start-Frame ID byte 4 for data path B Bit 6
.equ	SFID4B7	= 7 ; Start-Frame ID byte 4 for data path B Bit 7

; SFIDCA - Start-Frame ID Control for data path A
.equ	SFIDTA0	= 0 ; Start-Frame ID threshold for data path A
.equ	SFIDTA1	= 1 ; Start-Frame ID threshold for data path A
.equ	SFIDTA2	= 2 ; Start-Frame ID threshold for data path A
.equ	SFIDTA3	= 3 ; Start-Frame ID threshold for data path A
.equ	SFIDTA4	= 4 ; Start-Frame ID threshold for data path A
.equ	SEMEA	= 7 ; Serial mode enable for data path A

; SFIDCB - Start-Frame ID Control for data path B
.equ	SFIDTB0	= 0 ; Start-Frame ID threshold for data path B
.equ	SFIDTB1	= 1 ; Start-Frame ID threshold for data path B
.equ	SFIDTB2	= 2 ; Start-Frame ID threshold for data path B
.equ	SFIDTB3	= 3 ; Start-Frame ID threshold for data path B
.equ	SFIDTB4	= 4 ; Start-Frame ID threshold for data path B
.equ	SEMEB	= 7 ; Serial mode enable for data path B

; SFIDLA - Start-Frame ID Length for data path A
.equ	SFIDLA0	= 0 ; Start-Frame ID Length for data path A
.equ	SFIDLA1	= 1 ; Start-Frame ID Length for data path A
.equ	SFIDLA2	= 2 ; Start-Frame ID Length for data path A
.equ	SFIDLA3	= 3 ; Start-Frame ID Length for data path A
.equ	SFIDLA4	= 4 ; Start-Frame ID Length for data path A
.equ	SFIDLA5	= 5 ; Start-Frame ID Length for data path A

; SFIDLB - Start-Frame ID Length for data path B
.equ	SFIDLB0	= 0 ; Start-Frame ID Length for data path B
.equ	SFIDLB1	= 1 ; Start-Frame ID Length for data path B
.equ	SFIDLB2	= 2 ; Start-Frame ID Length for data path B
.equ	SFIDLB3	= 3 ; Start-Frame ID Length for data path B
.equ	SFIDLB4	= 4 ; Start-Frame ID Length for data path B
.equ	SFIDLB5	= 5 ; Start-Frame ID Length for data path B

; WUP1A - Wake-Up Pattern byte 1 for data path A
.equ	WUP1A0	= 0 ; Wake-Up Pattern byte 1 for data path A Bit 0
.equ	WUP1A1	= 1 ; Wake-Up Pattern byte 1 for data path A Bit 1
.equ	WUP1A2	= 2 ; Wake-Up Pattern byte 1 for data path A Bit 2
.equ	WUP1A3	= 3 ; Wake-Up Pattern byte 1 for data path A Bit 3
.equ	WUP1A4	= 4 ; Wake-Up Pattern byte 1 for data path A Bit 4
.equ	WUP1A5	= 5 ; Wake-Up Pattern byte 1 for data path A Bit 5
.equ	WUP1A6	= 6 ; Wake-Up Pattern byte 1 for data path A Bit 6
.equ	WUP1A7	= 7 ; Wake-Up Pattern byte 1 for data path A Bit 7

; WUP1B - Wake-Up Pattern byte 1 for data path B
.equ	WUP1B0	= 0 ; Wake-Up Pattern byte 1 for data path B Bit 0
.equ	WUP1B1	= 1 ; Wake-Up Pattern byte 1 for data path B Bit 1
.equ	WUP1B2	= 2 ; Wake-Up Pattern byte 1 for data path B Bit 2
.equ	WUP1B3	= 3 ; Wake-Up Pattern byte 1 for data path B Bit 3
.equ	WUP1B4	= 4 ; Wake-Up Pattern byte 1 for data path B Bit 4
.equ	WUP1B5	= 5 ; Wake-Up Pattern byte 1 for data path B Bit 5
.equ	WUP1B6	= 6 ; Wake-Up Pattern byte 1 for data path B Bit 6
.equ	WUP1B7	= 7 ; Wake-Up Pattern byte 1 for data path B Bit 7

; WUP2A - Wake-Up Pattern byte 2 for data path A
.equ	WUP2A0	= 0 ; Wake-Up Pattern byte 2 for data path A Bit 0
.equ	WUP2A1	= 1 ; Wake-Up Pattern byte 2 for data path A Bit 1
.equ	WUP2A2	= 2 ; Wake-Up Pattern byte 2 for data path A Bit 2
.equ	WUP2A3	= 3 ; Wake-Up Pattern byte 2 for data path A Bit 3
.equ	WUP2A4	= 4 ; Wake-Up Pattern byte 2 for data path A Bit 4
.equ	WUP2A5	= 5 ; Wake-Up Pattern byte 2 for data path A Bit 5
.equ	WUP2A6	= 6 ; Wake-Up Pattern byte 2 for data path A Bit 6
.equ	WUP2A7	= 7 ; Wake-Up Pattern byte 2 for data path A Bit 7

; WUP2B - Wake-Up Pattern byte 2 for data path B
.equ	WUP2B0	= 0 ; Wake-Up Pattern byte 2 for data path B Bit 0
.equ	WUP2B1	= 1 ; Wake-Up Pattern byte 2 for data path B Bit 1
.equ	WUP2B2	= 2 ; Wake-Up Pattern byte 2 for data path B Bit 2
.equ	WUP2B3	= 3 ; Wake-Up Pattern byte 2 for data path B Bit 3
.equ	WUP2B4	= 4 ; Wake-Up Pattern byte 2 for data path B Bit 4
.equ	WUP2B5	= 5 ; Wake-Up Pattern byte 2 for data path B Bit 5
.equ	WUP2B6	= 6 ; Wake-Up Pattern byte 2 for data path B Bit 6
.equ	WUP2B7	= 7 ; Wake-Up Pattern byte 2 for data path B Bit 7

; WUP3A - Wake-Up Pattern byte 3 for data path A
.equ	WUP3A0	= 0 ; Wake-Up Pattern byte 3 for data path A Bit 0
.equ	WUP3A1	= 1 ; Wake-Up Pattern byte 3 for data path A Bit 1
.equ	WUP3A2	= 2 ; Wake-Up Pattern byte 3 for data path A Bit 2
.equ	WUP3A3	= 3 ; Wake-Up Pattern byte 3 for data path A Bit 3
.equ	WUP3A4	= 4 ; Wake-Up Pattern byte 3 for data path A Bit 4
.equ	WUP3A5	= 5 ; Wake-Up Pattern byte 3 for data path A Bit 5
.equ	WUP3A6	= 6 ; Wake-Up Pattern byte 3 for data path A Bit 6
.equ	WUP3A7	= 7 ; Wake-Up Pattern byte 3 for data path A Bit 7

; WUP3B - Wake-Up Pattern byte 3 for data path B
.equ	WUP3B0	= 0 ; Wake-Up Pattern byte 3 for data path B Bit 0
.equ	WUP3B1	= 1 ; Wake-Up Pattern byte 3 for data path B Bit 1
.equ	WUP3B2	= 2 ; Wake-Up Pattern byte 3 for data path B Bit 2
.equ	WUP3B3	= 3 ; Wake-Up Pattern byte 3 for data path B Bit 3
.equ	WUP3B4	= 4 ; Wake-Up Pattern byte 3 for data path B Bit 4
.equ	WUP3B5	= 5 ; Wake-Up Pattern byte 3 for data path B Bit 5
.equ	WUP3B6	= 6 ; Wake-Up Pattern byte 3 for data path B Bit 6
.equ	WUP3B7	= 7 ; Wake-Up Pattern byte 3 for data path B Bit 7

; WUP4A - Wake-Up Pattern byte 4 for data path A
.equ	WUP4A0	= 0 ; Wake-Up Pattern byte 4 for data path A Bit 0
.equ	WUP4A1	= 1 ; Wake-Up Pattern byte 4 for data path A Bit 1
.equ	WUP4A2	= 2 ; Wake-Up Pattern byte 4 for data path A Bit 2
.equ	WUP4A3	= 3 ; Wake-Up Pattern byte 4 for data path A Bit 3
.equ	WUP4A4	= 4 ; Wake-Up Pattern byte 4 for data path A Bit 4
.equ	WUP4A5	= 5 ; Wake-Up Pattern byte 4 for data path A Bit 5
.equ	WUP4A6	= 6 ; Wake-Up Pattern byte 4 for data path A Bit 6
.equ	WUP4A7	= 7 ; Wake-Up Pattern byte 4 for data path A Bit 7

; WUP4B - Wake-Up Pattern byte 4 for data path B
.equ	WUP4B0	= 0 ; Wake-Up Pattern byte 4 for data path B Bit 0
.equ	WUP4B1	= 1 ; Wake-Up Pattern byte 4 for data path B Bit 1
.equ	WUP4B2	= 2 ; Wake-Up Pattern byte 4 for data path B Bit 2
.equ	WUP4B3	= 3 ; Wake-Up Pattern byte 4 for data path B Bit 3
.equ	WUP4B4	= 4 ; Wake-Up Pattern byte 4 for data path B Bit 4
.equ	WUP4B5	= 5 ; Wake-Up Pattern byte 4 for data path B Bit 5
.equ	WUP4B6	= 6 ; Wake-Up Pattern byte 4 for data path B Bit 6
.equ	WUP4B7	= 7 ; Wake-Up Pattern byte 4 for data path B Bit 7

; WUPLA - Wake-Up Pattern Length for data path A
.equ	WUPLA0	= 0 ; Wake-Up Pattern Length for data path A
.equ	WUPLA1	= 1 ; Wake-Up Pattern Length for data path A
.equ	WUPLA2	= 2 ; Wake-Up Pattern Length for data path A
.equ	WUPLA3	= 3 ; Wake-Up Pattern Length for data path A
.equ	WUPLA4	= 4 ; Wake-Up Pattern Length for data path A
.equ	WUPLA5	= 5 ; Wake-Up Pattern Length for data path A

; WUPLB - Wake-Up Pattern Length for data path B
.equ	WUPLB0	= 0 ; Wake-Up Pattern Length for data path B
.equ	WUPLB1	= 1 ; Wake-Up Pattern Length for data path B
.equ	WUPLB2	= 2 ; Wake-Up Pattern Length for data path B
.equ	WUPLB3	= 3 ; Wake-Up Pattern Length for data path B
.equ	WUPLB4	= 4 ; Wake-Up Pattern Length for data path B
.equ	WUPLB5	= 5 ; Wake-Up Pattern Length for data path B

; WUPTA - Wake-Up Pattern Threshold for data path A
.equ	WUPTA0	= 0 ; Wake-Up Pattern Threshold for data path A
.equ	WUPTA1	= 1 ; Wake-Up Pattern Threshold for data path A
.equ	WUPTA2	= 2 ; Wake-Up Pattern Threshold for data path A
.equ	WUPTA3	= 3 ; Wake-Up Pattern Threshold for data path A
.equ	WUPTA4	= 4 ; Wake-Up Pattern Threshold for data path A

; WUPTB - Wake-Up Pattern Threshold for data path B
.equ	WUPTB0	= 0 ; Wake-Up Pattern Threshold for data path B
.equ	WUPTB1	= 1 ; Wake-Up Pattern Threshold for data path B
.equ	WUPTB2	= 2 ; Wake-Up Pattern Threshold for data path B
.equ	WUPTB3	= 3 ; Wake-Up Pattern Threshold for data path B
.equ	WUPTB4	= 4 ; Wake-Up Pattern Threshold for data path B


; ***** GPIOREGS *****************
; GPIOR0 - General Purpose I/O Register 0
.equ	GPIOR00	= 0 ; General Purpose I/O Register 0 Bit 0
.equ	GPIOR01	= 1 ; General Purpose I/O Register 0 Bit 1
.equ	GPIOR02	= 2 ; General Purpose I/O Register 0 Bit 2
.equ	GPIOR03	= 3 ; General Purpose I/O Register 0 Bit 3
.equ	GPIOR04	= 4 ; General Purpose I/O Register 0 Bit 4
.equ	GPIOR05	= 5 ; General Purpose I/O Register 0 Bit 5
.equ	GPIOR06	= 6 ; General Purpose I/O Register 0 Bit 6
.equ	GPIOR07	= 7 ; General Purpose I/O Register 0 Bit 7

; GPIOR1 - General Purpose I/O Register 1
.equ	GPIOR10	= 0 ; General Purpose I/O Register 1 Bit 0
.equ	GPIOR11	= 1 ; General Purpose I/O Register 1 Bit 1
.equ	GPIOR12	= 2 ; General Purpose I/O Register 1 Bit 2
.equ	GPIOR13	= 3 ; General Purpose I/O Register 1 Bit 3
.equ	GPIOR14	= 4 ; General Purpose I/O Register 1 Bit 4
.equ	GPIOR15	= 5 ; General Purpose I/O Register 1 Bit 5
.equ	GPIOR16	= 6 ; General Purpose I/O Register 1 Bit 6
.equ	GPIOR17	= 7 ; General Purpose I/O Register 1 Bit 7

; GPIOR2 - General Purpose I/O Register 2
.equ	GPIOR20	= 0 ; General Purpose I/O Register 2 Bit 0
.equ	GPIOR21	= 1 ; General Purpose I/O Register 2 Bit 1
.equ	GPIOR22	= 2 ; General Purpose I/O Register 2 Bit 2
.equ	GPIOR23	= 3 ; General Purpose I/O Register 2 Bit 3
.equ	GPIOR24	= 4 ; General Purpose I/O Register 2 Bit 4
.equ	GPIOR25	= 5 ; General Purpose I/O Register 2 Bit 5
.equ	GPIOR26	= 6 ; General Purpose I/O Register 2 Bit 6
.equ	GPIOR27	= 7 ; General Purpose I/O Register 2 Bit 7

; GPIOR3 - General Purpose I/O Register 3
.equ	GPIOR30	= 0 ; General Purpose I/O Register 3 Bit 0
.equ	GPIOR31	= 1 ; General Purpose I/O Register 3 Bit 1
.equ	GPIOR32	= 2 ; General Purpose I/O Register 3 Bit 2
.equ	GPIOR33	= 3 ; General Purpose I/O Register 3 Bit 3
.equ	GPIOR34	= 4 ; General Purpose I/O Register 3 Bit 4
.equ	GPIOR35	= 5 ; General Purpose I/O Register 3 Bit 5
.equ	GPIOR36	= 6 ; General Purpose I/O Register 3 Bit 6
.equ	GPIOR37	= 7 ; General Purpose I/O Register 3 Bit 7

; GPIOR4 - General Purpose I/O Register 4
.equ	GPIOR40	= 0 ; General Purpose I/O Register 4 Bit 0
.equ	GPIOR41	= 1 ; General Purpose I/O Register 4 Bit 1
.equ	GPIOR42	= 2 ; General Purpose I/O Register 4 Bit 2
.equ	GPIOR43	= 3 ; General Purpose I/O Register 4 Bit 3
.equ	GPIOR44	= 4 ; General Purpose I/O Register 4 Bit 4
.equ	GPIOR45	= 5 ; General Purpose I/O Register 4 Bit 5
.equ	GPIOR46	= 6 ; General Purpose I/O Register 4 Bit 6
.equ	GPIOR47	= 7 ; General Purpose I/O Register 4 Bit 7

; GPIOR5 - General Purpose I/O Register 5
.equ	GPIOR50	= 0 ; General Purpose I/O Register 5 Bit 0
.equ	GPIOR51	= 1 ; General Purpose I/O Register 5 Bit 1
.equ	GPIOR52	= 2 ; General Purpose I/O Register 5 Bit 2
.equ	GPIOR53	= 3 ; General Purpose I/O Register 5 Bit 3
.equ	GPIOR54	= 4 ; General Purpose I/O Register 5 Bit 4
.equ	GPIOR55	= 5 ; General Purpose I/O Register 5 Bit 5
.equ	GPIOR56	= 6 ; General Purpose I/O Register 5 Bit 6
.equ	GPIOR57	= 7 ; General Purpose I/O Register 5 Bit 7

; GPIOR6 - General Purpose I/O Register 6
.equ	GPIOR60	= 0 ; General Purpose I/O Register 6 Bit 0
.equ	GPIOR61	= 1 ; General Purpose I/O Register 6 Bit 1
.equ	GPIOR62	= 2 ; General Purpose I/O Register 6 Bit 2
.equ	GPIOR63	= 3 ; General Purpose I/O Register 6 Bit 3
.equ	GPIOR64	= 4 ; General Purpose I/O Register 6 Bit 4
.equ	GPIOR65	= 5 ; General Purpose I/O Register 6 Bit 5
.equ	GPIOR66	= 6 ; General Purpose I/O Register 6 Bit 6
.equ	GPIOR67	= 7 ; General Purpose I/O Register 6 Bit 7


; ***** IDSCAN *****************
; IDB0 - ID Byte 0
.equ	IDB00	= 0 ; ID Byte 0 Bit 0
.equ	IDB01	= 1 ; ID Byte 0 Bit 1
.equ	IDB02	= 2 ; ID Byte 0 Bit 2
.equ	IDB03	= 3 ; ID Byte 0 Bit 3
.equ	IDB04	= 4 ; ID Byte 0 Bit 4
.equ	IDB05	= 5 ; ID Byte 0 Bit 5
.equ	IDB06	= 6 ; ID Byte 0 Bit 6
.equ	IDB07	= 7 ; ID Byte 0 Bit 7

; IDB1 - ID Byte 1
.equ	IDB10	= 0 ; ID Byte 1 Bit 0
.equ	IDB11	= 1 ; ID Byte 1 Bit 1
.equ	IDB12	= 2 ; ID Byte 1 Bit 2
.equ	IDB13	= 3 ; ID Byte 1 Bit 3
.equ	IDB14	= 4 ; ID Byte 1 Bit 4
.equ	IDB15	= 5 ; ID Byte 1 Bit 5
.equ	IDB16	= 6 ; ID Byte 1 Bit 6
.equ	IDB17	= 7 ; ID Byte 1 Bit 7

; IDB2 - ID Byte 2
.equ	IDB20	= 0 ; ID Byte 2 Bit 0
.equ	IDB21	= 1 ; ID Byte 2 Bit 1
.equ	IDB22	= 2 ; ID Byte 2 Bit 2
.equ	IDB23	= 3 ; ID Byte 2 Bit 3
.equ	IDB24	= 4 ; ID Byte 2 Bit 4
.equ	IDB25	= 5 ; ID Byte 2 Bit 5
.equ	IDB26	= 6 ; ID Byte 2 Bit 6
.equ	IDB27	= 7 ; ID Byte 2 Bit 7

; IDB3 - ID Byte 3
.equ	IDB30	= 0 ; ID Byte 3 Bit 0
.equ	IDB31	= 1 ; ID Byte 3 Bit 1
.equ	IDB32	= 2 ; ID Byte 3 Bit 2
.equ	IDB33	= 3 ; ID Byte 3 Bit 3
.equ	IDB34	= 4 ; ID Byte 3 Bit 4
.equ	IDB35	= 5 ; ID Byte 3 Bit 5
.equ	IDB36	= 6 ; ID Byte 3 Bit 6
.equ	IDB37	= 7 ; ID Byte 3 Bit 7

; IDC - ID Configuration
.equ	IDL0	= 0 ; ID Length
.equ	IDL1	= 1 ; ID Length
.equ	IDBO0	= 2 ; ID Byte Offset
.equ	IDBO1	= 3 ; ID Byte Offset
.equ	IDFIM	= 5 ; ID Full Interrupt Mask
.equ	IDCLR	= 6 ; ID Clear
.equ	IDCE	= 7 ; ID Check Execute

; IDS - ID Status
.equ	IDOK	= 0 ; ID Scan Ok Flag
.equ	IDFULL	= 1 ; ID Full Flag


; ***** INT *****************
; EICRA - External Interrupt control Register
.equ	ISC00	= 0 ; Interrupt Sense Control 0
.equ	ISC01	= 1 ; Interrupt Sense Control 0
.equ	ISC10	= 2 ; Interrupt Sense Control 1
.equ	ISC11	= 3 ; Interrupt Sense Control 1

; EIFR - External Interrupt Flag Register
.equ	INTF0	= 0 ; External Interrupt Flag 0
.equ	INTF1	= 1 ; External Interrupt Flag 1

; EIMSK - External Interrupt Mask Register
.equ	INT0	= 0 ; External Interrupt Request 0 Enable
.equ	INT1	= 1 ; External Interrupt Request 1 Enable

; PCICR - Pin change Interrupt control Register
.equ	PCIE0	= 0 ; Pin Change Interrupt Enable 0
.equ	PCIE1	= 1 ; Pin Change Interrupt Enable 1

; PCIFR - Pin change Interrupt flag Register
.equ	PCIF0	= 0 ; Pin Change Interrupt Flag 0
.equ	PCIF1	= 1 ; Pin Change Interrupt Flag 1

; PCMSK0 - Pin change Mask Register 0
.equ	PCINT0	= 0 ; Pin Change Enable Mask bit 0
.equ	PCINT1	= 1 ; Pin Change Enable Mask bit 1
.equ	PCINT2	= 2 ; Pin Change Enable Mask bit 2
.equ	PCINT3	= 3 ; Pin Change Enable Mask bit 3
.equ	PCINT4	= 4 ; Pin Change Enable Mask bit 4
.equ	PCINT5	= 5 ; Pin Change Enable Mask bit 5
.equ	PCINT6	= 6 ; Pin Change Enable Mask bit 6
.equ	PCINT7	= 7 ; Pin Change Enable Mask bit 7

; PCMSK1 - Pin change Mask Register 1
.equ	PCINT8	= 0 ; Pin Change Enable Mask bit 8
.equ	PCINT9	= 1 ; Pin Change Enable Mask bit 9
.equ	PCINT10	= 2 ; Pin Change Enable Mask bit 10
.equ	PCINT11	= 3 ; Pin Change Enable Mask bit 11
.equ	PCINT12	= 4 ; Pin Change Enable Mask bit 12
.equ	PCINT13	= 5 ; Pin Change Enable Mask bit 13


; ***** MEM *****************
; EEST - EEPROM Status Register
.equ	EESYN0	= 0 ; EEPROM Syndrome
.equ	EESYN1	= 1 ; EEPROM Syndrome
.equ	EESYN2	= 2 ; EEPROM Syndrome
.equ	EESYN3	= 3 ; EEPROM Syndrome

; PGMST - Program Memory Status Register
.equ	PGMSYN0	= 0 ; Program Memory Syndrome
.equ	PGMSYN1	= 1 ; Program Memory Syndrome
.equ	PGMSYN2	= 2 ; Program Memory Syndrome
.equ	PGMSYN3	= 3 ; Program Memory Syndrome
.equ	PGMSYN4	= 4 ; Program Memory Syndrome


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

; DDRC - Port C Data Direction Register
.equ	DDRC0	= 0 ; Port C Data Direction Register Bit 0
.equ	DDRC1	= 1 ; Port C Data Direction Register Bit 1
.equ	DDRC2	= 2 ; Port C Data Direction Register Bit 2
.equ	DDRC3	= 3 ; Port C Data Direction Register Bit 3
.equ	DDRC4	= 4 ; Port C Data Direction Register Bit 4
.equ	DDRC5	= 5 ; Port C Data Direction Register Bit 5

; PINC - Port C Input Pins
.equ	PINC0	= 0 ; Port C Input Pins Bit 0
.equ	PINC1	= 1 ; Port C Input Pins Bit 1
.equ	PINC2	= 2 ; Port C Input Pins Bit 2
.equ	PINC3	= 3 ; Port C Input Pins Bit 3
.equ	PINC4	= 4 ; Port C Input Pins Bit 4
.equ	PINC5	= 5 ; Port C Input Pins Bit 5


; ***** RSSIB *****************
; RSCOM - RSSI Compensation Register
.equ	RSDC	= 0 ; RSSI Damping Compensation
.equ	RSIFC	= 1 ; RSSI IF Amplifier Compensation

; RSHDV - RSSI High Band Damping Value
.equ	RSHDV0	= 0 ; RSSI High Band Damping Value Bit 0
.equ	RSHDV1	= 1 ; RSSI High Band Damping Value Bit 1
.equ	RSHDV2	= 2 ; RSSI High Band Damping Value Bit 2
.equ	RSHDV3	= 3 ; RSSI High Band Damping Value Bit 3
.equ	RSHDV4	= 4 ; RSSI High Band Damping Value Bit 4
.equ	RSHDV5	= 5 ; RSSI High Band Damping Value Bit 5
.equ	RSHDV6	= 6 ; RSSI High Band Damping Value Bit 6
.equ	RSHDV7	= 7 ; RSSI High Band Damping Value Bit 7

; RSIFG - RSSI High IF Amplifier Gain
.equ	RSIFG0	= 0 ; RSSI High IF Amplifier Gain Bit 0
.equ	RSIFG1	= 1 ; RSSI High IF Amplifier Gain Bit 1
.equ	RSIFG2	= 2 ; RSSI High IF Amplifier Gain Bit 2
.equ	RSIFG3	= 3 ; RSSI High IF Amplifier Gain Bit 3
.equ	RSIFG4	= 4 ; RSSI High IF Amplifier Gain Bit 4
.equ	RSIFG5	= 5 ; RSSI High IF Amplifier Gain Bit 5
.equ	RSIFG6	= 6 ; RSSI High IF Amplifier Gain Bit 6
.equ	RSIFG7	= 7 ; RSSI High IF Amplifier Gain Bit 7

; RSLDV - RSSI Low Band Damping Value
.equ	RSLDV0	= 0 ; RSSI Low Band Damping Value Bit 0
.equ	RSLDV1	= 1 ; RSSI Low Band Damping Value Bit 1
.equ	RSLDV2	= 2 ; RSSI Low Band Damping Value Bit 2
.equ	RSLDV3	= 3 ; RSSI Low Band Damping Value Bit 3
.equ	RSLDV4	= 4 ; RSSI Low Band Damping Value Bit 4
.equ	RSLDV5	= 5 ; RSSI Low Band Damping Value Bit 5
.equ	RSLDV6	= 6 ; RSSI Low Band Damping Value Bit 6
.equ	RSLDV7	= 7 ; RSSI Low Band Damping Value Bit 7

; RSSAV - RSSI Average Value
.equ	RSSAV0	= 0 ; RSSI Average Value Bit 0
.equ	RSSAV1	= 1 ; RSSI Average Value Bit 1
.equ	RSSAV2	= 2 ; RSSI Average Value Bit 2
.equ	RSSAV3	= 3 ; RSSI Average Value Bit 3
.equ	RSSAV4	= 4 ; RSSI Average Value Bit 4
.equ	RSSAV5	= 5 ; RSSI Average Value Bit 5
.equ	RSSAV6	= 6 ; RSSI Average Value Bit 6
.equ	RSSAV7	= 7 ; RSSI Average Value Bit 7

; RSSC - RSSI Configuration Register
.equ	RSUP0	= 0 ; RSSI Update Period
.equ	RSUP1	= 1 ; RSSI Update Period
.equ	RSUP2	= 2 ; RSSI Update Period
.equ	RSUP3	= 3 ; RSSI Update Period
.equ	RSWLH	= 4 ; RSSI within Low and High Limits
.equ	RSHRX	= 5 ; RSSI High Band Reception
.equ	RSPKF	= 6 ; RSSI Peak Values to SFIFO

; RSSH - RSSI High Threshold for Signal Check
.equ	RSSH0	= 0 ; RSSI High Threshold for Signal Check Bit 0
.equ	RSSH1	= 1 ; RSSI High Threshold for Signal Check Bit 1
.equ	RSSH2	= 2 ; RSSI High Threshold for Signal Check Bit 2
.equ	RSSH3	= 3 ; RSSI High Threshold for Signal Check Bit 3
.equ	RSSH4	= 4 ; RSSI High Threshold for Signal Check Bit 4
.equ	RSSH5	= 5 ; RSSI High Threshold for Signal Check Bit 5
.equ	RSSH6	= 6 ; RSSI High Threshold for Signal Check Bit 6
.equ	RSSH7	= 7 ; RSSI High Threshold for Signal Check Bit 7

; RSSL - RSSI Low Threshold for Signal Check
.equ	RSSL0	= 0 ; RSSI Low Threshold for Signal Check Bit 0
.equ	RSSL1	= 1 ; RSSI Low Threshold for Signal Check Bit 1
.equ	RSSL2	= 2 ; RSSI Low Threshold for Signal Check Bit 2
.equ	RSSL3	= 3 ; RSSI Low Threshold for Signal Check Bit 3
.equ	RSSL4	= 4 ; RSSI Low Threshold for Signal Check Bit 4
.equ	RSSL5	= 5 ; RSSI Low Threshold for Signal Check Bit 5
.equ	RSSL6	= 6 ; RSSI Low Threshold for Signal Check Bit 6
.equ	RSSL7	= 7 ; RSSI Low Threshold for Signal Check Bit 7

; RSSPK - RSSI Peak Value
.equ	RSSPK0	= 0 ; RSSI Peak Value Bit 0
.equ	RSSPK1	= 1 ; RSSI Peak Value Bit 1
.equ	RSSPK2	= 2 ; RSSI Peak Value Bit 2
.equ	RSSPK3	= 3 ; RSSI Peak Value Bit 3
.equ	RSSPK4	= 4 ; RSSI Peak Value Bit 4
.equ	RSSPK5	= 5 ; RSSI Peak Value Bit 5
.equ	RSSPK6	= 6 ; RSSI Peak Value Bit 6
.equ	RSSPK7	= 7 ; RSSI Peak Value Bit 7


; ***** RXBUF *****************
; RXBC1 - Rx Buffer configuration register 1
.equ	RXCEA	= 0 ; RX CRC Enable data path A
.equ	RXCBLA0	= 1 ; Receive CRC Bit Lengths setting for data path A
.equ	RXCBLA1	= 2 ; Receive CRC Bit Lengths setting for data path A
.equ	RXMSBA	= 3 ; Receive Data MSB-first for data path A
.equ	RXCEB	= 4 ; RX CRC Enable data path B
.equ	RXCBLB0	= 5 ; Receive CRC Bit Lengths setting for data path B
.equ	RXCBLB1	= 6 ; Receive CRC Bit Lengths setting for data path B
.equ	RXMSBB	= 7 ; Receive Data MSB-first for data path B

; RXBC2 - Rx Buffer configuration register 2
.equ	RXBPB	= 0 ; RX Buffer Path B select signal
.equ	RXBF	= 1 ; RX Buffer Finish
.equ	RXBCLR	= 2 ; RX Buffer Clear

; RXCIHA - Rx CRC Init value (16-bit RXCI) high byte for data path A
.equ	RXCIHA0	= 0 ; Rx CRC Init value (16-bit RXCI) high byte for data path A Bit 0
.equ	RXCIHA1	= 1 ; Rx CRC Init value (16-bit RXCI) high byte for data path A Bit 1
.equ	RXCIHA2	= 2 ; Rx CRC Init value (16-bit RXCI) high byte for data path A Bit 2
.equ	RXCIHA3	= 3 ; Rx CRC Init value (16-bit RXCI) high byte for data path A Bit 3
.equ	RXCIHA4	= 4 ; Rx CRC Init value (16-bit RXCI) high byte for data path A Bit 4
.equ	RXCIHA5	= 5 ; Rx CRC Init value (16-bit RXCI) high byte for data path A Bit 5
.equ	RXCIHA6	= 6 ; Rx CRC Init value (16-bit RXCI) high byte for data path A Bit 6
.equ	RXCIHA7	= 7 ; Rx CRC Init value (16-bit RXCI) high byte for data path A Bit 7

; RXCIHB - Rx CRC Init value (16-bit RXCI) high byte for data path B
.equ	RXCIHB0	= 0 ; Rx CRC Init value (16-bit RXCI) high byte for data path B Bit 0
.equ	RXCIHB1	= 1 ; Rx CRC Init value (16-bit RXCI) high byte for data path B Bit 1
.equ	RXCIHB2	= 2 ; Rx CRC Init value (16-bit RXCI) high byte for data path B Bit 2
.equ	RXCIHB3	= 3 ; Rx CRC Init value (16-bit RXCI) high byte for data path B Bit 3
.equ	RXCIHB4	= 4 ; Rx CRC Init value (16-bit RXCI) high byte for data path B Bit 4
.equ	RXCIHB5	= 5 ; Rx CRC Init value (16-bit RXCI) high byte for data path B Bit 5
.equ	RXCIHB6	= 6 ; Rx CRC Init value (16-bit RXCI) high byte for data path B Bit 6
.equ	RXCIHB7	= 7 ; Rx CRC Init value (16-bit RXCI) high byte for data path B Bit 7

; RXCILA - Rx CRC Init value (16-bit RXCI) low byte for data path A
.equ	RXCILA0	= 0 ; Rx CRC Init value (16-bit RXCI) low byte for data path A Bit 0
.equ	RXCILA1	= 1 ; Rx CRC Init value (16-bit RXCI) low byte for data path A Bit 1
.equ	RXCILA2	= 2 ; Rx CRC Init value (16-bit RXCI) low byte for data path A Bit 2
.equ	RXCILA3	= 3 ; Rx CRC Init value (16-bit RXCI) low byte for data path A Bit 3
.equ	RXCILA4	= 4 ; Rx CRC Init value (16-bit RXCI) low byte for data path A Bit 4
.equ	RXCILA5	= 5 ; Rx CRC Init value (16-bit RXCI) low byte for data path A Bit 5
.equ	RXCILA6	= 6 ; Rx CRC Init value (16-bit RXCI) low byte for data path A Bit 6
.equ	RXCILA7	= 7 ; Rx CRC Init value (16-bit RXCI) low byte for data path A Bit 7

; RXCILB - Rx CRC Init value (16-bit RXCI) low byte for data path B
.equ	RXCILB0	= 0 ; Rx CRC Init value (16-bit RXCI) low byte for data path B Bit 0
.equ	RXCILB1	= 1 ; Rx CRC Init value (16-bit RXCI) low byte for data path B Bit 1
.equ	RXCILB2	= 2 ; Rx CRC Init value (16-bit RXCI) low byte for data path B Bit 2
.equ	RXCILB3	= 3 ; Rx CRC Init value (16-bit RXCI) low byte for data path B Bit 3
.equ	RXCILB4	= 4 ; Rx CRC Init value (16-bit RXCI) low byte for data path B Bit 4
.equ	RXCILB5	= 5 ; Rx CRC Init value (16-bit RXCI) low byte for data path B Bit 5
.equ	RXCILB6	= 6 ; Rx CRC Init value (16-bit RXCI) low byte for data path B Bit 6
.equ	RXCILB7	= 7 ; Rx CRC Init value (16-bit RXCI) low byte for data path B Bit 7

; RXCPHA - Rx CRC polynomial (15 bit RXCPA) high byte for data path A
.equ	RXCPHA0	= 0 ; Rx CRC polynomial (15 bit RXCPA) high byte for data path A Bit 0
.equ	RXCPHA1	= 1 ; Rx CRC polynomial (15 bit RXCPA) high byte for data path A Bit 1
.equ	RXCPHA2	= 2 ; Rx CRC polynomial (15 bit RXCPA) high byte for data path A Bit 2
.equ	RXCPHA3	= 3 ; Rx CRC polynomial (15 bit RXCPA) high byte for data path A Bit 3
.equ	RXCPHA4	= 4 ; Rx CRC polynomial (15 bit RXCPA) high byte for data path A Bit 4
.equ	RXCPHA5	= 5 ; Rx CRC polynomial (15 bit RXCPA) high byte for data path A Bit 5
.equ	RXCPHA6	= 6 ; Rx CRC polynomial (15 bit RXCPA) high byte for data path A Bit 6
.equ	RXCPHA7	= 7 ; Rx CRC polynomial (15 bit RXCPA) high byte for data path A Bit 7

; RXCPHB - Rx CRC polynomial (15 bit RXCPB) high byte for data path B
.equ	RXCPHB0	= 0 ; Rx CRC polynomial (15 bit RXCPB) high byte for data path B Bit 0
.equ	RXCPHB1	= 1 ; Rx CRC polynomial (15 bit RXCPB) high byte for data path B Bit 1
.equ	RXCPHB2	= 2 ; Rx CRC polynomial (15 bit RXCPB) high byte for data path B Bit 2
.equ	RXCPHB3	= 3 ; Rx CRC polynomial (15 bit RXCPB) high byte for data path B Bit 3
.equ	RXCPHB4	= 4 ; Rx CRC polynomial (15 bit RXCPB) high byte for data path B Bit 4
.equ	RXCPHB5	= 5 ; Rx CRC polynomial (15 bit RXCPB) high byte for data path B Bit 5
.equ	RXCPHB6	= 6 ; Rx CRC polynomial (15 bit RXCPB) high byte for data path B Bit 6
.equ	RXCPHB7	= 7 ; Rx CRC polynomial (15 bit RXCPB) high byte for data path B Bit 7

; RXCPLA - Rx CRC polynomial low byte for data path A
.equ	RXCPLA0	= 1 ; Rx CRC polynomial low byte for data path A Bit 0
.equ	RXCPLA1	= 2 ; Rx CRC polynomial low byte for data path A Bit 1
.equ	RXCPLA2	= 3 ; Rx CRC polynomial low byte for data path A Bit 2
.equ	RXCPLA3	= 4 ; Rx CRC polynomial low byte for data path A Bit 3
.equ	RXCPLA4	= 5 ; Rx CRC polynomial low byte for data path A Bit 4
.equ	RXCPLA5	= 6 ; Rx CRC polynomial low byte for data path A Bit 5
.equ	RXCPLA6	= 7 ; Rx CRC polynomial low byte for data path A Bit 6

; RXCPLB - Rx CRC polynomial low byte for data path B
.equ	RXCPLB0	= 1 ; Rx CRC polynomial low byte for data path B Bit 0
.equ	RXCPLB1	= 2 ; Rx CRC polynomial low byte for data path B Bit 1
.equ	RXCPLB2	= 3 ; Rx CRC polynomial low byte for data path B Bit 2
.equ	RXCPLB3	= 4 ; Rx CRC polynomial low byte for data path B Bit 3
.equ	RXCPLB4	= 5 ; Rx CRC polynomial low byte for data path B Bit 4
.equ	RXCPLB5	= 6 ; Rx CRC polynomial low byte for data path B Bit 5
.equ	RXCPLB6	= 7 ; Rx CRC polynomial low byte for data path B Bit 6

; RXCRHA - Rx CRC result register high byte for data path A
.equ	RXCRHA0	= 0 ; Rx CRC result register high byte for data path A Bit 0
.equ	RXCRHA1	= 1 ; Rx CRC result register high byte for data path A Bit 1
.equ	RXCRHA2	= 2 ; Rx CRC result register high byte for data path A Bit 2
.equ	RXCRHA3	= 3 ; Rx CRC result register high byte for data path A Bit 3
.equ	RXCRHA4	= 4 ; Rx CRC result register high byte for data path A Bit 4
.equ	RXCRHA5	= 5 ; Rx CRC result register high byte for data path A Bit 5
.equ	RXCRHA6	= 6 ; Rx CRC result register high byte for data path A Bit 6
.equ	RXCRHA7	= 7 ; Rx CRC result register high byte for data path A Bit 7

; RXCRHB - Rx CRC result register high byte for data path B
.equ	RXCRHB0	= 0 ; Rx CRC result register high byte for data path B Bit 0
.equ	RXCRHB1	= 1 ; Rx CRC result register high byte for data path B Bit 1
.equ	RXCRHB2	= 2 ; Rx CRC result register high byte for data path B Bit 2
.equ	RXCRHB3	= 3 ; Rx CRC result register high byte for data path B Bit 3
.equ	RXCRHB4	= 4 ; Rx CRC result register high byte for data path B Bit 4
.equ	RXCRHB5	= 5 ; Rx CRC result register high byte for data path B Bit 5
.equ	RXCRHB6	= 6 ; Rx CRC result register high byte for data path B Bit 6
.equ	RXCRHB7	= 7 ; Rx CRC result register high byte for data path B Bit 7

; RXCRLA - Rx CRC result register low byte for data path A
.equ	RXCRLA0	= 0 ; Rx CRC result register low byte for data path A Bit 0
.equ	RXCRLA1	= 1 ; Rx CRC result register low byte for data path A Bit 1
.equ	RXCRLA2	= 2 ; Rx CRC result register low byte for data path A Bit 2
.equ	RXCRLA3	= 3 ; Rx CRC result register low byte for data path A Bit 3
.equ	RXCRLA4	= 4 ; Rx CRC result register low byte for data path A Bit 4
.equ	RXCRLA5	= 5 ; Rx CRC result register low byte for data path A Bit 5
.equ	RXCRLA6	= 6 ; Rx CRC result register low byte for data path A Bit 6
.equ	RXCRLA7	= 7 ; Rx CRC result register low byte for data path A Bit 7

; RXCRLB - Rx CRC result register low byte for data path B
.equ	RXCRLB0	= 0 ; Rx CRC result register low byte for data path B Bit 0
.equ	RXCRLB1	= 1 ; Rx CRC result register low byte for data path B Bit 1
.equ	RXCRLB2	= 2 ; Rx CRC result register low byte for data path B Bit 2
.equ	RXCRLB3	= 3 ; Rx CRC result register low byte for data path B Bit 3
.equ	RXCRLB4	= 4 ; Rx CRC result register low byte for data path B Bit 4
.equ	RXCRLB5	= 5 ; Rx CRC result register low byte for data path B Bit 5
.equ	RXCRLB6	= 6 ; Rx CRC result register low byte for data path B Bit 6
.equ	RXCRLB7	= 7 ; Rx CRC result register low byte for data path B Bit 7

; RXCSBA - Rx CRC skip bit number for data path A
.equ	RXCSBA0	= 0 ; Rx CRC skip bit number for data path A Bit 0
.equ	RXCSBA1	= 1 ; Rx CRC skip bit number for data path A Bit 1
.equ	RXCSBA2	= 2 ; Rx CRC skip bit number for data path A Bit 2
.equ	RXCSBA3	= 3 ; Rx CRC skip bit number for data path A Bit 3
.equ	RXCSBA4	= 4 ; Rx CRC skip bit number for data path A Bit 4
.equ	RXCSBA5	= 5 ; Rx CRC skip bit number for data path A Bit 5
.equ	RXCSBA6	= 6 ; Rx CRC skip bit number for data path A Bit 6
.equ	RXCSBA7	= 7 ; Rx CRC skip bit number for data path A Bit 7

; RXCSBB - Rx CRC skip bit number for data path B
.equ	RXCSBB0	= 0 ; Rx CRC skip bit number for data path B Bit 0
.equ	RXCSBB1	= 1 ; Rx CRC skip bit number for data path B Bit 1
.equ	RXCSBB2	= 2 ; Rx CRC skip bit number for data path B Bit 2
.equ	RXCSBB3	= 3 ; Rx CRC skip bit number for data path B Bit 3
.equ	RXCSBB4	= 4 ; Rx CRC skip bit number for data path B Bit 4
.equ	RXCSBB5	= 5 ; Rx CRC skip bit number for data path B Bit 5
.equ	RXCSBB6	= 6 ; Rx CRC skip bit number for data path B Bit 6
.equ	RXCSBB7	= 7 ; Rx CRC skip bit number for data path B Bit 7

; RXDSA - Rx data shift register for data path A
.equ	RXDSA0	= 0 ; Rx data shift register for data path A Bit 0
.equ	RXDSA1	= 1 ; Rx data shift register for data path A Bit 1
.equ	RXDSA2	= 2 ; Rx data shift register for data path A Bit 2
.equ	RXDSA3	= 3 ; Rx data shift register for data path A Bit 3
.equ	RXDSA4	= 4 ; Rx data shift register for data path A Bit 4
.equ	RXDSA5	= 5 ; Rx data shift register for data path A Bit 5
.equ	RXDSA6	= 6 ; Rx data shift register for data path A Bit 6
.equ	RXDSA7	= 7 ; Rx data shift register for data path A Bit 7

; RXDSB - Rx data shift register for data path B
.equ	RXDSB0	= 0 ; Rx data shift register for data path B Bit 0
.equ	RXDSB1	= 1 ; Rx data shift register for data path B Bit 1
.equ	RXDSB2	= 2 ; Rx data shift register for data path B Bit 2
.equ	RXDSB3	= 3 ; Rx data shift register for data path B Bit 3
.equ	RXDSB4	= 4 ; Rx data shift register for data path B Bit 4
.equ	RXDSB5	= 5 ; Rx data shift register for data path B Bit 5
.equ	RXDSB6	= 6 ; Rx data shift register for data path B Bit 6
.equ	RXDSB7	= 7 ; Rx data shift register for data path B Bit 7

; RXTLHA - Rx data telegram length register high byte for data path A
.equ	RXTLHA0	= 0 ; RXTL (Receive Telegram Length) register High byte for data path A bit 0
.equ	RXTLHA1	= 1 ; RXTL (Receive Telegram Length) register High byte for data path A bit 1
.equ	RXTLHA2	= 2 ; RXTL (Receive Telegram Length) register High byte for data path A bit 2
.equ	RXTLHA3	= 3 ; RXTL (Receive Telegram Length) register High byte for data path A bit 3

; RXTLHB - Rx data telegram length register high byte for data path B
.equ	RXTLHB0	= 0 ; RXTL (Receive Telegram Length) register High byte for data path B bit 0
.equ	RXTLHB1	= 1 ; RXTL (Receive Telegram Length) register High byte for data path B bit 1
.equ	RXTLHB2	= 2 ; RXTL (Receive Telegram Length) register High byte for data path B bit 2
.equ	RXTLHB3	= 3 ; RXTL (Receive Telegram Length) register High byte for data path B bit 3

; RXTLLA - Rx data telegram length register low byte for data path A
.equ	RXTLLA0	= 0 ; Rx data telegram length register low byte for data path A Bit 0
.equ	RXTLLA1	= 1 ; Rx data telegram length register low byte for data path A Bit 1
.equ	RXTLLA2	= 2 ; Rx data telegram length register low byte for data path A Bit 2
.equ	RXTLLA3	= 3 ; Rx data telegram length register low byte for data path A Bit 3
.equ	RXTLLA4	= 4 ; Rx data telegram length register low byte for data path A Bit 4
.equ	RXTLLA5	= 5 ; Rx data telegram length register low byte for data path A Bit 5
.equ	RXTLLA6	= 6 ; Rx data telegram length register low byte for data path A Bit 6
.equ	RXTLLA7	= 7 ; Rx data telegram length register low byte for data path A Bit 7

; RXTLLB - Rx data telegram length register low byte for data path B
.equ	RXTLLB0	= 0 ; Rx data telegram length register low byte for data path B Bit 0
.equ	RXTLLB1	= 1 ; Rx data telegram length register low byte for data path B Bit 1
.equ	RXTLLB2	= 2 ; Rx data telegram length register low byte for data path B Bit 2
.equ	RXTLLB3	= 3 ; Rx data telegram length register low byte for data path B Bit 3
.equ	RXTLLB4	= 4 ; Rx data telegram length register low byte for data path B Bit 4
.equ	RXTLLB5	= 5 ; Rx data telegram length register low byte for data path B Bit 5
.equ	RXTLLB6	= 6 ; Rx data telegram length register low byte for data path B Bit 6
.equ	RXTLLB7	= 7 ; Rx data telegram length register low byte for data path B Bit 7


; ***** RXDSP *****************
; EOTCA - End Of Telegram Conditions for path A
.equ	CARFEA	= 0 ; CARrier check Failed Enable for path A
.equ	AMPFEA	= 1 ; AMPlitude Failed Enable for path A
.equ	SYTFEA	= 2 ; SYmbol Timing check Failed Enable for path A
.equ	MANFEA	= 3 ; MANchester Coding Failed Enable for path A
.equ	TMOFEA	= 4 ; Time-Out Fail Enable on path A
.equ	TELREA	= 5 ; Telegram Length Reached Enable on path A
.equ	RRFEA	= 6 ; RSSI Range Fail Enable on path A
.equ	EOTBFE	= 7 ; End Of Telegram on path B Fail Enable

; EOTCB - End Of Telegram Conditions for path B
.equ	CARFEB	= 0 ; CARrier check Failed Enable for path B
.equ	AMPFEB	= 1 ; AMPlitude Failed Enable for path B
.equ	SYTFEB	= 2 ; SYmbol Timing check Failed Enable for path B
.equ	MANFEB	= 3 ; MANchester Coding Failed Enable for path B
.equ	TMOFEB	= 4 ; Time-Out Fail Enable on path B
.equ	TELREB	= 5 ; Telegram Length Reached Enable on path B
.equ	RRFEB	= 6 ; RSSI Range Fail Enable on path B
.equ	EOTAFE	= 7 ; End Of Telegram on path B Fail Enable

; EOTSA - End Of Telegram Status on path A
.equ	CARFA	= 0 ; CARrier check Failed on path A
.equ	AMPFA	= 1 ; AMPlitude Failed on path A
.equ	SYTFA	= 2 ; SYmbol Timing check Failed on path A
.equ	MANFA	= 3 ; MANchester coding Failed on path A
.equ	TMOFA	= 4 ; Time-Out Fail on path A
.equ	TELRA	= 5 ; Telegram Length Reached on path A
.equ	RRFA	= 6 ; RSSI Range Fail on path A
.equ	EOTBF	= 7 ; End Of Telegram on path B Flag

; EOTSB - End Of Telegram Status on path B
.equ	CARFB	= 0 ; CARrier check Failed on path B
.equ	AMPFB	= 1 ; AMPlitude Failed on path B
.equ	SYTFB	= 2 ; SYmbol Timing check Failed on path B
.equ	MANFB	= 3 ; MANchester coding Failed on path B
.equ	TMOFB	= 4 ; Time-Out Fail on path B
.equ	TELRB	= 5 ; Telegram Length Reached on path B
.equ	RRFB	= 6 ; RSSI Range Fail on path B
.equ	EOTAF	= 7 ; End Of Telegram on path A Flag

; RDCR - Rx DSP control register
.equ	RDPU	= 0 ; Rx DSP Power Up
.equ	ADIVEN	= 1 ; Divided ADC clock enable
.equ	RDEN	= 2 ; Rx DSP enable

; RDOCR - Rx DSP output control
.equ	TMDS0	= 1 ; Transparent Mode Data Select
.equ	TMDS1	= 2 ; Transparent Mode Data Select
.equ	ETRPA	= 3 ; Enable Transparent Path A
.equ	ETRPB	= 4 ; Enable Transparent Path B
.equ	RDSIDA	= 5 ; Rx DSP Start bit Is Data for path A
.equ	RDSIDB	= 6 ; Rx DSP Start bit Is Data for path B

; RDSIFR - Rx DSP status interrupt flag register
.equ	NBITA	= 0 ; New Bit on Rx path A
.equ	NBITB	= 1 ; New Bit on Rx path B
.equ	EOTA	= 2 ; End Of Telegram on path A
.equ	EOTB	= 3 ; End Of Telegram on path B
.equ	SOTA	= 4 ; Start Of Telegram on path A
.equ	SOTB	= 5 ; Start Of Telegram on path B
.equ	WCOA	= 6 ; Wake Conditions Ok on path A
.equ	WCOB	= 7 ; Wake Conditions Ok on path B

; RDSIMR - Rx DSP status interrupt mask register
.equ	NBITAM	= 0 ; New bit on Rx path A interrupt mask register
.equ	NBITBM	= 1 ; New bit on Rx path B interrupt mask register
.equ	EOTAM	= 2 ; End Of Telegram on Rx path A interrupt mask register
.equ	EOTBM	= 3 ; End Of Telegram on Rx path B interrupt mask register
.equ	SOTAM	= 4 ; Start Of Telegram on Rx path A interrupt mask register
.equ	SOTBM	= 5 ; Start Of Telegram on Rx path B interrupt mask register
.equ	WCOAM	= 6 ; Wake Conditions Ok on path A interrupt mask register
.equ	WCOBM	= 7 ; Wake Conditions Ok on path B interrupt mask register

; SOTCA - Start Of Telegram Conditions for path A
.equ	CAROEA	= 0 ; CARrier check Ok Enabled for path A
.equ	AMPOEA	= 1 ; AMPlitude Ok Enabled for path A
.equ	SYTOEA	= 2 ; Symbol Timing Ok Enabled for path A
.equ	MANOEA	= 3 ; Manchester Coding Ok Enabled for path A
.equ	WUPEA	= 4 ; Wake Up Pattern match Enabled for path A
.equ	SFIDEA	= 5 ; Start of Frame IDentifier match Enabled for path A
.equ	RROEA	= 6 ; RSSI Range OK Enable for path A
.equ	WCOBOE	= 7 ; Wake Check OK from path B Ok Enable

; SOTCB - Start Of Telegram Conditions for path B
.equ	CAROEB	= 0 ; CARrier check Ok Enabled for path B
.equ	AMPOEB	= 1 ; AMPlitude Ok Enabled for path B
.equ	SYTOEB	= 2 ; Symbol Timing Ok Enabled for path B
.equ	MANOEB	= 3 ; Manchester Coding Ok Enabled for path B
.equ	WUPEB	= 4 ; Wake Up Pattern match Enabled for path B
.equ	SFIDEB	= 5 ; Start of Frame IDentifier match Enabled for path B
.equ	RROEB	= 6 ; RSSI Range OK Enable for path B
.equ	WCOAOE	= 7 ; Wake Check OK from path A Ok Enable

; SOTSA - Start Of Telegram Status for path A
.equ	CAROA	= 0 ; CARrier check Ok on path A
.equ	AMPOA	= 1 ; AMPlitude Ok on path A
.equ	SYTOA	= 2 ; Symbol Timing Ok on path A
.equ	MANOA	= 3 ; Manchester Coding Ok on path A
.equ	WUPOA	= 4 ; Wake Up Pattern matched on path A
.equ	SFIDOA	= 5 ; Start of Frame IDentifier matched on path A
.equ	RROA	= 6 ; RSSI Range Ok on Path A
.equ	WCOBO	= 7 ; Wake Check Ok on path B Ok

; SOTSB - Start Of Telegram Status for path B
.equ	CAROB	= 0 ; CARrier check Ok on path B
.equ	AMPOB	= 1 ; AMPlitude Ok on path B
.equ	SYTOB	= 2 ; Symbol Timing Ok on path B
.equ	MANOB	= 3 ; Manchester Coding Ok on path B
.equ	WUPOB	= 4 ; Wake Up Pattern matched on path B
.equ	SFIDOB	= 5 ; Start of Frame IDentifier matched on path B
.equ	RROB	= 6 ; RSSI Range Ok on Path B
.equ	WCOAO	= 7 ; Wake Check Ok on path A Ok

; TESRA - Telegram Status Register on Path A
.equ	CRCOA	= 0 ; Cyclic Redundancy Check Ok on path A
.equ	EOTLA0	= 1 ; End of Telegram Location on path A
.equ	EOTLA1	= 2 ; End of Telegram Location on path A

; TESRB - Telegram Status Register on Path B
.equ	CRCOB	= 0 ; Cyclic Redundancy Check Ok on path B
.equ	EOTLB0	= 1 ; End of Telegram Location on path B
.equ	EOTLB1	= 2 ; End of Telegram Location on path B


; ***** SFIFO *****************
; SFC - Support FIFO Configuration Register
.equ	SFFLC0	= 0 ; Support FIFO Fill-Level Configuration
.equ	SFFLC1	= 1 ; Support FIFO Fill-Level Configuration
.equ	SFFLC2	= 2 ; Support FIFO Fill-Level Configuration
.equ	SFFLC3	= 3 ; Support FIFO Fill-Level Configuration
.equ	SFFLC4	= 4 ; Support FIFO Fill-Level Configuration
.equ	SFDRA	= 7 ; Support FIFO Direct Read Access Operational Mode

; SFD - Support FIFO Data Register
.equ	SFD0	= 0 ; Support FIFO Data Register Bit 0
.equ	SFD1	= 1 ; Support FIFO Data Register Bit 1
.equ	SFD2	= 2 ; Support FIFO Data Register Bit 2
.equ	SFD3	= 3 ; Support FIFO Data Register Bit 3
.equ	SFD4	= 4 ; Support FIFO Data Register Bit 4
.equ	SFD5	= 5 ; Support FIFO Data Register Bit 5
.equ	SFD6	= 6 ; Support FIFO Data Register Bit 6
.equ	SFD7	= 7 ; Support FIFO Data Register Bit 7

; SFI - Support FIFO Interrupt Mask Register
.equ	SFFLIM	= 0 ; Support FIFO Fill-level Interrupt Mask
.equ	SFERIM	= 1 ; Support FIFO Error Interrupt Mask

; SFL - Support FIFO Fill Level Register
.equ	SFFLS0	= 0 ; Support FIFO Fill Level Status
.equ	SFFLS1	= 1 ; Support FIFO Fill Level Status
.equ	SFFLS2	= 2 ; Support FIFO Fill Level Status
.equ	SFFLS3	= 3 ; Support FIFO Fill Level Status
.equ	SFFLS4	= 4 ; Support FIFO Fill Level Status
.equ	SFCLR	= 7 ; Support FIFO Clear

; SFRP - Support FIFO Read Pointer
.equ	SFRP0	= 0 ; Support FIFO Read Pointer
.equ	SFRP1	= 1 ; Support FIFO Read Pointer
.equ	SFRP2	= 2 ; Support FIFO Read Pointer
.equ	SFRP3	= 3 ; Support FIFO Read Pointer
.equ	SFRP4	= 4 ; Support FIFO Read Pointer

; SFS - Support FIFO Status Register
.equ	SFFLRF	= 0 ; Support FIFO Fill-Level Reached Status Flag
.equ	SFUFL	= 1 ; Support FIFO Underflow Flag
.equ	SFOFL	= 2 ; Support FIFO Overflow Flag

; SFWP - Support FIFO Write Pointer
.equ	SFWP0	= 0 ; Support FIFO Write Pointer
.equ	SFWP1	= 1 ; Support FIFO Write Pointer
.equ	SFWP2	= 2 ; Support FIFO Write Pointer
.equ	SFWP3	= 3 ; Support FIFO Write Pointer
.equ	SFWP4	= 4 ; Support FIFO Write Pointer


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
.equ	RXIF	= 4 ; Rx Buffer Interrupt Flag
.equ	TXIF	= 5 ; Tx Buffer Interrupt Flag
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

; SFFR - SPI FIFO Fill Status Register
.equ	RFL0	= 0 ; SPI Receive Buffer Fill Level
.equ	RFL1	= 1 ; SPI Receive Buffer Fill Level
.equ	RFL2	= 2 ; SPI Receive Buffer Fill Level
.equ	RFC	= 3 ; SPI Rx Buffer Clear
.equ	TFL0	= 4 ; SPI Transmit Buffer Fill Level
.equ	TFL1	= 5 ; SPI Transmit Buffer Fill Level
.equ	TFL2	= 6 ; SPI Transmit Buffer Fill Level
.equ	TFC	= 7 ; SPI Tx Buffer Clear

; SFIR - SPI FIFO Interrupt Register
.equ	RIL0	= 0 ; SPI Receive Buffer Interrupt Level
.equ	RIL1	= 1 ; SPI Receive Buffer Interrupt Level
.equ	RIL2	= 2 ; SPI Receive Buffer Interrupt Level
.equ	SRIE	= 3 ; SPI Rx Buffer Interrupt Enable
.equ	TIL0	= 4 ; SPI Transmit Buffer Interrupt Level
.equ	TIL1	= 5 ; SPI Transmit Buffer Interrupt Level
.equ	TIL2	= 6 ; SPI Transmit Buffer Interrupt Level
.equ	STIE	= 7 ; SPI Tx Buffer Interrupt Enable


; ***** SSM *****************
; EOTC1A - End Of Telegram Conditions 1 for Path A
.equ	CARFEA1	= 0 ; CARrier check Failed Enable for path A
.equ	AMPFEA1	= 1 ; AMPlitude Failed Enable for path A
.equ	SYTFEA1	= 2 ; SYmbol Timing check Failed Enable for Path A
.equ	MANFEA1	= 3 ; MANchester Coding Failed Enable for Path A
.equ	TMOFEA1	= 4 ; Time-Out Fail Enable on Path A
.equ	TELREA1	= 5 ; Telegram Length Reached Enable on Path A
.equ	RRFEA1	= 6 ; RSSI Range Fail Enable on Path A
.equ	EOTBFE1	= 7 ; End Of Telegram on Path B Fail Enable

; EOTC1B - End Of Telegram Conditions 1 for Path B
.equ	CARFEB1	= 0 ; CARrier check Failed Enable for path B
.equ	AMPFEB1	= 1 ; AMPlitude Failed Enable for path B
.equ	SYTFEB1	= 2 ; SYmbol Timing check Failed Enable for Path B
.equ	MANFEB1	= 3 ; MANchester Coding Failed Enable for Path B
.equ	TMOFEB1	= 4 ; Time-Out Fail Enable on Path B
.equ	TELREB1	= 5 ; Telegram Length Reached Enable on Path B
.equ	RRFEB1	= 6 ; RSSI Range Fail Enable on Path B
.equ	EOTAFE1	= 7 ; End Of Telegram on Path B Fail Enable

; EOTC2A - End Of Telegram Conditions 2 for Path A
.equ	CARFEA2	= 0 ; CARrier check Failed Enable for path A
.equ	AMPFEA2	= 1 ; AMPlitude Failed Enable for path A
.equ	SYTFEA2	= 2 ; SYmbol Timing check Failed Enable for Path A
.equ	MANFEA2	= 3 ; MANchester Coding Failed Enable for Path A
.equ	TMOFEA2	= 4 ; Time-Out Fail Enable on Path A
.equ	TELREA2	= 5 ; Telegram Length Reached Enable on Path A
.equ	RRFEA2	= 6 ; RSSI Range Fail Enable on Path A
.equ	EOTBFE2	= 7 ; End Of Telegram on Path B Fail Enable

; EOTC2B - End Of Telegram Conditions 2 for Path B
.equ	CARFEB2	= 0 ; CARrier check Failed Enable for path B
.equ	AMPFEB2	= 1 ; AMPlitude Failed Enable for path B
.equ	SYTFEB2	= 2 ; SYmbol Timing check Failed Enable for Path B
.equ	MANFEB2	= 3 ; MANchester Coding Failed Enable for Path B
.equ	TMOFEB2	= 4 ; Time-Out Fail Enable on Path B
.equ	TELREB2	= 5 ; Telegram Length Reached Enable on Path B
.equ	RRFEB2	= 6 ; RSSI Range Fail Enable on Path B
.equ	EOTAFE2	= 7 ; End Of Telegram on Path B Fail Enable

; EOTC3A - End Of Telegram Conditions 3 for Path A
.equ	CARFEA3	= 0 ; CARrier check Failed Enable for path A
.equ	AMPFEA3	= 1 ; AMPlitude Failed Enable for path A
.equ	SYTFEA3	= 2 ; SYmbol Timing check Failed Enable for Path A
.equ	MANFEA3	= 3 ; MANchester Coding Failed Enable for Path A
.equ	TMOFEA3	= 4 ; Time-Out Fail Enable on Path A
.equ	TELREA3	= 5 ; Telegram Length Reached Enable on Path A
.equ	RRFEA3	= 6 ; RSSI Range Fail Enable on Path A
.equ	EOTBFE3	= 7 ; End Of Telegram on Path B Fail Enable

; EOTC3B - End Of Telegram Conditions 3 for Path B
.equ	CARFEB3	= 0 ; CARrier check Failed Enable for path B
.equ	AMPFEB3	= 1 ; AMPlitude Failed Enable for path B
.equ	SYTFEB3	= 2 ; SYmbol Timing check Failed Enable for Path B
.equ	MANFEB3	= 3 ; MANchester Coding Failed Enable for Path B
.equ	TMOFEB3	= 4 ; Time-Out Fail Enable on Path B
.equ	TELREB3	= 5 ; Telegram Length Reached Enable on Path B
.equ	RRFEB3	= 6 ; RSSI Range Fail Enable on Path B
.equ	EOTAFE3	= 7 ; End Of Telegram on Path B Fail Enable

; GTCR - Get Telegram Control Register
.equ	RXTEHA	= 0 ; Rx Telegram End Handling Path A
.equ	GAPMA	= 1 ; Gap Mode Path A
.equ	DARA	= 2 ; Demodulator Automatic Restart on Path A
.equ	IWUPA	= 3 ; Intermittent WUP Mode Path A
.equ	RXTEHB	= 4 ; Rx Telegram End Handling Path B
.equ	GAPMB	= 5 ; Gap Mode Path B
.equ	DARB	= 6 ; Demodulator Automatic Restart on Path B
.equ	IWUPB	= 7 ; Intermittent WUP Mode Path B

; MSMCR1 - Master State Machine Control Register 1
.equ	MSMSM00	= 0 ; Master State Machine SubState Machine Select 0
.equ	MSMSM01	= 1 ; Master State Machine SubState Machine Select 0
.equ	MSMSM02	= 2 ; Master State Machine SubState Machine Select 0
.equ	MSMSM03	= 3 ; Master State Machine SubState Machine Select 0
.equ	MSMSM10	= 4 ; Master State Machine SubState Machine Select 1
.equ	MSMSM11	= 5 ; Master State Machine SubState Machine Select 1
.equ	MSMSM12	= 6 ; Master State Machine SubState Machine Select 1
.equ	MSMSM13	= 7 ; Master State Machine SubState Machine Select 1

; MSMCR2 - Master State Machine Control Register 2
.equ	MSMSM20	= 0 ; Master State Machine SubState Machine Select 2
.equ	MSMSM21	= 1 ; Master State Machine SubState Machine Select 2
.equ	MSMSM22	= 2 ; Master State Machine SubState Machine Select 2
.equ	MSMSM23	= 3 ; Master State Machine SubState Machine Select 2
.equ	MSMSM30	= 4 ; Master State Machine SubState Machine Select 3
.equ	MSMSM31	= 5 ; Master State Machine SubState Machine Select 3
.equ	MSMSM32	= 6 ; Master State Machine SubState Machine Select 3
.equ	MSMSM33	= 7 ; Master State Machine SubState Machine Select 3

; MSMCR3 - Master State Machine Control Register 3
.equ	MSMSM40	= 0 ; Master State Machine SubState Machine Select 4
.equ	MSMSM41	= 1 ; Master State Machine SubState Machine Select 4
.equ	MSMSM42	= 2 ; Master State Machine SubState Machine Select 4
.equ	MSMSM43	= 3 ; Master State Machine SubState Machine Select 4
.equ	MSMSM50	= 4 ; Master State Machine SubState Machine Select 5
.equ	MSMSM51	= 5 ; Master State Machine SubState Machine Select 5
.equ	MSMSM52	= 6 ; Master State Machine SubState Machine Select 5
.equ	MSMSM53	= 7 ; Master State Machine SubState Machine Select 5

; MSMCR4 - Master State Machine Control Register 4
.equ	MSMSM60	= 0 ; Master State Machine SubState Machine Select 6
.equ	MSMSM61	= 1 ; Master State Machine SubState Machine Select 6
.equ	MSMSM62	= 2 ; Master State Machine SubState Machine Select 6
.equ	MSMSM63	= 3 ; Master State Machine SubState Machine Select 6
.equ	MSMSM70	= 4 ; Master State Machine SubState Machine Select 7
.equ	MSMSM71	= 5 ; Master State Machine SubState Machine Select 7
.equ	MSMSM72	= 6 ; Master State Machine SubState Machine Select 7
.equ	MSMSM73	= 7 ; Master State Machine SubState Machine Select 7

; MSMSTR - Master State Machine state register
.equ	SSMMST0	= 0 ; Sequencer State Machine Master State
.equ	SSMMST1	= 1 ; Sequencer State Machine Master State
.equ	SSMMST2	= 2 ; Sequencer State Machine Master State
.equ	SSMMST3	= 3 ; Sequencer State Machine Master State
.equ	SSMMST4	= 4 ; Sequencer State Machine Master State

; SOTC1A - Start Of Telegram Conditions 1 for Path A
.equ	CAROEA1	= 0 ; CARrier check Ok Enabled for path A
.equ	AMPOEA1	= 1 ; AMPlitude Ok Enabled for path A
.equ	SYTOEA1	= 2 ; Symbol Timing Ok Enabled for path A
.equ	MANOEA1	= 3 ; Manchester Coding Ok Enabled for path A
.equ	WUPEA1	= 4 ; Wake Up Pattern match Enabled for path A
.equ	SFIDEA1	= 5 ; Start of Frame IDentifier match Enabled for path A
.equ	RROEA1	= 6 ; RSSI Range OK Enable for path A
.equ	WCOBOE1	= 7 ; Wake Check OK from path B Ok Enable

; SOTC1B - Start Of Telegram Conditions 1 for Path B
.equ	CAROEB1	= 0 ; CARrier check Ok Enabled for path B
.equ	AMPOEB1	= 1 ; AMPlitude Ok Enabled for path B
.equ	SYTOEB1	= 2 ; Symbol Timing Ok Enabled for path B
.equ	MANOEB1	= 3 ; Manchester Coding Ok Enabled for path B
.equ	WUPEB1	= 4 ; Wake Up Pattern match Enabled for path B
.equ	SFIDEB1	= 5 ; Start of Frame IDentifier match Enabled for path B
.equ	RROEB1	= 6 ; RSSI Range Ok on Path A
.equ	WCOAOE1	= 7 ; Wake Check Ok on path B Ok

; SOTC2A - Start Of Telegram Conditions 2 for Path A
.equ	CAROEA2	= 0 ; CARrier check Ok Enabled for path A
.equ	AMPOEA2	= 1 ; AMPlitude Ok Enabled for path A
.equ	SYTOEA2	= 2 ; Symbol Timing Ok Enabled for path A
.equ	MANOEA2	= 3 ; Manchester Coding Ok Enabled for path A
.equ	WUPEA2	= 4 ; Wake Up Pattern match Enabled for path A
.equ	SFIDEA2	= 5 ; Start of Frame IDentifier match Enabled for path A
.equ	RROEA2	= 6 ; RSSI Range OK Enable for path A
.equ	WCOBOE2	= 7 ; Wake Check OK from path B Ok Enable

; SOTC2B - Start Of Telegram Conditions 2 for Path B
.equ	CAROEB2	= 0 ; CARrier check Ok Enabled for path B
.equ	AMPOEB2	= 1 ; AMPlitude Ok Enabled for path B
.equ	SYTOEB2	= 2 ; Symbol Timing Ok Enabled for path B
.equ	MANOEB2	= 3 ; Manchester Coding Ok Enabled for path B
.equ	WUPEB2	= 4 ; Wake Up Pattern match Enabled for path B
.equ	SFIDEB2	= 5 ; Start of Frame IDentifier match Enabled for path B
.equ	RROEB2	= 6 ; RSSI Range Ok on Path A
.equ	WCOAOE2	= 7 ; Wake Check Ok on path B Ok

; SOTTOA - Start Of Telegram Time Out for path A
.equ	SOTTOA0	= 0 ; Start Of Telegram Time Out for path A Bit 0
.equ	SOTTOA1	= 1 ; Start Of Telegram Time Out for path A Bit 1
.equ	SOTTOA2	= 2 ; Start Of Telegram Time Out for path A Bit 2
.equ	SOTTOA3	= 3 ; Start Of Telegram Time Out for path A Bit 3
.equ	SOTTOA4	= 4 ; Start Of Telegram Time Out for path A Bit 4
.equ	SOTTOA5	= 5 ; Start Of Telegram Time Out for path A Bit 5
.equ	SOTTOA6	= 6 ; Start Of Telegram Time Out for path A Bit 6
.equ	SOTTOA7	= 7 ; Start Of Telegram Time Out for path A Bit 7

; SOTTOB - Start Of Telegram Time Out for path B
.equ	SOTTOB0	= 0 ; Start Of Telegram Time Out for path B Bit 0
.equ	SOTTOB1	= 1 ; Start Of Telegram Time Out for path B Bit 1
.equ	SOTTOB2	= 2 ; Start Of Telegram Time Out for path B Bit 2
.equ	SOTTOB3	= 3 ; Start Of Telegram Time Out for path B Bit 3
.equ	SOTTOB4	= 4 ; Start Of Telegram Time Out for path B Bit 4
.equ	SOTTOB5	= 5 ; Start Of Telegram Time Out for path B Bit 5
.equ	SOTTOB6	= 6 ; Start Of Telegram Time Out for path B Bit 6
.equ	SOTTOB7	= 7 ; Start Of Telegram Time Out for path B Bit 7

; SSMCR - SSM Control Register
.equ	SSMTX	= 0 ; Sequencer State Machine Tx
.equ	SSMTM	= 1 ; Sequencer State Machine Temperature Measurement
.equ	SSMTGE	= 2 ; Sequencer State Machine Tx Gauss Enable
.equ	SSMTPE	= 3 ; Sequencer State Machine Tx Preemphasis Enable
.equ	SSMPVE	= 4 ; Sequencer State Machine PV Enable
.equ	SSMTAE	= 5 ; Sequencer State Machine Tx Ask-Shaping Enable
.equ	SETRPA	= 6 ; Sequencer State Machine Enable Transparent Path A
.equ	SETRPB	= 7 ; Sequencer State Machine Enable Transparent Path B

; SSMFBR - SSM Filter Bandwidth Register
.equ	SSMFID0	= 0 ; Sequencer State Machine Filter Delay
.equ	SSMFID1	= 1 ; Sequencer State Machine Filter Delay
.equ	SSMFID2	= 2 ; Sequencer State Machine Filter Delay
.equ	SSMDFDT	= 3 ; Sequencer State Machine Double Filter Delay Time
.equ	SSMHADT	= 4 ; Sequencer State Machine Half Antennadamping Delay Time
.equ	SSMPLDT	= 5 ; Sequencer State Machine PLL Lock Delay Time

; SSMFCR - SSM Flow Control Register
.equ	SSMIDSO	= 0 ; Sequencer State Machine ID Scan OK
.equ	SSMIDSF	= 1 ; Sequencer State Machine ID Scan Fail

; SSMIFR - SSM Interrupt Flag Register
.equ	SSMIF	= 0 ; Sequencer State Machine Interrupt Flag

; SSMIMR - SSM interrupt mask register
.equ	SSMIM	= 0 ; Sequencer State Machine Interrupt Mask

; SSMRCR - SSM Rx Control Register
.equ	SSMPA	= 0 ; Sequencer State Machine Path A
.equ	SSMPB	= 1 ; Sequencer State Machine Path B
.equ	SSMADA	= 2 ; Sequencer State Machine Antenna Damping Disable Path A
.equ	SSMADB	= 3 ; Sequencer State Machine Antenna Damping Disable Path B
.equ	SSMPVS	= 4 ; Sequencer State Machine Path Valid After SOT
.equ	SSMIFA	= 5 ; Sequencer State Machine IF Amplifier Enable
.equ	SSMIDSE	= 6 ; Sequencer State Machine ID Scan Enable
.equ	SSMTMOE	= 7 ; Sequencer State Machine Transparent Mode Output Enable

; SSMRR - SSM Run Register
.equ	SSMR	= 0 ; Sequencer State Machine Run
.equ	SSMST	= 1 ; Sequencer State Machine Stop

; SSMSR - SSM Status Register
.equ	SSMESM0	= 0 ; Sequencer State Machine Error State Machine
.equ	SSMESM1	= 1 ; Sequencer State Machine Error State Machine
.equ	SSMESM2	= 2 ; Sequencer State Machine Error State Machine
.equ	SSMESM3	= 3 ; Sequencer State Machine Error State Machine
.equ	SSMERR	= 7 ; Sequencer State Machine Error

; SSMSTR - SSM State Register
.equ	SSMSTA0	= 0 ; Sequencer State Machine State A
.equ	SSMSTA1	= 1 ; Sequencer State Machine State A
.equ	SSMSTA2	= 2 ; Sequencer State Machine State A
.equ	SSMSTA3	= 3 ; Sequencer State Machine State A
.equ	SSMSTA4	= 4 ; Sequencer State Machine State A
.equ	SSMSTA5	= 5 ; Sequencer State Machine State A

; SSMXSR - SSM extended State Register
.equ	SSMSTB0	= 0 ; Sequencer State Machine State B
.equ	SSMSTB1	= 1 ; Sequencer State Machine State B
.equ	SSMSTB2	= 2 ; Sequencer State Machine State B
.equ	SSMSTB3	= 3 ; Sequencer State Machine State B
.equ	SSMSTB4	= 4 ; Sequencer State Machine State B
.equ	SSMSTB5	= 5 ; Sequencer State Machine State B

; WCOTOA - Wait check ok time out for path A
.equ	WCOTOA0	= 0 ; Wait check ok time out for path A Bit 0
.equ	WCOTOA1	= 1 ; Wait check ok time out for path A Bit 1
.equ	WCOTOA2	= 2 ; Wait check ok time out for path A Bit 2
.equ	WCOTOA3	= 3 ; Wait check ok time out for path A Bit 3
.equ	WCOTOA4	= 4 ; Wait check ok time out for path A Bit 4
.equ	WCOTOA5	= 5 ; Wait check ok time out for path A Bit 5
.equ	WCOTOA6	= 6 ; Wait check ok time out for path A Bit 6
.equ	WCOTOA7	= 7 ; Wait check ok time out for path A Bit 7

; WCOTOB - Wait check ok time out for path B
.equ	WCOTOB0	= 0 ; Wait check ok time out for path B Bit 0
.equ	WCOTOB1	= 1 ; Wait check ok time out for path B Bit 1
.equ	WCOTOB2	= 2 ; Wait check ok time out for path B Bit 2
.equ	WCOTOB3	= 3 ; Wait check ok time out for path B Bit 3
.equ	WCOTOB4	= 4 ; Wait check ok time out for path B Bit 4
.equ	WCOTOB5	= 5 ; Wait check ok time out for path B Bit 5
.equ	WCOTOB6	= 6 ; Wait check ok time out for path B Bit 6
.equ	WCOTOB7	= 7 ; Wait check ok time out for path B Bit 7


; ***** SUP *****************
; CALRDY - Calibration ready signature
.equ	CALRDY0	= 0 ; Calibration ready signature Bit 0
.equ	CALRDY1	= 1 ; Calibration ready signature Bit 1
.equ	CALRDY2	= 2 ; Calibration ready signature Bit 2
.equ	CALRDY3	= 3 ; Calibration ready signature Bit 3
.equ	CALRDY4	= 4 ; Calibration ready signature Bit 4
.equ	CALRDY5	= 5 ; Calibration ready signature Bit 5
.equ	CALRDY6	= 6 ; Calibration ready signature Bit 6
.equ	CALRDY7	= 7 ; Calibration ready signature Bit 7

; SUPCA1 - Supply calibration register 1
.equ	PV22	= 2 ; Power Amplifier Voltage 2.2V
.equ	PVDIC	= 3 ; Power Amplifier Regulator Double Internal Current
.equ	PVCAL0	= 4 ; Power Amplifier Regulator Calibration
.equ	PVCAL1	= 5 ; Power Amplifier Regulator Calibration
.equ	PVCAL2	= 6 ; Power Amplifier Regulator Calibration
.equ	PVCAL3	= 7 ; Power Amplifier Regulator Calibration

; SUPCA2 - Supply calibration register 2
.equ	BGCAL0	= 0 ; Band Gap Calibration
.equ	BGCAL1	= 1 ; Band Gap Calibration
.equ	BGCAL2	= 2 ; Band Gap Calibration
.equ	BGCAL3	= 3 ; Band Gap Calibration

; SUPCA3 - Supply calibration register 3
.equ	ACAL4	= 0 ; AVCC Reset Threshold Calibration bit 4
.equ	ACAL5	= 1 ; AVCC Reset Threshold Calibration bit 5
.equ	ACAL6	= 2 ; AVCC Reset Threshold Calibration bit 6
.equ	ACAL7	= 3 ; AVCC Reset Threshold Calibration bit 7
.equ	DCAL4	= 4 ; DVCC Reset Threshold Calibration bit 4
.equ	DCAL5	= 5 ; DVCC Reset Threshold Calibration bit 5
.equ	DCAL6	= 6 ; DVCC Reset Threshold Calibration bit 6

; SUPCA4 - Supply calibration register 4
.equ	ACAL0	= 0 ; AVCC Regulator Output Voltage Calibration bit 0
.equ	ACAL1	= 1 ; AVCC Regulator Output Voltage Calibration bit 1
.equ	ACAL2	= 2 ; AVCC Regulator Output Voltage Calibration bit 2
.equ	ACAL3	= 3 ; AVCC Regulator Output Voltage Calibration bit 3
.equ	DCAL0	= 4 ; DVCC Regulator Output Voltage Calibration bit 0
.equ	DCAL1	= 5 ; DVCC Regulator Output Voltage Calibration bit 1
.equ	DCAL2	= 6 ; DVCC Regulator Output Voltage Calibration bit 2
.equ	DCAL3	= 7 ; DVCC Regulator Output Voltage Calibration bit 3

; SUPCR - Supply Control Register
.equ	AVCCRM	= 0 ; AVCC Reset Interrupt Mask Bit
.equ	AVCCLM	= 1 ; AVCC Low Interrupt Mask Bit
.equ	PVEN	= 2 ; Power amplifier Voltage supply Enable
.equ	DVDIS	= 4 ; DVCC Disable
.equ	AVEN	= 5 ; AVCC Enable
.equ	AVDIC	= 6 ; AVCC Double Internal Current

; SUPFR - Supply Interrupt Flag Register
.equ	AVCCRF	= 0 ; AVCC reset interrupt flag
.equ	AVCCLF	= 1 ; AVCC low interrupt flag

; VMCAL - Voltage Monitor Calibration register
.equ	VMCAL0	= 0 ; Voltage monitor calibration
.equ	VMCAL1	= 1 ; Voltage monitor calibration
.equ	VMCAL2	= 2 ; Voltage monitor calibration

; VMCSR - Voltage Monitor Control and Status Register
.equ	VMLS0	= 0 ; Voltage Monitor Level Select
.equ	VMLS1	= 1 ; Voltage Monitor Level Select
.equ	VMLS2	= 2 ; Voltage Monitor Level Select
.equ	VMLS3	= 3 ; Voltage Monitor Level Select
.equ	VMIM	= 4 ; Voltage Monitor Interrupt Mask
.equ	VMF	= 5 ; Voltage Monitor Flag


; ***** SYMCH *****************
; SYCA - Symbol check configuration for data path A
.equ	SYCSA0	= 0 ; Symbol Check check size for data path A
.equ	SYCSA1	= 1 ; Symbol Check check size for data path A
.equ	SYCSA2	= 2 ; Symbol Check check size for data path A
.equ	SYCSA3	= 3 ; Symbol Check check size for data path A
.equ	SYTLA0	= 4 ; Symbol timing limit for path A
.equ	SYTLA1	= 5 ; Symbol timing limit for path A
.equ	SYTLA2	= 6 ; Symbol timing limit for path A
.equ	SYTLA3	= 7 ; Symbol timing limit for path A

; SYCB - Symbol check configuration for data path B
.equ	SYCSB0	= 0 ; Symbol Check check size for data path B
.equ	SYCSB1	= 1 ; Symbol Check check size for data path B
.equ	SYCSB2	= 2 ; Symbol Check check size for data path B
.equ	SYCSB3	= 3 ; Symbol Check check size for data path B
.equ	SYTLB0	= 4 ; Symbol timing limit for path B
.equ	SYTLB1	= 5 ; Symbol timing limit for path B
.equ	SYTLB2	= 6 ; Symbol timing limit for path B
.equ	SYTLB3	= 7 ; Symbol timing limit for path B


; ***** TEMPER *****************
; TEMPH - Temperature High byte
.equ	TEMPH0	= 0 ; Temperature High byte Bit 0
.equ	TEMPH1	= 1 ; Temperature High byte Bit 1
.equ	TEMPH2	= 2 ; Temperature High byte Bit 2
.equ	TEMPH3	= 3 ; Temperature High byte Bit 3
.equ	TEMPH4	= 4 ; Temperature High byte Bit 4
.equ	TEMPH5	= 5 ; Temperature High byte Bit 5
.equ	TEMPH6	= 6 ; Temperature High byte Bit 6
.equ	TEMPH7	= 7 ; Temperature High byte Bit 7

; TEMPL - Temperature Low byte
.equ	TEMPL0	= 0 ; Temperature Low byte Bit 0
.equ	TEMPL1	= 1 ; Temperature Low byte Bit 1
.equ	TEMPL2	= 2 ; Temperature Low byte Bit 2
.equ	TEMPL3	= 3 ; Temperature Low byte Bit 3
.equ	TEMPL4	= 4 ; Temperature Low byte Bit 4
.equ	TEMPL5	= 5 ; Temperature Low byte Bit 5
.equ	TEMPL6	= 6 ; Temperature Low byte Bit 6
.equ	TEMPL7	= 7 ; Temperature Low byte Bit 7


; ***** TIMER0_WDT *****************
; T0CR - Timer0 Control Register
.equ	T0PS0	= 0 ; Timer 0 Prescaler Select
.equ	T0PS1	= 1 ; Timer 0 Prescaler Select
.equ	T0PS2	= 2 ; Timer 0 Prescaler Select
.equ	T0IE	= 3 ; Timer 0 Interrupt Enable
.equ	T0PR	= 4 ; Timer 0 Prescaler Reset

; T0IFR - Timer0 Interrupt Flag Register
.equ	T0F	= 0 ; Timer0 Flag

; WDTCR - Watchdog Timer0 control Register
.equ	WDPS0	= 0 ; Watchdog Prescaler Select
.equ	WDPS1	= 1 ; Watchdog Prescaler Select
.equ	WDPS2	= 2 ; Watchdog Prescaler Select
.equ	WDE	= 3 ; Watchdog System Reset Enable
.equ	WDCE	= 4 ; Watchdog Change Enable


; ***** TIMER1 *****************
; T1CNT - Timer1 Counter Register
.equ	T1CNT0	= 0 ; Timer1 Counter Register Bit 0
.equ	T1CNT1	= 1 ; Timer1 Counter Register Bit 1
.equ	T1CNT2	= 2 ; Timer1 Counter Register Bit 2
.equ	T1CNT3	= 3 ; Timer1 Counter Register Bit 3
.equ	T1CNT4	= 4 ; Timer1 Counter Register Bit 4
.equ	T1CNT5	= 5 ; Timer1 Counter Register Bit 5
.equ	T1CNT6	= 6 ; Timer1 Counter Register Bit 6
.equ	T1CNT7	= 7 ; Timer1 Counter Register Bit 7

; T1COR - Timer1 Compare Register
.equ	T1COR0	= 0 ; Timer1 Compare Register Bit 0
.equ	T1COR1	= 1 ; Timer1 Compare Register Bit 1
.equ	T1COR2	= 2 ; Timer1 Compare Register Bit 2
.equ	T1COR3	= 3 ; Timer1 Compare Register Bit 3
.equ	T1COR4	= 4 ; Timer1 Compare Register Bit 4
.equ	T1COR5	= 5 ; Timer1 Compare Register Bit 5
.equ	T1COR6	= 6 ; Timer1 Compare Register Bit 6
.equ	T1COR7	= 7 ; Timer1 Compare Register Bit 7

; T1CR - Timer1 control Register
.equ	T1OTM	= 0 ; Timer1 Overflow Toggle Mask
.equ	T1CTM	= 1 ; Timer1 Compare Toggle Mask
.equ	T1CRM	= 2 ; Timer1 Compare Reset Mask
.equ	T1TOP	= 4 ; Timer1 Toggle Output Preset
.equ	T1RES	= 5 ; Timer1 Reset
.equ	T1TOS	= 6 ; Timer1 Toggle with Start
.equ	T1ENA	= 7 ; Timer1 Enable

; T1IFR - Timer1 Interrupt Flag Register
.equ	T1OFF	= 0 ; Timer1 Overflow Flag
.equ	T1COF	= 1 ; Timer1 Compare Flag

; T1IMR - Timer1 Interrupt Mask Register
.equ	T1OIM	= 0 ; Timer1 Overflow Interrupt Mask
.equ	T1CIM	= 1 ; Timer1 Compare Interrupt Mask

; T1MR - Timer1 Mode Register
.equ	T1CS0	= 0 ; Timer1 Clock Select
.equ	T1CS1	= 1 ; Timer1 Clock Select
.equ	T1PS0	= 2 ; Timer1 Prescaler Select
.equ	T1PS1	= 3 ; Timer1 Prescaler Select
.equ	T1PS2	= 4 ; Timer1 Prescaler Select
.equ	T1PS3	= 5 ; Timer1 Prescaler Select
.equ	T1DC0	= 6 ; Timer1 Duty Cycle
.equ	T1DC1	= 7 ; Timer1 Duty Cycle


; ***** TIMER2 *****************
; T2CNT - Timer2 Counter Register
.equ	T2CNT0	= 0 ; Timer2 Counter Register Bit 0
.equ	T2CNT1	= 1 ; Timer2 Counter Register Bit 1
.equ	T2CNT2	= 2 ; Timer2 Counter Register Bit 2
.equ	T2CNT3	= 3 ; Timer2 Counter Register Bit 3
.equ	T2CNT4	= 4 ; Timer2 Counter Register Bit 4
.equ	T2CNT5	= 5 ; Timer2 Counter Register Bit 5
.equ	T2CNT6	= 6 ; Timer2 Counter Register Bit 6
.equ	T2CNT7	= 7 ; Timer2 Counter Register Bit 7

; T2COR - Timer2 Compare Register
.equ	T2COR0	= 0 ; Timer2 Compare Register Bit 0
.equ	T2COR1	= 1 ; Timer2 Compare Register Bit 1
.equ	T2COR2	= 2 ; Timer2 Compare Register Bit 2
.equ	T2COR3	= 3 ; Timer2 Compare Register Bit 3
.equ	T2COR4	= 4 ; Timer2 Compare Register Bit 4
.equ	T2COR5	= 5 ; Timer2 Compare Register Bit 5
.equ	T2COR6	= 6 ; Timer2 Compare Register Bit 6
.equ	T2COR7	= 7 ; Timer2 Compare Register Bit 7

; T2CR - Timer2 Control Register
.equ	T2OTM	= 0 ; Timer2 Overflow Toggle Mask
.equ	T2CTM	= 1 ; Timer2 Compare Toggle Mask
.equ	T2CRM	= 2 ; Timer2 Compare Reset Mask
.equ	T2TOP	= 4 ; Timer2 Toggle Output Preset
.equ	T2RES	= 5 ; Timer2 Reset
.equ	T2TOS	= 6 ; Timer2 Toggle with Start
.equ	T2ENA	= 7 ; Timer2 Enable

; T2IFR - Timer2 Interrupt Flag Register
.equ	T2OFF	= 0 ; Timer2 Overflow Flag
.equ	T2COF	= 1 ; Timer2 Compare Flag

; T2IMR - Timer2 Interrupt Mask Register
.equ	T2OIM	= 0 ; Timer2 Overflow Interrupt Mask
.equ	T2CIM	= 1 ; Timer2 Compare Interrupt Mask

; T2MR - Timer2 Mode Register
.equ	T2CS0	= 0 ; Timer2 Clock Select
.equ	T2CS1	= 1 ; Timer2 Clock Select
.equ	T2PS0	= 2 ; Timer2 Prescaler Select
.equ	T2PS1	= 3 ; Timer2 Prescaler Select
.equ	T2PS2	= 4 ; Timer2 Prescaler Select
.equ	T2PS3	= 5 ; Timer2 Prescaler Select
.equ	T2DC0	= 6 ; Timer2 Duty Cycle
.equ	T2DC1	= 7 ; Timer2 Duty Cycle


; ***** TIMER3 *****************
; T3CNT - Timer3 counter Register
.equ	T3CNTH0	= 0 ; Timer3 counter Register High Bit 8
.equ	T3CNTH1	= 1 ; Timer3 counter Register High Bit 9
.equ	T3CNTH2	= 2 ; Timer3 counter Register High Bit 10
.equ	T3CNTH3	= 3 ; Timer3 counter Register High Bit 11
.equ	T3CNTH4	= 4 ; Timer3 counter Register High Bit 12
.equ	T3CNTH5	= 5 ; Timer3 counter Register High Bit 13
.equ	T3CNTH6	= 6 ; Timer3 counter Register High Bit 14
.equ	T3CNTH7	= 7 ; Timer3 counter Register High Bit 15

.equ	T3CNTL0	= 0 ; Timer3 counter Register Low Bit 0
.equ	T3CNTL1	= 1 ; Timer3 counter Register Low Bit 1
.equ	T3CNTL2	= 2 ; Timer3 counter Register Low Bit 2
.equ	T3CNTL3	= 3 ; Timer3 counter Register Low Bit 3
.equ	T3CNTL4	= 4 ; Timer3 counter Register Low Bit 4
.equ	T3CNTL5	= 5 ; Timer3 counter Register Low Bit 5
.equ	T3CNTL6	= 6 ; Timer3 counter Register Low Bit 6
.equ	T3CNTL7	= 7 ; Timer3 counter Register Low Bit 7

; T3COR - Timer3 compare Register
.equ	T3CORH0	= 0 ; Timer3 compare Register High Bit 8
.equ	T3CORH1	= 1 ; Timer3 compare Register High Bit 9
.equ	T3CORH2	= 2 ; Timer3 compare Register High Bit 10
.equ	T3CORH3	= 3 ; Timer3 compare Register High Bit 11
.equ	T3CORH4	= 4 ; Timer3 compare Register High Bit 12
.equ	T3CORH5	= 5 ; Timer3 compare Register High Bit 13
.equ	T3CORH6	= 6 ; Timer3 compare Register High Bit 14
.equ	T3CORH7	= 7 ; Timer3 compare Register High Bit 15

.equ	T3CORL0	= 0 ; Timer3 compare Register Low Bit 0
.equ	T3CORL1	= 1 ; Timer3 compare Register Low Bit 1
.equ	T3CORL2	= 2 ; Timer3 compare Register Low Bit 2
.equ	T3CORL3	= 3 ; Timer3 compare Register Low Bit 3
.equ	T3CORL4	= 4 ; Timer3 compare Register Low Bit 4
.equ	T3CORL5	= 5 ; Timer3 compare Register Low Bit 5
.equ	T3CORL6	= 6 ; Timer3 compare Register Low Bit 6
.equ	T3CORL7	= 7 ; Timer3 compare Register Low Bit 7

; T3CR - Timer3 control Register
.equ	T3OTM	= 0 ; Timer3 Overflow Toggle Mask
.equ	T3CTM	= 1 ; Timer3 Compare Toggle Mask
.equ	T3CRM	= 2 ; Timer3 Compare Reset Mask
.equ	T3CPRM	= 3 ; Timer3 CaPture reset Mask
.equ	T3TOP	= 4 ; Timer3 Toggle Output Preset
.equ	T3RES	= 5 ; Timer3 Reset
.equ	T3TOS	= 6 ; Timer3 Toggle with Start
.equ	T3ENA	= 7 ; Timer3 Enable

; T3ICR - Timer3 input capture Register
.equ	T3ICRH0	= 0 ; Timer3 input capture Register High Bit 8
.equ	T3ICRH1	= 1 ; Timer3 input capture Register High Bit 9
.equ	T3ICRH2	= 2 ; Timer3 input capture Register High Bit 10
.equ	T3ICRH3	= 3 ; Timer3 input capture Register High Bit 11
.equ	T3ICRH4	= 4 ; Timer3 input capture Register High Bit 12
.equ	T3ICRH5	= 5 ; Timer3 input capture Register High Bit 13
.equ	T3ICRH6	= 6 ; Timer3 input capture Register High Bit 14
.equ	T3ICRH7	= 7 ; Timer3 input capture Register High Bit 15

.equ	T3ICRL0	= 0 ; Timer3 input capture Register Low Bit 0
.equ	T3ICRL1	= 1 ; Timer3 input capture Register Low Bit 1
.equ	T3ICRL2	= 2 ; Timer3 input capture Register Low Bit 2
.equ	T3ICRL3	= 3 ; Timer3 input capture Register Low Bit 3
.equ	T3ICRL4	= 4 ; Timer3 input capture Register Low Bit 4
.equ	T3ICRL5	= 5 ; Timer3 input capture Register Low Bit 5
.equ	T3ICRL6	= 6 ; Timer3 input capture Register Low Bit 6
.equ	T3ICRL7	= 7 ; Timer3 input capture Register Low Bit 7

; T3IFR - Timer3 interrupt flag Register
.equ	T3OFF	= 0 ; Timer3 OverFlow Flag
.equ	T3COF	= 1 ; Timer3 Compare Flag
.equ	T3ICF	= 2 ; Timer3 Input Capture Flag

; T3IMR - Timer3 interrupt mask Register
.equ	T3OIM	= 0 ; Timer3 Overflow Interrupt Mask
.equ	T3CIM	= 1 ; Timer3 Compare Interrupt Mask
.equ	T3CPIM	= 2 ; Timer3 Capture Interrupt Mask

; T3MRA - Timer3 mode Register
.equ	T3CS0	= 0 ; Timer 3 Clock Select
.equ	T3CS1	= 1 ; Timer 3 Clock Select
.equ	T3PS0	= 2 ; Timer3 Prescaler Select
.equ	T3PS1	= 3 ; Timer3 Prescaler Select
.equ	T3PS2	= 4 ; Timer3 Prescaler Select

; T3MRB - Timer3 mode Register
.equ	T3SCE	= 1 ; Timer3 Software Capture Enable
.equ	T3CNC	= 2 ; Timer3 input Capture Noise Canceller
.equ	T3CE0	= 3 ; Timer3 Capture Edge select
.equ	T3CE1	= 4 ; Timer3 Capture Edge select
.equ	T3ICS0	= 5 ; Timer3 Input Capture Select
.equ	T3ICS1	= 6 ; Timer3 Input Capture Select
.equ	T3ICS2	= 7 ; Timer3 Input Capture Select


; ***** TIMER4 *****************
; T4CNT - Timer4 counter Register
.equ	T4CNTH0	= 0 ; Timer4 counter Register High Bit 8
.equ	T4CNTH1	= 1 ; Timer4 counter Register High Bit 9
.equ	T4CNTH2	= 2 ; Timer4 counter Register High Bit 10
.equ	T4CNTH3	= 3 ; Timer4 counter Register High Bit 11
.equ	T4CNTH4	= 4 ; Timer4 counter Register High Bit 12
.equ	T4CNTH5	= 5 ; Timer4 counter Register High Bit 13
.equ	T4CNTH6	= 6 ; Timer4 counter Register High Bit 14
.equ	T4CNTH7	= 7 ; Timer4 counter Register High Bit 15

.equ	T4CNTL0	= 0 ; Timer4 counter Register Low Bit 0
.equ	T4CNTL1	= 1 ; Timer4 counter Register Low Bit 1
.equ	T4CNTL2	= 2 ; Timer4 counter Register Low Bit 2
.equ	T4CNTL3	= 3 ; Timer4 counter Register Low Bit 3
.equ	T4CNTL4	= 4 ; Timer4 counter Register Low Bit 4
.equ	T4CNTL5	= 5 ; Timer4 counter Register Low Bit 5
.equ	T4CNTL6	= 6 ; Timer4 counter Register Low Bit 6
.equ	T4CNTL7	= 7 ; Timer4 counter Register Low Bit 7

; T4COR - Timer4 compare Register
.equ	T4CORH0	= 0 ; Timer4 compare Register High Bit 8
.equ	T4CORH1	= 1 ; Timer4 compare Register High Bit 9
.equ	T4CORH2	= 2 ; Timer4 compare Register High Bit 10
.equ	T4CORH3	= 3 ; Timer4 compare Register High Bit 11
.equ	T4CORH4	= 4 ; Timer4 compare Register High Bit 12
.equ	T4CORH5	= 5 ; Timer4 compare Register High Bit 13
.equ	T4CORH6	= 6 ; Timer4 compare Register High Bit 14
.equ	T4CORH7	= 7 ; Timer4 compare Register High Bit 15

.equ	T4CORL0	= 0 ; Timer4 compare Register Low Bit 0
.equ	T4CORL1	= 1 ; Timer4 compare Register Low Bit 1
.equ	T4CORL2	= 2 ; Timer4 compare Register Low Bit 2
.equ	T4CORL3	= 3 ; Timer4 compare Register Low Bit 3
.equ	T4CORL4	= 4 ; Timer4 compare Register Low Bit 4
.equ	T4CORL5	= 5 ; Timer4 compare Register Low Bit 5
.equ	T4CORL6	= 6 ; Timer4 compare Register Low Bit 6
.equ	T4CORL7	= 7 ; Timer4 compare Register Low Bit 7

; T4CR - Timer4 control Register
.equ	T4OTM	= 0 ; Timer4 Overflow Toggle Mask
.equ	T4CTM	= 1 ; Timer4 Compare Toggle Mask
.equ	T4CRM	= 2 ; Timer4 Compare Reset Mask
.equ	T4CPRM	= 3 ; Timer4 CaPture reset Mask
.equ	T4TOP	= 4 ; Timer4 Toggle Output Preset
.equ	T4RES	= 5 ; Timer4 Reset
.equ	T4TOS	= 6 ; Timer4 Toggle with Start
.equ	T4ENA	= 7 ; Timer4 Enable

; T4ICR - Timer4 input capture Register
.equ	T4ICRH0	= 0 ; Timer4 input capture Register High Bit 8
.equ	T4ICRH1	= 1 ; Timer4 input capture Register High Bit 9
.equ	T4ICRH2	= 2 ; Timer4 input capture Register High Bit 10
.equ	T4ICRH3	= 3 ; Timer4 input capture Register High Bit 11
.equ	T4ICRH4	= 4 ; Timer4 input capture Register High Bit 12
.equ	T4ICRH5	= 5 ; Timer4 input capture Register High Bit 13
.equ	T4ICRH6	= 6 ; Timer4 input capture Register High Bit 14
.equ	T4ICRH7	= 7 ; Timer4 input capture Register High Bit 15

.equ	T4ICRL0	= 0 ; Timer4 input capture Register Low Bit 0
.equ	T4ICRL1	= 1 ; Timer4 input capture Register Low Bit 1
.equ	T4ICRL2	= 2 ; Timer4 input capture Register Low Bit 2
.equ	T4ICRL3	= 3 ; Timer4 input capture Register Low Bit 3
.equ	T4ICRL4	= 4 ; Timer4 input capture Register Low Bit 4
.equ	T4ICRL5	= 5 ; Timer4 input capture Register Low Bit 5
.equ	T4ICRL6	= 6 ; Timer4 input capture Register Low Bit 6
.equ	T4ICRL7	= 7 ; Timer4 input capture Register Low Bit 7

; T4IFR - Timer4 interrupt flag Register
.equ	T4OFF	= 0 ; Timer4 OverFlow Flag
.equ	T4COF	= 1 ; Timer4 Compare Flag
.equ	T4ICF	= 2 ; Timer4 Input Capture Flag

; T4IMR - Timer4 interrupt mask Register
.equ	T4OIM	= 0 ; Timer4 Overflow Interrupt Mask
.equ	T4CIM	= 1 ; Timer4 Compare Interrupt Mask
.equ	T4CPIM	= 2 ; Timer4 Capture Interrupt Mask

; T4MRA - Timer4 mode Register
.equ	T4CS0	= 0 ; Timer 4 Clock Select
.equ	T4CS1	= 1 ; Timer 4 Clock Select
.equ	T4PS0	= 2 ; Timer 4 Prescaler Select
.equ	T4PS1	= 3 ; Timer 4 Prescaler Select
.equ	T4PS2	= 4 ; Timer 4 Prescaler Select

; T4MRB - Timer4 mode Register
.equ	T4SCE	= 1 ; Timer4 Software Capture Enable
.equ	T4CNC	= 2 ; Timer4 input Capture Noise Canceller
.equ	T4CE0	= 3 ; Timer4 Capture Edge select
.equ	T4CE1	= 4 ; Timer4 Capture Edge select
.equ	T4ICS0	= 5 ; Timer4 Input Capture Select
.equ	T4ICS1	= 6 ; Timer4 Input Capture Select
.equ	T4ICS2	= 7 ; Timer4 Input Capture Select


; ***** TIMER5 *****************
; GTCCR - General Timer/Counter Control Register
.equ	PSR10	= 0 ; PreScaler Reset
.equ	TSM	= 7 ; Timer/Counter Synchronization Mode

; T5CCR - Timer5 Control Register
.equ	T5CS0	= 0 ; Timer5 Clock Select
.equ	T5CS1	= 1 ; Timer5 Clock Select
.equ	T5CS2	= 2 ; Timer5 Clock Select
.equ	T5CTC	= 3 ; Clear Timer5 on Compare Match

; T5CNT - Timer5 Counter
.equ	T5CNTH0	= 0 ; Timer5 Counter High Bit 8
.equ	T5CNTH1	= 1 ; Timer5 Counter High Bit 9
.equ	T5CNTH2	= 2 ; Timer5 Counter High Bit 10
.equ	T5CNTH3	= 3 ; Timer5 Counter High Bit 11
.equ	T5CNTH4	= 4 ; Timer5 Counter High Bit 12
.equ	T5CNTH5	= 5 ; Timer5 Counter High Bit 13
.equ	T5CNTH6	= 6 ; Timer5 Counter High Bit 14
.equ	T5CNTH7	= 7 ; Timer5 Counter High Bit 15

.equ	T5CNTL0	= 0 ; Timer5 Counter Low Bit 0
.equ	T5CNTL1	= 1 ; Timer5 Counter Low Bit 1
.equ	T5CNTL2	= 2 ; Timer5 Counter Low Bit 2
.equ	T5CNTL3	= 3 ; Timer5 Counter Low Bit 3
.equ	T5CNTL4	= 4 ; Timer5 Counter Low Bit 4
.equ	T5CNTL5	= 5 ; Timer5 Counter Low Bit 5
.equ	T5CNTL6	= 6 ; Timer5 Counter Low Bit 6
.equ	T5CNTL7	= 7 ; Timer5 Counter Low Bit 7

; T5IFR - Timer5 Interrupt Flag Register
.equ	T5OFF	= 0 ; Timer5 Output Overflow Flag
.equ	T5COF	= 1 ; Timer5 Output Compare Output Match Flag

; T5IMR - Timer5 Interrupt Mask Register
.equ	T5OIM	= 0 ; Timer5 Output Overflow Interrupt Mask
.equ	T5CIM	= 1 ; Timer5 Output Compare Interrupt Mask

; T5OCR - Timer5 Output Compare Register
.equ	T5OCRH0	= 0 ; Timer5 Output Compare Register High Bit 8
.equ	T5OCRH1	= 1 ; Timer5 Output Compare Register High Bit 9
.equ	T5OCRH2	= 2 ; Timer5 Output Compare Register High Bit 10
.equ	T5OCRH3	= 3 ; Timer5 Output Compare Register High Bit 11
.equ	T5OCRH4	= 4 ; Timer5 Output Compare Register High Bit 12
.equ	T5OCRH5	= 5 ; Timer5 Output Compare Register High Bit 13
.equ	T5OCRH6	= 6 ; Timer5 Output Compare Register High Bit 14
.equ	T5OCRH7	= 7 ; Timer5 Output Compare Register High Bit 15

.equ	T5OCRL0	= 0 ; Timer5 Output Compare Register Low Bit 0
.equ	T5OCRL1	= 1 ; Timer5 Output Compare Register Low Bit 1
.equ	T5OCRL2	= 2 ; Timer5 Output Compare Register Low Bit 2
.equ	T5OCRL3	= 3 ; Timer5 Output Compare Register Low Bit 3
.equ	T5OCRL4	= 4 ; Timer5 Output Compare Register Low Bit 4
.equ	T5OCRL5	= 5 ; Timer5 Output Compare Register Low Bit 5
.equ	T5OCRL6	= 6 ; Timer5 Output Compare Register Low Bit 6
.equ	T5OCRL7	= 7 ; Timer5 Output Compare Register Low Bit 7


; ***** TXM *****************
; TMCI - Tx Modulator CRC Init Value
.equ	TMCIH0	= 0 ; Tx Modulator CRC Init Value High Bit 8
.equ	TMCIH1	= 1 ; Tx Modulator CRC Init Value High Bit 9
.equ	TMCIH2	= 2 ; Tx Modulator CRC Init Value High Bit 10
.equ	TMCIH3	= 3 ; Tx Modulator CRC Init Value High Bit 11
.equ	TMCIH4	= 4 ; Tx Modulator CRC Init Value High Bit 12
.equ	TMCIH5	= 5 ; Tx Modulator CRC Init Value High Bit 13
.equ	TMCIH6	= 6 ; Tx Modulator CRC Init Value High Bit 14
.equ	TMCIH7	= 7 ; Tx Modulator CRC Init Value High Bit 15

.equ	TMCIL0	= 0 ; Tx Modulator CRC Init Value Low Bit 0
.equ	TMCIL1	= 1 ; Tx Modulator CRC Init Value Low Bit 1
.equ	TMCIL2	= 2 ; Tx Modulator CRC Init Value Low Bit 2
.equ	TMCIL3	= 3 ; Tx Modulator CRC Init Value Low Bit 3
.equ	TMCIL4	= 4 ; Tx Modulator CRC Init Value Low Bit 4
.equ	TMCIL5	= 5 ; Tx Modulator CRC Init Value Low Bit 5
.equ	TMCIL6	= 6 ; Tx Modulator CRC Init Value Low Bit 6
.equ	TMCIL7	= 7 ; Tx Modulator CRC Init Value Low Bit 7

; TMCP - Tx Modulator CRC Polynomial
.equ	TMCPH0	= 0 ; Tx Modulator CRC Polynomial High Bit 8
.equ	TMCPH1	= 1 ; Tx Modulator CRC Polynomial High Bit 9
.equ	TMCPH2	= 2 ; Tx Modulator CRC Polynomial High Bit 10
.equ	TMCPH3	= 3 ; Tx Modulator CRC Polynomial High Bit 11
.equ	TMCPH4	= 4 ; Tx Modulator CRC Polynomial High Bit 12
.equ	TMCPH5	= 5 ; Tx Modulator CRC Polynomial High Bit 13
.equ	TMCPH6	= 6 ; Tx Modulator CRC Polynomial High Bit 14
.equ	TMCPH7	= 7 ; Tx Modulator CRC Polynomial High Bit 15

.equ	TMCPL0	= 0 ; Tx Modulator CRC Polynomial Low Bit 0
.equ	TMCPL1	= 1 ; Tx Modulator CRC Polynomial Low Bit 1
.equ	TMCPL2	= 2 ; Tx Modulator CRC Polynomial Low Bit 2
.equ	TMCPL3	= 3 ; Tx Modulator CRC Polynomial Low Bit 3
.equ	TMCPL4	= 4 ; Tx Modulator CRC Polynomial Low Bit 4
.equ	TMCPL5	= 5 ; Tx Modulator CRC Polynomial Low Bit 5
.equ	TMCPL6	= 6 ; Tx Modulator CRC Polynomial Low Bit 6
.equ	TMCPL7	= 7 ; Tx Modulator CRC Polynomial Low Bit 7

; TMCR1 - Tx Modulator Control Register 1
.equ	TMPIS0	= 0 ; Tx Modulator Port Interface Select
.equ	TMPIS1	= 1 ; Tx Modulator Port Interface Select
.equ	TMPIS2	= 2 ; Tx Modulator Port Interface Select
.equ	TMSCS	= 3 ; Tx Modulator Serial Output Clock Select
.equ	TMCIM	= 4 ; Tx Modulator Transmission Complete Interrupt Mask

; TMCR2 - Tx Modulator Control Register 2
.equ	TMCRCE	= 0 ; Tx Modulator CRC Enable
.equ	TMCRCL0	= 1 ; Tx Modulator CRC Length
.equ	TMCRCL1	= 2 ; Tx Modulator CRC Length
.equ	TMNRZE	= 3 ; Tx Modulator NRZ Mode Enable
.equ	TMPOL	= 4 ; Tx Modulator Polarity
.equ	TMSSE	= 5 ; Tx Modulator Stop Sequence Enable
.equ	TMMSB	= 6 ; Tx Modulator Most Significant Bit First

; TMCR - Tx Modulator CRC Result
.equ	TMCRH0	= 0 ; Tx Modulator CRC Result High Bit 8
.equ	TMCRH1	= 1 ; Tx Modulator CRC Result High Bit 9
.equ	TMCRH2	= 2 ; Tx Modulator CRC Result High Bit 10
.equ	TMCRH3	= 3 ; Tx Modulator CRC Result High Bit 11
.equ	TMCRH4	= 4 ; Tx Modulator CRC Result High Bit 12
.equ	TMCRH5	= 5 ; Tx Modulator CRC Result High Bit 13
.equ	TMCRH6	= 6 ; Tx Modulator CRC Result High Bit 14
.equ	TMCRH7	= 7 ; Tx Modulator CRC Result High Bit 15

.equ	TMCRL0	= 0 ; Tx Modulator CRC Result Low Bit 0
.equ	TMCRL1	= 1 ; Tx Modulator CRC Result Low Bit 1
.equ	TMCRL2	= 2 ; Tx Modulator CRC Result Low Bit 2
.equ	TMCRL3	= 3 ; Tx Modulator CRC Result Low Bit 3
.equ	TMCRL4	= 4 ; Tx Modulator CRC Result Low Bit 4
.equ	TMCRL5	= 5 ; Tx Modulator CRC Result Low Bit 5
.equ	TMCRL6	= 6 ; Tx Modulator CRC Result Low Bit 6
.equ	TMCRL7	= 7 ; Tx Modulator CRC Result Low Bit 7

; TMCSB - Tx Modulator CRC Skip Bit Number
.equ	TMCSB0	= 0 ; Tx Modulator CRC Skip Bit Number Bit 0
.equ	TMCSB1	= 1 ; Tx Modulator CRC Skip Bit Number Bit 1
.equ	TMCSB2	= 2 ; Tx Modulator CRC Skip Bit Number Bit 2
.equ	TMCSB3	= 3 ; Tx Modulator CRC Skip Bit Number Bit 3
.equ	TMCSB4	= 4 ; Tx Modulator CRC Skip Bit Number Bit 4
.equ	TMCSB5	= 5 ; Tx Modulator CRC Skip Bit Number Bit 5
.equ	TMCSB6	= 6 ; Tx Modulator CRC Skip Bit Number Bit 6
.equ	TMCSB7	= 7 ; Tx Modulator CRC Skip Bit Number Bit 7

; TMFSM - Tx Modulator Finite State Machine
.equ	TMSSM0	= 0 ; Tx Modulator Sub State Machine
.equ	TMSSM1	= 1 ; Tx Modulator Sub State Machine
.equ	TMSSM2	= 2 ; Tx Modulator Sub State Machine
.equ	TMSSM3	= 3 ; Tx Modulator Sub State Machine
.equ	TMMSM0	= 4 ; Tx Modulator Master State Machine
.equ	TMMSM1	= 5 ; Tx Modulator Master State Machine
.equ	TMMSM2	= 6 ; Tx Modulator Master State Machine

; TMSHR - Tx Modulator Shift Register
.equ	TMSHR0	= 0 ; Tx Modulator Shift Register Bit 0
.equ	TMSHR1	= 1 ; Tx Modulator Shift Register Bit 1
.equ	TMSHR2	= 2 ; Tx Modulator Shift Register Bit 2
.equ	TMSHR3	= 3 ; Tx Modulator Shift Register Bit 3
.equ	TMSHR4	= 4 ; Tx Modulator Shift Register Bit 4
.equ	TMSHR5	= 5 ; Tx Modulator Shift Register Bit 5
.equ	TMSHR6	= 6 ; Tx Modulator Shift Register Bit 6
.equ	TMSHR7	= 7 ; Tx Modulator Shift Register Bit 7

; TMSR - Tx Modulator Status Register
.equ	TMTCF	= 0 ; Tx Modulator Transmission Complete Status Flag

; TMSSC - Tx Modulator Stop Sequence Configuration
.equ	TMSSP0	= 0 ; Tx Modulator Stop Sequence Pattern
.equ	TMSSP1	= 1 ; Tx Modulator Stop Sequence Pattern
.equ	TMSSP2	= 2 ; Tx Modulator Stop Sequence Pattern
.equ	TMSSP3	= 3 ; Tx Modulator Stop Sequence Pattern
.equ	TMSSL0	= 4 ; Tx Modulator Stop Sequence Length
.equ	TMSSL1	= 5 ; Tx Modulator Stop Sequence Length
.equ	TMSSL2	= 6 ; Tx Modulator Stop Sequence Length
.equ	TMSSH	= 7 ; Tx Modulator Stop Sequence Hold Mode

; TMTL - Tx Modulator Telegram Length Register
.equ	TMTLH0	= 0 ; Tx Modulator Telegram Length Register High Bit 8
.equ	TMTLH1	= 1 ; Tx Modulator Telegram Length Register High Bit 9
.equ	TMTLH2	= 2 ; Tx Modulator Telegram Length Register High Bit 10
.equ	TMTLH3	= 3 ; Tx Modulator Telegram Length Register High Bit 11

.equ	TMTLL0	= 0 ; Tx Modulator Telegram Length Register Low Bit 0
.equ	TMTLL1	= 1 ; Tx Modulator Telegram Length Register Low Bit 1
.equ	TMTLL2	= 2 ; Tx Modulator Telegram Length Register Low Bit 2
.equ	TMTLL3	= 3 ; Tx Modulator Telegram Length Register Low Bit 3
.equ	TMTLL4	= 4 ; Tx Modulator Telegram Length Register Low Bit 4
.equ	TMTLL5	= 5 ; Tx Modulator Telegram Length Register Low Bit 5
.equ	TMTLL6	= 6 ; Tx Modulator Telegram Length Register Low Bit 6
.equ	TMTLL7	= 7 ; Tx Modulator Telegram Length Register Low Bit 7


; ***** FUSE *****************
; LOW - 
.equ	EXTCLKEN	= 0 ; External Clock enable
.equ	RSTDISBL	= 1 ; Disable external Reset
.equ	BOOTRST	= 2 ; Select interrupt vector location
.equ	EESAVE	= 3 ; Preserve EEPROM memory through the Chip Erase cycle
.equ	WDTON	= 4 ; Watch-dog Timer always on
.equ	SPIEN	= 5 ; Serial program downloading (SPI) enabled
.equ	DWEN	= 6 ; Debug Wire enable
.equ	CKDIV8	= 7 ; Divide clock by 8 internally


; ***** LOCKBIT *****************
; LOCKBIT - 
.equ	LB1	= 0 ; Memory Lock
.equ	LB2	= 1 ; Memory Lock
.equ	AP1	= 2 ; Application Protection
.equ	AP2	= 3 ; Application Protection
.equ	BLP1	= 4 ; Boot Loader Protection
.equ	BLP2	= 5 ; Boot Loader Protection

; ***** CPU REGISTER DEFINITIONS *****************************************
.def	XH	= r27
.def	XL	= r26
.def	YH	= r29
.def	YL	= r28
.def	ZH	= r31
.def	ZL	= r30

; ***** DATA MEMORY DECLARATIONS *****************************************
.equ	FLASHSTART	= 0x4000 ; Note: Word address
.equ	FLASHEND	= 0x67FF ; Note: Word address
.equ	IOEND	= 0x01FF
.equ	SRAM_START	= 0x0200
.equ	SRAM_SIZE	= 1024
.equ	RAMEND	= 0x05FF
.equ	E2END	= 0x047F
.equ	EEPROMEND	= 0x047F
.equ	EEADRBITS	= 11
.equ	XRAMEND	= 0x0000
#pragma AVRPART MEMORY PROG_FLASH 20480
#pragma AVRPART MEMORY INT_SRAM SIZE 1024
#pragma AVRPART MEMORY INT_SRAM START_ADDR 0x200
#pragma AVRPART MEMORY EEPROM 1152

; ***** INTERRUPT VECTORS ************************************************
.equ	INT0addr	 = 0x0002 ; External Interrupt Request 0
.equ	INT1addr	 = 0x0004 ; External Interrupt Request 1
.equ	PCI0addr	 = 0x0006 ; Pin Change Interrupt Request 0
.equ	PCI1addr	 = 0x0008 ; Pin Change Interrupt Request 1
.equ	VMONaddr	 = 0x000A ; Voltage Monitoring Interrupt
.equ	AVCCRaddr	 = 0x000C ; AVCC Reset Interrupt
.equ	AVCCLaddr	 = 0x000E ; AVCC Low Interrupt
.equ	T0INTaddr	 = 0x0010 ; Timer 0 Interval Interrupt
.equ	T1COMPaddr	 = 0x0012 ; Timer/Counter1 Compare Match Interrupt
.equ	T1OVFaddr	 = 0x0014 ; Timer/Counter1 Overflow Interrupt
.equ	T2COMPaddr	 = 0x0016 ; Timer/Counter2 Compare Match Interrupt
.equ	T2OVFaddr	 = 0x0018 ; Timer/Counter2 Overflow Interrupt
.equ	T3CAPaddr	 = 0x001A ; Timer/Counter3 Capture Event Interrupt
.equ	T3COMPaddr	 = 0x001C ; Timer/Counter3 Compare Match Interrupt
.equ	T3OVFaddr	 = 0x001E ; Timer/Counter3 Overflow Interrupt
.equ	T4CAPaddr	 = 0x0020 ; Timer/Counter4 Capture Event Interrupt
.equ	T4COMPaddr	 = 0x0022 ; Timer/Counter4 Compare Match Interrupt
.equ	T4OVFaddr	 = 0x0024 ; Timer/Counter4 Overflow Interrupt
.equ	T5COMPaddr	 = 0x0026 ; Timer/Counter5 Compare Match Interrupt
.equ	T5OVFaddr	 = 0x0028 ; Timer/Counter5 Overflow Interrupt
.equ	SPIaddr	 = 0x002A ; SPI Serial Transfer Complete Interrupt
.equ	SRX_FIFOaddr	 = 0x002C ; SPI Rx Buffer Interrupt
.equ	STX_FIFOaddr	 = 0x002E ; SPI Tx Buffer Interrupt
.equ	SSMaddr	 = 0x0030 ; Sequencer State Machine Interrupt
.equ	DFFLRaddr	 = 0x0032 ; Data FIFO fill level reached Interrupt
.equ	DFOUEaddr	 = 0x0034 ; Data FIFO overflow or underflow error Interrupt
.equ	SFFLRaddr	 = 0x0036 ; RSSI/Preamble FIFO fill level reached Interrupt
.equ	SFOUEaddr	 = 0x0038 ; RSSI/Preamble FIFO overflow or underflow error Interrupt
.equ	TMTCFaddr	 = 0x003A ; Tx Modulator Telegram Finish Interrupt
.equ	UHF_WCOBaddr	 = 0x003C ; UHF receiver wake up ok on Rx path B
.equ	UHF_WCOAaddr	 = 0x003E ; UHF receiver wake up ok on Rx path A
.equ	UHF_SOTBaddr	 = 0x0040 ; UHF receiver start of telegram ok on Rx path B
.equ	UHF_SOTAaddr	 = 0x0042 ; UHF receiver start of telegram ok on Rx path A
.equ	UHF_EOTBaddr	 = 0x0044 ; UHF receiver end of telegram on Rx path B
.equ	UHF_EOTAaddr	 = 0x0046 ; UHF receiver end of telegram on Rx path A
.equ	UHF_NBITBaddr	 = 0x0048 ; UHF receiver new bit on Rx path B
.equ	UHF_NBITAaddr	 = 0x004A ; UHF receiver new bit on Rx path A
.equ	EXCMaddr	 = 0x004C ; External input Clock monitoring Interrupt
.equ	ERDYaddr	 = 0x004E ; EEPROM Ready Interrupt
.equ	SPMRaddr	 = 0x0050 ; Store Program Memory Ready
.equ	IDFULLaddr	 = 0x0052 ; IDSCAN Full Interrupt

.equ	INT_VECTORS_SIZE	= 84 ; size in words

#endif /* _A5831DEF_INC_ */

; ***** END OF FILE ******************************************************



