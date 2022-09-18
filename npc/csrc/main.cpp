#include "npc.h"


#define MAX_SIM_TIME 400 // 最大仿真周期，中途读取到ebreak自动退出
vluint64_t sim_time = 0;


VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
static Vtb* top;

// extern uint64_t cpu_pc;
ll img_size = 0;

CPU_state cpu_npc;
CPU_state ref_cpu;


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

    top->rst = 0; top->clk = 0; step_and_dump_wave();
    top->rst = 0; top->clk = 1; step_and_dump_wave();
    top->rst = 1; top->clk = 0; step_and_dump_wave();   
} // 低电平复位

void exec_once() {
#ifdef CONFIG_NPC_ITRACE 
    itrace_record(cpu_npc.pc);
#endif
    top->clk ^= 1; step_and_dump_wave();
    top->clk ^= 1; step_and_dump_wave();
    dump_gpr(); 
} // 翻转两次走一条指令

void sim_exit() {
    step_and_dump_wave();
    tfp->close();
}


int main() {
    img_size = load_image("/home/shiroha/Code/ysyx/ysyx-workbench/npc/image.bin");
    
    sim_init();

#ifdef CONFIG_NPC_ITRACE
    init_disasm("riscv64-pc-linux-gnu");
#endif
    
    exec_once();
    
    // exec_once();
#ifdef CONFIG_NPC_DIFFTEST
    init_difftest("/home/shiroha/Code/ysyx/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so", img_size);
    // printf(RED("check at nemu_pc=%lx, npc_pc=%lx\n"), ref_cpu.pc, cpu_npc.pc);
#endif
    

    while (sim_time < MAX_SIM_TIME) {
        // printf(RED("check at nemu_pc=%lx, npc_pc=%lx\n"), ref_cpu.pc, cpu_npc.pc);
        exec_once();
        // dump_gpr();
        // printf(RED("check at nemu_pc=%lx, npc_pc=%lx\n"), ref_cpu.pc, cpu_npc.pc);
#ifdef CONFIG_NPC_DIFFTEST
        difftest_exec_once();
#endif
    }
    sim_exit();
} 