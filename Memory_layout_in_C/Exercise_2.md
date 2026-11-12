# Practice Questions

## Q1: Without compiling, name the segment for each of these: a ```global int alarm_threshold = 0;```, a ```global const int MAX_ZONES = 8;```, a ```local const int local_limit = 3;```, a ```local char name[] = "zone1";```, a ```global char *label = "zone1";``` (two answers: one for label and one for the text it points to). Then verify with nm and printed addresses.

### Ans:
1. ```global int alarm_threshold = 0;``` is a global variable and it will be stored in the ```.bss``` segment of memory.
2. ```global const int MAX_ZONES = 8;``` is a const global variable and it will be stored in the ```.rodata``` segment of the memory.
3. ```local const int local_limit = 3;``` is a const local variable and it will be stored in the ```stack``` segment of the memory.
4. ```local char name[] = "zone1";``` is a local variable and it will be stored in the ```stack``` of the memory.
5. ```global char *label = "zone1";``` is a global variable and it will stored in two different segments of the memory.
   - ```global char *label``` is a pointer and it is initialized globally with string literal, so it will be stored in the ```.data``` segment of the memory.
   - ```"zone1"``` is a string literal assigned to the pointer, so it will be stored in the ```.rodata``` segment of the memory.

## Q2: Explain in your own words why ```call_count``` survives between calls but ```raw_adc``` doesn’t. What would change if you removed static? Refer ```Exercise_1``` for Code

### Ans:
1. The ```call_count``` survives between call because it is a static variable which persists till the end of the program.
2. ```raw_adc``` on the other hand is a local variable defined within a function and it can only survive within the function block only.
3. If we remove static from the ```call_count``` variable then it becomes same as ```raw_adc``` and it cannot survive multiple calls in the program as it was able to do before.

## Q3: Change ```log_buffer``` to ```= {1}```. Predict what happens to the size columns and to the executable’s file size (```ls -l```). Then measure it.

### Ans:
1. If we intialize the log_buffer to {1} then the size of ```.bss``` segment reduces and ```.data``` segment size increases by 1024 bytes. This happened because we have initialized the buffer and due to it the application has taken space in the physical disk.

## Q4: ```char *zone = "zone1";``` , ```zone[0] = 'Z';``` Predict what happens at runtime and explain why using the memory layout. Is it defined behavior?

### Ans:
1. ```char *zone = "zone1";``` here a string literal is assigned to the ```.rodata``` segment of the memory. So, if we try assign the character ```'Z'``` to ```char * zone``` the application will give runtime error (Segmentation fault).
2. This is an undefined behaviour

## Q5: Write ```int *get_reading(void)``` that returns the address of a local. What does gcc warn about, and why is using the result a bug even if it seems to “work”?

### Ans:
1. ```gcc``` warns about the ```warning: function returns address of local variable [-Wreturn-local-addr]``` and if the result is used in the application it will return a address of a dangling pointer (NULL).
2. Using the ```NULL``` pointer can cause undefined behavior in the application.

## Q6: Write a program that proves the stack grows downward using three nested function calls. Then prove the heap grows upward using three ```malloc``` calls. Note any result that surprises you.

### Ans:
1. Refer the exercise 5 for the program.

## Q7. Write a function that leaks memory in a loop. Detect it with ```gcc -fsanitize=address -g``` and explain the report.

### Ans:
1. Refer the exercise 6 for the program.

## Q8. Declare a 16 MB local array in ```main```. Predict the outcome, check ```ulimit -s```, and explain it. Then connect it to what happens when a FreeRTOS task’s stack is too small.

### Ans:
1. Refer the exercise 7 for the program. Reference [Link](https://www.baeldung.com/linux/ulimit-tutorial)

## Q9. Simulate a startup routine. Create a ```const``` array acting as “flash” with initial values, a “ram_data” array, and a “ram_bss” array. Write ```fake_reset_handler()``` that copies the data and zeroes the bss before your greenhouse logic runs.

### Ans:
1. Refer the exercise 8 for the program.

## Q10. Make ```read_sensors``` use a 4 KB local buffer and call it recursively until it crashes. Print the depth reached and estimate the stack size from it.

### Ans:
1. Refer the exercise 9 for the program.
2. The last printed value was 8,306,688 bytes, which is 2028 calls × 4096 bytes. ulimit -s reports 8192 KB (8,388,608 bytes), so the buffers alone fill 99% of the stack. The remaining ~81 KB is per-call overhead (return address, saved frame pointer, canary and padding, about 32 bytes × 2028) plus the program’s startup data and printf.