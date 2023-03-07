#include "npc.h"
#include <utils/debug.h>

extern CPU_state ref_cpu;

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

    ref_difftest_init();
    ref_difftest_memcpy(MEM_BASE, mem, img_size, DIFFTEST_TO_REF);
    ref_difftest_regcpy(&cpu_npc, DIFFTEST_TO_REF);
}



int check_regs_npc(CPU_state ref_cpu) {
    if (cpu_npc.pc != ref_cpu.pc) {
        Printf("Missing match at pc, nemu_val=%lx, npc_val=%lx\n", RED, ref_cpu.pc, cpu_npc.pc);
        return 0;
    }
    for (int i = 0; i < 32; i++) {
        // printf(GREEN("[difftest] nemu_gpr[%2d]=%16lx, npc_gpr[%2d]=%16lx\n"), i, ref_cpu.gpr[i], i, cpu_npc.gpr[i]);
        if (cpu_npc.gpr[i] != ref_cpu.gpr[i]) {
            Printf("Missing match gpr[%d], nemu_val=%lx, npc_val=%lx\n", RED, i, ref_cpu.gpr[i], cpu_npc.gpr[i]);
            // printf(RED("npc_pc=%lx\n"), cpu_npc.pc);
            return 0;
        }
    }
    for (int i = 0; i < 4; i++) {
        // printf(GREEN("[difftest] nemu_gpr[%2d]=%16lx, npc_gpr[%2d]=%16lx\n"), i, ref_cpu.gpr[i], i, cpu_npc.gpr[i]);
        if (cpu_npc.csr[i] != ref_cpu.csr[i]) {
            Printf("Missing match csr[%d], nemu_val=%lx, npc_val=%lx\n", RED, i, ref_cpu.csr[i], cpu_npc.csr[i]);
            // printf(RED("npc_pc=%lx\n"), cpu_npc.pc);
            return 0;
        }
    }
    // printf(GREEN("[difftest] nemu_pc=%lx, npc_pc=%lx\n"), ref_cpu.pc, cpu_npc.pc);
    return 1;
}


void difftest_exec_once() {

    if (diff_skip_flag) {
        // to skip the checking of an instruction, just copy the reg state to reference design
        ref_difftest_regcpy(&cpu_npc, DIFFTEST_TO_REF); // `direction`为`DIFFTEST_TO_REF`时, 设置REF的寄存器状态为`dut`;
        diff_skip_flag = false;
        return;
    }

    ref_difftest_exec(1);
    ref_difftest_regcpy(&ref_cpu, DIFFTEST_TO_DUT);
    // printf(GREEN("3. check at nemu_pc=%lx, npc_pc=%lx\n"), ref_cpu.pc, cpu_npc.pc);
    if (!check_regs_npc(ref_cpu)) npc_exit(-1);
}


// static bool is_skip_ref = false;
// static int skip_dut_nr_inst = 0;

// // this is used to let ref skip instructions which
// // can not produce consistent behavior with NEMU
// void difftest_skip_ref() {
//     is_skip_ref = true;
//     // If such an instruction is one of the instruction packing in QEMU
//     // (see below), we end the process of catching up with QEMU's pc to
//     // keep the consistent behavior in our best.
//     // Note that this is still not perfect: if the packed instructions
//     // already write some memory, and the incoming instruction in NEMU
//     // will load that memory, we will encounter false negative. But such
//     // situation is infrequent.
//     skip_dut_nr_inst = 0;
// }

#endif
