#include "npc.h"

//=====================ITRACE=========================
#ifdef CONFIG_NPC_ITRACE

#define SIZE_RINGBUF 16 // iringbuf环形里单次存储指令条数目
#define LEN_RINGBUF 256 // 单个buff可存放最大长度
int ringptr = SIZE_RINGBUF - 1;
char ringbuf[SIZE_RINGBUF][LEN_RINGBUF];

void itrace_record(uint64_t pc) {
    if (pc < MEM_BASE) return;
    // ringptr
    ringptr = (ringptr + 1) % SIZE_RINGBUF;
    // inst_fetch
    uint8_t *pt = cpu2mem(pc);
    uint8_t *inst = (uint8_t*)malloc(sizeof(uint8_t) * 4);
    for (int i = 0; i < 4; ++i) {
        inst[i] = (*pt++);
    }
    // prepare buffer
    char *p = ringbuf[ringptr];
    p += sprintf(p, "0x%016lx:", pc);
    for (int i = 0; i < 4; ++i) {
        p += sprintf(p, " %02x", inst[i]);
    }
    p += sprintf(p, "\t");
    // disasm
    disassemble(p, 100, pc, inst, 4);
}

void itrace_output() {
    printf("========== IRingBuf Result ==========\n"); // 把环形的拉直输出了
		for (int i = ringptr + 1; ; i = (i + 1) % SIZE_RINGBUF) {
			if (i == ringptr) { printf("---> %s\n", ringbuf[i]); break;}
			else printf("     %s\n", ringbuf[i]);
		}
    printf("====================================\n");
}
#endif


//=====================MTRACE=========================
char mtrace_buf[SIZE_MTRACEBUF][100] = {0};
int mtrace_count = 0;

extern "C" void mtrace_record(unsigned char ren, unsigned char wen, long long int addr,long long int data, char mask) {
    if (ren) {
        sprintf(mtrace_buf[mtrace_count], "read:  addr:%016llx data:%016llx", addr, data);
        mtrace_count = (mtrace_count + 1) % SIZE_MTRACEBUF;
    }
    if (wen) {
        sprintf(mtrace_buf[mtrace_count], "write:  addr:%016llx data:%016llx mask:%08llx", addr, data, mask);
        mtrace_count = (mtrace_count + 1) % SIZE_MTRACEBUF;
    }
}

void print_mtrace() {
    puts("========== MTRACE Result ==========");
    for (int i = 0; i < SIZE_MTRACEBUF; i++) {
        if (strlen(mtrace_buf[i]) == 0) break;
        if ((i + 1) % SIZE_MTRACEBUF == mtrace_count) printf("-->");
        else printf("   ");
        printf("%s\n", mtrace_buf[i]);
    }

    // for (int i = mtrace_count; ; i = (i + 1) % SIZE_MTRACEBUF) {
	// 	if (i == mtrace_count - 1) { printf("---> %s\n", mtrace_buf[i]); break;}
	// 	else printf("     %s\n", mtrace_buf[i]);
	// } // 这个buff里没东西时候会一直空输出
    puts("====================================");
}

