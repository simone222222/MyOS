CC=i686-elf-gcc
AS=i686-elf-as
CFLAGS=-ffreestanding -O2 -Wall -Wextra
LDFLAGS=-T linker.ld -ffreestanding -nostdlib

KERNEL=myos.bin
ISO=myos.iso

ISO_DIR=iso
BOOT_DIR=$(ISO_DIR)/boot
GRUB_DIR=$(BOOT_DIR)/grub

all: $(KERNEL)

$(KERNEL):
	$(AS) boot/boot.asm -o boot.o
	$(CC) $(CFLAGS) -c kernel/kernel.c -o kernel.o
	$(CC) $(CFLAGS) -c kernel/vga.c -o vga.o
	$(CC) $(LDFLAGS) boot.o kernel.o vga.o -o $(KERNEL)

iso: $(KERNEL)
	mkdir -p $(GRUB_DIR)
	cp $(KERNEL) $(BOOT_DIR)/
	cp grub.cfg $(GRUB_DIR)/
	grub-mkrescue -o $(ISO) $(ISO_DIR)

run: iso
	qemu-system-i386 -cdrom $(ISO)

clean:
	rm -f *.o $(KERNEL) $(ISO)
	rm -rf $(ISO_DIR)
