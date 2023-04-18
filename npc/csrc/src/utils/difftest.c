#include "npc.h"
#include <utils/debug.h>

extern CPU_state cpu_npc;
extern CPU_state cpu_nemu;


//=====================Difftest=========================
// NEMU是REF，NPC是DUT

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


int check_regs_npc(CPU_state cpu_nemu, CPU_state cpu_npc) {
    if (cpu_npc.pc != cpu_nemu.pc) {
        Printf("Missing match at pc, nemu_val=%lx, npc_val=%lx\n", RED, cpu_nemu.pc, cpu_npc.pc);
        return 0;
    }
    for (int i = 0; i < 32; i++) {
        // printf("[difftest] nemu_gpr[%2d]=%16lx, npc_gpr[%2d]=%16lx\n", GREEN, i, cpu_nemu.gpr[i], i, cpu_npc.gpr[i]);
        if (cpu_npc.gpr[i] != cpu_nemu.gpr[i]) {
            Printf("Missing match gpr[%d], nemu_val=%lx, npc_val=%lx\n", RED, i, cpu_nemu.gpr[i], cpu_npc.gpr[i]);
            return 0;
        }
    }
    for (int i = 0; i < 4; i++) {
        // Printf("[difftest] nemu_csr[%2d]=%16lx, npc_csr[%2d]=%16lx\n", GREEN, i, cpu_nemu.csr[i], i, cpu_npc.csr[i]);
        if (cpu_npc.csr[i] != cpu_nemu.csr[i]) {
            Printf("Missing match csr[%d], nemu_val=%lx, npc_val=%lx\n", RED, i, cpu_nemu.csr[i], cpu_npc.csr[i]);
            // printf(RED("npc_pc=%lx\n"), cpu_npc.pc);
            return 0;
        }
    }
    // // printf(GREEN("[difftest] nemu_pc=%lx, npc_pc=%lx\n"), cpu_nemu.pc, cpu_npc.pc);
    return 1;
}

// extern bool diff_skip_ref_flag;
extern int diff_skip_ref_flag;

void difftest_exec_once() {
    if (diff_skip_ref_flag) {
        // to skip the checking of an instruction, just copy the reg state to reference design
        // Log("diff_skip_ref_flag = %d", diff_skip_ref_flag);
        ref_difftest_regcpy(&cpu_npc, DIFFTEST_TO_REF); // `direction`为`DIFFTEST_TO_REF`时, 设置REF的寄存器状态为`dut`;

        // ref_difftest_regcpy(&cpu_nemu, DIFFTEST_TO_DUT);

        diff_skip_ref_flag -= 1;
        // diff_skip_ref_flag = false;
        return ;
    }

    ref_difftest_exec(1);

    // Printf("nemu_pc=%lx, npc_pc=%lx\n", RED, cpu_nemu.pc, cpu_npc.pc);
    ref_difftest_regcpy(&cpu_nemu, DIFFTEST_TO_DUT);
    // Printf("nemu_pc=%lx, npc_pc=%lx\n", RED, cpu_nemu.pc, cpu_npc.pc);

    if (!check_regs_npc(cpu_nemu, cpu_npc)) npc_exit(-1);
}

// static bool is_skip_ref = false;
// static int skip_dut_nr_inst = 0;

// this is used to let ref skip instructions which
// can not produce consistent behavior with NEMU
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
