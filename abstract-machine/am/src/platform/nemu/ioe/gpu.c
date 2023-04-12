#include <am.h>
#include <nemu.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
    int height = inw(VGACTL_ADDR);
    int width = inw(VGACTL_ADDR + 2);
    int i;
    int w = width; 
    int h = height; 
    uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
    for (i = 0; i < w * h; i ++)  {if (i >= 0 && i <= 400) fb[i] = 199199199; else fb[i] = 0; }
    outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
    int height = inw(VGACTL_ADDR);
    int width = inw(VGACTL_ADDR + 2);
    *cfg = (AM_GPU_CONFIG_T) {
        .present = true, .has_accel = false,
        .width = width, .height = height,
        .vmemsz = width * height * sizeof(uint32_t)
    };
}
// AM显示控制器信息, 可读出屏幕大小信息width和height

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
    // // int height = inw(VGACTL_ADDR);
    // int width = inw(VGACTL_ADDR + 2); // VGACTL_ADDR存H, VGACTL_ADDR + 2存W
    // // uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
    // for (int x = 0; x < ctl->w; x++) {
    //     for (int y = 0; y < ctl->h; y++) {
    //         // outl(FB_ADDR, 1);
    //         outl(FB_ADDR + (width * (ctl->y + y) + (ctl->x + x)) * sizeof(uint32_t), ((uint32_t*)ctl->pixels)[y * ctl->w + x]);
    //     }
    // }
    // if (ctl->sync) {
    //     outl(SYNC_ADDR, 1);
    // }
}
// AM帧缓冲控制器, 可写入绘图信息, 向屏幕(x, y)坐标处绘制w*h的矩形图像. 
// 图像像素按行优先方式存储在pixels中, 每个像素用32位整数以00RRGGBB的方式描述颜色. 
// 若sync为true, 则马上将帧缓冲中的内容同步到屏幕上.

void __am_gpu_status(AM_GPU_STATUS_T *status) {
    status->ready = true;
}
// 同步寄存器
