# Samsung-RISC V
-----
# Introduction to RISC-V

**RISC-V** is a revolutionary open-standard Instruction Set Architecture (ISA) rooted in the principles of Reduced Instruction Set Computing (RISC). Unlike traditional proprietary ISAs, RISC-V is free and open-source, enabling widespread adoption across industries, academia, and research communities. It was initially developed at the University of California, Berkeley, and has since become a global standard in the field of processor architecture.

RISC-V's open nature fosters innovation, making it a popular choice for designing custom processors tailored to specific applications. With its modular design, RISC-V supports a wide range of implementations, from compact microcontrollers to powerful supercomputers.

### Where is RISC-V Used?
- **Embedded Systems**: IoT devices, smart sensors, and microcontrollers.
- **High-Performance Computing**: Data centers and supercomputers.
- **Consumer Electronics**: Smartphones, laptops, and wearables.
- **Education**: A preferred tool for teaching computer architecture.

### Advantages of RISC-V
- Open-source and royalty-free, reducing costs.
- Flexible and scalable for diverse applications.
- Backed by a global community and rich ecosystem.
-----
<details>
<summary>Task 1</summary>

#### Objective:
To install the RISC-V toolchain using VDI, write a C program to calculate the sum of numbers from 1 to N, and verify that the output from the C program matches the result obtained using the RISC-V compiler.

---

#### Steps Performed:

1. **Install the RISC-V Toolchain**  
   - Installed the RISC-V toolchain by following [procedure](https://github.com/DivyambariBK/Samsung-riscv/tree/main/VDI%20and%20Virtual%20Box%20Download%20Procedure).
   - Verified the installation by running a simple test program.

2. **Write a C Program to Compute the Sum of Numbers (1 to N):**

   #### Commands and explanation
    - **Edit the C program**
   ```bash
   leafpad sum1ton.c &
Leafpad: A simple text editor for Linux used to create or edit text files, including C programs.

&: Runs the editor in the background so you can continue using the terminal.
- **Compile the C Program**
  ```bash
  gcc sum1ton.c
gcc: The GNU Compiler Collection is used to compile C programs into executable binaries.

![task1](https://github.com/user-attachments/assets/2965e967-ec62-4597-a8bb-bbc82f64648f)

3. **Run the Program Using the RISC-V Compiler:**
   #### Commands and explanation
    -**View the C Program in Terminal:**
   ```bash
   cat sum1ton.c
cat: Displays the content of the file sum1ton.

- **Compile the Program with RISC-V Compiler:**
   ```bash
   riscv64-unknown-elf-gcc -O1 -march=rv64i -mabi=lp64 -o sum1ton.o sum1ton.c
-O1: Enables basic optimization for faster execution.

-march=rv64i: Specifies the target architecture as RISC-V 64-bit (RV64I).

-mabi=lp64: Specifies the ABI as LP64 for 64-bit integers and pointers.

-o: Outputs the compiled file as sum1ton.o.
sum1ton.c: The input C file to compile.
- **Dump Object File Contents**
   ```bash
   riscv64-unknown-elf-objdump -d sum1_to_n.o
riscv64-unknown-elf-objdump: Dumps the assembly and other details from the compiled object file.

-d: Disassembles the object file to show machine instructions.
  
![task1.2](https://github.com/user-attachments/assets/2d8cb00b-4cec-4dee-abf7-16a97ef335fa)
![task1. 3](https://github.com/user-attachments/assets/3524f1e8-bed1-4481-9857-af440e8b4e53)
![task1 .4](https://github.com/user-attachments/assets/b89ac945-6728-4505-bef2-e437c7362cda)

4.**Observations**
- The RISC-V compiler successfully compiled the C program, generating the object file without errors.
- The output obtained from the RISC-V execution matched the expected result from the C program, ensuring accuracy.
- The `riscv64-unknown-elf-objdump` command provided detailed assembly-level instructions for verification.
- The observed number of instructions confirm proper optimization and compatibility with the RISC-V architecture.



