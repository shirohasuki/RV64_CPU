
#include <memory/host.h>
#include <memory/vaddr.h>
#include <device/map.h>
#include <debug.h>
#include "npc.h" 
#include <typedef.h>

#define IO_SPACE_MAX (2 * 1024 * 1024)


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
    // if (map == NULL) {
    //     Assert(map != NULL, "address (" FMT_PADDR ") is out of bound at pc = " FMT_WORD, addr, cpu_npc.pc);
    // } else {
    //     Assert(addr <= map->high && addr >= map->low,
    //         "address (" FMT_PADDR ") is out of bound {%s} [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
    //         addr, map->name, map->low, map->high, cpu_npc.pc);
    // }
    if (map == NULL) {
        //Assert("address (" FMT_PADDR ") is out of bound at pc = " FMT_WORD, addr, cpu_npc.pc);
        printf("address %x is out of bound at pc = %lx" , addr, cpu_npc.pc);
        assert(0);
    } else {
        //Assert(addr <= map->high && addr >= map->low,
        //   "address (" FMT_PADDR ") is out of bound {%s} [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
        //    addr, map->name, map->low, map->high, cpu_npc.pc);
        if (addr >= map->high && addr <= map->low) {
            printf("address %x is out of bound %s [%x, %x], pc = %lx", addr, map->name, map->low, map->high, cpu_npc.pc);
            assert(0);
        }
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
    check_bound(map, addr);
    paddr_t offset = addr - map->low;
    invoke_callback(map->callback, offset, len, false); // prepare data to read
    word_t ret = host_read((uint8_t *)map->space + offset, len);
    return ret;
}

void map_write(paddr_t addr, int len, word_t data, IOMap *map) {
    // printf("map_write addr == %x, len == %d, data == %ld\n",addr,len,data);
    assert(len >= 1 && len <= 8);
    check_bound(map, addr);
    paddr_t offset = addr - map->low;
    host_write((uint8_t *)map->space + offset, len, data);
    invoke_callback(map->callback, offset, len, true);
}
