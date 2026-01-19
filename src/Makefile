CC=i686-elf-gcc
AS=i686-elf-as
CFLAGS=-ffreestanding -O2 -Wall -Wextra
LDFLAGS=-T linker.ld -ffreestanding -nostdlib

all: myos.bin

myos.bin:
	$(AS) boot/boot.asm -o boot.o
	$(CC) $(CFLAGS) -c kernel/kernel.c -o kernel.o
	$(CC) $(CFLAGS) -c kernel/vga.c -o vga.o
	$(CC) $(LDFLAGS) boot.o kernel.o vga.o -o myos.bin

clean:
	rm -f *.o myos.bin

