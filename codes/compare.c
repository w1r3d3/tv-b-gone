//=================================================================================================
// compare two raw/uncompressed code-files
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
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;

#pragma pack(1)
typedef struct {uint16_t off, on;} ircode_entry;
#pragma pack()


//-------------------------------------------------------------------------------------------------
int main(int argn, const char *argv[])
{
    int n, codes=0;
    FILE *fh[2];
    ircode_entry irc[2];


    if(argn != 3)
    {
        printf("usage: %s codes1.bin codes2.bin\n", argv[0]);
        return(-1);
    }

    fh[0] = fopen(argv[1], "rb");
    fh[1] = fopen(argv[2], "rb");
    if(!fh[0] || !fh[1])
    {
        printf("error: failed to open input file\n");
        return(-1);
    }

    for(n = 0; 1; n++)
    {
        bzero(irc, sizeof(irc));
        if(fread(&irc[0], sizeof(ircode_entry), 1, fh[0]) < 0 || fread(&irc[1], sizeof(ircode_entry), 1, fh[1]) < 0)
        {
            printf("error: failed to read from input file\n");
            return(-1);
        }

        if(irc[0].off != irc[1].off || irc[0].on != irc[1].on)
        {
            printf("error: difference in code #%d at index %d\n", codes, n);
            printf("       %d\t%d\t!=\t%d\t%d\n", irc[0].on, irc[0].off, irc[1].on, irc[1].off);
            return(-1);
        }

        if(n > 0 && (irc[0].off >= 0xFF00 || irc[0].off == 0))  //start of new code/end of file?
        {
            codes++;
            n = 0;
            if(irc[0].off == 0) break;      //code finished
        }
    }

    printf("%d codes compared\n", codes);

    fclose(fh[0]);
    fclose(fh[1]);
    return(0);
}
