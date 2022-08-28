#include "npc.h"

#define MAX_SIM_TIME 1000
vluint64_t sim_time = 0;
// 使用 sim_time 变量来跟踪何时完成模拟。一旦我们模拟了 20 个时钟边沿，我们就可以简单地退出。之后由ebreak替代

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
static Vtb* top;



//--------------------function--------------//


//--------------sim-----------------//
void sim_init() {
    contextp = new VerilatedContext;
    tfp = new VerilatedVcdC;
    top = new Vtb;
    contextp->traceEverOn(true);
    top->trace(tfp, 0);
    tfp->open("dump.vcd");

    top->rst = 1;
    top->clk = 0;
}

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
    sim_init();
    while (sim_time < MAX_SIM_TIME) {
        top->clk ^= 1;
        step_and_dump_wave();
    }
    sim_exit();
} 