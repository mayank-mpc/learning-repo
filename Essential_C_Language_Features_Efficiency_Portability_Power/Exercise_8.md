# How C language support both machine independence and hardware-level control?

1.  Machine Independent
    1.  Every compiler follows the C standard, so loops, functions, operators, and expressions behave the same everywhere.
    2.  Data types like int, char, and float do not depend on any particular CPU instruction set.
    3.  Functions like printf(), fopen(), malloc() behave consistently across platforms.
    4.  Files like <stdint.h> define sizes (int32_t, uint8_t) so code is also predictable on all machines.
2.  Hardware-Level Control
    1.  Pointers allow access to exact memory addresses, including memory-mapped I/O registers.
    2.  Volatile keyword prevents compiler optimization and ensures every read/write reaches the hardware.
    3.  Bitwise operators are useful for configuring hardware registers at the bit level.
    4.  Inline assembly is optional and allows inserting CPU-specific instructions.
    5.  Compilers can map C operations to the most efficient CPU instructions for a given architecture.

# Examples

Machine independent code works the same on an x86 PC, ARM MCU, and RISC-V board
```
int add(int a, int b) {
    return a + b;
}
```

Hardware Control code works on a microcontroller where that address is an LED register.
```
#define LED_REG   (*(volatile uint32_t*)0x40020018)
LED_REG |= (1 << 5);   // Set bit to turn ON LED
```