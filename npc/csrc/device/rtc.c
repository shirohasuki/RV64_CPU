#include <device/map.h>
#include <cassert>
#include <time.h>
#include <ioe.h>

static uint32_t *rtc_port_base = NULL;

uint64_t get_time() {
    time_t t;
    time(&t); // 获取Unix时间戳。
    return t;
}

static void rtc_io_handler(uint32_t offset, int len, bool is_write) {
    // printf("rtc_io_handler. offset == %d, len == %d, is_write == %d\n",offset,len,is_write);
    assert(offset == 0 || offset == 4);
    if (!is_write) {
        uint64_t us = get_time();
        rtc_port_base[0] = (uint32_t)us;
        rtc_port_base[1] = us >> 32;
    }
}

//#ifndef CONFIG_TARGET_AM
//static void timer_intr() {
//    extern void dev_raise_intr();
//    dev_raise_intr();
//}
//#endif

void init_timer() {
    rtc_port_base = (uint32_t *)new_space(8);
#ifdef NPC_HAS_PORT_IO
    add_pio_map ("rtc", RTC_PORT, rtc_port_base, 8, rtc_io_handler);
#else
    add_mmio_map("rtc", RTC_MMIO, rtc_port_base, 8, rtc_io_handler);
#endif
  //IFNDEF(CONFIG_TARGET_AM, add_alarm_handle(timer_intr));
}