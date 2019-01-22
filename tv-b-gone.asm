;*******************************************************************************************************************************
;*
;* Title:     TV-B-Gone asm-only firmware
;* Version:   1.0 (02/13/2009)
;* Target:    ATmega48
;* Filename:  tv-b-gone.asm
;* Author:    Michael Rentschler
;*
;* copyright (c) 2009 Michael Rentschler <http://www.w1r3.de/>
;*
;* This file is licensed under the GNU GPL v3.
;* No warranty of any kind is explicitly or implicitly stated.
;* For more information read the LICENSE file attached to this project.
;*
;*******************************************************************************************************************************
;*
;* DESCRIPTION
;*
;* original device schematics and firmware from <http://ladyada.net/make/tvbgone/>
;*
;*******************************************************************************************************************************
;*
;* CHIP CONFIGURATION
;*
;* internal osc. 8 MHz, no bootloader, brown-out 2.7V
;*
;*******************************************************************************************************************************
;device ATmega48




;*******************************************************************************************************************************
;*
;* GLOBAL INCLUDES
;*
;*******************************************************************************************************************************
.include "m48def.inc"
.include "macros.inc"
.include "regdef.inc"




;*******************************************************************************************************************************
;*
;* GLOBAL EQUATES
;*
;*******************************************************************************************************************************
.equ DO_OSCCAL          = 1                     ;calibrate internal osc. on startup?

.equ XTAL               = 8000000               ;clock frequency

.equ WORDBOOK_SIZE      = 4*2                   ;size of wordbook for uncompressor

.equ LED                = PD3                   ;led (0 = on/default, 1 = off)
.equ LED_PORT           = PORTD                 ;

.equ IRD0               = PB1                   ;infrared led's (1 = on/default, 0 = off)
.equ IRD1               = PB2                   ;
.equ IRD_MASK           = (1<<IRD0)+(1<<IRD1)   ;
.equ IRD_PORT           = PORTB                 ;

.equ INT                = PD2                   ;optional external interrupt
.equ INT_PIN            = PIND                  ;

;equ PORTB_INIT         = 0                     ;start-up values for misc. registers
.equ DDRB_INIT          = IRD_MASK
;equ PORTD_INIT         = (0<<LED)+(1<<SWITCH)
.equ DDRD_INIT          = (1<<LED)




;*******************************************************************************************************************************
;*
;* EEPROM SEGMENT
;*
;*******************************************************************************************************************************
.ESEG

;osccal:        .byte 1                         ;used to calibrate internal osc.




;*******************************************************************************************************************************
;*
;* DATA SEGMENT
;*
;*******************************************************************************************************************************
.DSEG

wordbook_on:    .byte WORDBOOK_SIZE
wordbook_off:   .byte WORDBOOK_SIZE




;*******************************************************************************************************************************
;*
;* CODE SEGMENT
;*
;*******************************************************************************************************************************
.CSEG
                .org  0                         ;interrupt handler table
               ;rjmp  main                      ;0x00: reset/watchdog handler
               ;reti                            ;0x01: external interrupt 0 handler
               ;reti                            ;0x02: external interrupt 1 handler
               ;reti                            ;0x03: timer2 compare match handler
               ;reti                            ;0x04: timer2 overflow handler
               ;reti                            ;0x05: timer1 capture event handler
               ;reti                            ;0x06: timer1 compare match A handler
               ;reti                            ;0x07: timer1 compare match B handler
               ;reti                            ;0x08: timer1 overflow handler
               ;reti                            ;0x09: timer0 overflow handler
               ;reti                            ;0x0A: serial transfer complete handler
               ;reti                            ;0x0B: USART: Rx complete handler
               ;reti                            ;0x0C: USART: data register empty
               ;reti                            ;0x0D: USART: Tx complete handler
               ;reti                            ;0x0E: ADC conversion complete handler
               ;reti                            ;0x0F: EEPROM ready handler
               ;reti                            ;0x10: analog comparator
               ;reti                            ;0x11: two-wire serial interface
               ;reti                            ;0x12: store program memory ready


;===============================================================================================================================
; FUNCTION      main
; DESCRIPTION   firmware entry point
;===============================================================================================================================
main:          ;cli                             ;disable interrupts (all the time)
                clr   zero                      ;init zero register
                clr   ff                        ;init ff register
                dec   ff                        ;

               .if DO_OSCCAL
                out   EEARH, zero               ;calibrate internal rc-osc. from eeprom byte at ofs. 0
                out   EEARL, zero               ;
                sbi   EECR, EERE                ;
                in    at, EEDR                  ;
                sts   OSCCAL, at                ;
               .endif

                ldi   at, high(RAMEND)          ;init stack
                out   SPH, at                   ;
                ldi   at, low(RAMEND)           ;
                out   SPL, at                   ;

               ;ldi   at, PORTB_INIT            ;initialize port B
               ;out   PORTB, at                 ;
                ldi   at, DDRB_INIT             ;
                out   DDRB, at                  ;

               ;ldi   at, PORTD_INIT            ;initialize port D
               ;out   PORTD, at                 ;
                ldi   at, DDRD_INIT             ;
                out   DDRD, at                  ;

                rcall led_flash                 ;flash led for 250ms

                ldz   codes*2                   ;init input pointer to start of compressed code stream
                clr   bit_buf_sz                ;also clear bit buffer size

  main_lp:      rcall led_flash                 ;flash led for 250ms

                rcall code_txmit                ;process next code
                cpi   v0, 0                     ;success?
                breq  main_lp                   ;  yes -> loop

                rcall led_flash                 ;flash led for 250ms

  main_pwrdown: ldi   at, (1<<SE)+(1<<SM1)      ;power down device
                out   SMCR, at                  ;
                sleep                           ;
                rjmp  main_pwrdown              ;


;===============================================================================================================================
; FUNCTION      code_txmit (read and transmit next code from stream)
; INPUT         z -> stream pointer
; OUTPUT        v0 = 0 on success
; WASTE         flags, at, a0, v0, v1, z
;===============================================================================================================================
code_txmit:     ldi   a0, 8                     ;read 8bit header
                rcall code_rd_bits              ;
                cpi   v0, 0xFF                  ;  terminator?
                breq  code_tx_ret               ;    yes -> return error
                mov   freq, v0                  ;

                sts   OCR1AH, zero              ;setup timer with frequency from header
                sts   OCR1AL, freq              ;
                sts   OCR1BH, zero              ;
                sts   OCR1BL, freq              ;

                ldi   at, (WORDBOOK_SIZE*2)-3   ;clear wordbooks
                ldy   wordbook_on               ;
  code_tx_cwb:  st    y+, zero                  ;
                dec   at                        ;
                brpl  code_tx_cwb               ;
                st    y+, at                    ;
                st    y, at                     ;

  code_tx_lp:   ldy   wordbook_on               ;read on-time
                rcall code_rd_word              ;

                cp    freq, zero                ;pulse-code?
                brne  code_tx_st                ;  no -> setup timer
  code_tx_pulse:out   IRD_PORT, ff              ; yes -> turn on ir-leds
                rjmp  code_tx_on                ;        and wait on-time

  code_tx_st:   sts   TCNT1H, zero              ;setup timer
                sts   TCNT1L, zero              ;
                ldi   at, (1<<COM1A0)+(1<<COM1B0) ;enable compare-match output
                sts   TCCR1A, at                ;
                ldi   at, (1<<WGM12)+(1<<CS10)  ;  turn on timer (ctc mode, clk/1)
                sts   TCCR1B, at                ;

  code_tx_on:   mov   a0, v0                    ;pass on-time
                mov   a1, v1                    ;
                rcall delay                     ;

                sts   TCCR1A, zero              ;disable timer compare-match output
                sts   TCCR1B, zero              ;  and stop timer
                out   IRD_PORT, zero            ;turn off ir-led's

                ldy   wordbook_off              ;read off-time
                rcall code_rd_word              ;

                mov   at, v0                    ;  terminator?
                and   at, v1                    ;
                cpi   at, 0xFF                  ;
                breq  code_tx_done              ;   yes -> return success

  code_tx_off:  mov   a0, v0                    ;pass off-time
                mov   a1, v1                    ;
                rcall delay                     ;

                rjmp  code_tx_lp                ;  loop

  code_tx_done: clr   v0                        ;return success
  code_tx_ret:  ret                             ;


;===============================================================================================================================
; FUNCTION      code_read_word (read next uncompressed 16bit word from stream, look-up/fill wordbook if necessary)
; INPUT         y -> wordbook, z -> stream pointer
; OUTPUT        v1:v0 = word, z -> new stream pointer
; WASTE         flags, at, a0, v0, v1, y, z
;===============================================================================================================================
code_rd_word:   ldi   a0, 1                     ;read 1bit index
                rcall code_rd_bits              ;
                cpi   v0, 0                     ;  valid?
                breq  code_rdw_ld               ;   yes -> load wordbook entry

                ldi   a0, 2                     ;read 2bit index
                rcall code_rd_bits              ;
                cpi   v0, 3                     ;  valid?
                brsh  code_rd_raw16             ;    no -> read raw word

                inc   v0                        ;address wordbook entry by index
                lsl   v0                        ;
                add   yl, v0                    ;
                adc   yh, zero                  ;

  code_rdw_ld:  ld    v0, y                     ;load wordbook entry
                ldd   v1, y+1                   ;
                mov   at, v0                    ;  entry valid?
                or    at, v1                    ;
                brne  code_rdw_ret              ;   yes -> return

                rcall code_rd_raw16             ;read word from stream and fillup wordbook
                st    y, v0                     ;
                std   y+1, v1                   ;

  code_rdw_ret: ret


;===============================================================================================================================
; FUNCTION      code_read_raw16 (read one 16bit word directly from stream regarding it's length code)
; INPUT         z -> stream pointer
; OUTPUT        v1:v0 = word, z -> new stream pointer
; WASTE         flags, at, a0, v0, v1, z
;===============================================================================================================================
code_rd_raw16:  ldi   a0, 1                     ;read length code (0 = 10bit, 1 = 16bit)
                rcall code_rd_bits              ;
                ldi   a0, 10                    ;
                cpse  v0, zero                  ;
                ldi   a0, 16                    ;
               ;rjmp  code_rd_bits              ;  and return


;===============================================================================================================================
; FUNCTION      code_read_bits
; INPUT         a0 = number of bits to read (1..16), z -> stream pointer
; OUTPUT        v1:v0 = bits read, z -> new stream pointer
; USES REGS     bit_buf, bit_buf_sz
; WASTE         flags, at, a0, v0, v1, z
;===============================================================================================================================
code_rd_bits:   clr   v0                        ;clear return value
                clr   v1                        ;

  code_rdb_lp:  dec   bit_buf_sz                ;one more bit in bit buffer?
                brpl  code_rdb_fe               ; yes -> go fetch the bit
                lpm   bit_buf, z+               ;  no -> fill bit buffer and load next byte
                ldi   at, 7                     ;        and increase counter
                mov   bit_buf_sz, at            ;

  code_rdb_fe:  lsr   bit_buf                   ;fetch next bit (shift it out from bit buffer)
                rol   v0                        ;  and shift it into the return value
                rol   v1                        ;

                dec   a0                        ;done?
                brne  code_rdb_lp               ;  no -> loop

                ret


;===============================================================================================================================
; FUNCTION      led_flash (flash led for 250ms)
; INPUT         n/a
; WASTE         flags, a0, a1
;===============================================================================================================================
led_flash:      cbi   LED_PORT, LED             ;turn led on
                lda   250*100                   ;delay 250ms
                rcall delay                     ;
                sbi   LED_PORT, LED             ;turn led off
                ret


;===============================================================================================================================
; FUNCTION      delay
; INPUT         a1:a0 = time in 10us-units
; WASTE         flags, at, a0, a1
;===============================================================================================================================
delay:          ldi   at, ((XTAL+399999)/400000) - 1
  delay_lp:     nop
                dec   at
                brne  delay_lp

                subi  a0, 1
                sbci  a1, 0
                brne  delay
                ret




;*******************************************************************************************************************************
;*
;* INCLUDE CODE FILE
;*
;*******************************************************************************************************************************
codes:          .include "codes.inc"




;***************************************************************************************************************************************
;*
;* END OF FILE
;*
;***************************************************************************************************************************************
