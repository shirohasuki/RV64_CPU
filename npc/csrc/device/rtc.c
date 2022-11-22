// #include <device/map.h>

// static uint32_t *rtc_port_base = NULL;

// void init_timer() {
//     rtc_port_base = (uint32_t *)new_space(8);
// #ifdef NPC_HAS_PORT_IO
//     add_pio_map ("rtc", CONFIG_RTC_PORT, rtc_port_base, 8, rtc_io_handler);
// #else
//     add_mmio_map("rtc", CONFIG_RTC_MMIO, rtc_port_base, 8, rtc_io_handler);
// #endif
//     // IFNDEF(CONFIG_TARGET_AM, add_alarm_handle(timer_intr));
// }