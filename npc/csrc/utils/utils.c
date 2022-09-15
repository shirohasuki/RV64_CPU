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
    printf("============= Regs =================\n");
    for (int i = 0; i < 32; i++) {
        printf("gpr[%d] = 0x%lx\n", i, cpu_gpr[i]);
    }
    printf("====================================\n");
}


void npc_exit(int status) {
    if (status == 0) puts("\33[1;32m[Sim Result]: HIT GOOD TRAP\33[0m");
    else {
#ifdef CONFIG_NPC_ITRACE
    itrace_output();
#endif
#ifdef CONFIG_NPC_GPRTRACE
    dump_gpr(); 
#endif
        puts("\33[1;31m[Sim Result]: HIT BAD TRAP\33[0m");
    }
    exit(status);
}

void ebreak() {
    printf(BLUE("HIT EBREAK\n"));
    npc_exit(cpu_gpr[10]); // a[0]
}