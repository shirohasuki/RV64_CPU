#ifndef __ISA_RISCV64_H__
#define __ISA_RISCV64_H__

#include <common.h>

enum {
    // mstatus, mtvec, mepc, mcause,
    mtvec, mepc, mstatus, mcause,
    csr_regnum, // none
};

typedef struct {
    word_t gpr[32];  // General-Purpose Registers 通用存储器
    vaddr_t pc;
    word_t csr[4];    
} riscv64_CPU_state;

// decode
typedef struct {
    union {
        uint32_t val;
    } inst;
} riscv64_ISADecodeInfo;

#define isa_mmu_check(vaddr, len, type) (MMU_DIRECT)

#endif
