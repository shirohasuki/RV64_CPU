#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <memory/paddr.h>
#include "sdb.h"

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  return -1;
}

static int cmd_help(char *args);
static int cmd_x(char *args);
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

  /* TODO: Add more commands */
  {"si", "Execute the program in n steps\n \t-n nsteps\n", cmd_si},
  {"info", "print status\n \t-r print register status", cmd_info},
  {"x", "scan the rom", cmd_x},
};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
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

static int cmd_x(char *args) {
  if (args == NULL) {
    printf("No parameters\n");
    return 0;
  }
  int count = atoi(strtok(NULL, " "));
  if (count==0) {
    printf("Wrong parameter1\n");
    return 0;
  }
  char* EXPR_BUFFER = strtok(NULL, " ");
  if (EXPR_BUFFER==NULL) {
    printf("Wrong parameter2\n");
    return 0;
  }
  int EXPR = strtol(EXPR_BUFFER,NULL,16);
  if (EXPR==0) {
    printf("Wrong parameter2\n");
    return 0;
  }
  if(strtok(NULL, " ")!=NULL) {
    printf("Too many parameters\n");
    return 0;
  }

  for(int i = 0; i < count; i++) {
    printf("0x%x:    0x%lx\n", EXPR+i*5, paddr_read(EXPR+i*4, 4));
  }
  return 0;
}

static int cmd_si(char *args) {
  if (args == NULL) {
    cpu_exec(1);
    return 0;
  }
  int step = atoi(strtok(NULL, " "));
  if(strtok(NULL, " ")!=NULL) {
    printf("Too many parameters\n");
    return 0;
  }
  if (step<=0 || step >=999) {
    printf("Wrong parameter\n");
    return 0;
  }
  cpu_exec(step);
  return 0;
}

static int cmd_info(char *args) {
  if (args == NULL) {
    printf("Please input the info r\n");
    return 0;
  }
  char *arg = strtok(NULL, " ");
  if(strtok(NULL, " ")!=NULL) {
    printf("Too many parameters\n");
    return 0;
  }
  if (strcmp(arg, "r") == 0) {
    isa_reg_display();
  }
  else {
    printf("Info is imperfect\n");
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

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
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

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
