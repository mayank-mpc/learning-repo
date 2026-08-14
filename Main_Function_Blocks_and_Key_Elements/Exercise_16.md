# What is the main functions third argument and its use case?

1.  It is a third argument, envp, an array of strings (char *) representing the environment variables of the program. Each element of envp contains a string in the format "key=value" representing an environment variable.
2.  It is used for accessing the environment variables of the system. It allows the modification, but it can cause undefined behaviour in the system or the program.
3.  The data shown in the console window by the envp argument is just a copy of the environment variable data at that instance of the system.

Reference [Medium](https://medium.com/@muirujackson/the-three-prototype-of-main-2f46e82d86c5)  [GNU](https://www.gnu.org/software/libc/manual/html_node//Program-Arguments.html)  [GNU](https://www.gnu.org/software/libc/manual/html_node//Environment-Variables.html)  [MAN](https://linux.die.net/man/3/environ)