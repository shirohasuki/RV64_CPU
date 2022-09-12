#include "npc.h"

// void exit_npc(int flag);
// void ebreak() {
//     puts("Meet ebreak;");
//     printf("%lx\n", cpu_npc.gpr[10]);
//     int flag = 0;
//     if (cpu_npc.gpr[10] != 0)
//         flag = -1;
//     exit_npc(flag);
// }


int status = 0;

void debug_exit(int status) {
    if (status == 0) puts("\33[1;32mSim Result: HIT GOOD TRAP\33[0m");
    else puts("\33[1;31mSim Result: HIT BAD TRAP\33[0m");
    exit(status);
}

void ebreak() {
    debug_exit(0);
}