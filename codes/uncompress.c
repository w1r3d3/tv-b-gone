//=================================================================================================
// uncompress binary code-file for test, see file 'compress.c' for compression method
// copyright (c) 2009 Michael Rentschler <http://www.w1r3.de/>
//=================================================================================================
// This file is licensed under the GNU GPL v3.
// No warranty of any kind is explicitly or implicitly stated.
// For more information read the LICENSE file attached to this project.
//=================================================================================================
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//-------------------------------------------------------------------------------------------------
#define MAX_CODE_ENTRIES        256                     //max ircode-entries per ircode (for static alloc)

#define INDEX_BIT_SIZE          2                       //number of bits used for wordbook index
#define MAX_WORDS               (1<<INDEX_BIT_SIZE)     //maximum number of words addressable by index
#define MAX_ON_WORDS            MAX_WORDS               //number of on-words hold inside wordbook
#define MAX_OFF_WORDS           (MAX_WORDS-1)           //  for off-words: reserve place for terminator
#define SMALL_WORD_BIT_SIZE     10                      //use smaller entries for words below this size

#define DEBUG_PRINTF(...)       //fprintf(stderr, __VA_ARGS__)


//-------------------------------------------------------------------------------------------------
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;

#pragma pack(1)
typedef struct {uint16_t off, on;} ircode_entry;
#pragma pack()


//-------------------------------------------------------------------------------------------------
int bits_buf_cnt = 0;
uint8_t bits_buf = 0;


//-------------------------------------------------------------------------------------------------
uint16_t read_bits(int bits)
{
    uint16_t result = 0;

    //DEBUG_PRINTF("read_bits(%d) -> ", bits);

    do
    {
        if(bits_buf_cnt == 0)
        {
            bits_buf_cnt = 8;
            bits_buf = (uint8_t)fgetc(stdin);
        }

        result = (result<<1) | (bits_buf&1);
        bits_buf >>= 1;
        bits_buf_cnt--;
    }
    while(--bits > 0);

    //DEBUG_PRINTF("%u\n", result);

    return(result);
}


//-------------------------------------------------------------------------------------------------
int read_word_direct()
{
    if(SMALL_WORD_BIT_SIZE <= 0) return read_bits(16);
    else if(read_bits(1) == 0) return read_bits(SMALL_WORD_BIT_SIZE);
    else return read_bits(16);
}


//-------------------------------------------------------------------------------------------------
int read_word(uint16_t *wordbook)
{
    int i = read_bits(1);
    if(i < 1)
    {
        if(wordbook[0] == 0) wordbook[0] = read_word_direct();
        return wordbook[0];
    }

    i = read_bits(2);
    if(i < 3)
    {
        if(wordbook[1+i] == 0) wordbook[1+i] = read_word_direct();
        return wordbook[1+i];
    }

    if(INDEX_BIT_SIZE > 2)
    {
        fprintf(stderr, "error: index bit size not supported\n");
        exit(-1);
    }

    return read_word_direct();
}


//-------------------------------------------------------------------------------------------------
int uncompress_code(int code)
{
    int n, m, p;
    uint16_t wordbook_on[4];
    uint16_t wordbook_off[4];


    n = read_bits(8);                   //read freq.
    if(n == 0xFF) return(-1);           //terminator?
    n |= 0xFF00;
    fwrite(&n, 2, 1, stdout);           //write freq

    DEBUG_PRINTF("\n%d: %d\n", code, (n&0xFF));

    // reset wordbooks
    bzero(wordbook_on, sizeof(wordbook_on));
    bzero(wordbook_off, sizeof(wordbook_off));
    wordbook_off[3] = 0xFFFF;   //fixed wordbook entry: terminator

    for(;;)
    {
        n = read_word(wordbook_on);
        DEBUG_PRINTF("\t%d\t", n);
        if(n == 0xFFFF) break;
        fwrite(&n, 2, 1, stdout);           //write on-time

        n = read_word(wordbook_off);
        DEBUG_PRINTF("%d\n", n);
        if(n == 0xFFFF) break;
        fwrite(&n, 2, 1, stdout);           //write off-time
    }

    DEBUG_PRINTF("\n");

    for(n=0; n < 4; n++) DEBUG_PRINTF("\t%d", wordbook_on[n]); DEBUG_PRINTF("\n");
    for(n=0; n < 4; n++) DEBUG_PRINTF("\t%d", wordbook_off[n]); DEBUG_PRINTF("\n");

    DEBUG_PRINTF("\n");
}


//-------------------------------------------------------------------------------------------------
int main(int argn, const char *argv[])
{
    int codes = 0;
    for(; uncompress_code(codes) >= 0; codes++);
    fprintf(stderr, "%d codes uncompressed\n", codes);
    return(0);
}
