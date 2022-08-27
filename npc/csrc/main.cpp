// // DPI-C
// #include <svdpi.h>
// #include <Vtb__Dpi.h>
// #include <verilated_dpi.h>
// // Verilator
// #include <verilated.h>
// #include <verilated_vcd_c.h>
// #include "Vtb.h"
// // Difftest
// #include <dlfcn.h>

// // ========================= Environment =========================
// VerilatedContext* contextp = NULL;

// static Vtb* top;

// // =============== GtkWave ===============
// #ifdef CONFIG_GTKWAVE
// VerilatedVcdC* tfp = NULL;
// #define MAX_SIM_TIME 20;
// vluint64_t sim_time = 0;	// time of gtkwave
// #endif

// typedef long long ll;

// #define COLOR_RED     "\33[1;31m"
// #define COLOR_GREEN   "\33[1;32m"
// #define COLOR_NONE    "\33[0m"

// void debug_exit(int status);

// // =============== Memory ===============
// #define MEM_BASE 0x80000000
// #define MEM_SIZE 65536
// ll img_size = 0;
// uint8_t mem[MEM_SIZE];
// // Memory transfer
// uint8_t* cpu2mem(ll addr) { return mem + (addr - MEM_BASE); }


// // =============== DPI-C ===============

// // Memory Read
// extern "C" void pmem_read(ll raddr, ll *rdata) {
//   if (raddr < MEM_BASE) return;
//   uint8_t *pt = cpu2mem(raddr) + 7;
//   ll ret = 0;
//   for (int i = 0; i < 8; ++i) {
//     ret = (ret << 8) | (*pt--);
//   }
//   *rdata = ret;
// }

// // Memory Write
// extern "C" void pmem_write(ll waddr, ll wdata, char mask) {
//   if (waddr < MEM_BASE) return;
//   uint8_t *pt = cpu2mem(waddr);
//   for (int i = 0; i < 8; ++i) {
//     if (mask & 1) *pt = (wdata & 0xff);
//     wdata >>= 8, mask >>= 1, pt++;
//   }
// }

// // Get Registers
// uint64_t *cpu_gpr = NULL;
// extern "C" void get_regs(const svOpenArrayHandle r) {
//     cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r) -> datap());
// }

// // Ebreak
// void ebreak() {
//     debug_exit(cpu_gpr[10]);
// }

// // ========================= Functions =========================

// void load_image() {
//     char image_path[] = "/home/shiroha/Code/ysyx/ysyx-workbench/npc/image.bin";
//     FILE *fp = fopen(image_path, "rb");
//     fseek(fp, 0, SEEK_END);
//     img_size = ftell(fp);
//     fseek(fp, 0, SEEK_SET);
//     int ret = fread(mem, img_size, 1, fp);
//     fclose(fp);
// }

// void cpu_rst() {
//     top -> clk = 0;
//     top -> rst = 1;
//     top -> eval();
// #ifdef CONFIG_GTKWAVE
//     tfp -> dump(sim_time++);
// #endif
//     top -> clk = 1;
//     top -> rst = 1;
//     top -> eval();
// #ifdef CONFIG_GTKWAVE
//     tfp -> dump(sim_time++);
// #endif
//     top -> rst = 0;
// }

// void exec_once() {
//     top -> clk = 0;
//     top -> eval();
// #ifdef CONFIG_GTKWAVE
//     tfp -> dump(sim_time++);
// #endif
//     top -> clk = 1;
//     top -> eval();
// #ifdef CONFIG_GTKWAVE
//     tfp -> dump(sim_time++);
// #endif
// } // dut->clk ^= 1;

// // while (sim_time < MAX_SIM_TIME) {
// //     dut->clk ^= 1;
// //     dut->eval();
// //     m_trace->dump(sim_time);
// //     sim_time++;
// // }

// void debug_exit(int status) {
// #ifdef CONFIG_GTKWAVE
//     tfp -> close();
// #endif
//     if (status == 0) puts("\33[1;32mSim Result: HIT GOOD TRAP\33[0m");
//     else puts("\33[1;31mSim Result: HIT BAD TRAP\33[0m");
//     exit(status);
// }


// int main(int argc, char **argv, char **env) {
//     // Prepare environment
//     contextp = new VerilatedContext;
//     contextp -> commandArgs(argc, argv);
//     top = new Vtb(contextp);
// #ifdef CONFIG_GTKWAVE
//     Verilated::traceEverOn(true);
//     tfp = new VerilatedVcdC;
//     top -> trace(tfp, 5);
//     tfp -> open("waveform.vcd");
// #endif

//     load_image();
//     cpu_rst();


// #ifdef CONFIG_DIFFTEST
//     init_difftest();
// #endif
    
//     while (1) {
//         exec_once();
// #ifdef CONFIG_DIFFTEST
//     difftest_exec_once();
// #endif
//     }
//     return 0;
// }

// // DPI-C 可参考 https://www.itsembedded.com/dhd_list/

//-------------------------version2----------------------------------//

// #include "npc.h"

// CPU_state cpu_npc;


// VerilatedContext* contextp = NULL;
// static Vtb* top;

// #ifdef CONFIG_GTKWAVE
// VerilatedVcdC* tfp = NULL;
// #define MAX_SIM_TIME 20;
// vluint64_t sim_time = 0;	// time of gtkwave
// #endif

// long img_size = 0;
// char *img_file = nullptr;

// #ifdef CONFIG_VCD
// VerilatedVcdC *m_trace = nullptr;
// #endif

// int check_regs_npc(CPU_state ref_cpu);
// void init_so(char *ref_so_file, long img_size);
// long ld(char *img_file);
// void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
// void init_disasm(const char *triple);
// void print_itrace();
// void print_mtrace();

// #ifdef CONFIG_ITRACE
// char itrace_buf[16][100] = {0};
// int itrace_buf_cnt = 0;
// #endif

// void exit_npc(int flag) {
// #ifdef CONFIG_VCD
//     m_trace->close();
// #endif
// #ifdef CONFIG_ITRACE
//     print_itrace();
// #endif
// #ifdef CONFIG_MTRACE
//     print_mtrace();
// #endif
//     delete top;
//     delete contextp;
//     exit(flag);
// }

// void cpu_sim_once() {
//     top->clk = 0, top->eval();
//     top->clk = 1, top->eval();
// }

// void init_npc() {
//     top->rst = 1;
//     for (int i = 1; i <= 10; i++)
//         cpu_sim_once();
//     top->rst = 0;
// }

// #ifdef CONFIG_ITRACE
// void print_itrace() {
//     puts("itrace:");
//     for (int i = 0; i < 16; i++) {
//         if (strlen(itrace_buf[i]) == 0)
//             break;
//         if ((i + 1) % 16 == itrace_buf_cnt)
//             printf("-->");
//         else
//             printf("   ");
//         printf("%s\n", itrace_buf[i]);
//     }
// }
// #endif

// void exec_once() {
//     cpu_sim_once();

// #ifdef CONFIG_ITRACE
//     char p[100] = {0};
//     disassemble(p, 100, cpu_npc.pc, (uint8_t *)&top->io_Inst, 4);
//     sprintf(itrace_buf[itrace_buf_cnt], "pc=0x%016lx inst=%08lx %s", cpu_npc.pc, top->io_Inst, p);
//     itrace_buf_cnt++;
//     itrace_buf_cnt %= 16;
// #endif
// #ifdef CONFIG_VCD
//     m_trace->dump(sim_time++);
// #endif
// #ifdef CONFIG_DIFFTEST
//     ref_difftest_exec(1);
//     CPU_state ref_cpu;
//     ref_difftest_regcpy(&ref_cpu, DIFFTEST_TO_DUT);
//     printf("check at nemu_pc=%lx, npc_pc=%lx\n", cpu_npc.pc, ref_cpu.pc);
//     if (!check_regs_npc(ref_cpu))
//         exit_npc(-1);
// #endif
// }

// static int parse_args(int argc, char *argv[]) {
//     if (argc == 2) {
//         if (strlen(argv[1]) != 0) {
//             img_file = argv[1];
//             img_size = ld(img_file);
//         }
//     }
//     return 0;
// }

// int main(int argc, char **argv, char **env) {
//     parse_args(argc, argv);

//     contextp = new VerilatedContext;
//     contextp->commandArgs(argc, argv);
//     top = new Vtb{contextp};

// #ifdef CONFIG_ITRACE
//     init_disasm("riscv64-pc-linux-gnu");
// #endif

// #ifdef CONFIG_VCD
//     Verilated::traceEverOn(true);
//     m_trace = new VerilatedVcdC;
//     top->trace(m_trace, 5);
//     m_trace->open("waveform.vcd");
// #endif

//     init_npc();

// #ifdef CONFIG_DIFFTEST
//     init_so("/home/shiroha/Code/ysyx/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so", img_size);
// #endif

//     while (1) {
//         exec_once();
//     }

//     return 0;
// }


// --------------------------version3------------//


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



VerilatedVcdC *m_trace = NULL;
#define MAX_SIM_TIME 20;
vluint64_t sim_time = 0;	// time of gtkwave
#endif
// 使用 sim_time 变量来跟踪何时完成模拟。一旦我们模拟了 20 个时钟边沿，我们就可以简单地退出。之后由ebreak替代


int main(int argc, char** argv, char** env) {
    Vtb *dut = new Vtb;

    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");


    while (sim_time < MAX_SIM_TIME) {
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time);
        sim_time++;
    }   

    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
}