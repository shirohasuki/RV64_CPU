#include "npc.h"
#include <utils/macro.h>
#include <utils/debug.h>

// #define MAX_SIM_TIME 40
#define MAX_SIM_TIME 15000000// 最大仿真周期，中途读取到ebreak自动退出
// #define MAX_SIM_TIME 150000000000// 最大仿真周期，中途读取到ebreak自动退出
vluint64_t sim_time = 0;

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
static Vtb* top;


ll img_size = 0;

CPU_state cpu_npc;  // DUT
CPU_state cpu_nemu; // REF

NPCState npc_state;

// bool diff_skip_ref_flag = false;
int diff_skip_ref_flag = 0;


//================ SIM FUNCTION =====================//
void step_and_dump_wave() {
    top->eval();
    contextp->timeInc(1);
    tfp->dump(contextp->time());
    sim_time++;
}

void sim_init() {
    contextp = new VerilatedContext;
    tfp = new VerilatedVcdC;
    top = new Vtb;

    contextp->traceEverOn(true);
    top->trace(tfp, 0);
    tfp->open("dump.vcd");

    top->reset = 0; top->clock = 0; step_and_dump_wave();
    top->reset = 1; top->clock = 1; step_and_dump_wave();
    top->reset = 0; top->clock = 0; step_and_dump_wave();   
} // 低电平复位

void npc_exec_once() {
// #ifdef CONFIG_NPC_ITRACE 
//     itrace_record(cpu_npc.pc);
// #endif
    top->clock ^= 1; step_and_dump_wave();
    top->clock ^= 1; step_and_dump_wave();
    // dump_gpr(); 
} // 翻转两次走一条指令

void sim_exit() {
    step_and_dump_wave();
    tfp->close();
}


int main() {
    sim_init();

    init_monitor();

    sdb_mainloop();

// #ifdef CONFIG_NPC_DIFFTEST
//     while (cpu_npc.pc != MEM_BASE) { 
//         // printf("%ld\n", cpu_npc.pc); 
//         npc_exec_once(); 
//     } // pc先走三拍到EXU
// #endif


//     while (sim_time < MAX_SIM_TIME) {
//         // dump_gpr(); // 打印通用寄存器
//         // dump_csr(); // 打印异常寄存器
//         npc_exec_once();
// #ifdef CONFIG_NPC_DIFFTEST
//         while (cpu_npc.pc == 0x0) {
//             npc_exec_once();   
//         } // EX被冲刷以后，pc再走几拍
//         difftest_exec_once();
// #endif
//     }

    sim_exit();
} 