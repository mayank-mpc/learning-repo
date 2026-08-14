# How many parameters are there in the main function?
```
int main(int argc, char *argv[])
{
    return 0;
}
```
1.  The main function has two parameters, argc and argv.
2.  The main function has two arguments: the first is the number of command-line arguments, and the second is a list of the arguments provided.
3.  **argc (ARGument Count)** is an integer variable that stores the number of command-line arguments passed by the user including the name of the program.
4.  **argv (ARGument Vector)** is an array of character pointers listing all the arguments.
5.  If argc is greater than zero, the array elements from argv[0] to argv[argc-1] will contain pointers to strings.
6.  argv[0] is the name of the program , After that till argv[argc-1] every element is command-line arguments.

Reference [GFG](https://www.geeksforgeeks.org/cpp/command-line-arguments-in-c-cpp/)