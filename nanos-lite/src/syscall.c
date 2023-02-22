#include <common.h>
#include "syscall.h"

void sys_yield(Context *c);

void do_syscall(Context *c) {
    uintptr_t type = c->GPR1;

#ifdef STRACE
    uintptr_t a[3]={c->GPR2,c->GPR3,c->GPR4};
#endif 

    switch (type) {
        // case SYS_exit         : sys_exit(c);          break;
        case SYS_yield        : sys_yield(c);         break;
        // case SYS_open         : sys_open(c);          break;
        // case SYS_read         : sys_read(c);          break;
        // case SYS_write        : sys_write(c);         break;
        // case SYS_kill         :                       break;
        // case SYS_getpid       :                       break;
        // case SYS_close        : sys_close(c);         break;
        // case SYS_lseek        : sys_lseek(c);         break;
        // case SYS_brk          : sys_brk(c);           break;
        // case SYS_fstat        :                       break;
        // case SYS_time         :                       break;
        // case SYS_signal       :                       break;
        // case SYS_execve       : sys_execve(c);        break;
        // case SYS_fork         :                       break;
        // case SYS_link         :                       break;
        // case SYS_unlink       :                       break;
        // case SYS_wait         :                       break;
        // case SYS_times        :                       break;
        // case SYS_gettimeofday : sys_gettimeofday(c);  break;
        default: panic("Unhandled syscall ID = %d", type);
    }

#ifdef STRACE
    char* getFinfoName(int i);
    if(type == SYS_open|| type == SYS_read || type == SYS_write || type == SYS_close || type == SYS_lseek){
        if(type == SYS_open) printf("strace detect file %s is doing %s :",a[0], get_syscall_name(type));
        else printf("strace detect file %s is doing %s :",getFinfoName(a[0]), get_syscall_name(type));
    }
    else{
        printf("strace detect syscall: %s, ",get_syscall_name(type));
    }
    printf("input regs a0=0x%lx, a1=0x%lx, a2=0x%lx, return value a0=0x%lx.\n",a[0],a[1],a[2],c->GPRx);
#endif

}


void sys_yield(Context *c){
    yield();    // yield by am.
    c->GPRx = 0;
}