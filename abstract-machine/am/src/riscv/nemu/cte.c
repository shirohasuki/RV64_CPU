#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
        case -1: ev.event = EVENT_YIELD; break;   // yield
        case 11: ev.event = EVENT_YIELD; c->mepc+=4; break;   // yield
        case  0: ev.event = EVENT_SYSCALL; break; // exit
        case  1: ev.event = EVENT_SYSCALL; break; // yield
        case  2: ev.event = EVENT_SYSCALL; break; // open
        case  3: ev.event = EVENT_SYSCALL; break; // read
        case  4: ev.event = EVENT_SYSCALL; break; // write
        case  7: ev.event = EVENT_SYSCALL; break; // close
        case  8: ev.event = EVENT_SYSCALL; break; // lseek
        case  9: ev.event = EVENT_SYSCALL; break; // brk
        case 19: ev.event = EVENT_SYSCALL; break; // SYS_gettimeofday
        default: ev.event = EVENT_ERROR;   break;
    }
    // printf("mcause = %d\n", c->mcause);
    c = user_handler(ev, c);
    assert(c != NULL);
  }

  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry 设置异常入口地址
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler 注册一个事件处理回调函数
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  return NULL;
}

void yield() {
  asm volatile("li a7, -1; ecall");
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
