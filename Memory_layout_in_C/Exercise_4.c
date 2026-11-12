// Reference code to Q5 of practice questions

#include <stdio.h>

int *get_reading(void)
{
    int var = 5;
    printf("Local Address %p\n", &var);
    return &var;
}

int main(void)
{
    int *ptr = get_reading();
    if (NULL == ptr)
    {
        printf("ptr is NULL\n");
    }
    printf("Main pointer address %p\n", ptr);
    return 0;
}