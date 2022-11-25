#include <am.h>
#include "include/npc.h"
#include <stdio.h>

// #include <sys/time.h>
// #include <time.h>

void __am_timer_init() {
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
    // uint64_t time_low  = inl(RTC_ADDR);
    // uint64_t time_high = inl(RTC_ADDR+4);
    // uptime->us = (time_high << 32) + time_low;
    uptime->us = (((uint64_t)inl(RTC_ADDR + 4)) << 32) | inl(RTC_ADDR);
    //printf("%lx\n", uptime->us);
}


// void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
//   rtc->second = 0;
//   rtc->minute = 0;
//   rtc->hour   = 0;
//   rtc->day    = 0;
//   rtc->month  = 0;
//   rtc->year   = 1900;
// }

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
    // time_t t = time(NULL);
    // struct tm *tm = localtime(&t);
    // rtc->second = tm->tm_sec;
    // rtc->minute = tm->tm_min;
    // rtc->hour   = tm->tm_hour;
    // rtc->day    = tm->tm_mday;
    // rtc->month  = tm->tm_mon + 1;
    // rtc->year   = tm->tm_year + 1900;
    rtc->second = 0;
    rtc->minute = 0;
    rtc->hour   = 0;
    rtc->day    = 0;
    rtc->month  = 0;
    rtc->year   = 1900;
}
