// #include <isa.h>
// #include <memory/paddr.h>

// void init_rand();
// void init_log(const char *log_file);
// void init_elf(const char *elf_file);		// ELF read
// void init_mem();
// void init_difftest(char *ref_so_file, long img_size, int port);
// void init_device();
// void init_sdb();
// void init_disasm(const char *triple);

// static void welcome() {
// 	Log("Trace: %s", MUXDEF(CONFIG_TRACE, ASNI_FMT("ON", ASNI_FG_GREEN), ASNI_FMT("OFF", ASNI_FG_RED)));
//   	IFDEF(CONFIG_TRACE, Log("If trace is enabled, a log file will be generated "
//     	"to record the trace. This may lead to a large log file. "
//         "If it is not necessary, you can disable it in menuconfig"));
//   	Log("Build time: %s, %s", __TIME__, __DATE__);
//   	printf("Welcome to %s-NEMU!\n", ASNI_FMT(str(__GUEST_ISA__), ASNI_FG_YELLOW ASNI_BG_RED));
//   	printf("For help, type \"help\"\n");
//   	//Log("Exercise: Please remove me in the source code and compile NEMU again.");
//   	//assert(0);
// }

// #ifndef CONFIG_TARGET_AM
// #include <getopt.h>

// void sdb_set_batch_mode();

// static char *log_file = NULL;
// static char *diff_so_file = NULL;
// static char *elf_file = NULL;		// ELF file
// static char *img_file = NULL;
// static int difftest_port = 1234;

// static long load_img() {
// 	if (img_file == NULL) {
// 		Log("No image is given. Use the default build-in image.");
// 		return 4096; // built-in image size
// 	}

// 	FILE *fp = fopen(img_file, "rb");
// 	Assert(fp, "Can not open '%s'", img_file);

// 	fseek(fp, 0, SEEK_END);
// 	long size = ftell(fp);

// 	Log("The image is %s, size = %ld", img_file, size);

// 	fseek(fp, 0, SEEK_SET);
// 	int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
// 	assert(ret == 1);

// 	fclose(fp);
//   	return size;
// }

// void init_monitor(int argc, char *argv[]) {
// 	/* Perform some global initialization. */

// 	/* Parse arguments. */
// 	parse_args(argc, argv);

// 	/* Set random seed. */
// 	init_rand();

// 	/* Open the log file. */
// 	init_log(log_file);

// 	#ifdef CONFIG_FTRACE
// 		/* Open the elf file. */
// 		init_elf(elf_file);
// 	#endif

// 	/* Initialize memory. */
// 	init_mem();

// 	/* Initialize devices. */
// 	IFDEF(CONFIG_DEVICE, init_device());

// 	/* Perform ISA dependent initialization. */
// 	init_isa();

// 	/* Load the image to memory. This will overwrite the built-in image. */
// 	long img_size = load_img();

// 	/* Initialize differential testing. */
// 	init_difftest(diff_so_file, img_size, difftest_port);

// 	/* Initialize the simple debugger. */
// 	init_sdb();

// 	IFDEF(CONFIG_ITRACE, init_disasm(
// 		MUXDEF(CONFIG_ISA_x86,     "i686",
// 		MUXDEF(CONFIG_ISA_mips32,  "mipsel",
// 		MUXDEF(CONFIG_ISA_riscv32, "riscv32",
// 		MUXDEF(CONFIG_ISA_riscv64, "riscv64", "bad")))) "-pc-linux-gnu"
// 	));

// 	/* Display welcome message. */
// 	welcome();
// }
