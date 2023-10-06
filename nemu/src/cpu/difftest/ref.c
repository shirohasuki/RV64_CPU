#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
    if (direction == DIFFTEST_TO_DUT) {
        buf = (void *)guest_to_host(addr);
    }
    else if (direction == DIFFTEST_TO_REF) {
        for (size_t i = 0; i < n; i++) {
            paddr_write(addr + i, 1, *((uint8_t*)buf + i));
        }
    }
}
// 在DUT host memory的`buf`和REF guest memory的`dest`之间拷贝`n`字节,
// `direction`指定拷贝的方向, `DIFFTEST_TO_DUT`表示往DUT拷贝, `DIFFTEST_TO_REF`表示往REF拷贝

void difftest_regcpy(void *dut, bool direction) {
    if (direction == DIFFTEST_TO_DUT) {
        for (int i = 0; i < 32; i++) { ((CPU_state *)dut)->gpr[i] = cpu.gpr[i]; }
        ((CPU_state *)dut)->pc = cpu.pc;
        for (int i = 0; i <  4; i++) { ((CPU_state *)dut)->csr[i] = cpu.csr[i]; }
        // printf("%lx  %lx\n", ((CPU_state *)dut)->pc, cpu.pc);
    }
    else {
        // printf("PC:DUT:%lx -> REF:%lx\n", ((CPU_state *)dut)->pc, cpu.pc); 
        for (int i = 0; i < 32; ++i) { cpu.gpr[i] = ((CPU_state *)dut)->gpr[i]; }
        cpu.pc = ((CPU_state *)dut)->pc; 
        for (int i = 0; i <  4; ++i) { cpu.csr[i] = ((CPU_state *)dut)->csr[i]; }

    }
}

void difftest_exec(uint64_t n) {
    cpu_exec(n);
} // 让REF执行`n`条指令

void difftest_raise_intr(word_t NO) {
    word_t mstatus_buf = 0; mstatus_buf = cpu.csr[mstatus];
    cpu.csr[mstatus] = (SEXT(BITS(mstatus_buf, 63, 13), 51) << 13) | (BITS(3, 1, 0) << 11) | (BITS(mstatus_buf, 10, 8) << 8) | (BITS(mstatus_buf, 3, 3) << 7) | (BITS(mstatus_buf, 6, 4) << 4) | (BITS(0, 1, 1) << 3) | (BITS(mstatus_buf, 2, 0)) ;
    cpu.csr[mepc]    = mepc; 
    cpu.csr[mcause]  = NO;  
    // return cpu.csr[mtvec]; 
}

void difftest_init(int port) {
  /* Perform ISA dependent initialization. */
    init_isa();
}// 初始化REF的DiffTest功能
