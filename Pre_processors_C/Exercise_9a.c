// Board selection using the macro during the compile time with configuration

#include <stdio.h>

#ifdef BOARD_ESP32
#define BOARD_NAME "ESP32"
#define LED_PIN (2)
#elif defined(BOARD_STM32) // Fix 1: Added 'defined()' or '#elif BOARD_STM32' if checking value, but defined() is safer
#define BOARD_NAME "STM32"
#define LED_PIN (13)
#elif defined(BOARD_ARDUINO) // Fix 2: Added 'defined()'
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
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ cc Pre_processors_C/Exercise_9.c -DBOARD_ESP32
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
Firmware built for: ESP32
Status LED on pin 2
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ cc Pre_processors_C/Exercise_9.c -DBOARD_STM32
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
Firmware built for: STM32
Status LED on pin 13
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ cc Pre_processors_C/Exercise_9.c -DBOARD_ARDUINO
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
Firmware built for: ARDUINO
Status LED on pin 7
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ cc Pre_processors_C/Exercise_9.c
Pre_processors_C/Exercise_9.c:15:2: error: #error Error: Board not found
   15 | #error Error: Board not found
      |  ^~~~~
Pre_processors_C/Exercise_9.c: In function ‘main’:
Pre_processors_C/Exercise_9.c:20:40: error: ‘BOARD_NAME’ undeclared (first use in this function)
   20 |     printf("Firmware built for: %s\n", BOARD_NAME);
      |                                        ^~~~~~~~~~
Pre_processors_C/Exercise_9.c:20:40: note: each undeclared identifier is reported only once for each function it appears in
Pre_processors_C/Exercise_9.c:21:38: error: ‘LED_PIN’ undeclared (first use in this function)
   21 |     printf("Status LED on pin %d\n", LED_PIN); // Fix 3: Changed BOARD_PIN to LED_PIN
      |
      */