#include <isa.h>

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
    // cpu.csr[mepc] = epc;
    // cpu.csr[mcause] = NO;
    // return cpu.csr[mtvec];
    // return 0;
  cpu.csr[mepc] = epc;
  cpu.csr[mcause] = NO;
#ifdef CONFIG_ETRACE
  printf("[ETrace] Exception: mtvec = 0x%016lx, mepc = 0x%016lx, mstatus = 0x%016lx, mcause = 0x%016lx\n",
    cpu.csr[mtvec], cpu.csr[mepc], cpu.csr[mstatus], cpu.csr[mcause]);
#endif
  return cpu.csr[mtvec];
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
