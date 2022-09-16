#include <isa.h>
#include <memory/paddr.h>

word_t vaddr_ifetch(vaddr_t addr, int len) {
    // printf("1.[vaddr.c]%lx\n", addr);
    // printf("2.[vaddr.c]%lx\n", paddr_read(addr, len));
    return paddr_read(addr, len);
}

word_t vaddr_read(vaddr_t addr, int len) {
    return paddr_read(addr, len);
}

void vaddr_write(vaddr_t addr, int len, word_t data) {
    paddr_write(addr, len, data);
}
