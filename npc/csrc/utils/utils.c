#include "npc.h"

uint64_t *cpu_gpr = NULL;
uint64_t cpu_pc = 0x80000000;

const char *riscv64_regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

extern "C" void get_pc(long long int pc) {
    cpu_pc = (uint64_t)pc;
    // printf("cpu_pc: %lx\n", cpu_pc);
    cpu_npc.pc = cpu_pc; // give pc and regs to CPU status
}


extern "C" void get_regs(const svOpenArrayHandle r) {
    cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r) -> datap());
    // give regs to CPU status
    for (int i = 0; i < 32; i++) { cpu_npc.gpr[i] = cpu_gpr[i];}
}


// 一个输出RTL中通用寄存器的值的示例
void dump_gpr() {
    printf("============= Regs =================\n");
    for (int i = 0; i < 32; i++) {
        printf("gpr[%2d] = 0x%-14lx\t%s\n", i, cpu_gpr[i], riscv64_regs[i]);
    } // -:左对齐
    printf("pc      = 0x%lx\n", cpu_pc);
    printf("====================================\n");
}


void npc_exit(int status) {
    if (status == 0) puts("\33[1;32m[Sim Result]: HIT GOOD TRAP\33[0m");
    else {
#ifdef CONFIG_NPC_ITRACE
    itrace_output();
#endif
#ifdef CONFIG_NPC_MTRACE
    print_mtrace();
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