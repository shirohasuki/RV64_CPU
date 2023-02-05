include $(AM_HOME)/scripts/isa/riscv64.mk

AM_SRCS := riscv/npc/start.S \
           riscv/npc/trm.c \
           riscv/npc/ioe.c \
           riscv/npc/timer.c \
           riscv/npc/input.c \
           riscv/npc/cte.c \
           riscv/npc/trap.S \
           platform/dummy/vme.c \
           platform/dummy/mpe.c

CFLAGS    += -fdata-sections -ffunction-sections
LDFLAGS   += -T $(AM_HOME)/scripts/linker.ld --defsym=_pmem_start=0x80000000 --defsym=_entry_offset=0x0
LDFLAGS   += --gc-sections -e _start
CFLAGS += -DMAINARGS=\"$(mainargs)\"
.PHONY: $(AM_HOME)/am/src/riscv/npc/trm.c

image: $(IMAGE).elf
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin


# NPC_HOME = 

run: image
	cp $(IMAGE).bin $(NPC_HOME)/image.bin
	hexdump -v -e'/4 "%08x\n"'  $(NPC_HOME)/image.bin  > $(NPC_HOME)/image.hex
#先把bin文件粘贴到npc目录下，后将bin文件转化为HEX文件
	awk 'getline i{print i}1' $(NPC_HOME)/image.hex > $(NPC_HOME)/image.txt  
#交换每两行顺序（读取入ram的顺序）参考：http://blog.chinaunix.net/uid-10540984-id-2427107.html  Tim大师的思路，真是佩服到不行啊，把getline作为pattern，如果是最后一行是奇数行，没有下读取的话，是不会执行后面的print的，完美解决了奇数行最后一行打印的问题，第一行，读取下一行给i，然后打印i的值（即下一行的内容），然后patter为1执行默认的{print}，这样刚好把两行互换，而且还具备了最后一行是奇数行的判断，佩服。
	sed '$!N;s/\n//g' $(NPC_HOME)/image.txt  > $(NPC_HOME)/image.hex   
#因为位宽为64所以使用sed两行合并为一行

# $(MAKE) -C $(NPC_HOME)
	$(MAKE) -C $(NPC_HOME) ISA=$(ISA) run ARGS="$(NEMUFLAGS)" IMG=$(IMAGE).bin