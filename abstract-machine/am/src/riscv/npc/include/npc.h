#ifndef NPC_H__
#define NPC_H__

#include <klib-macros.h>
#include <riscv/riscv.h>

#define DEVICE_BASE 0xa0000000
#define MMIO_BASE   0xa0000000

#define SERIAL_ADDR     (DEVICE_BASE + 0x000003f8)
#define KBD_ADDR        (DEVICE_BASE + 0x00000060)
#define RTC_ADDR        (DEVICE_BASE + 0x00000048)
#define VGACTL_ADDR     (DEVICE_BASE + 0x00003000)
#define FB_ADDR         (MMIO_BASE   + 0x01000000)

extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)
// #define NPC_PADDR_SPACE \
//     RANGE(&_pmem_start, PMEM_END), \
//     RANGE(FB_ADDR, FB_ADDR + 0x200000), \
//     RANGE(MMIO_BASE, MMIO_BASE + 0x1000) /* serial, rtc, screen, keyboard */


typedef uintptr_t PTE;

#define PGSIZE    4096

#endif
