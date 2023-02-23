#include <stdio.h>
#include "NDL.h"

int main() {
    int i=0;
    printf("RTC begin\n");
    printf("%d\n", NDL_GetTicks());
    printf("%d\n", NDL_GetTicks());
    while(1){
    if(NDL_GetTicks()/500==1){
        printf("%d time has gone 0.5s\n",i);
        i++;
    }
    }
    printf("%d\n", NDL_GetTicks());
    return 0;
}
