#include <am.h>
#include <stdio.h>
#include "include/npc.h"

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
    // printf("code = %d\n", code);
    uint32_t code = inl(KBD_ADDR);
    // printf("code = %d\n", code);

    // kbd->keydown = ((code & KEYDOWN_MASK) != 0);
    // kbd->keycode = ((code | KEYDOWN_MASK) ^ KEYDOWN_MASK);
    kbd->keydown = (code & KEYDOWN_MASK ? true : false);
    kbd->keycode = code & ~KEYDOWN_MASK;
}