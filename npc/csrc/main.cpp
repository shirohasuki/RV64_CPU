// DPI-C
#include <svdpi.h>
#include <VCPU__Dpi.h>
#include <verilated_dpi.h>
// Verilator
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vtb.h"
// Difftest
#include <dlfcn.h>

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vtb* top;


void debug_exit(int status);

// Ebreak
void ebreak() {
  debug_exit(cpu_gpr[10]);
}



// ========================= Functions =========================

void load_image() {
    char image_path[] = "/home/shiroha/Code/ysyx/ysyx-workbench/npc/image.bin";
    FILE *fp = fopen(image_path, "rb");
    fseek(fp, 0, SEEK_END);
    img_size = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    int ret = fread(mem, img_size, 1, fp);
    fclose(fp);
}

void cpu_reset() {
    top -> clock = 0;
    top -> reset = 1;
    top -> eval();
#ifdef CONFIG_GTKWAVE
    m_trace -> dump(sim_time++);
#endif
    top -> clock = 1;
    top -> reset = 1;
    top -> eval();
#ifdef CONFIG_GTKWAVE
    m_trace -> dump(sim_time++);
#endif
    top -> reset = 0;
}

void exec_once() {
    top -> clock = 0;
    top -> eval();
#ifdef CONFIG_GTKWAVE
    m_trace -> dump(sim_time++);
#endif
    top -> clock = 1;
    top -> eval();
#ifdef CONFIG_GTKWAVE
    m_trace -> dump(sim_time++);
#endif
}

void debug_exit(int status) {
    if (status == 0) puts("\33[1;32mSim Result: HIT GOOD TRAP\33[0m");
    else puts("\33[1;31mSim Result: HIT BAD TRAP\33[0m");
    exit(status);
}


int main(int argc, char **argv, char **env) {
    // Prepare environment
    contextp = new VerilatedContext;
    contextp -> commandArgs(argc, argv);
    tb = new Vtb(contextp);
#ifdef CONFIG_GTKWAVE
    Verilated::traceEverOn(true);
    m_trace = new VerilatedVcdC;
    tb -> trace(m_trace, 5);
    m_trace -> open("waveform.vcd");
#endif

    load_image();
    cpu_reset();


#ifdef CONFIG_DIFFTEST
    init_difftest();
#endif
    
    while (1) {
        exec_once();
#ifdef CONFIG_DIFFTEST
    difftest_exec_once();
#endif
    }
    return 0;
}