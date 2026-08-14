# How is the C language related to bare metal language?

1.  C is often considered the closest high-level language to bare-metal programming, and that's why it's used so widely in embedded systems, operating systems, firmware, and drivers.
2.  C accesses memory-mapped registers using pointers to perform direct read/write to hardware.
3.  C does not have a garbage collector, virtual machine, heavy runtime libraries, and hidden background operations, due to which it has minimal runtime.
4.  C has predictable and deterministic execution and compiles close to CPU instructions without delays.
5.  It supports inline assembly and has full control of memory layout.
6.  It is close to the assembly but easier to write and generates small but efficient machine-level code.

Reference [ChatGPT](https://chatgpt.com/share/6925bcca-dfc4-800b-821f-e7a29a84aca5)