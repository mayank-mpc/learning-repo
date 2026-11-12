// Reference code to Q7 of the practice questions

#include <stdio.h>
#include <stdlib.h>

void memory_leak_function(void)
{
    int *ptr = (int *) malloc(sizeof(int));
    return;
}

int main(void)
{
    printf("Memory leak test program\n");

    for(int i = 0 ; i < 3 ; i++)
    {
        memory_leak_function();
    }

    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ cc Memory_layout_in_C/Exercise_6.c -fsanitize=address -g
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
Memory leak test program

=================================================================
==15348==ERROR: LeakSanitizer: detected memory leaks

Direct leak of 12 byte(s) in 3 object(s) allocated from:
    #0 0x74b1aa52b60f in malloc ../../../../src/libsanitizer/asan/asan_malloc_linux.cpp:67
    #1 0x601c2f4711fe in memory_leak_function Memory_layout_in_C/Exercise_6.c:8
    #2 0x601c2f47122e in main Memory_layout_in_C/Exercise_6.c:18
    #3 0x74b1aa02a600 in __libc_start_call_main ../sysdeps/nptl/libc_start_call_main.h:59
    #4 0x74b1aa02a717 in __libc_start_main_impl ../csu/libc-start.c:360
    #5 0x601c2f471124 in _start (/home/mayank/Desktop/Learning Repo/learning-repo/a.out+0x1124) (BuildId: 367665075eed2bf48bcff12d38f147a4f81b7519)

SUMMARY: AddressSanitizer: 12 byte(s) leaked in 3 allocation(s).*/