#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main()
{
    int var1 = 7;
    float var2 = 6.2;
    double var3 = 8.4;
    char var4 = 'r';
    uint8_t var5 = 10;
    uint16_t var6 = 16500;
    uint32_t var7 = 265535;
    uint64_t var8 = 1844674407370955;
    char string[] = "It is a nice day";
    char buffer[100] = {0};

    printf("Var 1 %d\n", var1);
    printf("Var 1 %f\n", var1);
    printf("Var 1 %lf\n", var1);
    printf("Var 1 %c\n", var1);

    printf("Var 2 %d\n", var2);
    printf("Var 2 %f\n", var2);
    printf("Var 2 %lf\n", var2);
    printf("Var 2 %c\n", var2);

    printf("Var 3 %d\n", var3);
    printf("Var 3 %f\n", var3);
    printf("Var 3 %lf\n", var3);
    printf("Var 3 %c\n", var3);

    printf("Var 4 %d\n", var4);
    printf("Var 4 %f\n", var4);
    printf("Var 4 %lf\n", var4);
    printf("Var 4 %c\n", var4);

    printf("Var 5 %d\n", var5);
    printf("Var 5 %f\n", var5);
    printf("Var 5 %lf\n", var5);
    printf("Var 5 %c\n", var5);

    printf("Var 6 %d\n", var6);
    printf("Var 6 %f\n", var6);
    printf("Var 6 %lf\n", var6);
    printf("Var 6 %c\n", var6);

    printf("Var 7 %d\n", var7);
    printf("Var 7 %f\n", var7);
    printf("Var 7 %lf\n", var7);
    printf("Var 7 %c\n", var7);

    printf("Var 8 %llu\n", var8);
    printf("Var 8 %f\n", var8);
    printf("Var 8 %lf\n", var8);
    printf("Var 8 %c\n", var8);

    printf("String %s\n", string);
    snprintf(buffer, strlen(string) + 1, "%s\n", string);
    printf("Buffer %s\n", buffer);
}

/* Output
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
Var 1 7
Var 1 0.000000
Var 1 0.000000
Var 1
Var 2 828007072
Var 2 6.200000
Var 2 6.200000
Var 2 �
Var 3 828007072
Var 3 8.400000
Var 3 8.400000
Var 3 �
Var 4 114
Var 4 8.400000
Var 4 8.400000
Var 4 r
Var 5 10
Var 5 8.400000
Var 5 8.400000
Var 5

Var 6 16500
Var 6 8.400000
Var 6 8.400000
Var 6 t
Var 7 265535
Var 7 8.400000
Var 7 8.400000
Var 7 ?
Var 8 1844674407370955
Var 8 8.400000
Var 8 8.400000
Var 8 �
String It is a nice day
Buffer It is a nice day*/