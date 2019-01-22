//=================================================================================================
// generate raw binary code-file from tv-b-gone code c-header-file
// copyright (c) 2009 Michael Rentschler <http://www.w1r3.de/>
//=================================================================================================
// the raw binary code file contains only sequences of 16bit words, alternating off and on times.
// a zero off-time or file-end is a terminator, if the off-time high byte is 0xFF a new code
// starts, where the low byte specifies the frequency.
//=================================================================================================
#include <stdio.h>


//-------------------------------------------------------------------------------------------------
#define F_CPU 8000000   //insert your cpu frequency here
#define PROGMEM         //ignore this

#ifndef NA_CODES        //select default code-set
  #ifndef EU_CODES
    //#define NA_CODES
    #define EU_CODES
  #endif
#endif


//-------------------------------------------------------------------------------------------------
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;

struct IrCode {
        uint8_t timer_val;
        uint16_t const *times;
        uint8_t codes[];
};


//-------------------------------------------------------------------------------------------------
#include "codes.h"      //the original code file (remove #includes inside this file)
//-------------------------------------------------------------------------------------------------


//-------------------------------------------------------------------------------------------------
// code used for reading compressed code data bits.
//-------------------------------------------------------------------------------------------------
const uint8_t *code_ptr;
uint8_t bitsleft_r;
uint8_t bits_r;

uint8_t read_bits(uint8_t count)
{
        uint8_t i;
        uint8_t tmp=0;

        for(i=0;i<count;i++)
        {
                if(bitsleft_r==0)
                {
                        bits_r = *(code_ptr++);
                        bitsleft_r = 8;
                }
                bitsleft_r--;
                tmp |= (((bits_r >> (bitsleft_r)) & 1) << (count-1-i));
        }
        return tmp;

}


//-------------------------------------------------------------------------------------------------
int unpack_code(FILE *fh, const struct IrCode *irc)
{
    int r = 0;
    uint8_t index, type;
    uint16_t ontime, offtime;


    code_ptr = &irc->codes[0];
    bitsleft_r = 0;
    bits_r = 0;

    type = read_bits(2);
    if(type==0) read_bits(2);

    offtime = 0xFF00 + irc->timer_val;   //write start code
    if(fh && fwrite(&offtime, 2, 1, fh) == 1) r += 2;

    for(;;)
    {
        index = read_bits(4-type);
        ontime = irc->times[index*2+0];
        offtime = irc->times[index*2+1];

        if(fh && fwrite(&ontime, 2, 1, fh) == 1) r += 2;
        if(offtime == 0) break;  // offTime = 0 signifies last codeElement for a POWER code

        if(offtime >= 0xFF00)
        {
            offtime = 0xFEFF;
            printf("warning: off-time truncated\n");
        }

        if(fh && fwrite(&offtime, 2, 1, fh) == 1) r += 2;
    }

    return r;
}


//-------------------------------------------------------------------------------------------------
int main(int argn, const char *argv[])
{
    int n, b = 0;

    for(n=0; n < NUM_CODES; n++)
    {
        b += unpack_code(stdout, powerCodes[n]);
    }

    fprintf(stderr, "%d codes (%d bytes) written\n", NUM_CODES, b);
    return(0);
}