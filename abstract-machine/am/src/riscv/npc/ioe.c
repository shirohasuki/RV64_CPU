#include <am.h>
#include <klib-macros.h>
#include <stdio.h>

void __am_timer_init();

void __am_timer_rtc(AM_TIMER_RTC_T *);
void __am_timer_uptime(AM_TIMER_UPTIME_T *);
void __am_input_keybrd(AM_INPUT_KEYBRD_T *);
void __am_gpu_config(AM_GPU_CONFIG_T *);
void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *);

static void __am_timer_config(AM_TIMER_CONFIG_T *cfg) { cfg->present = true; cfg->has_rtc = true; }
static void __am_input_config(AM_INPUT_CONFIG_T *cfg) { cfg->present = true;  }
static void __am_uart_config(AM_UART_CONFIG_T *cfg)   { cfg->present = false; }

typedef void (*handler_t)(void *buf);
static void *lut[128] = {
    [AM_UART_CONFIG ] = __am_uart_config,   // REG 1
    [AM_TIMER_CONFIG] = __am_timer_config,
    [AM_TIMER_RTC   ] = __am_timer_rtc,
    [AM_TIMER_UPTIME] = __am_timer_uptime,
    [AM_INPUT_CONFIG] = __am_input_config,
    [AM_INPUT_KEYBRD] = __am_input_keybrd,  // REG 8
    [AM_GPU_CONFIG  ] = __am_gpu_config,
    [AM_GPU_FBDRAW  ] = __am_gpu_fbdraw,
};

static void fail(void *buf) { panic("access nonexist register"); }

// static void fail_with_RegID(int i) { printf("register[%d] nonexist\n", i); panic("access nonexist register"); }

bool ioe_init() {
    for (int i = 0; i < LENGTH(lut); i++)
        if (!lut[i]) lut[i] = fail; 
        // if (!lut[i]) lut[i] = fail_with_RegID(i); 
    __am_timer_init();   
    return true;
}

void ioe_read (int reg, void *buf) { 
    // printf("read register[%d]\n", reg); 
    ((handler_t)lut[reg])(buf); 
}
void ioe_write(int reg, void *buf) { 
    // printf("write register[%d]\n", reg); 
    ((handler_t)lut[reg])(buf); 
}
