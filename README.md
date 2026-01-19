# MyOS

MyOS is a **simple 32-bit operating system written in C**, built as a learning project for OS development (OSDev).
It boots using **GRUB**, runs on **bare metal**, and prints text using **VGA text mode**.

---

## ✨ Features

- Written in **C and Assembly**
- **GRUB (Multiboot)** bootloader
- Runs in **32-bit protected mode**
- VGA text output
- Freestanding kernel
- Runs in **QEMU**

---

## 📁 Project Structure

```
myos/
├── boot/
│ └── boot.asm # Multiboot entry
├── kernel/
│ ├── kernel.c # Kernel entry point
│ └── vga.c # VGA text driver
├── include/
│ └── vga.h # VGA header
├── linker.ld # Linker script
├── grub.cfg # GRUB configuration
├── Makefile # Build system
└── README.md
```

---

## 🛠 Requirements

You need the following tools installed:

- **i686-elf-gcc** (cross compiler)
- **i686-elf-as**
- **GRUB tools**
  - `grub-mkrescue`
- **QEMU**

On Debian / Ubuntu:
```bash
sudo apt install grub-pc-bin xorriso qemu-system-x86
```
Run: 
```bash
make
```
 to compile kernel only,
Run: 
```bash
make iso
```
 to create bootable ISO,

Run: 
```bash
make run
```
 to create bootable ISO and run

 TODO:
- [x] Hello World kernel
- [ ] VGA scrolling
- [ ] GDT, IDT and Interrupts
- [ ] Keyboard input
- [ ] Shell
- [ ] Memory Management
- [ ] Filesystem
- [ ] GUI
- [ ] Porting doom
- [ ] Porting MicroPython
- [ ] porting stb_image
