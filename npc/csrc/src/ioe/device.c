#include <common.h>
#include <utils/macro.h>
#include <device/alarm.h>
// #include <SDL2/SDL.h>

void init_map();
void init_serial();
void init_timer();
// void init_vga();
// void init_i8042();
void init_alarm();

void send_key(uint8_t, bool);
void vga_update_screen();


// void device_update() {
//     static uint64_t last = 0;
//     uint64_t now = get_time();
//     if (now - last < 1000000 / TIMER_HZ) {
//         return;
//     }
//     last = now;

//     IFDEF(CONFIG_HAS_VGA, vga_update_screen());

// #ifndef CONFIG_TARGET_AM
//     SDL_Event event;
//     while (SDL_PollEvent(&event)) {
//         switch (event.type) {
//         case SDL_QUIT:
//             nemu_state.state = NEMU_QUIT;
//             break;
// #ifdef CONFIG_HAS_KEYBOARD
//         // If a key was pressed
//         case SDL_KEYDOWN:
//         case SDL_KEYUP: {
//             uint8_t k = event.key.keysym.scancode;
//             bool is_keydown = (event.key.type == SDL_KEYDOWN);
//             send_key(k, is_keydown);
//             break;
//         }
// #endif
//         default: break;
//         }
//     }
// #endif
// }

// void sdl_clear_event_queue() {
// #ifndef CONFIG_TARGET_AM
//   SDL_Event event;
//   while (SDL_PollEvent(&event));
// #endif
// }


void init_device() {
    init_map();

    IFDEF(NPC_HAS_SERIAL, init_serial());

    IFDEF(NPC_HAS_TIMER, init_timer());
//   IFDEF(NPC_HAS_VGA, init_vga());
//   IFDEF(NPC_HAS_KEYBOARD, init_i8042());
    // init_alarm();
}
