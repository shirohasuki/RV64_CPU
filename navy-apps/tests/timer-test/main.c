#include <stdio.h>
#include "NDL.h"

int main() {
    int i = 0;
    int t1 = NDL_GetTicks();
    int t2 = 0;
    printf("RTC begin\n");
    while(1){
        t2 = NDL_GetTicks();
        if (t2 - t1  >= 0) {
            printf("%d time has gone 0.5s\n",i);
            i++;
            t1 = t2;
        }
        if (i == 1000) break;
    }
    return 0;
}
