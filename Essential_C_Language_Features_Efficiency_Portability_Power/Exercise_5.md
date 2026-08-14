# Why C language does not provide exception handling?

1.  C deliberately kept the language small because exception handling would have added significant compiler and runtime complexity.
2.  OS kernels, drivers, and embedded systems need deterministic control flow, and exceptions can introduce unpredictable jumps.
3.  Exception support requires runtime checks, stack metadata, and unwinding mechanisms, which violates C's "no hidden overhead" philosophy.
4.  C maps closely to assembly, and exception mechanisms require runtime layers that break this transparency. Some of the runtime layers are listed below
    1.  Stack Unwinding Mechanism
    2.  Runtime Type Information (RTTI) and Lookup Tables
    3.  Context Saving/Restoring
5.  Without destructors or RAII (Resource Acquisition Is Initialization), exceptions would cause resource leaks (files can remain open, allocated memory is not freed, peripherals left active).
6.  C emphasizes explicit error returns and manual handling instead of automatic interruption of control flow.
7.  Early Unix and hardware limitations favored simple constructs, and exceptions were considered too heavy and not necessary for system-level tasks.