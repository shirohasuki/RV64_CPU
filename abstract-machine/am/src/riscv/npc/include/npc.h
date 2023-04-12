#ifndef NPC_H__
#define NPC_H__

#include <klib-macros.h>
#include <riscv/riscv.h>

#define DEVICE_BASE 0xa0000000

#define SERIAL_ADDR     (DEVICE_BASE + 0x000003f8)
#define KBD_ADDR        (DEVICE_BASE + 0x00000060)
#define RTC_ADDR        (DEVICE_BASE + 0x00000048)
#define VGACTL_ADDR     (DEVICE_BASE + 0x00000100)
#define FB_ADDR         (DEVICE_BASE + 0x01000000)


#endif
