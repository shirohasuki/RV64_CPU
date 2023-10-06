#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <memory/paddr.h>
#include "sdb.h"

static int is_batch_mode = true;

void init_regex();

void init_wp_pool();
void watchpoints_add(char *e);
void watchpoints_del(int id);
void watchpoints_display();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
    static char *line_read = NULL;

    if (line_read) {
		free(line_read);
		line_read = NULL;
    }

    line_read = readline("(nemu) ");

    // if (line_read && *line_read) {
    //   	add_history(line_read);
    // }

    return line_read;
}

static int cmd_help(char *args);
static int cmd_c(char *args);
static int cmd_q(char *args);
static int cmd_x(char *args);
static int cmd_si(char *args);
static int cmd_info(char *args);
static int cmd_confession(char *args);
static int cmd_p(char *args); // expr

static int cmd_w(char *args); // watchpoint
static int cmd_d(char *args); // watchpoint


static struct {
    const char *name;
    const char *description;
    int (*handler) (char *);
} cmd_table [] = {
    { "help", "Display informations about all supported commands", cmd_help },
    { "c", "Continue the execution of the program", cmd_c },
    { "q", "Exit NEMU", cmd_q },

    /* TODO: Add more commands */
    {"si", "Execute the program in n steps\n\t\t-n nsteps", cmd_si },
    {"info", "print status\n\t\t-r print register status\n\t\t-w print watchpoints", cmd_info },
    {"x", "scan the rom", cmd_x },
    {"p", "eval the expr", cmd_p },
    {"w", "define a new watchpoint", cmd_w },
    {"d", "delete NO.x watchpoint", cmd_d},
};

#define NR_CMD ARRLEN(cmd_table)

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
    cpu_exec(-1);
    return 0;
}

static int cmd_q(char *args) {
    return -1;
}

static int cmd_x(char *args) {
    /* extract the first argument */
    char *arg = strtok(NULL, " ");
    unsigned int cnt;
    /* first argument unrecognized */
    if (arg == NULL || sscanf(arg, "%u", &cnt) != 1)
      printf("'%s' must be an integer.\n", arg);
    arg = strtok(NULL, " ");
    unsigned int addr;
    /* second argument unrecognized */
    if (arg == NULL || sscanf(arg, "%x", &addr) != 1)
      printf("'%s' must be an expression.\n", arg);
    /* address guest to host */
    uint8_t *pos = guest_to_host(addr);
    for (int i = 0; i <= cnt; ++i) {
      printf("%x: %02x %02x %02x %02x\n", addr, *pos, *(pos + 1), *(pos + 2), *(pos + 3));
      pos += 4, addr += 4;
    }
    return 0;
}

static int cmd_si(char *args) {
    if(args == NULL) {
        cpu_exec(1);
        return 0;
    }
    int step = atoi(strtok(NULL, " "));
    if(strtok(NULL, " ")!=NULL) {
        printf("Too many parameters\n");
        return 0;
    }
    if(step <= 0 || step >= 999) {
        printf("Wrong parameter\n");
    return 0;
    }
    cpu_exec(step);
    return 0;
}


static int cmd_info(char *args) {
	/* extract the first argument */
	char *arg = strtok(NULL, " ");
	/* no argument */
	if (arg == NULL || strlen(arg) != 1)
		printf("'%s' must be 'r' or 'w'.\n", arg);
	/* registers */
	else if (strcmp(arg, "r") == 0)
		isa_reg_display();
	/* watchpoints */
	else if (strcmp(arg, "w") == 0)
			watchpoints_display();
	return 0;
}


static int cmd_confession(char *args) {
    printf("\tThe fountains mingle with the river\n\tAnd the rivers with the ocean,\n\tThe winds of heaven mix for ever\n\tWith a sweet emotion;\n\tNothing in the world is single,\n\tAll things by a law divine\n\tIn one another’s being mingle—\n\tWhy not I with thine?\n\tSee the mountains kiss high heaven\n\tAnd the waves clasp one another;\n\tNo sister-flower would be forgive\n\tIf it disdain’d its brother;\n\tAnd the sunlight clasps the earth,\n\tAnd the moonbeams kiss the sea\n\tWhat are all these kissings worth,\n\tIf thou kiss not me?\n");
    printf("\033[44;31m Dull words can't express my love. I write it into the chip and devote my whole life to you.\033[0m\n");//the confession for u
    return 0;
}

static int cmd_p(char *args) {
	bool success = true;
	/* calculate expression */
	uint64_t ret = expr(args, &success);
	/* check if argument has errors */
	if (success)
		printf("%s = %lx(%lu)\n", args, ret, ret);
	else
		printf("%s: Syntax Error.\n", args);
	return 0;
}


static int cmd_w(char *args) {
	watchpoints_add(args);
    return 0;
}


static int cmd_d(char *args) {
	/* extract the first argument */
	char *arg = strtok(NULL, " ");
	unsigned id;
	if (arg == NULL || sscanf(arg, "%u", &id) != 1)
		printf("'%s' must be an integer.\n", arg);
	/* free watchpoint */
	watchpoints_del(id);
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

	for (char *str; (str = rl_gets()) != NULL; ) { // rl_gets读取（nemu）开始命令行
		char *str_end = str + strlen(str);

		/* extract the first token as the command */
		char *cmd = strtok(str, " ");  // strtok: 分解字符串为一组字符串
		if (cmd == NULL) { continue; }

		/* treat the remaining string as the arguments,
		* which may need further parsing
		*/
		char *args = cmd + strlen(cmd) + 1;
			if (args >= str_end) {
			args = NULL;
		}

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

		int i;
		for (i = 0; i < NR_CMD; i ++) {
			if (strcmp(cmd, cmd_table[i].name) == 0) {
				if (cmd_table[i].handler(args) < 0) { return; }
				break;
			}
		}
		if (i == NR_CMD) { 
			if (strcmp(cmd, "zxy") == 0) {
				cmd_confession(args);
			} // loveu
			else { printf("Unknown command '%s'\n", cmd);} 
		}
	}
}

void init_sdb() {
	/* Compile the regular expressions. */
	init_regex();

	/* Initialize the watchpoint pool. */
	init_wp_pool();
}
