#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
    if (cpu.pc != ref_r->pc) {
        printf("[difftest] PC unequal: nemu: %lx native: %lx\n", cpu.pc, ref_r->pc);
        return false;
    }
    for (int i = 0; i < 32; i++) {
        if (cpu.gpr[i] != ref_r->gpr[i]) {
            printf("[difftest] REG[%2d] unequal(pc=%lx): nemu: %lx native: %lx\n", i, cpu.pc, cpu.gpr[i], ref_r->gpr[i]);
            return false;
        }
    }
    // for (int i = 0; i < 4; i++) {
    //     if (cpu.csr[i] != ref_r->csr[i]) {
    //         printf("[difftest] CSR[%2d] unequal(pc=%lx): nemu: %lx native: %lx\n", i, cpu.pc, cpu.csr[i], ref_r->csr[i]);
    //         return false;
    //     }
    // }
    return true;
}

void isa_difftest_attach() {
}
