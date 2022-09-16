#include "npc.h"

extern CPU_state ref_cpu;
// CPU_state ref_cpu;
//=====================Difftest=========================
#ifdef CONFIG_NPC_DIFFTEST

// Definations of Ref
void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;
void (*ref_difftest_init)() = NULL;

void init_difftest(const char *ref_so_file, ll img_size) {
    void *handle;
    handle = dlopen(ref_so_file, RTLD_LAZY);
    assert(handle);
    
    ref_difftest_memcpy = (void (*)(uint32_t addr, void *buf, size_t n, bool direction))(dlsym(handle, "difftest_memcpy"));
    assert(ref_difftest_memcpy);

    ref_difftest_regcpy = (void (*)(void *dut, bool direction))(dlsym(handle, "difftest_regcpy"));
    assert(ref_difftest_regcpy);

    ref_difftest_exec = (void (*)(uint64_t n))(dlsym(handle, "difftest_exec"));
    assert(ref_difftest_exec);

    ref_difftest_raise_intr = (void (*)(uint64_t NO))(dlsym(handle, "difftest_raise_intr"));
    assert(ref_difftest_raise_intr);

    void (*ref_difftest_init)() = (void (*)())(dlsym(handle, "difftest_init"));
    assert(ref_difftest_init);

    // printf(GREEN("0. check at nemu_pc=%lx, npc_pc=%lx\n"), ref_cpu.pc, cpu_npc.pc);
    
    ref_difftest_init();
    ref_difftest_memcpy(MEM_BASE, mem, img_size, DIFFTEST_TO_REF);
    ref_difftest_regcpy(&cpu_npc, DIFFTEST_TO_REF);
    // printf(GREEN("0. check at nemu_pc=%lx, npc_pc=%lx\n"), ref_cpu.pc, cpu_npc.pc);
}



int check_regs_npc(CPU_state ref_cpu) {
    for (int i = 0; i < 32; i++) {
        // printf(GREEN("[difftest] reg[%2d], npc_val=%lx, nemu_val=%lx\n"), i, cpu_npc.gpr[i], ref_cpu.gpr[i]);
        if (cpu_npc.gpr[i] != ref_cpu.gpr[i]) {
            printf(RED("Missing match reg[%d], npc_val=%lx, nemu_val=%lx\n"), i, cpu_npc.gpr[i], ref_cpu.gpr[i]);
            return 0;
        }
    }
    if (cpu_npc.pc != ref_cpu.pc) {
        printf(RED("Missing match at pc, npc_val=%lx,nemu_val=%lx\n"), cpu_npc.pc, ref_cpu.pc);
        return 0;
    }
    return 1;
}


void difftest_exec_once() {
    
    printf(GREEN("1. check at nemu_pc=%lx, npc_pc=%lx\n"), ref_cpu.pc, cpu_npc.pc);

    ref_difftest_exec(1);
    
    printf(GREEN("2. check at nemu_pc=%lx, npc_pc=%lx\n"), ref_cpu.pc, cpu_npc.pc);

    ref_difftest_regcpy(&ref_cpu, DIFFTEST_TO_DUT);

    printf(GREEN("3. check at nemu_pc=%lx, npc_pc=%lx\n"), ref_cpu.pc, cpu_npc.pc);

    if (!check_regs_npc(ref_cpu)) npc_exit(-1);
}
#endif
