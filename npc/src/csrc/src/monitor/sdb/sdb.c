#include "npc.h"
#include <utils/macro.h>
#include <utils/debug.h>
#include <readline/readline.h>
#include <readline/history.h>

static int is_batch_mode = false;

extern CPU_state cpu_npc;  // DUT
extern CPU_state cpu_nemu; // REF

extern int nemu_step;

extern int config_npc_itrace  ;
extern int config_npc_difftest;
extern int config_npc_mtrace  ;
extern int config_npc_dtrace  ;
extern int config_npc_etrace  ;
extern int config_npc_ctrace  ;
extern int config_npc_gprdump ;

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
static int cmd_trace(char *args);

static struct {
    const char *name;
    const char *description;
    int (*handler) (char *);
} cmd_table [] = {
    { "help", "Display informations about all supported commands", cmd_help },
    { "c", "Continue the execution of the program", cmd_c },
    { "q", "Exit NPC", cmd_q },
    {"si", "Execute the program in n steps\n\t\t-n nsteps(1~10000)", cmd_si },
    {"info", "Print status\n\t\t-r print register status\n\t\t-c print cache status", cmd_info },
    {"trace", "Change trace status -i/m/t/d/e/c -o/s/h", cmd_trace }
    // {"x", "scan the rom", cmd_x }
};

#define NR_CMD ARRLEN(cmd_table)


#ifdef CONFIG_NPC_ITRACE
#define SIZE_RINGBUF 16 // iringbuf环形里单次存储指令条数目
#define LEN_RINGBUF 256 // 单个buff可存放最大长度
extern  int ringptr;
extern  char ringbuf[SIZE_RINGBUF][LEN_RINGBUF];
#endif

static int sdb_exec_once(int step) {
    while(step--) {
        npc_exec_once();
        IFDEF(CONFIG_NPC_DEVICE, device_update());
#ifdef CONFIG_NPC_ITRACE
	if (config_npc_itrace == NPC_xTRACE_SHOW) { printf("step %4d  %s\n", nemu_step, ringbuf[ringptr]);}
#endif
		while (cpu_npc.pc == 0x0) {
            npc_exec_once();   
        } // EX被冲刷以后，pc再走几拍
#ifdef CONFIG_NPC_DIFFTEST
        difftest_exec_once();
#endif
		nemu_step++;
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
		for (i = 0; i < NR_CMD; i++) {
			printf("\t%-4s - %s\n", cmd_table[i].name, cmd_table[i].description);
		}
	} else {
		for (i = 0; i < NR_CMD; i++) {
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

static int cmd_info(char *args) {
	char *arg = strtok(NULL, " ");	/* extract the first argument */

	if (arg == NULL || strlen(arg) != 1) { 
		printf("'%s' must be 'r/c' \n", arg); 	/* no argument */
	} else if (strcmp(arg, "r") == 0) {
		dump_gpr(); 	/* dispaly registers */
	} else if (strcmp(arg, "c") == 0) {
		print_ctrace(); /* dispaly cache space */
	} 
	
	return 0;
}

static int cmd_si(char *args) {
    if (args == NULL) {
        sdb_exec_once(1);
		if (config_npc_gprdump == NPC_xTRACE_SHOW) { dump_gpr();}
        return 0;
    }
    int step = atoi(strtok(NULL, " "));
    if (strtok(NULL, " ") != NULL) {
        printf("Too Many Parameters.\n");
        return 0;
    }
    if (step <= 0 || step > 100000) {
        printf("Parameter Out of Range.\n");
    	return 0;
    }
    sdb_exec_once(step);
	if (config_npc_gprdump == NPC_xTRACE_SHOW) { dump_gpr();}
    return 0;
}

static int cmd_trace(char *args) {
    if (args == NULL) { return 0; }
    char *trace_type = strtok(NULL, " ");  // which trace
    if (args == NULL) { printf("Need -o/s/h\n"); return 0; }
    char *trace_opt  = strtok(NULL, " ");  // close or open 
    // if (args != NULL) { printf("Too Many Parameters.\n"); return 0; }

	switch (trace_type[0]) {
		case 'h': display_trace_status(); break;
		case 'i': set_trace_status(&config_npc_itrace, trace_opt); break;
		case 'd': set_trace_status(&config_npc_dtrace, trace_opt); break;
		case 't': set_trace_status(&config_npc_difftest, trace_opt); break;
		case 'e': set_trace_status(&config_npc_etrace, trace_opt); break;
		case 'm': set_trace_status(&config_npc_mtrace, trace_opt); break;
		case 'c': set_trace_status(&config_npc_ctrace, trace_opt); break;
		case 'g': set_trace_status(&config_npc_gprdump, trace_opt); break;
		default: printf("'%s' is not valid \n type must be\n-i itrace\n-h show trace status\n-d dtrace\n-t difftest\n-e etrace\n-m mtrace\n-c cache trace\n-g gpr dump\n", trace_type); break;
	}
    return 0;
}

void sdb_set_batch_mode() {
	is_batch_mode = true;
}

void sdb_mainloop() {
	if (is_batch_mode) {
		cmd_c(NULL);
		return;
	}

	for (char *str; (str = rl_gets()) != NULL; ) { // rl_gets读取（npc）开始命令行
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
