#ifndef __CPU_IFETCH_H__

#include <memory/vaddr.h>

static inline uint32_t inst_fetch(vaddr_t *pc, int len) {
    uint32_t inst = vaddr_ifetch(*pc, len); // 通过paddr_read()访问物理内存中的东西
    (*pc) += len; // 将PC更新为s->snpc地址
    return inst;
} // 取指

#endif
