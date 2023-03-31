#include <common.h>
#include <device/map.h>
#include <device/alarm.h>
#include <sys/time.h>
// 此处直接选用了gettime of the day

static uint64_t start_time = 0;

static uint32_t *rtc_port_base = NULL;

static uint64_t get_time_internal() {
    struct timeval time;
    gettimeofday(&time, NULL);
    uint64_t nowtime = time.tv_sec * 1000000 + time.tv_usec;
    return nowtime;
}

uint64_t get_time() {
    if (start_time == 0) start_time = get_time_internal();
    uint64_t exec_time = get_time_internal();
    return exec_time - start_time;
}

static void rtc_io_handler(uint32_t offset, int len, bool is_write) {
    assert(offset == 0 || offset == 4);
    if (!is_write && offset == 4) {
        uint64_t us = get_time();
        rtc_port_base[0] = (uint32_t)us;
        rtc_port_base[1] = us >> 32;
    }
} 

// static void timer_intr() {
    // if (npc_state.state == NPC_RUNNING) {
        // extern void dev_raise_intr();
        // dev_raise_intr(); // from intr.c
    // }
// }

void init_timer() {
    rtc_port_base = (uint32_t *)new_space(8);
    add_mmio_map("rtc", RTC_MMIO, rtc_port_base, 8, rtc_io_handler);
    // add_alarm_handle(timer_intr);
}
