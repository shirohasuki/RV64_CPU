// #include <isa.h>
#include <memory/host.h>
#include <memory/vaddr.h>
#include <device/map.h>
#include <utils/debug.h>
#include <utils/macro.h>
#include <common.h>
#include "npc.h"

#define IO_SPACE_MAX (2 * 1024 * 1024)

extern CPU_state cpu_npc;

static uint8_t *io_space = NULL;
static uint8_t *p_space = NULL;

uint8_t* new_space(int size) {
    uint8_t *p = p_space;
    // page aligned;
    size = (size + (PAGE_SIZE - 1)) & ~PAGE_MASK;
    p_space += size;
    assert(p_space - io_space < IO_SPACE_MAX);
    return p;
}

static void check_bound(IOMap *map, paddr_t addr) {
    if (map == NULL) {
        Printf("address ( 0x%08x ) is out of bound at pc = 0x%08lx\n", RED, addr, cpu_npc.pc);
    } else {
        if (addr > map->high || addr < map->low)
            Printf("address ( 0x%08x ) is out of bound {%s} [0x%08x, 0x%08x] at pc = 0x%08lx\n", RED, addr, map->name, map->low, map->high, cpu_npc.pc);
    }
}

static void invoke_callback(io_callback_t c, paddr_t offset, int len, bool is_write) {
    if (c != NULL) { c(offset, len, is_write); }
}

void init_map() {
    io_space = (uint8_t *)malloc(IO_SPACE_MAX);
    assert(io_space);
    p_space = io_space;
}

word_t map_read(paddr_t addr, int len, IOMap *map) {
    assert(len >= 1 && len <= 8);
    IFDEF(CONFIG_NPC_DTRACE, Printf("[Dtrace - Read] %s\n", BLUE, map->name);)
    check_bound(map, addr);
    paddr_t offset = addr - map->low;
    // printf("mapread\n");
    invoke_callback(map->callback, offset, len, false); // prepare data to read
    // printf("mapread\n");
    word_t ret = host_read((uint64_t *)map->space + offset, len);
    // printf("ret = %lx\n", ret);
    return ret;
}

void map_write(paddr_t addr, int len, word_t data, IOMap *map) {
    assert(len >= 1 && len <= 8);
    IFDEF(CONFIG_NPC_DTRACE, Printf("[Dtrace - Write] %s\n", BLUE, map -> name);)
    check_bound(map, addr);
    paddr_t offset = addr - map->low;
    host_write((uint64_t *)map->space + offset, len, data);
    invoke_callback(map->callback, offset, len, true);
}
