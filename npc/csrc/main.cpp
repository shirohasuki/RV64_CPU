#include "npc.h"
#include <stdio.h> 
#include <assert.h> 
#include <stdlib.h> 

typedef long long ll;

#define MAX_SIM_TIME 20
vluint64_t sim_time = 0;
// 使用 sim_time 变量来跟踪何时完成模拟。一旦我们模拟了 20 个时钟边沿，我们就可以简单地退出。之后由ebreak替代

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
static Vtb* top;

// =============== Memory ===============
#define MEM_BASE 0x80000000
#define MEM_SIZE 65536

static uint8_t mem[MEM_SIZE];
// Memory transfer
uint8_t* cpu2mem(ll addr) { return mem + (addr - MEM_BASE); }

// =============== DPI-C ===============

// Memory Read
extern "C" void pmem_read(ll raddr, ll *rdata) {
    if (raddr < MEM_BASE) {
        printf("raddr < MEM_BASE: addr is:%llx, MEM_BASE is %x\n", raddr, MEM_BASE);
        return;
    }
    uint8_t *pt = cpu2mem(raddr) + 7;
    ll ret = 0;
    for (int i = 0; i < 8; ++i) {
        ret = (ret << 8) | (*pt--);
    }
    *rdata = ret;
    printf("addr is:%llx, data is:%llx\n", raddr, *rdata);
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

// ========================= Functions =========================

// Load image from am-kernels (Makefile -> ./image.bin)
static long load_image(char const *img_file) {
    if (img_file == NULL) {
        printf("No image is given. Use the default build-in image.");
        return 4096; // built-in image size
    }
    FILE *fp = fopen(img_file, "rb");
    assert(fp);

    fseek(fp, 0, SEEK_END);  // fseek:把与fp有关的文件位置指针放到一个指定位置 // fseek(fp, 0, SEEK_END)文件指针定位到文件末尾，偏移0个字节
    long img_size = ftell(fp);    // ftell:返回文件大小

    printf("The image is %s, size = %ld\n", img_file, img_size);

    fseek(fp, 0, SEEK_SET); // fseek(fp, 0, SEEK_SET)文件指针定位到文件末尾，偏移0个字节
    int ret = fread(mem, img_size, 1, fp); // 从fp向mem读img_size大小
    assert(ret == 1);

    fclose(fp);
    return img_size;
}

//--------------sim-----------------//
void sim_init() {
    contextp = new VerilatedContext;
    tfp = new VerilatedVcdC;
    top = new Vtb;



    contextp->traceEverOn(true);
    top->trace(tfp, 0);
    tfp->open("dump.vcd");

    top->rst = 0; top->clk = 0; top->eval();
    top->rst = 0; top->clk = 1; top->eval();
    // top->rst = 0; top->clk = 0; top->eval();
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
    // top->inst_i = pmem_read(top->pc_o);
    sim_init();
    
    // top->clk = 0;
    // top->rst = 0; // 低电平复位
    // top->clk = 1;
    
    while (sim_time < MAX_SIM_TIME) {
        top->clk ^= 1;
        step_and_dump_wave();
    }
    sim_exit();
} 