#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vtb.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vtb* top;

void step_and_dump_wave() {
    top->eval();
    contextp->timeInc(1);
    tfp->dump(contextp->time());
}
void sim_init() {
    contextp = new VerilatedContext;
    tfp = new VerilatedVcdC;
    top = new Vtb;
    contextp->traceEverOn(true);
    top->trace(tfp, 0);
    tfp->open("dump.vcd");
}

void sim_exit() {
    step_and_dump_wave();
    tfp->close();
}

int main() {
    sim_init();
    int i = 1000;
    //top->rst = 1;   top->clk = 0;   step_and_dump_wave();
    //                top->clk = 1;   step_and_dump_wave();
    while (i--) {
        top->rst = 1;   top->clk = 1;   step_and_dump_wave();
                        top->clk = 0;   step_and_dump_wave();
    }

    sim_exit();
} 