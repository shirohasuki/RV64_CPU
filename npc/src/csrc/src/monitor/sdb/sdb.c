#include <readline/readline.h>
#include <readline/history.h>
#include "npc.h"


static int is_batch_mode = false;

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
    static char *line_read = NULL;
    if (line_read) {
		free(line_read);
		line_read = NULL;
    }
	/* Tips:readline()的用法 
		readline()的参数是一个字符串，调用函数的时候会在屏幕上输出，这个函数会读取一行输入，然后返回一个指向输入字符串的指针。
		此处输出提示词(npc) , 返回之后输入的字符串
	*/
    line_read = readline("(npc) "); 

    if (line_read && *line_read) {
      	add_history(line_read);
    }

    return line_read;
}

static int cmd_help(char *args);
static int cmd_c(char *args);
static int cmd_q(char *args);
// static int cmd_x(char *args);
static int cmd_si(char *args);
static int cmd_info(char *args);

static struct {
    const char *name;
    const char *description;
    int (*handler) (char *);
} cmd_table [] = {
    { "help", "Display informations about all supported commands", cmd_help },
    { "c", "Continue the execution of the program", cmd_c },
    { "q", "Exit NEMU", cmd_q },
    {"si", "Execute the program in n steps\n\t\t-n nsteps", cmd_si }
    // {"info", "print status\n\t\t-r print register status\n\t\t-w print watchpoints", cmd_info },
    // {"x", "scan the rom", cmd_x }
};

#define NR_CMD ARRLEN(cmd_table)

CPU_state cpu_npc;  // DUT
CPU_state cpu_nemu; // REF

static int sdb_exec_once(int step) {
    while(step--) {
        // dump_gpr(); // 打印通用寄存器
        // dump_csr(); // 打印异常寄存器
        npc_exec_once();
#ifdef CONFIG_NPC_DIFFTEST
        while (cpu_npc.pc == 0x0) {
            npc_exec_once();   
        } // EX被冲刷以后，pc再走几拍
        difftest_exec_once();
#endif
    }
    return 0;
}

static int cmd_help(char *args) {
	/* extract the first argument */
	char *arg = strtok(NULL, " ");
	int i;

	if (arg == NULL) {
		/* no argument given */
		printf("Common options:\n");
		for (i = 0; i < NR_CMD; i ++) {
			printf("\t%-4s - %s\n", cmd_table[i].name, cmd_table[i].description);
		}
	}
	else {
		for (i = 0; i < NR_CMD; i ++) {
			if (strcmp(arg, cmd_table[i].name) == 0) {
				printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
				return 0;
			}
		}
		printf("Unknown command '%s'\n", arg);
	}
	return 0;
}



static int cmd_c(char *args) {
    // while (sim_time < MAX_SIM_TIME) {

    // }
    while(1) {sdb_exec_once(1);}
    return 0;
}

static int cmd_q(char *args) {
    return -1;
}

// static int cmd_x(char *args) {
//     /* extract the first argument */
//     char *arg = strtok(NULL, " ");
//     unsigned int cnt;
//     /* first argument unrecognized */
//     if (arg == NULL || sscanf(arg, "%u", &cnt) != 1) // 第一个参数记入cnt
//     	printf("'%s' must be an integer.\n", arg);
//     arg = strtok(NULL, " ");
//     unsigned int addr;
//     /* second argument unrecognized */
//     if (arg == NULL || sscanf(arg, "%x", &addr) != 1) // 第二个参数记入addr
//     	printf("'%s' must be an expression.\n", arg);
//     /* address guest to host */
//     uint8_t *pos = guest_to_host(addr); // pos = addr + 基地址
//     for (int i = 0; i <= cnt; ++i) {
//       	printf("%x: %02x %02x %02x %02x\n", addr, *pos, *(pos + 1), *(pos + 2), *(pos + 3));
//       	pos += 4, addr += 4;
//     }
//     return 0;
// }

static int cmd_si(char *args) {
    if (args == NULL) {
        sdb_exec_once(1);
        return 0;
    }
    int step = atoi(strtok(NULL, " "));
    if (strtok(NULL, " ") != NULL) {
        printf("Too Many Parameters.\n");
        return 0;
    }
    if (step <= 0 || step >= 999) {
        printf("Parameter Out of Range.\n");
    	return 0;
    }
    sdb_exec_once(step);
    return 0;
}


void sdb_set_batch_mode() {
	is_batch_mode = true;
}

void sdb_mainloop() {
// #ifdef CONFIG_NPC_DIFFTEST
    while (cpu_npc.pc != MEM_BASE) { 
        // printf("%ld\n", cpu_npc.pc); 
        npc_exec_once(); 
    } // pc先走三拍到EXU
// #endif
	if (is_batch_mode) {
		cmd_c(NULL);
		return;
	}

	for (char *str; (str = rl_gets()) != NULL; ) { // rl_gets读取（nemu）开始命令行
		char *str_end = str + strlen(str);

		char *cmd = strtok(str, " ");  // strtok: 分解字符串为一组字符串
		if (cmd == NULL) { continue; }

		char *args = cmd + strlen(cmd) + 1;
			if (args >= str_end) {
			args = NULL;
		}

		int i;
		for (i = 0; i < NR_CMD; i ++) {
			if (strcmp(cmd, cmd_table[i].name) == 0) {
				if (cmd_table[i].handler(args) < 0) { return; }
				break;
			}
		}
		if (i == NR_CMD) {printf("Unknown command '%s'\n", cmd);} 
	}
}
