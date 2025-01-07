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
   - Installed the RISC-V toolchain by following this [procedure](./VDI and virtual Box Download Procedure).
   - Verified the installation by running a simple test program.

2. **Write a C Program to Compute the Sum of Numbers (1 to N):**  
   - Created a C program that accepts `N` as input and computes the sum using the formula:
     \[
     \text{Sum} = \frac{N \times (N + 1)}{2}
     \]

   - Program Output:
     - Accepts an integer input `N`.
     - Computes and prints the sum.

3. **Run the Program Using the RISC-V Compiler:**
   - Compiled and executed the program on the RISC-V platform.
   - Verified the output against the standard C compiler's result.

4. **Validation:**
   - Wrote a separate program to compare the results of the two compilers.
   - Confirmed that the outputs from the C program and the RISC-V compiler match.

---

#### Files Included:
- `sum.c`: The C program to compute the sum of numbers from 1 to N.
- `verify_output.c`: A program to validate that the outputs from the standard compiler and the RISC-V compiler are identical.
- `output_log.txt`: Logs of the program execution and comparison results.

---

#### Instructions to Run:
1. **Compile and Run the C Program:**
   ```bash
   gcc sum.c -o sum
   ./sum


