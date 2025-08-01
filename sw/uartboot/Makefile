# ======================================================================
#  Builds the boot code memory file for Xilinx Vivado EDA tools.
#
#  Chun-Jen Tsai, Nov/29/2021
# ======================================================================

CROSS = riscv32-unknown-elf
CCPATH = $(RISCV)/bin

CC = $(CCPATH)/$(CROSS)-gcc
LD = $(CCPATH)/$(CROSS)-ld
OD = $(CCPATH)/$(CROSS)-objdump
OC = $(CCPATH)/$(CROSS)-objcopy

CCFLAGS = -Wall -O2 -fomit-frame-pointer -fno-builtin -march=rv32ima_zicsr_zifencei -mstrict-align
LDFLAGS = -T$(PROJ).ld -Map=$(PROJ).map

OCFLAGS = -O binary
ODFLAGS = -d

PROJ = uartboot
OBJS = boot.o $(PROJ).o io_uart.o

all:
	make $(PROJ).mem

clean:
	rm -f *.mem *.objdump *.map *.o

%.o: %.c $(PROJ).ld
	$(CC) $(CCFLAGS) -c $< -o $@

$(PROJ).elf: $(OBJS)
	$(LD) $(LDFLAGS) $(OBJS) -o $@
	rm $^

$(PROJ).bin: $(PROJ).elf
	$(OC) $(OCFLAGS) $< $@
	$(OD) $(ODFLAGS) $< > $(PROJ).objdump

$(PROJ).mem: $(PROJ).bin
	$(eval BIN_SIZE = $(shell stat -c %s $(PROJ).bin))
	hexdump -ve '1/4 "%08x\n"' -n $(BIN_SIZE) $(PROJ).bin > $@
	rm $<

