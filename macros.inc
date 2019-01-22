;*******************************************************************************************************************
;*
;* GLOBAL MACROS
;*
;*******************************************************************************************************************
.macro          lda                             ;load A register (a1:a0)
                ldi   a0, low(@0)
                ldi   a1, high(@0)
.endm

.macro          ldx                             ;load X pointer
                ldi   xl, low(@0)
                ldi   xh, high(@0)
.endm

.macro          ldy                             ;load Y pointer
                ldi   yl, low(@0)
                ldi   yh, high(@0)
.endm

.macro          ldz                             ;load Z pointer
                ldi   zl, low(@0)
                ldi   zh, high(@0)
.endm

.macro          addi                            ;support 8bit-add-immediate
                subi  @0, -(@1)
.endm