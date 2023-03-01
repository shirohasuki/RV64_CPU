#include <device/map.h>
#include <common.h>
#include <utils/debug.h>

#define CH_OFFSET 0

static uint8_t *serial_base = NULL;

void serial_putc(char ch) {
    // MUXDEF(CONFIG_TARGET_AM, putch(ch), putc(ch, stderr));
    putc(ch, stderr);
}

static void serial_io_handler(uint32_t offset, int len, bool is_write) {
    assert(len == 1);
    switch (offset) {
        /* We bind the serial port with the host stderr in NEMU. */
        case CH_OFFSET:
        if (is_write) serial_putc(serial_base[0]);
        else Printf("do not support read", RED);
        break;
        default: Printf("do not support offset = %d", RED, offset);
    }
}

void init_serial() {
    serial_base = new_space(8);
    // Log("Serial Init1");
    add_mmio_map("serial", SERIAL_MMIO, serial_base, 8, serial_io_handler);
    // Log("Serial Init2");
}