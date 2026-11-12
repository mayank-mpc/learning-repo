// Reference code to Q10 of the practice questions
// NOTE: only crashes at -O0. At -O2/-Os gcc removes the unused buffer and
// turns the recursion into an infinite loop. -Wall warns about this
// (unused variable 'sensor_data', infinite recursion) - expected here.

#include <stdio.h>
#include <stddef.h>

#define BUFFER_SIZE (1024 * 4)

size_t stack_size = 0;

void read_sensors(void)
{
    char sensor_data[BUFFER_SIZE];
    stack_size += BUFFER_SIZE;
    printf("Stack size in bytes is %zu\n", stack_size);
    read_sensors();
}

int main(void)
{
    read_sensors();
    return 0;
}

/* ulimit -s = 8192 KB = 8,388,608 bytes
Output:
Stack size in bytes is 8286208
Stack size in bytes is 8290304
Stack size in bytes is 8294400
Stack size in bytes is 8298496
Stack size in bytes is 8302592
Stack size in bytes is 8306688
Segmentation fault         (core dumped) ./a.out*/