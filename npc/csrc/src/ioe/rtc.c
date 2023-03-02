#include <common.h>
#include <device/map.h>
#include <device/alarm.h>
#include <sys/time.h>
// 此处直接选用了gettime of the day

static uint64_t boot_time = 0;

static uint64_t get_time_internal() {
    struct timeval now;
    gettimeofday(&now, NULL);
    uint64_t us = now.tv_sec * 1000000 + now.tv_usec;
    
    // printf("us = %llx\n", us);

    // printf("us = %llx\n", (uint32_t)us);
    return us;
}

uint64_t get_time() {
    if (boot_time == 0) boot_time = get_time_internal();
    uint64_t now = get_time_internal();
    return now - boot_time;
}

static uint32_t *rtc_port_base = NULL;

static void rtc_io_handler(uint32_t offset, int len, bool is_write) {
    // assert(offset == 0 || offset == 4);
    // if (!is_write && offset == 4) {
    printf("here\n");
    if (!is_write) {
    // if (!is_write) {
        uint64_t us = get_time();
        rtc_port_base[0] = (uint32_t)us;
        rtc_port_base[1] = us >> 32;
    }
} // 未使用

static void timer_intr() {
    // if (npc_state.state == NPC_RUNNING) {
        // extern void dev_raise_intr();
        // dev_raise_intr(); // from intr.c
    // }
}

void init_timer() {
    rtc_port_base = (uint32_t *)new_space(8);
    add_mmio_map("rtc", RTC_MMIO, rtc_port_base, 8, rtc_io_handler);
    // add_alarm_handle(timer_intr);
}
