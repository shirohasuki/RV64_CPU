#ifndef __SDB_H__
#define __SDB_H__

#include <common.h>

word_t expr(char *e, bool *success); //expr

typedef struct watchpoint {
    int NO;
    struct watchpoint *next;
    int arg; 
} WP;

WP *new_wp(); 
void free_wp(WP *wp); //watchpoint

#endif
