# Can a C program run without a main function? If it can mention methods to do so.

1.  The C program cannot run without a main function, and it is mandatory to have one in the program.
2.  It is the starting point of the C program from where the execution of the program starts.

# Methods to run the C program without a main function

1. Before the main() function is executed, several other functions are called which prepare the environment variables for the program's execution, setup arguments, etc.
2. The **_start()** function prepares the input arguments for another function **_libc_start_main()** which then calls the **main()** function. So, if we override the **_start()** function, we can have any custom function from which our program will start execution. It does not have to be named main().

Reference [GFG](https://www.geeksforgeeks.org/c/write-running-c-code-without-main/)  [Studytonight](https://www.studytonight.com/c/programs/misc/program-without-main-function)