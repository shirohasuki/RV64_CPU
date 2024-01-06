#include <am.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
	if (user_handler) {
		Event ev = {0};
		switch (c->mcause) {
			case 11: {
			if (c->GPR1 == -1) { ev.event = EVENT_YIELD; } // YIELD
			else { ev.event = EVENT_SYSCALL; }
			c->mepc+=4;
			break;
			} 
			default: ev.event = EVENT_ERROR; break;
		}
		// printf("mcause = %d\n", c->mcause);
		// c->mepc+=4;
		c = user_handler(ev, c);
		assert(c != NULL);
	}

	return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
	// initialize exception entry
	asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

	// register event handler
	user_handler = handler;

	return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
	Context* p = (Context*)(kstack.end - sizeof(Context));	// 上下文结构指针
  	memset(p, 0, sizeof(Context));							// 清零
	p->mepc 	= (uintptr_t)entry;   
	p->mstatus 	= 0xa00001800; 		
	p->gpr[10] 	= (uintptr_t)arg; 
	// = (uint8_t *)malloc((kstack.end - kstack.start) * sizeof(uint8_t));
    return p;
}

void yield() {
  asm volatile("li a7, -1; ecall");
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
