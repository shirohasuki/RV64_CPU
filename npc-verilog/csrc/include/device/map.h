#ifndef __DEVICE_MAP_H__
#define __DEVICE_MAP_H__

#include <common.h>
#include "npc.h" //difftest

typedef void(*io_callback_t)(uint32_t, int, bool);
uint8_t* new_space(int size);

typedef struct {
    const char *name;
    // we treat ioaddr_t as paddr_t here
    paddr_t low;
    paddr_t high;
    void *space;
    io_callback_t callback;
} IOMap;

static inline bool map_inside(IOMap *map, paddr_t addr) {
    return (addr >= map->low && addr <= map->high);
}

static inline int find_mapid_by_addr(IOMap *maps, int size, paddr_t addr) {
    for (int i = 0; i < size; i ++) {
        if (map_inside(maps + i, addr)) {
#ifdef CONFIG_NPC_DIFFTEST 
            diff_skip_ref_flag = 2; // skip the difftest check, copy DUT regs to REF
            // printf("skip, mapid = %d\n", i);
#endif 
            return i;
        }
    }
    printf("no map match\n");
    return -1;
}

// void add_pio_map(const char *name, ioaddr_t addr,
//         void *space, uint32_t len, io_callback_t callback);
void add_mmio_map(const char *name, paddr_t addr,
        void *space, uint32_t len, io_callback_t callback);

word_t map_read(paddr_t addr, int len, IOMap *map);
void map_write(paddr_t addr, int len, word_t data, IOMap *map);

#endif
