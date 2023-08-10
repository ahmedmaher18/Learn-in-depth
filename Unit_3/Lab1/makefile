CC=arm-none-eabi-
CFLAGS=-mcpu=arm926ej-s -g 
INCS=-I .
LIBS=
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o) 
AS= $(wildcard *.s)
ASOBJ= $(AS:.s=.o)
TARGET=output


all: $(TARGET).bin
	@echo "********Build Completed********"

startup.o: startup.s
	$(CC)as.exe  $(CFLAGS) $< -o $@      
        
%.o: %.c
	$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@  

$(TARGET).elf: $(OBJ) $(ASOBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(ASOBJ) -o $@ -Map=Map_file.map

$(TARGET).bin: $(TARGET).elf
	$(CC)objcopy.exe -O binary $< $@

clean_all:
	rm *.o *.elf *.bin

clean:
	rm .*.elf *.bin
