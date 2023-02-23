#include <common.h>

void do_syscall(Context *c);

static Context* do_event(Event e, Context* c) {
    printf("event=%d, EVENT_SYSCALL=%d\n", e.event, EVENT_SYSCALL);
    switch (e.event) {
       case EVENT_SYSCALL: do_syscall(c);break;// c->mepc = c->mepc+4; break;
       case EVENT_YIELD: printf("irq event yield.\n"); break; //c->mepc = c->mepc+4; break;
       case EVENT_ERROR: panic("irq event error.\n"); break;
       default: panic("Unhandled event ID = %d", e.event); break;
     }
    return c;
}

void init_irq(void) {
    Log("Initializing interrupt/exception handler...");
    cte_init(do_event);
}
