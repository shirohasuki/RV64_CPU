#include <isa.h>
#include "local-include/reg.h"


const char *regs[] = {
    "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
    "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
    "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
    "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

const char *csrs[] = {
    "mtvec", "mepc", "mstatus", "mcause"
};


void dump_reg();
void dump_csr(); 

void isa_reg_display() {
    dump_reg();
    dump_csr(); 
}

word_t isa_reg_str2val(const char *s, bool *success) {
    if (strlen(s) != 2) {
        *success = false;
        return 0;
    }
    for (int i = 0; i < 32; ++i) {
        if (s[0] == regs[i][0] && s[1] == regs[i][1]) {
            return gpr(i);
        }
    }
    if (s[0] == 'p' && s[1] == 'c') {
        return cpu.pc;
    }
    *success = false;
    return 0;
}

void dump_reg() {
    printf("============= REGs =================\n");
    for (int i = 0; i < 32; i++) {
        printf("reg[%2d] = 0x%-14lx\t%s\n", i, cpu.gpr[i], regs[i]);
    } // -:左对齐
    printf("pc      = 0x%lx\n", cpu.pc);
    printf("====================================\n");
}

void dump_csr() {
    printf("============= CSRs =================\n");
    for (int i = 0; i < 4; i++) {
        printf("csr[%2d] = 0x%-14lx\t%s\n", i, cpu.csr[i], csrs[i]);
    } // -:左对齐
    printf("pc      = 0x%lx\n", cpu.pc);
    printf("====================================\n");
}