//=================================================================================================
// compress binary code-file and generate asm-include-file
// copyright (c) 2009 Michael Rentschler <http://www.w1r3.de/>
//=================================================================================================
// This file is licensed under the GNU GPL v3.
// No warranty of any kind is explicitly or implicitly stated.
// For more information read the LICENSE file attached to this project.
//=================================================================================================
// compression method:
//
// each code contains a header:
//      freq                    :8 bit (0 = pulse code, -1 = end of list)
// the header get's followed by the code sequence (on-time/off-time alternating):
//      first wordbook index:           1 bit
//      next three wordbook indexes:    1+2 bit
//      next seven wordbook indexes:    1+2+3 bit
//      ...
//      all other words: 1+2+..+INDEX_BIT_SIZE+16 bit
// the word 0xFFFF or the reserved last index of the wordbook get's read as a terminator.
// there are two wordbooks, one for ontimes and one for offtimes. if an index doesn't exist (==0)
// it get's read right after it's index code and stored inside the wordbook. words with most
// occurrences get placed inside the top of the list (near index 0).
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

#define DW_PER_LINE             16                      //number of datawords per line (text-formatting)

#define DEBUG_PRINTF(...)       //fprintf(stderr, __VA_ARGS__)


//-------------------------------------------------------------------------------------------------
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;

#pragma pack(1)
typedef struct {uint16_t off, on;} ircode_entry;
#pragma pack()


//-------------------------------------------------------------------------------------------------
char binary_mode = 0;

int bits_total = 0;
int bits_buf_cnt = 0;
int bits_buf = 0;
int bits_buf_f = 0;


//-------------------------------------------------------------------------------------------------
void write_bits(const void *ptr, int bits)      //if ptr==NULL assume value '-1'
{
    uint16_t data = (ptr == NULL)? -1 : *((uint16_t*)ptr);

    DEBUG_PRINTF(":%d", bits);

    for(bits_total += bits; bits > 0; bits--)
    {
        bits_buf |= ((data >> (bits-1))&1) << bits_buf_cnt;     //shift in msb-first
        if((++bits_buf_cnt) >= 16)
        {
            if(binary_mode)
            {
                fwrite(&bits_buf, 2, 1, stdout);
            }
            else
            {
                printf((bits_buf_f == 0)? ".dw 0x%04X" : ", 0x%04X", bits_buf);
                if(++bits_buf_f >= DW_PER_LINE) {bits_buf_f = 0; printf("\n");}
            }

            bits_buf = 0;
            bits_buf_cnt = 0;
        }
    }
}


//-------------------------------------------------------------------------------------------------
int write_bits_finalize()
{
    write_bits(NULL, 8);        //write file terminator

    if(bits_buf_cnt > 0)
    {
        if(binary_mode)
        {
            fwrite(&bits_buf, 2, 1, stdout);
        }
        else
        {
            printf((bits_buf_f == 0)? ".dw 0x%02X\n" : ", 0x%04X\n", bits_buf);
        }
        bits_buf = 0;
        bits_buf_cnt = 0;
        bits_buf_f = 0;
    }
    return(((bits_total+15)/16)*2);
}


//-------------------------------------------------------------------------------------------------
int compress_code(int code, ircode_entry *irc, int entries)
{
    int n, m, o, p;
    uint16_t swap;
    ircode_entry words = {0, 0};
    ircode_entry e[MAX_CODE_ENTRIES];   //list of uniqe elements
    ircode_entry c[MAX_CODE_ENTRIES];   //occurence-counter of element list


    if(entries > MAX_CODE_ENTRIES)
    {
        fprintf(stderr, "warning: too many entries, skip code #%d\n", code);
        return(-1);
    }
    if((irc[0].off&0xFF00) != 0xFF00)
    {
        fprintf(stderr, "warning: illegal header, skip code #%d\n", code);
        return(-1);
    }
    if(irc[0].off == 0xFF00)
    {
        //fprintf(stderr, "warning: skip pulse code #%d\n", code);
        //return(-1);
    }


    // add entries to uniqe-list and count their occurence
    bzero(e, sizeof(e));
    bzero(c, sizeof(c));

    for(n=0; n < entries; n++)
    {
        for(m=0; m < entries; m++)      //one loop for on-times
        {
            if(e[m].on == irc[n].on)    //entry already in table, increase cntr
            {
                c[m].on++;
                break;
            }
            else if(e[m].on == 0)       //not in table, add
            {
                e[m].on = irc[n].on;
                c[m].on = 1;
                words.on++;
                //if(words.on > MAX_ON_WORDS) words.on = MAX_ON_WORDS;
                break;
            }
        }
        if(n > 0)
        for(m=0; m < entries; m++)      //one loop for off-times (ignore first entry)
        {
            if(e[m].off == irc[n].off)    //entry already in table, increase cntr
            {
                c[m].off++;
                break;
            }
            else if(e[m].off == 0)       //not in table, add
            {
                e[m].off = irc[n].off;
                c[m].off = 1;
                words.off++;
                //if(words.off > MAX_OFF_WORDS) words.off = MAX_OFF_WORDS;
                break;
            }
        }
    }


    // bubblesort on-times
    do
    {
        n = 0;
        for(m=entries-1; m > 0; m--)
        {
            if((c[m].on > c[m-1].on) || ((c[m].on == c[m-1].on) && (e[m].on > e[m-1].on)))
            {
                swap = e[m].on; e[m].on = e[m-1].on; e[m-1].on = swap;
                swap = c[m].on; c[m].on = c[m-1].on; c[m-1].on = swap;
                n = 1;  //mark as swapped, we have to do another run
            }
        }
    }
    while(n != 0);


    // bubblesort off-times
    do
    {
        n = 0;
        for(m=entries-1; m > 0; m--)
        {
            if((c[m].off > c[m-1].off) || ((c[m].off == c[m-1].off) && (e[m].off > e[m-1].off)))
            {
                swap = e[m].off; e[m].off = e[m-1].off; e[m-1].off = swap;
                swap = c[m].off; c[m].off = c[m-1].off; c[m-1].off = swap;
                n = 1;  //mark as swapped, we have to do another run
            }
        }
    }
    while(n != 0);


    // print sorted wordbooks
    DEBUG_PRINTF("\n%d: %d\n", code, (irc[0].off & 0xFF));
    for(n=0; n < words.on; n++) DEBUG_PRINTF("\t%d(%d)", e[n].on, c[n].on); DEBUG_PRINTF("\n");
    for(n=0; n < words.off; n++) DEBUG_PRINTF("\t%d(%d)", e[n].off, c[n].off); DEBUG_PRINTF("\n");


    // write code header
    write_bits(&irc[0].off, 8);         //write frequency

    // write code sequence
    bzero(c, sizeof(c));                //use cntr to mark if words are already placed inside the wordbook (>0)
    for(n=0; n < entries; n++)
    {
        if(n > 0)                       //skip first off-entry (0xFFxx + freq)
        {
            DEBUG_PRINTF("\t\t%d\t", irc[n].off);

            for(m=0; m < entries; m++)  //search word inside wordbook
            {
                if(m >= MAX_OFF_WORDS)  //word outside size of wordbook?
                {
                    for(p=1; p <= INDEX_BIT_SIZE; p++) write_bits(NULL, p);     //fill-up empty indexes

                    if(SMALL_WORD_BIT_SIZE <= 0) write_bits(&irc[n].on, 16);    //insert word directly
                    else if(irc[n].off < (1<<SMALL_WORD_BIT_SIZE)) write_bits(&irc[n].off, SMALL_WORD_BIT_SIZE+1);
                    else
                    {
                        write_bits(NULL, 1);
                        write_bits(&irc[n].off, 16);
                    }

                    break;
                }
                else if(e[m].off == irc[n].off) //found word?
                {
                    for(o=m,p=1; 1; p++)        //write index m
                    {
                        if(o < ((1<<p)-1))
                        {
                            write_bits(&o, p);
                            break;
                        }
                        write_bits(NULL, p);
                        o -= ((1<<p)-1);
                    }
                    if(c[m].off == 0)   //append word to wordbook?
                    {
                        c[m].off++;     //mark word as added

                        if(SMALL_WORD_BIT_SIZE <= 0) write_bits(&e[m].off, 16);    //insert word directly
                        else if(e[m].off < (1<<SMALL_WORD_BIT_SIZE)) write_bits(&e[m].off, SMALL_WORD_BIT_SIZE+1);
                        else
                        {
                            write_bits(NULL, 1);
                            write_bits(&e[m].off, 16);
                        }
                    }
                    break;
                }
            }
        }

        {
            DEBUG_PRINTF("\n\t%d\t\t", irc[n].on);

            for(m=0; m < entries; m++)  //search word inside wordbook
            {
                if(m >= MAX_ON_WORDS)   //word outside size of wordbook?
                {
                    for(p=1; p <= INDEX_BIT_SIZE; p++) write_bits(NULL, p);     //fill-up empty indexes

                    if(SMALL_WORD_BIT_SIZE <= 0) write_bits(&irc[n].on, 16);    //insert word directly
                    else if(irc[n].on < (1<<SMALL_WORD_BIT_SIZE)) write_bits(&irc[n].on, SMALL_WORD_BIT_SIZE+1);
                    else
                    {
                        write_bits(NULL, 1);
                        write_bits(&irc[n].on, 16);
                    }
                    break;
                }
                else if(e[m].on == irc[n].on)   //found word inside wordbook?
                {
                    for(o=m,p=1; 1; p++)        //write index m
                    {
                        if(o < ((1<<p)-1))
                        {
                            write_bits(&o, p);
                            break;
                        }
                        write_bits(NULL, p);
                        o -= ((1<<p)-1);
                    }
                    if(c[m].on == 0)    //append word to wordbook?
                    {
                        c[m].on++;      //mark word as added

                        if(SMALL_WORD_BIT_SIZE <= 0) write_bits(&e[m].on, 16);    //insert word directly
                        else if(e[m].on < (1<<SMALL_WORD_BIT_SIZE)) write_bits(&e[m].on, SMALL_WORD_BIT_SIZE+1);
                        else
                        {
                            write_bits(NULL, 1);
                            write_bits(&e[m].on, 16);
                        }
                    }
                    break;
                }
            }
        }

        DEBUG_PRINTF("\n");
    }

    // write terminator
    if(MAX_OFF_WORDS < MAX_WORDS)   //short terminator inside wordbook
    {
        for(o = MAX_OFF_WORDS,p=1; 1; p++)        //write index
        {
            if(o < ((1<<p)-1))
            {
                write_bits(&o, p);
                break;
            }
            write_bits(NULL, p);
            o -= ((1<<p)-1);
        }
    }
    else                        //long terminator otherwise
    {
        for(p=1; p <= INDEX_BIT_SIZE; p++) write_bits(NULL, p); //fill-up empty indexes

        if(SMALL_WORD_BIT_SIZE <= 0) write_bits(NULL, 16);      //insert word directly
        else
        {
            write_bits(NULL, 1);
            write_bits(NULL, 16);
        }
    }

    DEBUG_PRINTF("\n");

    return(0);
}


//-------------------------------------------------------------------------------------------------
int main(int argn, const char *argv[])
{
    int n, codes=0, skipped=0;
    ircode_entry irc[MAX_CODE_ENTRIES];


    if(argn > 1)
    {
        if(strcmp(argv[1], "-b") == 0 || strcmp(argv[1], "--binary") == 0) binary_mode = 1;
        else
        {
            fprintf(stderr, "usage: %s [--binary] < codes.in > codes.out\n", argv[0]);
            return(-1);
        }
    }


    for(n = 0; 1; n++)
    {
        if(n >= MAX_CODE_ENTRIES)
        {
            fprintf(stderr, "error: too many entries for code #%d\n", codes);
            return(-1);
        }

        if(fread(&irc[n], sizeof(ircode_entry), 1, stdin) < 0)
        {
            fprintf(stderr, "error: failed to read from standard input\n");
            return(-1);
        }

        if(n > 0 && (irc[n].off >= 0xFF00 || irc[n].off == 0))  //start of new code/end of file?
        {
            if(compress_code(codes++, irc, n) < 0) skipped++;   //got one code, process it
            if(irc[n].off == 0) break;                          //eof?

            irc[0] = irc[n];                                    //start with next code
            bzero(&irc[1], sizeof(irc)-sizeof(ircode_entry));
            n = 0;
        }
    }
    n = write_bits_finalize();

    fprintf(stderr, "%d codes written (%d bytes), %d codes skipped\n", codes-skipped, n, skipped);
    return(0);
}
