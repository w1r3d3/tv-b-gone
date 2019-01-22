PRJ		:= tv-b-gone

AS              := avra
AFLAGS          := --max_errors 25 -l $(PRJ).lst

PROG		:= avrdude
PFLAGS		:= -p m48 -c dragon_isp -P usb	#-B 10

SRC		:= $(PRJ).asm
TARGET          := $(PRJ).hex
DEPENDENCIES	:= m48def.inc macros.inc regdef.inc codes.inc

all: $(TARGET)

$(TARGET): $(SRC) $(DEPENDENCIES)
	$(AS) $(AFLAGS) $(SRC)

upload: $(TARGET)
	$(PROG) $(PFLAGS) -e -U lfuse:w:0xe2:m -U hfuse:w:0xdf:m -U efuse:w:0x01:m -U flash:w:$(TARGET) -U lock:w:0x3c:m

clean:
	rm -f $(TARGET) $(PRJ).eep.hex $(PRJ).map $(PRJ).lst $(PRJ).cof $(PRJ).obj

