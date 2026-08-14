#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter value of a in decimal format:");
    scanf("%d", &a);

    printf("Enter value of b in octal format: ");
    scanf("%i", &b);

    printf("Enter value of c in hexadecimal format: ");
    scanf("%i", &c);

    printf("a = %i, b = %i, c = %i\n", a, b, c);

    return 0;
}

/* Ouput:
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
Enter value of a in decimal format:14
Enter value of b in octal format: 05
Enter value of c in hexadecimal format: 0x10
a = 14, b = 5, c = 16*/