#include "npc.h"

uint64_t *cpu_gpr = NULL;
uint64_t cpu_pc = 80000000;


extern "C" void get_regs(const svOpenArrayHandle r) {
    cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r) -> datap());
}

extern "C" void get_pc(long long int pc) {
    cpu_pc = (uint64_t)pc;
    // printf("cpu_pc: %lx\n", cpu_pc);
}


// 一个输出RTL中通用寄存器的值的示例
void dump_gpr() {
    for (int i = 0; i < 32; i++) {
        printf("gpr[%d] = 0x%lx\n", i, cpu_gpr[i]);
        // printf("===========\n");
    }
}


void npc_exit(int status) {
    // dump_gpr();
    // printf("%x", cpu_gpr[10]);
    status = cpu_gpr[10]; // a[0]
#ifdef CONFIG_NPC_ITRACE
    if (status != 0) { 
        itrace_output();
        dump_gpr();
    }
#endif
    if (status == 0) puts("\33[1;32mSim Result: HIT GOOD TRAP\33[0m");
    else puts("\33[1;31mSim Result: HIT BAD TRAP\33[0m");
    exit(status);
}

void ebreak() {
    printf("HIT EBREAK\n");
    npc_exit(0);
}