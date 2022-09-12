#include "npc.h"


#define MAX_SIM_TIME 30 // 最大仿真周期，中途读取到ebreak自动退出
vluint64_t sim_time = 0;


VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
static Vtb* top;



//================ SIM FUNCTION =====================//
void sim_init() {
    contextp = new VerilatedContext;
    tfp = new VerilatedVcdC;
    top = new Vtb;

    contextp->traceEverOn(true);
    top->trace(tfp, 0);
    tfp->open("dump.vcd");

    top->rst = 0; top->clk = 0; top->eval();
    top->rst = 0; top->clk = 1; top->eval();
    top->rst = 1; top->clk = 0; top->eval();    
} // 低电平复位

void step_and_dump_wave() {
    top->eval();
    contextp->timeInc(1);
    tfp->dump(contextp->time());
    sim_time++;
}

void sim_exit() {
    step_and_dump_wave();
    tfp->close();
}


int main() {
    
    load_image("/home/shiroha/Code/ysyx/ysyx-workbench/npc/image.bin");

    sim_init();
    
    while (sim_time < MAX_SIM_TIME) {
        top->clk ^= 1;
        step_and_dump_wave();
    }
    sim_exit();
} 