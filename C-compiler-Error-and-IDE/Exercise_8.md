# What is undefined behavior?

1. Undefined behavior means that when the program fails to compile, or it may execute incorrectly, either crash or generate incorrect results, or whenever the result of an executing program is unpredictable, it is said to have undefined behavior.

2. Examples
   1. Division By Zero
    ```
    int val = 5;
    return val / 0; // undefined behavior
    ```
   2. Memory accesses outside of array bounds
    ```
    int arr[4] = {0, 1, 2, 3};
    return arr[5];  // undefined behavior for indexing out of bounds
    ```
   3. Signed integer overflow
    ```
    int x = INT_MAX;
    printf("%d", x + 1);     // undefined behavior
    ```
   4. Null pointer dereference
    ```
    val = 0;
    int ptr = *val;        // undefined behavior for dereferencing a null pointer
    ```
   5. Modification of string literal
    ```
    char* s = "geeksforgeeks";
    s[0] = 'e';               // undefined behavior
    ```
   6. Accessing a NULL Pointer
    ```
    int* ptr = NULL;
    printf("%d", *ptr);  // undefined behavior for accessing NULL Pointer
    ```

Reference [GFG](https://www.geeksforgeeks.org/cpp/undefined-behavior-c-cpp/)
