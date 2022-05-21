/*
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vriscv.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vriscv* top;

void step_and_dump_wave() {
    top->eval();
    contextp->timeInc(1);
    tfp->dump(contextp->time());
}
void sim_init() {
    contextp = new VerilatedContext;
    tfp = new VerilatedVcdC;
    top = new Vriscv;
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
    top->inst_i = 00000010011000000000110110010011; top->rst =1; top->clk = 0; step_and_dump_wave();
                                                    top->rst =1; top->clk = 1; step_and_dump_wave();
    top->inst_i = 00000111100000000000111000010011; top->rst =1; top->clk = 0; step_and_dump_wave();
                                                    top->rst =1; top->clk = 1; step_and_dump_wave();
    top->inst_i = 00000001110011011000111010110011; top->rst =1; top->clk = 0; step_and_dump_wave();
                                                    top->rst =1; top->clk = 1; step_and_dump_wave();

    sim_exit();
} 
*/


#include "verilated.h"
#include "verilated_vcd_c.h"
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
    //int i = 10;
    //while (i--) {
    //   top->clk = ~top->clk;
    //    top->rst = 1;step_and_dump_wave();
    //}

    sim_exit();
}