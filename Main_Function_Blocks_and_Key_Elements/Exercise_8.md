# Difference between main() and main(void)

1.  **main()** takes an unspecified number of arguments, and the compiler does not perform any checks on the number of arguments or their types before accepting any arguments.
2.  While **main(void)** does not take any arguments and if arguments are provided then it will give *too many arguments* error.

Reference [GFG](https://www.geeksforgeeks.org/cpp/difference-int-main-int-mainvoid/)