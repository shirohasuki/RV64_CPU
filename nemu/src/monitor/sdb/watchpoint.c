#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
    int NO; //第NO个监视点的序号
    struct watchpoint *next;   
    
  /* TODO: Add more members if necessary */
    char *args; // 表达式
    int ret; // 结果
} WP;


static WP wp_pool[NR_WP] = {}; //线程池
static WP *head = NULL, *free_ = NULL; //链表（头节点）
//head:激活的监视点的链表的头节点;free:空闲的监视点的链表的头节点

void init_wp_pool() {   
    for (int i = 0; i < NR_WP; i ++) {
        wp_pool[i].NO = i;
        wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
    }

    head = NULL; // null
    free_ = wp_pool; // 0 -> 1 -> 2 -> 3 -> ... -> 31 -> null
}

/* TODO: Implement the functionality of watchpoint */

WP *new_wp() {
    if (!free_) {
        panic("Error: wp_pool is empty!\n");
    }
    WP *tmp = free_;
    free_ = free_->next;
    tmp->next = head; //头插法
    head = tmp;
    //printf("%d\n", tmp->NO);
    return tmp;
} // free -> head

void free_wp(WP *wp) { // 传入节点
    if (!wp) { return ;}
    WP *tmp = head;
    if (tmp == wp) { head->next = NULL;} // 判断首个节点是否为空
    while (tmp->next != wp) { tmp = tmp->next;} // tmp到达删除处
    tmp->next = tmp->next->next; // 剔除wp

    wp->next = free_; 
    free_ = wp; // wp->next一定指向free头，之前操作只是作用于head链表内部逻辑 
} // 将head链表中指定的wp拿出插入free_

int make_a_new_w(char *args) {
    WP *wp = new_wp(); 
    wp->args = args; // 存表达式
    bool success = true;
    wp->ret = expr(args, &success); // 存结果
    printf("watchpoint: %d\t%s\t%d\n", wp->NO, wp->args, wp->ret);
    return 0;
}

int print_w_list() {
    WP *wp = head;
    if (wp->next == NULL) {
        printf("there is no watchpoint in the list");
        return 0;
    }
    while (wp->next != NULL) {
        printf("watchpoint: %d\t%d\n", wp->NO, wp->ret);
        wp = wp->next;
        if (wp->next == NULL) {
            printf("watchpoint: %d\t%d\n", wp->NO, wp->ret);
            break;
        }
    }
    return 0;
}