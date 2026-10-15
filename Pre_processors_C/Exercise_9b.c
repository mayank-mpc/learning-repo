// Board selection using the macro during the compile time with configuration

#include <stdio.h>

// #define ESP32 (1)
#define STM32 (2)
#define ARDUINO (3)

#if !defined(BOARD)
#error "Invalid board selected in compilation"
#endif

#if BOARD == ESP32
#define BOARD_NAME "ESP32"
#define LED_PIN (2)
#elif BOARD == STM32 // Fix 1: Added 'defined()' or '#elif BOARD_STM32' if checking value, but defined() is safer
#define BOARD_NAME "STM32"
#define LED_PIN (13)
#elif BOARD == ARDUINO // Fix 2: Added 'defined()'
#define BOARD_NAME "ARDUINO"
#define LED_PIN (7)
#else
#error Error: Board not found
#endif

int main(void)
{
    printf("Firmware built for: %s\n", BOARD_NAME);
    printf("Status LED on pin %d\n", LED_PIN); // Fix 3: Changed BOARD_PIN to LED_PIN
    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ cc Pre_processors_C/Exercise_9b.c -DBOARD=0
Pre_processors_C/Exercise_9b.c:23:2: error: #error Error: Board not found
   23 | #error Error: Board not found
      |  ^~~~~
Pre_processors_C/Exercise_9b.c: In function ‘main’:
Pre_processors_C/Exercise_9b.c:28:40: error: ‘BOARD_NAME’ undeclared (first use in this function)
   28 |     printf("Firmware built for: %s\n", BOARD_NAME);
      |                                        ^~~~~~~~~~
Pre_processors_C/Exercise_9b.c:28:40: note: each undeclared identifier is reported only once for each function it appears in
Pre_processors_C/Exercise_9b.c:29:38: error: ‘LED_PIN’ undeclared (first use in this function)
   29 |     printf("Status LED on pin %d\n", LED_PIN); // Fix 3: Changed BOARD_PIN to LED_PIN
      |                                      ^~~~~~~
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ cc Pre_processors_C/Exercise_9b.c -DBOARD=1
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
Firmware built for: ESP32
Status LED on pin 2
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ cc Pre_processors_C/Exercise_9b.c -DBOARD=2
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
Firmware built for: STM32
Status LED on pin 13
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ cc Pre_processors_C/Exercise_9b.c -DBOARD=3
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
Firmware built for: ARDUINO
Status LED on pin 7
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ cc Pre_processors_C/Exercise_9b.c -DBOARD=5
Pre_processors_C/Exercise_9b.c:23:2: error: #error Error: Board not found
   23 | #error Error: Board not found
      |  ^~~~~
Pre_processors_C/Exercise_9b.c: In function ‘main’:
Pre_processors_C/Exercise_9b.c:28:40: error: ‘BOARD_NAME’ undeclared (first use in this function)
   28 |     printf("Firmware built for: %s\n", BOARD_NAME);
      |                                        ^~~~~~~~~~
Pre_processors_C/Exercise_9b.c:28:40: note: each undeclared identifier is reported only once for each function it appears in
Pre_processors_C/Exercise_9b.c:29:38: error: ‘LED_PIN’ undeclared (first use in this function)
   29 |     printf("Status LED on pin %d\n", LED_PIN); // Fix 3: Changed BOARD_PIN to LED_PIN
      |                                      ^~~~~~~
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ cc Pre_processors_C/Exercise_9b.c
Pre_processors_C/Exercise_9b.c:10:2: error: #error "Invalid board selected in compilation"
   10 | #error "Invalid board selected in compilation"
      |  ^~~~~
Pre_processors_C/Exercise_9b.c:23:2: error: #error Error: Board not found
   23 | #error Error: Board not found
      |  ^~~~~
Pre_processors_C/Exercise_9b.c: In function ‘main’:
Pre_processors_C/Exercise_9b.c:28:40: error: ‘BOARD_NAME’ undeclared (first use in this function)
   28 |     printf("Firmware built for: %s\n", BOARD_NAME);
      |                                        ^~~~~~~~~~
Pre_processors_C/Exercise_9b.c:28:40: note: each undeclared identifier is reported only once for each function it appears in
Pre_processors_C/Exercise_9b.c:29:38: error: ‘LED_PIN’ undeclared (first use in this function)
   29 |     printf("Status LED on pin %d\n", LED_PIN); // Fix 3: Changed BOARD_PIN to LED_PIN
      |
      */