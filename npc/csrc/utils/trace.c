#include "npc.h"


#ifdef CONFIG_NPC_ITRACE
//=====================ITRACE=========================
#define SIZE_RINGBUF 16 // iringbuf环形里单次存储指令条数目
#define LEN_RINGBUF 256
int ringptr = SIZE_RINGBUF - 1;
char ringbuf[SIZE_RINGBUF][LEN_RINGBUF];

void itrace_record(uint64_t pc) {
    if (pc < MEM_BASE) return;
    // if (pc < MEM_BASE) {
    // printf("1.%lx\n", pc);
    //     return ;
    // }
    // ringptr
    if (ringptr == SIZE_RINGBUF - 1) ringptr = 0;
    else ringptr = ringptr + 1;
    // fetch_inst
    uint8_t *pt = cpu2mem(pc);
    // printf("2.%x\n", *pt);
    uint8_t *inst = (uint8_t*)malloc(sizeof(uint8_t) * 4);
    for (int i = 0; i < 4; ++i) {
    // printf("3.%x\n", *pt);
        inst[i] = (*pt++);
    }
    // prepare buffer
    char *p = ringbuf[ringptr];
    // printf("4.%x\n", *pt);
    p += sprintf(p, "0x%016lx:", pc);
    // printf("5.%x\n", *pt);
    for (int i = 0; i < 4; ++i) {
        p += sprintf(p, " %02x", inst[i]);
    }
    p += sprintf(p, "\t");
    // printf("6.p:%x\n", *p);
    // disasm
    disassemble(p, 100, pc, inst, 4);
    // disassemble(p, pc, inst, 4);
}

void itrace_output() {
    printf("========== Itrace Ringbuf ==========\n");
    for (int i = 0; i < SIZE_RINGBUF; ++i) {
        if (ringptr == i) printf("--->");
        else printf("    ");
        printf("%s\n", ringbuf[i]);
    }
    printf("====================================\n");
}

#endif