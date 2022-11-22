#include <macro.h>
#include <stdio.h>

void init_map();
void init_serial();
// // void init_timer();
// // void init_vga();
// // void init_init_i8042();
// // void init_audio();
// // void init_disk();
// // void init_sdcard();
// // void init_alarm();

void init_device() {
    //printf("hello\n");
    IFDEF(CONFIG_TARGET_AM, ioe_init()); // 这个函数编译在AM那
    //printf("hello\n");
    init_map();
    //printf("hello\n");
    IFDEF(NPC_HAS_SERIAL, init_serial());
    // IFDEF(NPC_HAS_TIMER, init_timer());
    // IFDEF(CONFIG_HAS_VGA, init_vga());
    // IFDEF(CONFIG_HAS_KEYBOARD, init_i8042());
    // IFDEF(CONFIG_HAS_AUDIO, init_audio());
    // IFDEF(CONFIG_HAS_DISK, init_disk());
    // IFDEF(CONFIG_HAS_SDCARD, init_sdcard());

    // IFNDEF(CONFIG_TARGET_AM, init_alarm());
}