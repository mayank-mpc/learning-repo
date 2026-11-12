// Reference code to Q9 of practice questions

#include <stdio.h>
#include <stdint.h>
#include <string.h>

#define DATA_SIZE 3
#define BSS_SIZE  4

// 1. Non-volatile Flash memory (stores initial values for .data)
// Example values: Target Temp (24°C), Target Humidity (65%), Watering Interval (12h)
const uint32_t flash_data[DATA_SIZE] = { 24, 65, 12 };

// 2. Volatile RAM sections (filled with garbage values to simulate raw power-on RAM)
uint32_t ram_data[DATA_SIZE] = { 0xDEADBEEF, 0xCAFEBABE, 0x8BADF00D };
uint32_t ram_bss[BSS_SIZE]   = { 0xFFFFFFFF, 0x12345678, 0xAAAAAAAA, 0x55555555 };

// Helper function to inspect memory state
void print_memory_state(const char *stage) {
    printf("--- %s ---\n", stage);
    printf("ram_data: [ ");
    for (int i = 0; i < DATA_SIZE; i++) printf("0x%08X ", ram_data[i]);
    printf("]\n");

    printf("ram_bss:  [ ");
    for (int i = 0; i < BSS_SIZE; i++)  printf("0x%08X ", ram_bss[i]);
    printf("]\n\n");
}

// 3. The main application logic ("Greenhouse Logic")
void greenhouse_logic(void) {
    // Map meaningful names to our simulated memory slots
    uint32_t *target_temp     = &ram_data[0];
    uint32_t *target_humidity = &ram_data[1];

    uint32_t *pump_active_flag = &ram_bss[0];
    uint32_t *error_count      = &ram_bss[1];

    printf(">>> Running Greenhouse Logic...\n");
    printf("Target Temp: %u C | Target Humidity: %u%%\n", *target_temp, *target_humidity);
    printf("Pump Active: %u   | Error Count: %u\n\n", *pump_active_flag, *error_count);

    // Simulate greenhouse operation modifying RAM
    *pump_active_flag = 1;
    (*error_count)++;
}

// 4. The Startup Routine (Reset Handler)
void fake_reset_handler(void) {
    // Step A: Copy initialized data from Flash (.rodata/.data load image) to RAM (.data)
    for (int i = 0; i < DATA_SIZE; i++) {
        ram_data[i] = flash_data[i];
    }

    // Step B: Zero out uninitialized global/static memory (.bss)
    for (int i = 0; i < BSS_SIZE; i++) {
        ram_bss[i] = 0;
    }

    // Step C: Jump to application entry point
    greenhouse_logic();
}

int main(void) {
    print_memory_state("1. Before Reset Handler (Raw Garbage RAM)");

    fake_reset_handler();

    print_memory_state("2. After Greenhouse Logic Execution");
    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ cc Memory_layout_in_C/Exercise_8.c
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
--- 1. Before Reset Handler (Raw Garbage RAM) ---
ram_data: [ 0xDEADBEEF 0xCAFEBABE 0x8BADF00D ]
ram_bss:  [ 0xFFFFFFFF 0x12345678 0xAAAAAAAA 0x55555555 ]

>>> Running Greenhouse Logic...
Target Temp: 24 C | Target Humidity: 65%
Pump Active: 0   | Error Count: 0

--- 2. After Greenhouse Logic Execution ---
ram_data: [ 0x00000018 0x00000041 0x0000000C ]
ram_bss:  [ 0x00000001 0x00000001 0x00000000 0x00000000 ]*/