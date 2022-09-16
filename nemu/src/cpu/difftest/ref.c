#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

// void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
//     if (direction == DIFFTEST_TO_REF) {
//         for (size_t i = 0; i < n; i++) {
//             paddr_write(addr + i, 1, *((uint8_t*)buf + i));
//         }
//     }
// }
void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
    if (direction == DIFFTEST_TO_DUT) {
        buf = (void *)guest_to_host(addr);
    }
    else if (direction == DIFFTEST_TO_REF) {
        Log("%x,%lx", addr, n);
        char *buf_char = (char *)buf;
        for (int i = 0; i < n; i++) {
            paddr_write(addr + i, 1, buf_char[i]);
        }
    }
}
// 在DUT host memory的`buf`和REF guest memory的`dest`之间拷贝`n`字节,
// `direction`指定拷贝的方向, `DIFFTEST_TO_DUT`表示往DUT拷贝, `DIFFTEST_TO_REF`表示往REF拷贝

// void difftest_regcpy(void *dut, bool direction) {
//     if (direction == DIFFTEST_TO_REF) {
//         cpu.pc = ((uint64_t*)dut)[32];
//         printf("-1.ref: pc = %lx\n", cpu.pc);
//         for (int i = 0; i < 32; i++) {
//             cpu.gpr[i] = ((uint64_t*)dut)[i];
//         }
//         for (int i = 0; i < 4; i++) {
//             cpu.csr[i] = ((uint64_t*)dut)[i];
//         }
//     } // `direction`为`DIFFTEST_TO_REF`时, 设置REF的寄存器状态为`dut`; 
//     else {
//         ((uint64_t*)dut)[32] = cpu.pc;
//         for (int i = 0; i < 32; i++) {
//             ((uint64_t*)dut)[i] = cpu.gpr[i];
//         }
//         for (int i = 0; i < 4; i++) {
//             // printf("cpu.csr: %ld ", cpu.csr[i]);
//             ((uint64_t*)dut)[i] = cpu.csr[i];
//         }
//     } // `direction`为`DIFFTEST_TO_DUT`时, 获取REF的寄存器状态到`dut`;
// }

void difftest_regcpy(void *dut, bool direction) {
    if (direction == DIFFTEST_TO_DUT) {
        for (int i = 0; i < 32; i++)
            ((CPU_state *)dut)->gpr[i] = cpu.gpr[i];
        ((CPU_state *)dut)->pc = cpu.pc;
        // printf("%lx  %lx\n", ((CPU_state *)dut)->pc, cpu.pc);
    }
    else {
        cpu = *(CPU_state *)dut;
        // printf("%lx  %lx\n", ((CPU_state *)dut)->pc, cpu.pc);
    }
}


void difftest_exec(uint64_t n) {
    cpu_exec(n);
}// 让REF执行`n`条指令

void difftest_raise_intr(word_t NO) {
    assert(0);
}

void difftest_init(int port) {
  /* Perform ISA dependent initialization. */
    init_isa();
}// 初始化REF的DiffTest功能
