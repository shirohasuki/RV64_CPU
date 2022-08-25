// DPI-C
#include <svdpi.h>
#include <Vtb__Dpi.h>
#include <verilated_dpi.h>
// Verilator
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vtb.h"
// Difftest
#include <dlfcn.h>

// ========================= Environment =========================
VerilatedContext* contextp = NULL;

static Vtb* top;

// =============== GtkWave ===============
#ifdef CONFIG_GTKWAVE
VerilatedVcdC* tfp = NULL;
vluint64_t sim_time = 0;	// time of gtkwave
#endif

typedef long long ll;

#define COLOR_RED     "\33[1;31m"
#define COLOR_GREEN   "\33[1;32m"
#define COLOR_NONE    "\33[0m"

void debug_exit(int status);

// =============== Memory ===============
#define MEM_BASE 0x80000000
#define MEM_SIZE 65536
ll img_size = 0;
uint8_t mem[MEM_SIZE];
// Memory transfer
uint8_t* cpu2mem(ll addr) { return mem + (addr - MEM_BASE); }


// =============== DPI-C ===============

// Memory Read
extern "C" void pmem_read(ll raddr, ll *rdata) {
  if (raddr < MEM_BASE) return;
  uint8_t *pt = cpu2mem(raddr) + 7;
  ll ret = 0;
  for (int i = 0; i < 8; ++i) {
    ret = (ret << 8) | (*pt--);
  }
  *rdata = ret;
}

// Memory Write
extern "C" void pmem_write(ll waddr, ll wdata, char mask) {
  if (waddr < MEM_BASE) return;
  uint8_t *pt = cpu2mem(waddr);
  for (int i = 0; i < 8; ++i) {
    if (mask & 1) *pt = (wdata & 0xff);
    wdata >>= 8, mask >>= 1, pt++;
  }
}

// Get Registers
uint64_t *cpu_gpr = NULL;
extern "C" void get_regs(const svOpenArrayHandle r) {
    cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r) -> datap());
}

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

void cpu_rst() {
    top -> clk = 0;
    top -> rst = 1;
    top -> eval();
#ifdef CONFIG_GTKWAVE
    tfp -> dump(sim_time++);
#endif
    top -> clk = 1;
    top -> rst = 1;
    top -> eval();
#ifdef CONFIG_GTKWAVE
    tfp -> dump(sim_time++);
#endif
    top -> rst = 0;
}

void exec_once() {
    top -> clk = 0;
    top -> eval();
#ifdef CONFIG_GTKWAVE
    tfp -> dump(sim_time++);
#endif
    top -> clk = 1;
    top -> eval();
#ifdef CONFIG_GTKWAVE
    tfp -> dump(sim_time++);
#endif
} // dut->clk ^= 1;

void debug_exit(int status) {
#ifdef CONFIG_GTKWAVE
    tfp -> close();
#endif
    if (status == 0) puts("\33[1;32mSim Result: HIT GOOD TRAP\33[0m");
    else puts("\33[1;31mSim Result: HIT BAD TRAP\33[0m");
    exit(status);
}


int main(int argc, char **argv, char **env) {
    // Prepare environment
    contextp = new VerilatedContext;
    contextp -> commandArgs(argc, argv);
    top = new Vtb(contextp);
#ifdef CONFIG_GTKWAVE
    Verilated::traceEverOn(true);
    tfp = new VerilatedVcdC;
    top -> trace(tfp, 5);
    tfp -> open("waveform.vcd");
#endif

    load_image();
    cpu_rst();


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

// DPI-C 可参考 https://www.itsembedded.com/dhd_list/