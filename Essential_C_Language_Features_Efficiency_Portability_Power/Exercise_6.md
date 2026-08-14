# What is a garbage collector in programming languages?

1.  Garbage collection (GC) is nothing but collecting or gaining memory back that has been allocated to objects but which is not currently in use in any part of our program.
2.  Garbage collection is implemented differently for every language.
3.  Whenever a new object is being created, memory is allocated in the heap, and the pointer is moved to the next memory address. In C, the memory needs to be searched and allocated for the object.
4.  Garbage collection is a tool that saves time for programmers. For example, it replaces the need for functions such as malloc() and free(), which are found in C. It can also help in preventing memory leaks.
5.  The downside of garbage collection is that it has a negative impact on performance. GC has to regularly run though the program, checking object references and cleaning out memory. This takes up resources and often requires the program to pause.

Reference [freecodecamp](https://www.freecodecamp.org/news/a-guide-to-garbage-collection-in-programming/)