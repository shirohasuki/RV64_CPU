#include <common.h>
#include "syscall.h"
#include <fs.h>
#include <proc.h>
// #define STRACE 1

void sys_exit(Context *c);
void sys_yield(Context *c);
void sys_open(Context *c);
void sys_read(Context *c);
void sys_write(Context *c);
void sys_close(Context *c);
void sys_lseek(Context *c);
void sys_brk(Context *c);
void sys_gettimeofday(Context *c);
void sys_execve(Context *c);
void sys_exit(Context *c);

void do_syscall(Context *c) {
    uintptr_t syscall_type = c->GPR1; // a7 而不是mcause
    switch (syscall_type) {
        case SYS_exit         : sys_exit(c);          break;
        case SYS_yield        : sys_yield(c);         break;
        case SYS_open         : sys_open(c);          break;
        case SYS_read         : sys_read(c);          break;
        case SYS_write        : sys_write(c);         break;
        case SYS_close        : sys_close(c);         break;
        case SYS_lseek        : sys_lseek(c);         break;
        case SYS_brk          : sys_brk(c);           break;
        case SYS_gettimeofday : sys_gettimeofday(c);  break;
        case SYS_execve       : sys_execve(c);        break;
        default: panic("Unhandled syscall ID = %d", syscall_type);
    }
#ifdef STRACE
    switch (syscall_type) {
        case SYS_exit         : printf("strace detect syscall: SYS_exit        \n");  break;
        case SYS_yield        : printf("strace detect syscall: SYS_yield       \n");  break;
        case SYS_open         : printf("strace detect syscall: SYS_open        \n");  break;
        case SYS_read         : printf("strace detect syscall: SYS_read        \n");  break;
        case SYS_write        : printf("strace detect syscall: SYS_write       \n");  break;
        case SYS_close        : printf("strace detect syscall: SYS_close       \n");  break;
        case SYS_lseek        : printf("strace detect syscall: SYS_lseek       \n");  break;
        case SYS_brk          : printf("strace detect syscall: SYS_brk         \n");  break;
        case SYS_gettimeofday : printf("strace detect syscall: SYS_gettimeofday\n");  break;
        case SYS_execve       : printf("strace detect syscall: SYS_execve\n");        break;
        case SYS_exit         : printf("strace detect syscall: SYS_exit\n");          break;
        default: panic("Unhandled syscall ID = %d", syscall_type);
    }
#endif
}

void sys_yield(Context *c) {
    yield();    // yield by am.
    c->GPRx = 0;
}

// void sys_exit(Context *c) {
//     halt(c->GPR2);
// }

void sys_brk(Context *c){
    c->GPRx = 0;
}

void sys_open(Context *c){
#ifdef STRACE 
    printf("fs_open:%s ", (const char *)c->GPR2); 
#endif
    c->GPRx = fs_open((const char *)c->GPR2, c->GPR3, c->GPR4);
}

void sys_read(Context *c){
    c->GPRx = fs_read(c->GPR2, (void *)c->GPR3, c->GPR4);
}

void sys_write(Context *c){
    c->GPRx = fs_write(c->GPR2, (void *)c->GPR3, c->GPR4);
}

void sys_close(Context *c){
    c->GPRx = fs_close(c->GPR2);
}

void sys_lseek(Context *c){
    c->GPRx = fs_lseek(c->GPR2, c->GPR3, c->GPR4);
}

void sys_gettimeofday(Context *c){
  AM_TIMER_UPTIME_T uptime = io_read(AM_TIMER_UPTIME);
  c->GPRx = uptime.us;
}

void sys_exit(Context *c){
    naive_uload(NULL, "/bin/nterm");
    switch_boot_pcb();
    yield();
    halt(c->GPR2);
}

void sys_execve(Context *c){
    if (fs_open((const char *)c->GPR2, 0, 0) < 0) {
        c->GPRx = -2;
    } else {
        naive_uload(NULL, (const char *)c->GPR2);
        switch_boot_pcb();
        yield();
        c->GPRx = 0;
    }
}
