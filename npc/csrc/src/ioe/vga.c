#include <common.h>
#include <device/map.h>
#include <utils/macro.h>
#include <utils/debug.h>

#define SCREEN_W 400
#define SCREEN_H 300

static uint32_t screen_size() {
    return SCREEN_W * SCREEN_H * sizeof(uint32_t);
}

static void *vmem = NULL;
static uint32_t *vgactl_port_base = NULL;

#ifdef VGA_SHOW_SCREEN

#include <SDL2/SDL.h>

static SDL_Renderer *renderer = NULL;
static SDL_Texture *texture = NULL;

static void init_screen() {
    SDL_Window *window = NULL;
    char title[128];
    sprintf(title, "NPC");
    SDL_Init(SDL_INIT_VIDEO);
    SDL_CreateWindowAndRenderer(SCREEN_W * 2, SCREEN_H * 2, 0, &window, &renderer);
    SDL_SetWindowTitle(window, title);
    texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888,
        SDL_TEXTUREACCESS_STATIC, SCREEN_W, SCREEN_H);
}

static inline void update_screen() {
    SDL_UpdateTexture(texture, NULL, vmem, SCREEN_W * sizeof(uint32_t));
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, texture, NULL, NULL);
    SDL_RenderPresent(renderer);
}

#endif

void vga_update_screen() {
    // printf("vgactl_port_base[0] = %d  [1] = %d  [2] = %d  [3] = %d  [4] = %d  [5] = %d  [6] = %d  [7] = %d\nvgactl_port_base[8] = %d  [9] = %d  [10] = %d [11] = %d [12] = %d [13] = %d [14] = %d [15] = %d\nvgactl_port_base[16] = %d [17] = %d [18] = %d [19] = %d [20] = %d [21] = %d [22] = %d [23] = %d\nvgactl_port_base[24] = %d [25] = %d [26] = %d [27] = %d [28] = %d [29] = %d [30] = %d [31] = %d\nvgactl_port_base[32] = %d [33] = %d [34] = %d [35] = %d [36] = %d [37] = %d [38] = %d [39] = %d\n", vgactl_port_base[0],vgactl_port_base[1],vgactl_port_base[2],vgactl_port_base[3],vgactl_port_base[4],vgactl_port_base[5],vgactl_port_base[6],vgactl_port_base[7],vgactl_port_base[8],vgactl_port_base[9],vgactl_port_base[10],vgactl_port_base[11],vgactl_port_base[12],vgactl_port_base[13],vgactl_port_base[14],vgactl_port_base[15],vgactl_port_base[16],vgactl_port_base[17],vgactl_port_base[18],vgactl_port_base[19],vgactl_port_base[20],vgactl_port_base[21],vgactl_port_base[22],vgactl_port_base[23],vgactl_port_base[24],vgactl_port_base[25],vgactl_port_base[26],vgactl_port_base[27],vgactl_port_base[28],vgactl_port_base[29],vgactl_port_base[30],vgactl_port_base[31],vgactl_port_base[32],vgactl_port_base[33],vgactl_port_base[34],vgactl_port_base[35],vgactl_port_base[36],vgactl_port_base[37],vgactl_port_base[38],vgactl_port_base[39]);
    if (vgactl_port_base[8]) { // 
        // printf("update_screen!\n");8
        IFDEF(VGA_SHOW_SCREEN, update_screen());
        vgactl_port_base[8] = 0;
    }
}

void init_vga() {
    vgactl_port_base = (uint32_t *)new_space(8);
    vgactl_port_base[0] = (SCREEN_W << 16) | SCREEN_H; // 每次VGA_CONFIG直接读这个值就行
    add_mmio_map("vga", VGA_MMIO, vgactl_port_base, 8, NULL); // VGA寄存器，存储屏幕大小
    vmem = new_space(screen_size());
    add_mmio_map("vmem", FB_MMIO, vmem, screen_size(), NULL); // vmem显存
    IFDEF(VGA_SHOW_SCREEN, init_screen());
    IFDEF(VGA_SHOW_SCREEN, memset(vmem, 0, screen_size()));
}
