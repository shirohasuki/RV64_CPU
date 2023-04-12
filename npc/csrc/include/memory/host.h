#ifndef __MEMORY_HOST_H__
#define __MEMORY_HOST_H__

#include <common.h>
#include <stdio.h>
static inline word_t host_read(void *addr, int len) {
    // printf("HREE");
    switch (len) {
        case 1: return *(uint8_t  *)addr;
        case 2: return *(uint16_t *)addr;
        case 4: return *(uint32_t *)addr;
        case 8: return *(uint64_t *)addr;
        case 16: return *(__uint128_t *)addr;
        default: return 0;
    }
    return 0;
}

static inline void host_write(void *addr, int len, word_t data) {
    printf("[host_write] addr = %p len = %d data = %lx \n", addr, len, data);
    switch (len) {
        case 1: *(uint8_t  *)addr = data; return;
        case 2: *(uint16_t *)addr = data; return;
        case 4: *(uint32_t *)addr = data; return;
        case 8: *(uint64_t *)addr = data; return;
        case 16: *(__uint128_t *)addr = data; return;
        // IFDEF(CONFIG_RT_CHECK, default: assert(0));
        default: return ;
    }
    return ;
}

#endif
