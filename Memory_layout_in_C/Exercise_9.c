// Reference code to Q10 of the practice questions

#include <stdio.h>

#define BUFFER_SIZE (1024 * 4)

int count = 0;

void read_sensors(void)
{
    char sensor_data[BUFFER_SIZE];
    printf("%d execution\n", count++);
    read_sensors();
}

int main(void)
{
    read_sensors();
    return 0;
}

/* Output:
2019 execution
2020 execution
2021 execution
2022 execution
2023 execution
2024 execution
2025 execution
2026 execution
2027 execution
Segmentation fault         (core dumped) ./a.out*/