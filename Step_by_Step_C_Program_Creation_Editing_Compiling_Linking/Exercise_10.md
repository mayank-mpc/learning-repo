# What hardware components are responsible for the execution of the C program?

| Hardware Component | Instruction execution | What It Does During C Program Execution                               |
|--------------------|-----------------------|-----------------------------------------------------------------------|
| CPU Control Unit   | Direct                | Fetches, decodes, controls instruction execution                      |
| ALU                | Direct                | Performs arithmetic/logic operations                                  |
| Registers          | Direct                | Store temporary data, PC (Program Counter), SP (Stack Pointer), flags |
| Opcode Decoder     | Direct                | Interprets machine instructions for execution                         |
| RAM                | Indirect              | Stores code, stack, heap, globals                                     |
| Cache              | Indirect              | Speeds up access to memory and instructions                           |
| System Bus         | Direct                | Transfers data between CPU and memory                                 |
| SSD/HDD/Flash      | Indirect              | Stores program before execution                                       |
| I/O Devices        | Indirect              | Handle input/output operations                                        |