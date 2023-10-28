#include "npc.h"
#include <utils/macro.h>
#include <utils/debug.h>

static void welcome() {
	printf(ASNI_FMT("ITrace: %s\t", ASNI_FG_BLUE), MUXDEF(CONFIG_NPC_ITRACE, ASNI_FMT("ON", ASNI_FG_GREEN), ASNI_FMT("OFF", ASNI_FG_RED)));
	printf(ASNI_FMT("GPRTrace: %s\t", ASNI_FG_BLUE), MUXDEF(CONFIG_NPC_GPRTRACE, ASNI_FMT("ON", ASNI_FG_GREEN), ASNI_FMT("OFF", ASNI_FG_RED)));
	// printf(ASNI_FMT("IFTrace: %s\t", ASNI_FG_BLUE), MUXDEF(CONFIG_NPC_IFTRACE, ASNI_FMT("ON", ASNI_FG_GREEN), ASNI_FMT("OFF", ASNI_FG_RED)));
	printf(ASNI_FMT("Difftest: %s\n", ASNI_FG_BLUE), MUXDEF(CONFIG_NPC_DIFFTEST, ASNI_FMT("ON", ASNI_FG_GREEN), ASNI_FMT("OFF", ASNI_FG_RED)));
	printf(ASNI_FMT("MTrace: %s\t", ASNI_FG_BLUE), MUXDEF(CONFIG_NPC_MTRACE, ASNI_FMT("ON", ASNI_FG_GREEN), ASNI_FMT("OFF", ASNI_FG_RED)));
	printf(ASNI_FMT("DTrace: %s\t", ASNI_FG_BLUE), MUXDEF(CONFIG_NPC_DTRACE, ASNI_FMT("ON", ASNI_FG_GREEN), ASNI_FMT("OFF", ASNI_FG_RED)));
	printf(ASNI_FMT("ETrace: %s\t\n", ASNI_FG_BLUE), MUXDEF(CONFIG_NPC_ETRACE, ASNI_FMT("ON", ASNI_FG_GREEN), ASNI_FMT("OFF", ASNI_FG_RED)));

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

void init_monitor() {
	init_log("./monitor_log.txt");
	// 	init_elf(elf_file);
	IFDEF(CONFIG_NPC_DEVICE, init_device());
	IFDEF(CONFIG_NPC_ITRACE, init_disasm("riscv64-pc-linux-gnu")); 
	long img_size = load_image("/home/shiroha/Code/ysyx/ysyx-workbench/npc/image.bin");
	IFDEF(CONFIG_NPC_DIFFTEST, init_difftest("/home/shiroha/Code/ysyx/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so", img_size););
	welcome();
	// sdb_mainloop();
}
