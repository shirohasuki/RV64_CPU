#include <stdio.h>
#include "NDL.h"

int main() {
    int i=0;
    printf("RTC begin\n");
    while(1){
        if(NDL_GetTicks()/500==1){
            printf("%d time has gone 0.5s\n",i);
            i++;
            if (i == 1000) break;
        }
    }
    return 0;
}
