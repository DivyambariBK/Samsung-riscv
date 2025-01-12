# Samsung-RISC V
-----
## Introduction to RISC-V

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
<summary>Task 1:Introduction to RISC-V Architecture and Compilation Workflow</summary>

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
    - **View the C Program in Terminal:**
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

----
</details>
<hr>
<details>
<summary>Task 2:Exploring RISC-V Through Program Debugging</summary>
 

**Objective:**  

The objective of Task 2 was to understand the execution flow and behavior of programs on the RISC-V architecture by writing and compiling programs, executing them on the Spike simulator, and analyzing their instruction-level execution.

---

**Summary:**  
1. **Implementation:**  
   - Programs were written and validated in a high-level programming language.  
   - These programs were compiled for the RISC-V architecture using the RISC-V GCC compiler with various optimization flags.  

2. **Execution and Debugging:**  
   - The compiled binaries were executed using the `spike` simulator, a RISC-V ISA simulator.  
   - Debugging was performed using the `spike d` command to examine the instruction-by-instruction execution flow.  
   - Each instruction was analyzed manually from the program counter (PC) to understand the program's behavior.

3. **Key Learnings:**  
   - Developed a deeper understanding of the RISC-V assembly-level execution.  
   - Learned the relationship between high-level code and RISC-V instructions.  
   - Gained hands-on experience with debugging tools and techniques for the RISC-V environment.

4. **Tools Used:**  
   - RISC-V GCC for compiling programs.  
   - Spike simulator for running and debugging the binaries.  
5. **Images for Debugging Workflow**

To provide a clear understanding of the debugging process, here are images highlighting key steps during the execution and analysis:

- **Running the Program in Spike Simulator**  

   Description: This image shows the execution of the compiled RISC-V binary in the Spike simulator. It demonstrates how the program was run and the initial output observed.  

![2 25](https://github.com/user-attachments/assets/c5734d1f-41ff-4939-bf76-c38aa433bd3a)


- **Debugging Instructions Using `spike d`**  

   Description: This image highlights the usage of the `spike d` command to debug the program. It includes the first set of instructions and the program counter value at the start of debugging.  

![2 22](https://github.com/user-attachments/assets/c779a7b1-c8aa-4f92-9d85-affe0306d957)

![2 23](https://github.com/user-attachments/assets/77961d83-b047-4dfa-8979-bfa6c0cd0acb)


- **Step-by-Step Instruction Analysis**  

   Description: This image depicts the manual execution of each instruction during the debugging process, showing how the outputs were verified step-by-step.  

![2 24](https://github.com/user-attachments/assets/68cf3ba7-f52f-4116-8cfe-46d95b46063c)

---


**Outcome:**  
Task 2 enhanced knowledge of RISC-V by providing practical experience in compiling, executing, and debugging programs at an instruction level. This provided a practical understanding of the RISC-V architecture by exploring program execution and debugging at the instruction level. It enhanced familiarity with tools like the `spike` simulator for running and analyzing RISC-V binaries. The debugging process demonstrated how high-level code translates into machine instructions and allowed for step-by-step verification of program behavior. Additionally, the task highlighted the impact of compiler optimizations on instruction flow and performance. This hands-on experience strengthened foundational knowledge of RISC-V ISA and improved debugging skills for low-level programming.




