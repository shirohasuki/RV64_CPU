
#include <device/map.h>
#include <common.h>
#include <utils/debug.h>

#define NR_MAP 16

static IOMap maps[NR_MAP] = {};
static int nr_map = 0;

static IOMap* fetch_mmio_map(paddr_t addr) {
    int mapid = find_mapid_by_addr(maps, nr_map, addr);
    // Log("mapid = %d, maps[nr_map]_name = %s, addr = 0x%08x", mapid, maps[nr_map].name, addr);
    return (mapid == -1 ? NULL : &maps[mapid]);
}

/* device interface */
void add_mmio_map(const char *name, paddr_t addr, void *space, uint32_t len, io_callback_t callback) {
    assert(nr_map < NR_MAP);
    maps[nr_map] = (IOMap){ .name = name, .low = addr, .high = addr + len - 1,
        .space = space, .callback = callback };
    Log("Add mmio map %s at [0x%08x,0x%08x]", maps[nr_map].name, maps[nr_map].low, maps[nr_map].high);

    nr_map ++;
}

/* bus interface */
word_t mmio_read(paddr_t addr, int len) {
    // printf("MMIO:HERE");
    // if (addr == 0xa103fefc) { printf("catch\n");}
    return map_read(addr, len, fetch_mmio_map(addr));
}

void mmio_write(paddr_t addr, int len, word_t data) {
    // printf("MMIO:HERE2");
    // if (addr == 0xa103fefc) { printf("catch\n");}
    // if (addr == 0xa103ff00) { printf("catch\n");} 
    map_write(addr, len, data, fetch_mmio_map(addr));
}
