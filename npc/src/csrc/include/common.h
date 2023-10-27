#ifndef __COMMON_H__
#define __COMMON_H__

#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
// #include <generated/autoconf.h>
// #include <utils/macro.h>
#include <assert.h>
#include <stdlib.h>

// ============== Typedef ================= //
typedef long long ll;
typedef uint32_t paddr_t;
typedef uint64_t word_t;
typedef word_t vaddr_t;
// typedef MUXDEF(PMEM64, uint64_t, uint32_t) paddr_t;
// #define FMT_PADDR MUXDEF(PMEM64, "0x%016lx", "0x%08x")
// typedef uint16_t ioaddr_t;


// ----------- state -----------

enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT, NPC_QUIT };

typedef struct {
  int state;
  vaddr_t halt_pc;
  uint32_t halt_ret;
} NPCState;

extern NPCState npc_state;

// ============== IOE ================ //
// #define CONFIG_NPC_DEVICE   1
// #define NPC_HAS_SERIAL      1
// #define NPC_HAS_TIMER       1
// #define NPC_HAS_KBD         1
// #define NPC_HAS_VGA         1
// #define VGA_SHOW_SCREEN     1

// ============== DEVICE MAP ===============
#define DEVICE_BASE         0xa0000000

#define SERIAL_MMIO         (DEVICE_BASE + 0x000003f8)
#define KBD_MMIO            (DEVICE_BASE + 0x00000060)
#define RTC_MMIO            (DEVICE_BASE + 0x00000048) // 映射的地址

#define FB_MMIO             (DEVICE_BASE + 0x01000000)
#define VGA_MMIO            (DEVICE_BASE + 0x00000100)



#endif
