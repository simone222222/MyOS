#include "../include/vga.h"

void kernel_main(void) {
    vga_clear();
    vga_print("Welcome to MyOS!\n");
    vga_print("Written in C.\n");

    while (1) {
        __asm__ __volatile__("hlt");
    }
}

