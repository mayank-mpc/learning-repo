// Redefination error case

#include <stdio.h>
#include "error.h"

int main()
{
    printf("File A including the error header file");

    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ cc Header_files_and_libraries_in_C/Exercise_10a.c Header_files_and_libraries_in_C/Exercise_10b.c
/usr/bin/ld: /tmp/ccMmxyGn.o:(.bss+0x0): multiple definition of `x'; /tmp/ccFIxLOT.o:(.bss+0x0): first defined here
/usr/bin/ld: /tmp/ccMmxyGn.o: in function `main':
Exercise_10b.c:(.text+0x0): multiple definition of `main'; /tmp/ccFIxLOT.o:Exercise_10a.c:(.text+0x0): first defined here
collect2: error: ld returned 1 exit status*/