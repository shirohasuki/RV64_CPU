#include <isa.h>

// word_t isa_raise_intr(word_t NO, vaddr_t epc) {
//     cpu.csr[mepc] = epc;
//     cpu.csr[mcause] = NO;
// #ifdef CONFIG_ETRACE
//     printf("[ETrace] Exception: mtvec = 0x%016lx, mepc = 0x%016lx, mstatus = 0x%016lx, mcause = 0x%016lx\n", cpu.csr[mtvec], cpu.csr[mepc], cpu.csr[mstatus], cpu.csr[mcause]);
// #endif
//     return cpu.csr[mtvec];
// }

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
    word_t mstatus_buf   = 0; mstatus_buf = cpu.csr[mstatus];
    cpu.csr[mstatus] = (SEXT(BITS(mstatus_buf, 63, 13), 51) << 13) | (BITS(3, 1, 0) << 11) | (BITS(mstatus_buf, 10, 8) << 8) | (BITS(mstatus_buf, 3, 3) << 7) | (BITS(mstatus_buf, 6, 4) << 4) | (BITS(0, 1, 1) << 3) | (BITS(mstatus_buf, 2, 0)) ;
    cpu.csr[2]    = epc; 
    cpu.csr[mcause]  = NO;  
#ifdef CONFIG_ETRACE
    printf("[ETrace] Exception: mtvec = 0x%016lx, mepc = 0x%016lx, mstatus = 0x%016lx, mcause = 0x%016lx\n", cpu.csr[mtvec], cpu.csr[mepc], cpu.csr[mstatus], cpu.csr[mcause]);
#endif
  return cpu.csr[mtvec]; 
}

word_t isa_mret() {
    word_t mstatus_buf   = 0; mstatus_buf = cpu.csr[mstatus];
    cpu.csr[mstatus] = (SEXT(BITS(mstatus_buf, 63, 13), 51) << 13) | (BITS(0, 1, 0) << 11) | (BITS(mstatus_buf, 10, 8) << 8) | (BITS(1, 0, 0) << 7) | (BITS(mstatus_buf, 6, 4) << 4) | (BITS(mstatus_buf, 7, 7) << 3) | (BITS(mstatus_buf, 2, 0)) ;
    return cpu.csr[mepc]; 
}


word_t isa_query_intr() {
    return INTR_EMPTY;
}
