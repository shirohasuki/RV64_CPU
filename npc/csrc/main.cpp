#include "npc.h"
#include <stdio.h> 
#include <assert.h> 
#include <stdlib.h> 

#define MAX_SIM_TIME 1000
vluint64_t sim_time = 0;
// 使用 sim_time 变量来跟踪何时完成模拟。一旦我们模拟了 20 个时钟边沿，我们就可以简单地退出。之后由ebreak替代

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
static Vtb* top;

// =============== Memory ===============
#define MEM_BASE 0x80000000
#define MEM_SIZE 65536

static uint8_t mem[MEM_SIZE];
// ========================= Functions =========================

// Load image from am-kernels (Makefile -> ./image.bin)
static long load_image(char *img_file) {
    if (img_file == NULL) {
        printf("No image is given. Use the default build-in image.");
        return 4096; // built-in image size
    }
    FILE *fp = fopen(img_file, "rb");
    assert(fp);

    fseek(fp, 0, SEEK_END);  // fseek:把与fp有关的文件位置指针放到一个指定位置 // fseek(fp, 0, SEEK_END)文件指针定位到文件末尾，偏移0个字节
    long img_size = ftell(fp);    // ftell:返回文件大小

    printf("The image is %s, size = %ld", img_file, img_size);

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
    
    load_image("/home/shiroha/Code/ysyx/ysyx-workbench/npc/image.bin");
    
    sim_init();
    while (sim_time < MAX_SIM_TIME) {
        top->clk ^= 1;
        step_and_dump_wave();
    }
    sim_exit();
} 