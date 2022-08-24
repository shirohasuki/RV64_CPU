#include "sdb.h"

#define NR_WP 32

// typedef struct watchpoint {
//     int NO; //第NO个监视点的序号
//     struct watchpoint *next;   
    
//   /* TODO: Add more members if necessary */
//     char *args; // 表达式
//     int ret; // 结果
// } WP;


typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
	char expr[512];
	uint64_t result;
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

// WP *new_wp() {
//     if (!free_) {
//         panic("Error: wp_pool is empty!\n");
//     }
//     WP *tmp = free_;
//     free_ = free_->next;
//     tmp->next = head; //头插法
//     head = tmp;
//     return tmp;
// } // free -> head

// void free_wp(WP *wp) { // 传入节点
//     if (!wp) { return ;}
//     WP *tmp = head;
//     if (tmp == wp) { head->next = NULL;} // 判断首个节点是否为空
//     while (tmp->next != wp) { tmp = tmp->next;} // tmp到达删除处
//     tmp->next = tmp->next->next; // 剔除wp

//     wp->next = free_; 
//     free_ = wp; // wp->next一定指向free头，之前操作只是作用于head链表内部逻辑 
// } // 将head链表中指定的wp拿出插入free_

// int make_a_new_w(char *args) {
//     WP *wp = new_wp(); 
//     wp->args = strcpy(wp->args, args); // 存表达式
//     bool success = true;
//     wp->ret = expr(args, &success); // 存结果
//     printf("watchpoint: %d\t%s\t%d\n", wp->NO, wp->args, wp->ret);
//     return 0;
// }

// int print_w_list() {
//     WP *wp = head;
//     if (wp == NULL) {
//         printf("there is no watchpoint in the list\n");
//         return 0;
//     }
//     while (wp != NULL) {
//         printf("watchpoint: %d\t%s\t%d\n", wp->NO, wp->args, wp->ret);
//         if (wp->next == NULL) { break;}
//         wp = wp->next;
//     }
//     return 0;
// }

// int delete_a_w(int NO) {
//     WP *wp = head;
//     if (wp == NULL) {
//         printf("there is no watchpoint in the list\n");
//         return 0;
//     }
//     while (wp != NULL) {
//         if (wp->NO == NO) {
//             free_wp(wp);
//             printf("delete NO.%d watchpoint successfully\n", wp->NO);
//             break;
//         }
//         if (wp->next == NULL) {
//             printf("NO.%d watchpoint is not find\n", NO);
//             break;
//         }
//         wp = wp->next;
//     }
//     return 0;
// } // 删除watchpoint的函数还是有bug, 最后一个监视点删除会出段错误


WP* new_wp() {
	// Check free_ is not NULL first.
	assert(free_ != NULL);
	WP *tmp = free_;
	free_ = free_ -> next;
	tmp -> next = head;
	head = tmp;
	return tmp;
}

void free_wp(WP *wp) {
	// Head is wp.
	if (head == wp) {
		WP *tmp = head;
		head = head -> next;
		tmp -> next = free_;
		free_ = tmp;
	} else {
		WP *pt = head;
		while (pt != NULL && pt -> next != wp) {
			pt = pt -> next;
		}
		// Cannot find wp.
		if (pt == NULL) {
			printf("No watchpoints number %d.\n", wp -> NO);
			return;
		}
		WP *tmp = pt -> next;
		pt -> next = tmp -> next;
		tmp -> next = free_;
		memset(tmp -> expr, 0, sizeof(tmp -> expr));
		free_ = tmp;
	}
}

/* add watchpoint */
void watchpoints_add(char *e) {
	bool success = true;
	/* calculate expression */
	uint64_t ret = expr(e, &success);
	/* check if argument has errors */
	if (success) {
		WP *pt = new_wp();
		/* store expression */
		memcpy(pt -> expr, e, strlen(e));
		/* store result */
		pt -> result = ret;
	} else {
		printf("%s: Syntax error.\n", e);
	}
}

/* delete watchpoint */
void watchpoints_del(int id) {
	WP *pt = head;
	while (pt != NULL) {
		if (pt -> NO != id) {
			pt = pt -> next;
		} else {
			free_wp(pt);
			return;
		}
	}
	// Cannot find wp.
	printf("No watchpoints number %d.\n", id);
}

/* display watchpoints list */
void watchpoints_display() {
	WP *pt = head;
	if (pt == NULL) {
		printf("No watchpoints.\n");
	} else {
		printf("Watchpoints List\n");
		while (pt != NULL) {
			printf("No %d: %s\n", pt -> NO, pt -> expr);
			pt = pt -> next;
		}
	}
}

/* eval expressions and compare with the previous one */
bool watchpoints_check() {
	WP *pt = head;
	bool is_changed = false;
	while (pt != NULL) {
		bool success = true;
		uint64_t now = expr(pt -> expr, &success);
		assert(success);
		/* expression's result changed, output the result */
		if (now != pt -> result) {
			is_changed = true;
			printf("Watchpoint %d: %s\n\n", pt -> NO, pt -> expr);
			printf("Old value = %lx\n", pt -> result);
			printf("New value = %lx\n\n", now);
			pt -> result = now;
		}
		pt = pt -> next;
	}
	return is_changed;
}