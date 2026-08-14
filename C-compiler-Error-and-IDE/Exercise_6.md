# What is compile time and run time? Also, state the difference between them.

1. Compile time and run time are two stages of software development.
2. Compile time is the period when the program is converted to machine code.
3. Run time is the period of time when a program is running and it generally occurs after compile time.
4. Errors
   1. Compile time errors occur at the time of compilation.
      1. Semantic errors: The code having an absurd meaning refers to semantic errors. In other words, meaningless statements are termed semantic errors.
      2. Syntax errors: Syntax refers to the rules that define the structure of a language. The syntax error is an incorrect construction of the source code.
   2. Run time errors occur during the execution of the program.
      1. Division by zero: when a number is divided by zero (0)
      2. Dereferencing a null pointer: when a program attempts to access memory with a NULL
      3. Running out of memory: when a computer has no memory to allocate to programs
   3. Key Differences:
      1. Timing: Compile time occurs before the program is run, allowing for early detection of syntax and type errors. Runtime occurs during program execution.
      2. Error Handling: Compile-time errors are caught by the compiler and must be fixed before the program runs. Runtime errors, on the other hand, occur while the program is running and can cause unexpected behavior or terminate the program.

Reference [Medium](https://medium.com/@YodgorbekKomilo/understanding-compile-time-and-runtime-in-programming-a001a40f1c27) [Baeldung](https://www.baeldung.com/cs/runtime-vs-compile-time) [Scaler](https://www.scaler.com/topics/c/difference-between-compile-time-and-run-time/)