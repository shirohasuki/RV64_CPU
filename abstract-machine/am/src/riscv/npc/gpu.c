#include <am.h>
#include "include/npc.h"
#include <stdio.h>

#define W   400
#define H   300
#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
    uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
    for (int i = 0; i < W * H; i++) { if (i >= 400 && i <= 800) fb[i] = 199199199; else fb[i] = 0; 
    // outl(SYNC_ADDR, 1);
    }
    outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
    *cfg = (AM_GPU_CONFIG_T) {
        .present = true, .has_accel = false,
        .width = W, .height = H,
        .vmemsz = W * H * sizeof(uint32_t)
    };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
//     int width = W;
//     for (int x = 0; x < ctl->w; x++) {
//         for (int y = 0; y < ctl->h; y++) {
//             outl(FB_ADDR + (width * (ctl->y + y) + (ctl->x + x)) * sizeof(uint32_t), ((uint32_t*)ctl->pixels)[y * ctl->w + x]);
//             // outl(SYNC_ADDR, 1);
//         }
//     }
//     if (ctl->sync) {
//         outl(SYNC_ADDR, 1);
//     }
// }

    uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
    uint32_t *pixels = (uint32_t*)(ctl->pixels);
    int x = ctl->x, y = ctl->y;
    int w = ctl->w, h = ctl->h;
    for(int j = 0; j < h; j++){
        for(int i = 0; i< w; i++){
            fb[(y+j)*W+(x+i)] = *(pixels+j*w+i);
        }
    }
    if (ctl->sync) {
        outl(SYNC_ADDR, 1);
    }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
    status->ready = true;
}