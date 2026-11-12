#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>

/* .rodata : read-only constants */
static const char FW_VERSION[] = "GH-CTRL v1.4";

/* .data : globals/statics with a NON-zero initializer */
int target_temp_c = 24;
static uint16_t fan_rpm_limit = 1800;

/* .bss : globals/statics that are zero or uninitialized */
int sensor_error_count;
static uint32_t log_buffer[256];

/* .text : code */
void read_sensors(void)
{
    static int call_count = 0;   /* static local -> .bss, NOT the stack */
    int raw_adc = 2048;          /* automatic local -> stack */
    call_count++;
    printf("  read_sensors: call_count=%d  &call_count=%p  &raw_adc=%p\n", call_count, (void *)&call_count, (void *)&raw_adc);
}

int main(void)
{
    int zone_count = 4;                                          /* stack */
    float *zone_temps = malloc(zone_count * sizeof *zone_temps); /* heap  */
    if (zone_temps == NULL) return 1;

    printf(".text   read_sensors       0x%" PRIxPTR "\n", (uintptr_t)read_sensors);
    printf(".rodata FW_VERSION         %p\n", (void *)FW_VERSION);
    printf(".data   target_temp_c      %p\n", (void *)&target_temp_c);
    printf(".data   fan_rpm_limit      %p\n", (void *)&fan_rpm_limit);
    printf(".bss    sensor_error_count %p\n", (void *)&sensor_error_count);
    printf(".bss    log_buffer         %p\n", (void *)log_buffer);
    printf("heap    zone_temps         %p\n", (void *)zone_temps);
    printf("stack   zone_count         %p\n", (void *)&zone_count);
    read_sensors();
    read_sensors();

    free(zone_temps);
    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ cc Memory_layout_in_C/Exercise_1.c
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
.text   read_sensors       0x561a0f7db1a9
.rodata FW_VERSION         0x561a0f7dc008
.data   target_temp_c      0x561a0f7de010
.data   fan_rpm_limit      0x561a0f7de014
.bss    sensor_error_count 0x561a0f7de040
.bss    log_buffer         0x561a0f7de060
heap    zone_temps         0x561a1ecfe010
stack   zone_count         0x7ffd3698654c
  read_sensors: call_count=1  &call_count=0x561a0f7de460  &raw_adc=0x7ffd36986524
  read_sensors: call_count=2  &call_count=0x561a0f7de460  &raw_adc=0x7ffd36986524*/