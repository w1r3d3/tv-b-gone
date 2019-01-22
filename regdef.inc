;*******************************************************************************************************************
;*
;* GLOBAL REGISTER DEFINITIONS
;* r0..r1 are temporary registers used for SPM/MUL instructions
;* r26..r31 is used for XL, XH, YL, YH, ZL and ZH registers
;*
;*******************************************************************************************************************
.def zero       = r0    ;zero register (not hardwired!)
.def ff         = r1    ;always set to 0xFF

.def bit_buf_sz = r2    ;code_rd_bits: size of bit-buffer in bits (0..8)
.def bit_buf    = r3    ;              buffered code-byte

.def freq       = r4    ;code_txmit: stores the header

.def unused5    = r5    ;unused registers
.def unused6    = r6    ;
.def unused7    = r7    ;
.def unused8    = r8    ;
.def unused9    = r9    ;
.def unused10   = r10   ;
.def unused11   = r11   ;
.def unused12   = r12   ;
.def unused13   = r13   ;
.def unused14   = r14   ;

.def v1         = r15   ;function return value

.def at         = r16   ;temporary register

.def v0         = r17   ;function return value

.def t0         = r18   ;temporary registers
.def t1         = r19   ;
.def t2         = r20   ;
.def t3         = r21   ;

.def a0         = r22   ;function arguments
.def a1         = r23   ;
.def a2         = r24   ;
.def a3         = r25   ;
