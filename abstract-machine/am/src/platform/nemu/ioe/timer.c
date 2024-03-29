#include <am.h>
#include <nemu.h>
#include <stdio.h>

void __am_timer_init() {
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
    // uptime->us = 0;
    uptime->us = (((uint64_t)inl(RTC_ADDR + 4)) << 32) | inl(RTC_ADDR);
    // printf("us = %x\n", uptime->us);
} // AM系统启动时间, 可读出系统启动后的微秒数

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
    rtc->second = 0;
    rtc->minute = 0;
    rtc->hour   = 0;
    rtc->day    = 0;
    rtc->month  = 0;
    rtc->year   = 1900;
} // 系统实时时间
