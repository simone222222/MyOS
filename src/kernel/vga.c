#include "../include/vga.h"

static uint16_t* vga_buffer = (uint16_t*)0xB8000;
static uint8_t color = 0x0F;
static int cursor = 0;

void vga_clear(void) {
    for (int i = 0; i < 80 * 25; i++) {
        vga_buffer[i] = (color << 8) | ' ';
    }
    cursor = 0;
}

void vga_print(const char* str) {
    for (int i = 0; str[i] != 0; i++) {
        if (str[i] == '\n') {
            cursor += 80 - (cursor % 80);
        } else {
            vga_buffer[cursor++] = (color << 8) | str[i];
        }
    }
}

