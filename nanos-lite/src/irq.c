#include <common.h>

void do_syscall(Context *c);

static Context* do_event(Event e, Context* c) {
    // printf("Event=%d\n", e.event);
    switch (e.event) {
       case EVENT_SYSCALL:  do_syscall(c);                break; //c->mepc+=4; break;// 在软件处实现+4,理论上应该在这里实现，但是无法在native上运行（native不是mepc），所以改在am的cte.c实现了
       case EVENT_YIELD:    printf("irq event yield.\n"); break; //c->mepc = c->mepc+4; break;
       case EVENT_ERROR:    panic("irq event error.\n");  break;
       default:             panic("Unhandled event ID = %d", e.event); break;
     }
    return c;
}

void init_irq(void) {
    Log("Initializing interrupt/exception handler...");
    cte_init(do_event);
}
