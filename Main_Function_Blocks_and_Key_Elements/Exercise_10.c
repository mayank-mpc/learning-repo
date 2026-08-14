#include <stdio.h>

int main(void) // Here the main function do accept any arguments
{
    static int i = 5;
    if (--i) {
        printf("%d", i);
        main(10); // Calling this function will give error
    }
}

/* Output:
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ cc ./Main_Function_Blocks_and_Key_Elements/Exercise_10.c
./Main_Function_Blocks_and_Key_Elements/Exercise_10.c: In function ‘main’:
./Main_Function_Blocks_and_Key_Elements/Exercise_10.c:8:9: error: too many arguments to function ‘main’
    8 |         main(10); // Calling this function will give error
      |         ^~~~
./Main_Function_Blocks_and_Key_Elements/Exercise_10.c:3:5: note: declared here
    3 | int main(void) // Here the main function do accept any arguments*/