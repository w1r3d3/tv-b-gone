TARGETS := makebin codes.bin compress codes.inc codes.cmp uncompress codes.unc compare compare-files

all: $(TARGETS)

#
# create file 'codes.bin' from original packed code-file 'codes.h'
#
makebin: makebin.c codes.h
	gcc makebin.c -o makebin $(CFLAGS)

codes.bin: makebin
	./makebin >codes.bin

#
# small util to compress file 'codes.bin' and produce asm-include and binary code files
#
compress: compress.c
	gcc compress.c -o compress

codes.inc: compress codes.bin
	./compress < codes.bin > codes.inc

codes.cmp: compress codes.bin
	./compress -b < codes.bin > codes.cmp

#
# uncompress 'codes.cmp' for testing
#
uncompress: uncompress.c
	gcc uncompress.c -o uncompress

codes.unc: uncompress codes.cmp
	./uncompress < codes.cmp > codes.unc

#
# compare uncompressed code-files for testing
#
compare: compare.c
	gcc compare.c -o compare

compare-files: compare codes.bin codes.unc
	./compare codes.bin codes.unc

#
# clean-up
#
clean:
	rm -f $(TARGETS)
