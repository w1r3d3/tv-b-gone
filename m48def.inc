;***************************************************************************
;* A P P L I C A T I O N   N O T E   F O R   T H E   A V R   F A M I L Y
;* 
;* Number           :AVR000
;* File Name        :"m48def.inc"
;* Title            :Register/Bit Definitions for the ATmega48
;* Date             :13.08.03
;* Version          :1.00
;* Support E-mail   :support@atmel.no
;* Target MCU       :ATmega48
;*
;* DESCRIPTION
;* When including this file in the assembly program file, all I/O register	
;* names and I/O register bit names appearing in the data book can be used.
;* In addition, the two registers forming the data pointer Z have been 
;* assigned names ZL - ZH. 
;*
;* The Register names are represented by their hexadecimal address.
;* 
;* The Register Bit names are represented by their bit number (0-7).
;* 
;* Please observe the difference in using the bit names with instructions
;* such as "sbr"/"cbr" (set/clear bit in register) and "sbrs"/"sbrc" 
;* (skip if bit in register set/cleared). The following example illustrates
;* this:
;* 
;* in	r16,PORTB		;read PORTB latch
;* sbr	r16,(1<<PB6)+(1<<PB5)	;set PB6 and PB5 (use masks, not bit#)
;* out  PORTB,r16		;output to PORTB
;*
;* in	r16,TIFR		;read the Timer Interrupt Flag Register
;* sbrc	r16,TOV0		;test the overflow flag (use bit#)
;* rjmp	TOV0_is_set		;jump if set
;* ...				;otherwise do something else
;*	
; RCS identifiers
; $Author: $
; $Date: $
; $Revision: $
; $Source: $
; 
;***************************************************************************

;***** Specify Device
.device ATmega48


;*****************************************************************************
; I/O Register Definitions
;*****************************************************************************

.equ	UDR0	= $C6		; - USART0 -
.equ	UBRR0H	= $C5
.equ	UBRR0L	= $C4
.equ	UCSR0C	= $C2
.equ	UCSR0B	= $C1
.equ	UCSR0A	= $C0

.equ	TWAMR	= $BD		; - TWI -
.equ	TWCR	= $BC
.equ	TWDR	= $BB
.equ	TWAR	= $BA	
.equ	TWSR	= $B9
.equ	TWBR	= $B8
	
.equ	ASSR	= $B6		; - ASYNC TIM(2) -
.equ	OCR2B	= $B4		; - TIM2 -
.equ	OCR2A	= $B3
.equ	TCNT2	= $B2
.equ	TCCR2B	= $B1
.equ	TCCR2A	= $B0

.equ	OCR1BH	= $8B		; - TIM1 -
.equ	OCR1BL	= $8A
.equ	OCR1AH	= $89
.equ	OCR1AL	= $88
.equ	ICR1H	= $87
.equ	ICR1L	= $86
.equ	TCNT1H	= $85
.equ	TCNT1L	= $84
.equ	TCCR1C	= $82
.equ	TCCR1B	= $81
.equ	TCCR1A	= $80

.equ	DIDR1	= $7F		; - DIDR -
.equ	DIDR0	= $7E

.equ	ADMUX	= $7C		; - ADC -
.equ	ADCSRB	= $7B
.equ	ADCSRA	= $7A
.equ	ADCH	= $79
.equ	ADCL	= $78
	
.equ	TIMSK2	= $70		; - TIMER IRQ -
.equ	TIMSK1	= $6F
.equ	TIMSK0	= $6E

.equ	PCMSK2	= $6D		; - PCINT -
.equ	PCMSK1	= $6C
.equ	PCMSK0	= $6B
	
.equ	EICRA	= $69		; - EXT INT SENSE -
.equ	PCICR	= $68		; - PCINT -
				
.equ	OSCCAL	= $66		; Oscillator Calibration Register.
.equ	PRR	    = $64

.equ	CLKPR	= $61
.equ	WDTCSR	= $60		; - WDT -
	
.equ	SREG	= $3F		; - CPU -
.equ	SPH	    = $3E	
.equ	SPL	    = $3D
	
.equ	SPMCSR	= $37		; - SPM -

.equ	MCUCR	= $35
.equ	MCUSR	= $34	
.equ	SMCR	= $33
	
.equ	MONDR	= $31		; - MONCOM -
.equ	ACSR	= $30		; - AC -
	
.equ	SPDR	= $2E		; - SPI -
.equ	SPSR	= $2D
.equ	SPCR	= $2C

.equ	GPIOR2	= $2B
.equ	GPIOR1	= $2A
		
.equ	OCR0B	= $28		; - TIM0 -
.equ	OCR0A	= $27	
.equ	TCNT0	= $26
.equ	TCCR0B	= $25	
.equ	TCCR0A	= $24

.equ	GTCCR	= $23

.equ	EEARH	= $22       	; - EEPROM -
.equ	EEARL	= $21       	
.equ	EEDR	= $20
.equ	EECR	= $1F

.equ	GPIOR0	= $1E

.equ	EIMSK	= $1D		; - EXT/PC INT -
.equ	EIFR	= $1C	
.equ	PCIFR	= $1B
		
.equ	TIFR2	= $17		; - TIMERS -
.equ	TIFR1	= $16
.equ	TIFR0	= $15
	
.equ	PORTD	= $0B		; - PORTD -
.equ	DDRD	= $0A
.equ	PIND	= $09	
.equ	PORTC	= $08		; - PORTC -
.equ	DDRC	= $07
.equ	PINC	= $06
.equ	PORTB	= $05		; - PORTB -
.equ	DDRB	= $04
.equ	PINB	= $03

	

	
;*****************************************************************************
; Bit Definitions
;*****************************************************************************

.equ UMSEL1     = 7		; UCSR0C
.equ UMSEL0     = 6
.equ UPM01      = 5
.equ UPM00      = 4
.equ USBS0      = 3
.equ UCSZ01     = 2
.equ UDORD0     = 2		; MSPI mode
.equ UCSZ00     = 1
.equ UCPHA0     = 1		; MSPI mode
.equ UCPOL0     = 0

.equ RXCIE0     = 7		; UCSR0B
.equ TXCIE0     = 6
.equ UDRIE0     = 5
.equ RXEN0      = 4
.equ TXEN0      = 3
.equ UCSZ02     = 2
.equ RXB80      = 1
.equ TXB80      = 0

.equ RXC0       = 7		; USCR0A
.equ TXC0       = 6
.equ UDRE0      = 5
.equ FE0        = 4
.equ DOR0       = 3
.equ PE0        = 2
.equ U2X0       = 1
.equ MPCM0      = 0

.equ TWAM6	    = 7		; TWAMR
.equ TWAM5      = 6
.equ TWAM4      = 5
.equ TWAM3      = 4
.equ TWAM2      = 3
.equ TWAM1	    = 2
.equ TWAM0	    = 1

.equ TWINT      = 7		; TWCR
.equ TWEA       = 6
.equ TWSTA      = 5
.equ TWSTO      = 4
.equ TWWC       = 3
.equ TWEN       = 2
.equ TWIE       = 0

.equ TWA6       = 7		; TWAR
.equ TWA5       = 6
.equ TWA4       = 5
.equ TWA3       = 4
.equ TWA2       = 3
.equ TWA1       = 2
.equ TWA0       = 1
.equ TWGCE      = 0
		
.equ TWS7       = 7		; TWSR
.equ TWS6       = 6
.equ TWS5       = 5
.equ TWS4       = 4
.equ TWS3       = 3
.equ TWPS1      = 1
.equ TWPS0      = 0

.equ EXCLK      = 6		; ASSR
.equ AS2        = 5
.equ TCN2UB     = 4
.equ OCR2AUB    = 3
.equ OCR2BUB    = 2
.equ TCR2AUB    = 1
.equ TCR2BUB    = 0

.equ FOC2A      = 7		; TCCR2B
.equ FOC2B      = 6
.equ WGM22      = 3	
.equ CS22       = 2
.equ CS21       = 1
.equ CS20       = 0

.equ COM2A1     = 7		; TCCR2A
.equ COM2A0     = 6		
.equ COM2B1     = 5
.equ COM2B0     = 4
.equ WGM21      = 1
.equ WGM20      = 0
	
.equ FOC1A      = 7		; TCCR1C
.equ FOC1B      = 6

.equ ICNC1      = 7		; TCCR1B
.equ ICES1      = 6
.equ WGM13      = 4
.equ WGM12      = 3
.equ CS12       = 2
.equ CS11       = 1
.equ CS10       = 0

.equ COM1A1     = 7		; TCCR1A
.equ COM1A0     = 6
.equ COM1B1     = 5
.equ COM1B0     = 4
.equ WGM11      = 1
.equ WGM10      = 0	

.equ AIN1D      = 1		; DIDR1
.equ AIN0D      = 0

.equ ADC5D      = 5		; DIDR0
.equ ADC4D      = 4	
.equ ADC3D      = 3 
.equ ADC2D      = 2
.equ ADC1D      = 1
.equ ADC0D      = 0
	
.equ REFS1      = 7		; ADMUX
.equ REFS0      = 6
.equ ADLAR      = 5	
.equ MUX3       = 3
.equ MUX2       = 2
.equ MUX1       = 1
.equ MUX0       = 0	

.equ ACME       = 6		; ADCSRB
.equ ADTS2      = 2
.equ ADTS1      = 1
.equ ADTS0      = 0

.equ ADEN       = 7		; ADCSRA
.equ ADSC       = 6
.equ ADATE      = 5
.equ ADIF       = 4
.equ ADIE       = 3
.equ ADPS2      = 2
.equ ADPS1      = 1
.equ ADPS0      = 0

.equ OCIE2B     = 2		; TIMSK2
.equ OCIE2A     = 1
.equ TOIE2      = 0
	
.equ ICIE1	    = 5		; TIMSK1
.equ OCIE1B     = 2  
.equ OCIE1A     = 1
.equ TOIE1      = 0
	
.equ OCIE0B     = 2		; TIMSK0
.equ OCIE0A     = 1
.equ TOIE0      = 0
	
.equ PCINT23	= 7		; PCMSK2
.equ PCINT22	= 6
.equ PCINT21	= 5
.equ PCINT20	= 4
.equ PCINT19	= 3
.equ PCINT18	= 2
.equ PCINT17	= 1
.equ PCINT16	= 0
	
.equ PCINT14    = 6     ; PCMSK1
.equ PCINT13    = 5
.equ PCINT12    = 4
.equ PCINT11    = 3
.equ PCINT10    = 2
.equ PCINT9     = 1
.equ PCINT8     = 0

.equ PCINT7     = 7		; PCMSK0
.equ PCINT6     = 6
.equ PCINT5     = 5
.equ PCINT4     = 4
.equ PCINT3     = 3
.equ PCINT2     = 2
.equ PCINT1     = 1
.equ PCINT0     = 0
	
.equ ISC11      = 3		; EICRA
.equ ISC10      = 2
.equ ISC01      = 1
.equ ISC00      = 0

.equ PCIE2      = 2		; PCICR
.equ PCIE1      = 1
.equ PCIE0      = 0
	
.equ PRTW1	    = 7		; PRR
.equ PRTIM2	    = 6
.equ PRTIM0	    = 5	
.equ PRTIM1	    = 3
.equ PRSPI	    = 2
.equ PRUSART0   = 1
.equ PRADC	    = 0

.equ CLKPCE	    = 7		; CLKPR 
.equ CLKPS3	    = 3
.equ CLKPS2	    = 2
.equ CLKPS1	    = 1
.equ CLKPS0	    = 0

.equ WDIF	    = 7		; WDTCSR
.equ WDIE	    = 6
.equ WDP3	    = 5	
.equ WDCE	    = 4
.equ WDE	    = 3
.equ WDP2	    = 2
.equ WDP1	    = 1
.equ WDP0	    = 0

.equ I          = 7		; SREG
.equ T          = 6
.equ H          = 5
.equ S          = 4
.equ V          = 3
.equ N          = 2
.equ Z          = 1
.equ C          = 0

.equ SP9	    = 1		; SPH
.equ SP8        = 0

.equ SP7	    = 7		; SPL
.equ SP6        = 6
.equ SP5        = 5
.equ SP4        = 4
.equ SP3        = 3
.equ SP2        = 2
.equ SP1        = 1
.equ SP0        = 0

.equ SPMIE	    = 7		; SPMCSR
.equ BLBSET	    = 3	
.equ PGWRT	    = 2
.equ PGERS	    = 1
.equ SELFPRGEN  = 0

.equ PUD        = 4		; MCUCR
.equ IVSEL      = 1
.equ IVCE       = 0
		
.equ WDRF       = 3		; MCUSR
.equ BORF       = 2
.equ EXTRF      = 1
.equ PORF       = 0
	
.equ SM2        = 3		; SMCR
.equ SM1        = 2
.equ SM0        = 1
.equ SE         = 0
	
.equ ACD        = 7		; ACSR
.equ ACBG       = 6	
.equ ACO        = 5
.equ ACI        = 4
.equ ACIE       = 3
.equ ACIC       = 2
.equ ACIS1      = 1
.equ ACIS0      = 0

.equ SPIF       = 7		; SPSR
.equ WCOL       = 6
.equ SPI2X      = 0

.equ SPIE       = 7		; SPCR
.equ SPE        = 6
.equ DORD       = 5
.equ MSTR       = 4
.equ CPOL       = 3
.equ CPHA       = 2
.equ SPR1       = 1
.equ SPR0       = 0

.equ FOC0A      = 7		; TCCR0B
.equ FOC0B      = 6
.equ WGM02	= 3
.equ CS02       = 2
.equ CS01       = 1
.equ CS00       = 0

.equ COM0A1     = 7		; TCCR0A
.equ COM0A0     = 6
.equ COM0B1     = 5
.equ COM0B0     = 4
.equ WGM01      = 1
.equ WGM00      = 0
	
.equ TSM	= 7		; GTCCR
.equ PSR2	= 1	
.equ PSRASY	= 1
.equ PSR10      = 0 
.equ PSRSYNC    = 0 

.equ EEPM1      = 5		; EECR
.equ EEPM0      = 4	
.equ EERIE      = 3
.equ EEMPE      = 2	
.equ EEPE       = 1
.equ EERE       = 0
.equ EEMWE      = 2		; Kept for backward compatibility
.equ EEWE       = 1		; Kept for backward compatibility

.equ INT1       = 1		; EIMSK
.equ INT0       = 0 
		
.equ INTF1      = 1		; EIFR
.equ INTF0      = 0

.equ PCIF2      = 2		; PCIFR
.equ PCIF1      = 1
.equ PCIF0      = 0	

.equ OCF2B      = 2		; TIFR2
.equ OCF2A      = 1
.equ TOV2       = 0

.equ ICF1       = 5		; TIFR1
.equ OCF1B      = 2 
.equ OCF1A      = 1
.equ TOV1       = 0
	
.equ OCF0B      = 2		; TIFR0
.equ OCF0A      = 1
.equ TOV0       = 0
	
				; - Port D -
.equ PORTD7     = 7		; PORTD
.equ PORTD6     = 6 
.equ PORTD5     = 5 
.equ PORTD4     = 4
.equ PORTD3     = 3
.equ PORTD2     = 2
.equ PORTD1     = 1
.equ PORTD0     = 0

.equ PD7     = 7		; PORTD
.equ PD6     = 6 
.equ PD5     = 5 
.equ PD4     = 4
.equ PD3     = 3
.equ PD2     = 2
.equ PD1     = 1
.equ PD0     = 0


.equ DDD7       = 7		; DDRD
.equ DDD6       = 6
.equ DDD5       = 5
.equ DDD4       = 4
.equ DDD3       = 3
.equ DDD2       = 2
.equ DDD1       = 1
.equ DDD0       = 0
	
.equ PIND7      = 7		; PIND
.equ PIND6      = 6  
.equ PIND5      = 5 
.equ PIND4      = 4
.equ PIND3      = 3
.equ PIND2      = 2
.equ PIND1      = 1
.equ PIND0      = 0
	
				; - Port C -
.equ PORTC6     = 6		; PORTC
.equ PORTC5     = 5 
.equ PORTC4     = 4
.equ PORTC3     = 3
.equ PORTC2     = 2
.equ PORTC1     = 1
.equ PORTC0     = 0

.equ PC6     = 6		; PORTC
.equ PC5     = 5 
.equ PC4     = 4
.equ PC3     = 3
.equ PC2     = 2
.equ PC1     = 1
.equ PC0     = 0


.equ DDC6       = 6		; DDRC
.equ DDC5       = 5
.equ DDC4       = 4
.equ DDC3       = 3
.equ DDC2       = 2
.equ DDC1       = 1
.equ DDC0       = 0
	
.equ PINC6      = 6		; PINC
.equ PINC5      = 5 
.equ PINC4      = 4
.equ PINC3      = 3
.equ PINC2      = 2
.equ PINC1      = 1
.equ PINC0      = 0
		
				; - Port B -
.equ PORTB7     = 7		; PORTB
.equ PORTB6     = 6 
.equ PORTB5     = 5 
.equ PORTB4     = 4
.equ PORTB3     = 3
.equ PORTB2     = 2
.equ PORTB1     = 1
.equ PORTB0     = 0

.equ PB7     = 7		; PORTB
.equ PB6     = 6 
.equ PB5     = 5 
.equ PB4     = 4
.equ PB3     = 3
.equ PB2     = 2
.equ PB1     = 1
.equ PB0     = 0



.equ DDB7       = 7		; DDRB
.equ DDB6       = 6
.equ DDB5       = 5
.equ DDB4       = 4
.equ DDB3       = 3
.equ DDB2       = 2
.equ DDB1       = 1
.equ DDB0       = 0
	
.equ PINB7      = 7		; PINB
.equ PINB6      = 6  
.equ PINB5      = 5 
.equ PINB4      = 4
.equ PINB3      = 3
.equ PINB2      = 2
.equ PINB1      = 1
.equ PINB0      = 0	
	

;*****************************************************************************
; CPU Register Declarations
;*****************************************************************************

.def	XL	= r26		; X pointer low
.def	XH	= r27		; X pointer high
.def	YL	= r28		; Y pointer low
.def	YH	= r29		; Y pointer high
.def	ZL	= r30		; Z pointer low
.def	ZH	= r31		; Z pointer high


;*****************************************************************************
; Data Memory Declarations
;*****************************************************************************
.equ    IOEND   = 0xFF		    ; 256 bytes I/O

.equ	RAMSIZE = 0x0200		; 1K byte RAM

.equ 	RAMEND	= IOEND+RAMSIZE	; Highest internal data memory (SRAM) address

.equ	EEPROMEND = 0xFF       	; Highest EEPROM address. (256 Bytes)
	                        
.equ    EEADRBITS = 8 		    ; no. of bits in EEPROM address register


;*****************************************************************************
; Program Memory Declarations
;*****************************************************************************

.equ    FLASHEND = 0x07FF	;  Highest program memory (flash) address
	                        ; (When addressed as 16 bit words)
				

		
;**** Page Size ****
.equ	PAGESIZE	= 32    ;number of WORDS in a Flash page
.equ	EEPAGESIZE	= 4     ;number of BYTES in an EEPROM page

;**** Interrupt Vectors ****		
.equ	INT0addr     =$001	;External Interrupt0
.equ	INT1addr     =$002	;External Interrupt1
.equ	PCINT0addr   =$003	;Pin Change Interrupt0
.equ	PCINT1addr   =$004	;Pin Change Interrupt1
.equ	PCINT2addr   =$005	;Pin Change Interrupt2
.equ	WDTaddr	     =$006	;Watchdog Timeout
.equ	OC2Aaddr     =$007	;Timer/Counter2 Compare Match Interrupt
.equ	OC2Baddr     =$008	;Timer/Counter2 Compare Match Interrupt	
.equ	OVF2addr     =$009	;Overflow2 Interrupt
.equ	ICP1addr     =$00a	;Input Capture1 Interrupt 	
.equ	OC1Aaddr     =$00b	;Output Compare1A Interrupt 
.equ	OC1Baddr     =$00c	;Output Compare1B Interrupt 
.equ	OVF1addr     =$00d	;Overflow1 Interrupt 
.equ	OC0Aaddr     =$00e	;Timer/Counter0 Compare Match Interrupt
.equ	OC0Baddr     =$00f	;Timer/Counter0 Compare Match Interrupt	
.equ	OVF0addr     =$010	;Overflow0 Interrupt
.equ	SPIaddr      =$011	;SPI Interrupt 	
.equ	URXCaddr     =$012	;USART Receive Complete Interrupt 
.equ	UDREaddr     =$013	;USART Data Register Empty Interrupt 
.equ	UTXCaddr     =$014	;USART Transmit Complete Interrupt 
.equ    ADCCaddr     =$015	;ADC Conversion Complete Handle
.equ	ERDYaddr     =$016	;EEPROM write complete
.equ	ACIaddr	     =$017	;Analog Comparator Interrupt 
.equ    TWIaddr      =$018	;TWI Interrupt Vector Address
.equ	SPMRaddr     =$019	;Store Program Memory Ready Interrupt 
	

;**** End of File ***
