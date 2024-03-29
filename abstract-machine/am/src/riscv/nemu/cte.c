#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
    // printf("mcause=%d\n", c->mcause);
    switch (c->mcause) {
        case 11: {
          if (c->GPR1 == -1) { ev.event = EVENT_YIELD; } // YIELD 本身应该也属于syscall只是这里单列出来了
          else { ev.event = EVENT_SYSCALL; }
          c->mepc+=4;
          break;
        } 
        default: ev.event = EVENT_ERROR;   break;
    }
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

/*  函数作用：创建上下文
	kstack是栈的范围, entry是内核线程的入口, arg则是内核线程的参数. 
	此外, 需要在kstack的底部创建一个以entry为入口的上下文结构, 然后返回这一结构的指针.
*/
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
