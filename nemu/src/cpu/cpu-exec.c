#include <cpu/cpu.h>
#include <cpu/decode.h>
#include <cpu/difftest.h>
#include <locale.h>

/* The assembly code of instructions executed is only output to the screen
 * when the number of instructions executed is less than this value.
 * This is useful when you use the `si' command.
 * You can modify this value as you want.
 */
#define MAX_INST_TO_PRINT 1001


#ifdef CONFIG_IRINGBUF
#define RING_LEN 16 // iringbuf环形里单次存储指令条数目
int ringptr = RING_LEN - 1;
char ringbuf[RING_LEN - 1][128];
#endif

#ifdef CONFIG_FTRACE
void ftrace_record(uint64_t pc, uint64_t addr, bool is_return);
void ftrace_output();
#endif

#ifdef CONFIG_WATCHPOINT
bool watchpoints_check();
#endif

CPU_state cpu = {};
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;

void device_update();

static void trace_and_difftest(Decode *_this, vaddr_t dnpc) {
#ifdef CONFIG_ITRACE_COND
    if (CONFIG_ITRACE_COND) { log_write("%s\n", _this->logbuf); }
#endif
    if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
    IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));
#ifdef CONFIG_WATCHPOINT
	if (watchpoints_check() == true) {
		nemu_state.state = NEMU_STOP;
		printf("Watchpoint(s) changed.\n");
	}
#endif
}

static void exec_once(Decode *s, vaddr_t pc) {
    s->pc = pc;   // 当前PC设置为PC
    s->snpc = pc; // 下一个PC也设置为PC
    isa_exec_once(s);
#ifdef CONFIG_FTRACE
    uint32_t finst = s->isa.inst.val;
	if (finst == 0x00008067) {
		// ret: jalr x0, 0(x1)
	  ftrace_record(pc, pc, true);
	} else if (BITS(finst, 6, 0) == 0x6f && BITS(finst, 11, 7) != 0) {
		ftrace_record(pc, s->dnpc, false);
	}	else if (BITS(finst, 6, 0) == 0x67 && BITS(finst, 11, 7) != 0) {
		ftrace_record(pc, s->dnpc, false);
	}
#endif
    cpu.pc = s->dnpc;
#ifdef CONFIG_ITRACE
    char *p = s->logbuf;
    p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc); // C 库函数 int snprintf(char *str, size_t size, const char *format, ...) 设将可变参数(...)按照 format 格式化成字符串，并将字符串复制到 str 中，size 为要写入的字符的最大数目，超过 size 会被截断。
    int ilen = s->snpc - s->pc;
    int i;
    uint8_t *inst = (uint8_t *)&s->isa.inst.val;
    for (i = 0; i < ilen; i ++) {
        p += snprintf(p, 4, " %02x", inst[i]);
    }
    int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
    int space_len = ilen_max - ilen;
    if (space_len < 0) space_len = 0;
    space_len = space_len * 3 + 1;
    memset(p, ' ', space_len);
    p += space_len;

    void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
    disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
        MUXDEF(CONFIG_ISA_x86, s->snpc, s->pc), (uint8_t *)&s->isa.inst.val, ilen);
#endif
#ifdef CONFIG_IRINGBUF
	ringptr = (ringptr + 1) % RING_LEN; // ringptr < 16 时,ringptr = ringptr; ringptr = 16 时,ringptr = 0;
	strcpy(ringbuf[ringptr], s->logbuf);
#endif
}

static void execute(uint64_t n) {
    Decode s;
    for (;n > 0; n --) {
        // printf("2.[cpu-exec.c(execute)]:hello\n");
        // printf("2.[cpu-exec.c(execute)] pc %lx\n", cpu.pc);
        exec_once(&s, cpu.pc);
        g_nr_guest_inst ++;
        trace_and_difftest(&s, cpu.pc);
        if (nemu_state.state != NEMU_RUNNING) break;
        IFDEF(CONFIG_DEVICE, device_update());
        // isa_reg_display();
    }
}

static void statistic() {
    IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%ld", "%'ld")
    Log("host time spent = " NUMBERIC_FMT " us", g_timer);
    Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
    if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
    else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

void assert_fail_msg() {
    isa_reg_display();
    statistic();
}

/* Simulate how the CPU works. */
void cpu_exec(uint64_t n) {
    g_print_step = (n < MAX_INST_TO_PRINT);
    switch (nemu_state.state) {
        case NEMU_END: case NEMU_ABORT:
            printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
            return;
        default: nemu_state.state = NEMU_RUNNING;
    }

    uint64_t timer_start = get_time();

    execute(n);
    // isa_reg_display();

    uint64_t timer_end = get_time();
    g_timer += timer_end - timer_start;

    switch (nemu_state.state) {
        case NEMU_RUNNING: nemu_state.state = NEMU_STOP; break;

        case NEMU_ABORT:
#ifdef CONFIG_IRINGBUF
			printf("========== IRingBuf Result ==========\n"); // 把环形的拉直输出了
			for (int i = ringptr + 1; ; i = (i + 1) % RING_LEN) {
				if (i == ringptr) { printf("---> %s\n", ringbuf[i]); break;}
				else printf("     %s\n", ringbuf[i]);
			}
			printf("\n");
#endif
#ifdef CONFIG_FTRACE
			printf("========== Ftrace Result ==========\n");
			ftrace_output();
			printf("\n");
#endif

        case NEMU_END:
            Log("nemu: %s at pc = " FMT_WORD,
            (nemu_state.state == NEMU_ABORT ? ASNI_FMT("ABORT", ASNI_FG_RED) :
            (nemu_state.halt_ret == 0 ? ASNI_FMT("HIT GOOD TRAP", ASNI_FG_GREEN) :
            ASNI_FMT("HIT BAD TRAP", ASNI_FG_RED))),
            nemu_state.halt_pc);
        // fall through
        case NEMU_QUIT: statistic();
    } 
}
