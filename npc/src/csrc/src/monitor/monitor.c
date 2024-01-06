#include "npc.h"
#include <getopt.h>
#include <utils/macro.h>
#include <utils/debug.h>


static void welcome() {
	display_trace_status(); // 显示默认设置
  	Log("Build time: %s, %s", __TIME__, __DATE__);
  	printf("Welcome to %s!\n", ASNI_FMT(str(NPC), ASNI_FG_YELLOW ASNI_BG_RED));
  	printf("For help, type \"help\"\n");
}

static void init_log(const char *log_file) {
	FILE *log_fp = NULL;
	log_fp = stdout;
	if (log_file != NULL) {
		FILE *fp = fopen(log_file, "w");
		Assert(fp, "Can not open '%s'", log_file);
		log_fp = fp;
	}
	Log("Log is written to %s", log_file ? log_file : "stdout");
}

static int parse_args(int argc, char *argv[]) {
	const struct option table[] = {
		{"batch"    , no_argument      , NULL, 'b'},
		{"help"     , no_argument      , NULL, 'h'},
	};
	int o;
	while ( (o = getopt_long(argc, argv, "b", table, NULL)) != -1) {
		switch (o) {
		case 'b': sdb_set_batch_mode(); break;
		default:
			printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
			printf("\t-b,--batch              run with batch mode\n");
			printf("\n");
			exit(0);
		}
	}
	return 0;
}


void init_monitor(int argc, char *argv[]) {
	parse_args(argc, argv);
	init_log("./monitor_log.txt");
	// 	init_elf(elf_file);
	IFDEF(CONFIG_NPC_DEVICE, init_device());
	IFDEF(CONFIG_NPC_ITRACE, init_disasm("riscv64-pc-linux-gnu")); 
	long img_size = load_image("/home/shiroha/Code/ysyx/ysyx-workbench/npc/image.bin");
	IFDEF(CONFIG_NPC_DIFFTEST, init_npc()); // npc启动后打拍到第一条命令执行完
	IFDEF(CONFIG_NPC_DIFFTEST, init_difftest("/home/shiroha/Code/ysyx/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so", img_size););
	welcome();
	// sdb_mainloop();
}
