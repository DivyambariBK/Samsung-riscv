# Samsung-RISC V
-----
### Authors Details:

 - **Name**: Divyambari BK
 - **College**: SJB Instuite of Technology
 - **LinkedIn Id**: [Divyambari BK](www.linkedin.com/in/divyambaribk)
 - **Email Id**: divyambaribk@gmail.com
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
Task 2 enhanced knowledge of RISC-V by providing practical experience in compiling, executing, and debugging programs at an instruction level. This provided a practical understanding of the RISC-V architecture by exploring program execution and debugging at the instruction level. It enhanced familiarity with tools like the `spike` simulator for running and analyzing RISC-V binaries. The debugging process demonstrated how high-level code translates into machine instructions and allowed for step-by-step verification of program behavior. 

</details>
<hr>
<details>
<summary>Task 3:Understanding RISC-V Instructions </summary>

# RISC-V Instruction Formats and Encoding

## Introduction

The RISC-V instruction set architecture (ISA) is a highly modular and extensible design that supports multiple instruction formats. These formats are used to represent various operations and their associated operands. Each instruction format has been carefully designed to balance simplicity, flexibility, and efficiency in hardware implementation and software development.

### Key Types of Instruction Formats

1. **R-Type (Register-Register)**:
   - Used for operations that involve only registers.
   - Example: Arithmetic or logical operations such as `add`, `sub`, etc.

2. **I-Type (Immediate)**:
   - Used for instructions that operate on a register and an immediate value.
   - Example: Load instructions such as `lw` or arithmetic operations like `addi`.

3. **S-Type (Store)**:
   - Used for store instructions where data is written to memory.
   - Example: `sw`, `sd`.

4. **B-Type (Branch)**:
   - Used for conditional branch instructions.
   - Example: `beq`, `bne`.

5. **U-Type (Upper Immediate)**:
   - Used for instructions that load a 20-bit immediate value.
   - Example: `lui`, `auipc`.

6. **J-Type (Jump)**:
   - Used for unconditional jump instructions.
   - Example: `jal`.

---

## Importance of Instruction Formats

### 1. **Instruction Decoding**
Instruction formats allow hardware to efficiently decode the binary representation of instructions. By following a standard layout, the control unit can quickly identify the operation (`opcode`), registers (`rd`, `rs1`, `rs2`), and immediate values.

### 2. **Pipelining**
A consistent instruction format simplifies pipelining, where multiple instructions are executed simultaneously at different stages. The fixed width of RISC-V instructions ensures smooth transitions between stages and reduces pipeline hazards.

### 3. **Processor Design**
The compact and uniform instruction formats reduce hardware complexity, enabling simpler and cost-efficient processors. RISC-V’s design philosophy minimizes transistor usage while maintaining high performance.

### 4. **Compiler Design**
Instruction formats play a critical role in optimizing compiler-generated code. The availability of specific formats, such as `I-Type` for immediate values or `B-Type` for branching, ensures that compilers can generate efficient machine code for different tasks.

### 5. **Extensibility**
The modular design of RISC-V allows the addition of custom instruction formats without disrupting existing ones. This makes the ISA future-proof and adaptable for new technologies.

---

## Explanation of Key Components

### 1. **Opcode**
- The `opcode` specifies the operation to be performed. It is a field in every instruction that indicates the instruction type and the operation (e.g., arithmetic, memory access, branching).
- Example:
  - `0110011`: Specifies an `R-Type` operation (arithmetic).

### 2. **funct3 and funct7**
- These fields are used in `R-Type` and some other instructions to further differentiate operations that share the same `opcode`.
- Example:
  - For `add` and `sub`, the `opcode` is the same, but `funct7` distinguishes them:
    - `funct7 = 0000000` → `add`
    - `funct7 = 0100000` → `sub`

### 3. **Immediate Value**
- The `immediate` value is a constant encoded directly in the instruction.
- Immediate values are commonly used for:
  - Memory addresses in load/store instructions.
  - Offsets in branch instructions.
  - Direct arithmetic with constants.

### 4. **Registers (`rd`, `rs1`, `rs2`)**
- Registers are the primary storage locations for data during instruction execution.
  - `rd`: Destination register (where the result is written).
  - `rs1`: Source register 1 (contains the first operand).
  - `rs2`: Source register 2 (contains the second operand, if applicable).

### 5. **Split Immediate**
- Some instruction formats split the immediate value into multiple parts for efficient encoding.
  - Example in `S-Type`:
    - `imm[11:5]`: High bits of the immediate value.
    - `imm[4:0]`: Low bits of the immediate value.

---

## Summary Table of Instruction Formats

| Format | Description                          | Fields                                                                 |
|--------|--------------------------------------|-----------------------------------------------------------------------|
| R-Type | Register-Register operations         | `opcode`, `rd`, `funct3`, `rs1`, `rs2`, `funct7`                     |
| I-Type | Immediate operations and loads       | `opcode`, `rd`, `funct3`, `rs1`, `imm[11:0]`                         |
| S-Type | Store instructions                   | `opcode`, `imm[11:5]`, `rs2`, `rs1`, `funct3`, `imm[4:0]`            |
| B-Type | Conditional branches                 | `opcode`, `imm[12]`, `imm[10:5]`, `rs1`, `rs2`, `funct3`, `imm[4:1]` |
| U-Type | Load upper immediate                 | `opcode`, `rd`, `imm[31:12]`                                         |
| J-Type | Unconditional jumps                  | `opcode`, `rd`, `imm[20]`, `imm[10:1]`, `imm[11]`, `imm[19:12]`      |

---
# RISC-V Instruction Encoding

This repository contains an analysis and encoding of 15 unique RISC-V instructions obtained from the `riscv-objdump` of a sample application. Below, you will find details about RISC-V instruction types, their use cases, and step-by-step instruction encodings.

---

## Instruction Encodings

Below is the encoding of 15 RISC-V instructions. The first 5 instructions are explained in detail, while the rest are summarized in a table.

![2 24](https://github.com/user-attachments/assets/77b7fa47-1109-4577-8257-85639a039c8d)

---

### **Instruction 1: `lui a0, 0x21`**

#### 1. Understand the Instruction
- **lui** stands for **"Load Upper Immediate"**.
- It loads a 20-bit immediate value into the upper 20 bits of a register.
- **Syntax**: `lui rd, imm`
  - `rd`: Destination register (here, `a0`).
  - `imm`: Immediate value (here, `0x21`).

---

#### 2. RISC-V Instruction Format
The `lui` instruction uses the **U-type format**, which has the following structure:
imm[31:12] | rd[11:7] | opcode[6:0]


##### Field Descriptions:
- `imm[31:12]`: The immediate value (shifted left by 12 bits).
- `rd[11:7]`: The destination register.
- `opcode[6:0]`: Opcode for `lui` (which is `0110111`).

---

#### 3. Immediate Value Encoding
- The immediate value is `0x21`.
- In binary: `000000000000000000100001`.
- Shift it left by 12 bits:
  `00000000001000010000000000000000`

---

#### 4. Destination Register (`a0`)
- In RISC-V, the register `a0` corresponds to register `x10`.
- The binary encoding for `x10` is:`01010`

---

#### 5. Opcode for `lui`
- The opcode for `lui` is:`0110111`

---

#### 6. Combine the Fields
Assemble the instruction fields:

| Field        | Value (Binary)                |
|--------------|-------------------------------|
| `imm[31:12]` | `00000000001000010000`        |
| `rd[11:7]`   | `01010`                       |
| `opcode[6:0]`| `0110111`                     |

##### Full Instruction (Binary):`00000000001000010000 01010 0110111`

---

#### 7. Convert to Hexadecimal
- Group the binary instruction into 4-bit chunks:`0000 0000 0010 0001 0000 0101 0110 1111`
- Convert to hexadecimal:`0x00210537`

---

#### Final Encoded Instruction
The instruction `lui a0, 0x21` is encoded as:`0x00210537`

---

### **Instruction 2: `addi sp, sp, -16`**

#### **Instruction Breakdown**

1. **Instruction Type:** `I-Type`  
   - `addi` performs an immediate addition between a register and a constant.

2. **Fields:**

| **Field**    | **Value (Binary)**       |
|--------------|--------------------------|
| `imm[11:0]`  | `111111000000`           |
| `rs1`        | `00010`                  |
| `funct3`     | `000`                    |
| `rd`         | `00010`                  |
| `opcode`     | `0010011`                |

3. **32-bit Encoded Instruction**

Concatenate the fields:`imm[11:0] | rs1 | funct3 | rd | opcode`
                        `111111000000 00010 000 00010 0010011`

**Resulting binary:** `11111100000000010000000100010011`  
**Hexadecimal Encoding:** `0xfff08013`

---

### **Instruction 3: `li a1, 5`**

1. **Instruction Type:** `I-Type`  
   - `li` is a pseudo-instruction for `addi`.

2. **Fields:**  

| **Field**    | **Value (Binary)**       |
|--------------|--------------------------|
| `imm[11:0]`  | `000000000101`           |
| `rs1`        | `00000`                  |
| `funct3`     | `000`                    |
| `rd`         | `01011`                  |
| `opcode`     | `0010011`                |

3. **32-bit Encoded Instruction:**  

Concatenate the fields:`imm[11:0] | rs1 | funct3 | rd | opcode`
                       `000000000101 00000 000 01011 0010011`

**Resulting Binary:** `000000000101000000000101100010011`  
**Hexadecimal Encoding:** `0x00500893`

---

### **Instruction 4: `add a0, a0, a1`**

1. **Instruction Type:** `R-Type`  
   - `add` adds two registers.

2. **Fields:**  

| **Field**    | **Value (Binary)**       |
|--------------|--------------------------|
| `funct7`     | `0000000`                |
| `rs2`        | `01011`                  |
| `rs1`        | `01010`                  |
| `funct3`     | `000`                    |
| `rd`         | `01010`                  |
| `opcode`     | `0110011`                |

3. **32-bit Encoded Instruction:**  

Concatenate the fields:`funct7 | rs2 | rs1 | funct3 | rd | opcode`
                       `0000000 01011 01010 000 01010 0110011`

**Binary:** `000000001011010100000010100110011`  
**Hexadecimal Encoding:** `0x00b50533`

---

### **Instruction 5: `sd ra, 8(sp)`**

1. **Instruction Type:** `S-Type`  
   - `sd` stores a double word in memory.

2. **Fields:**  

| **Field**    | **Value (Binary)**       |
|--------------|--------------------------|
| `imm[11:5]`  | `0000000`                |
| `rs2`        | `00001`                  |
| `rs1`        | `00010`                  |
| `funct3`     | `011`                    |
| `imm[4:0]`   | `01000`                  |
| `opcode`     | `0100011`                |

3. **32-bit Encoded Instruction:**  

Concatenate the fields:`imm[11:5] | rs2 | rs1 | funct3 | imm[4:0] | opcode`
                       `0000000 00001 00010 011 01000 0100011`

**Binary:** `00000000000100010011001000100011`  
**Hexadecimal Encoding:** `0x00132223`

---


### Instruction 6: `sd ra, 8(sp)`

`sd` uses the **S-Type** instruction format:`imm[11:5] | rs2[24:20] | rs1[19:15] | funct3[14:12] | imm[4:0] | opcode[6:0]`

#### Breakdown of Fields:

| **Field**   | **Value**         | **Binary Representation** |
|-------------|-------------------|----------------------------|
| Immediate   | `8`               | `0000000001000`           |
| Base (rs1)  | `sp (x2)`         | `00010`                   |
| Source (rs2)| `ra (x1)`         | `00001`                   |
| `funct3`    | For `sd`          | `011`                     |
| `opcode`    | For `sd`          | `0100011`                 |

#### Splitting the Immediate:

| **Field**       | **Binary Value** |
|------------------|------------------|
| `imm[11:5]`     | `0000000`        |
| `imm[4:0]`      | `01000`          |

#### Combine the Fields:
`0000000 | 00001 | 00010 | 011 | 01000 | 0100011`

#### Encoded Instruction:

| **Representation**   | **Value**         |
|-----------------------|-------------------|
| Binary               | `00000000000100010011010000100011` |
| Hexadecimal          | `0x00113423`      |

---

### Instruction 7: `jal ra, 10484`

`jal` uses the **J-Type** instruction format:`imm[20] | imm[10:1] | imm[11] | imm[19:12] | rd[11:7] | opcode[6:0]`

#### Breakdown of Fields:

| **Field**       | **Value**         | **Binary Representation** |
|------------------|-------------------|----------------------------|
| Immediate (imm) | `10484`           | `001010001100100`          |
| Destination (rd)| `ra (x1)`         | `00001`                    |
| `opcode`        | For `jal`         | `1101111`                  |

#### Splitting the Immediate:

| **Field**       | **Binary Value** |
|------------------|------------------|
| `imm[20]`       | `0`              |
| `imm[10:1]`     | `0011001000`     |
| `imm[11]`       | `1`              |
| `imm[19:12]`    | `00101000`       |

#### Combine the Fields:
`0 | 0011001000 | 1 | 00101000 | 00001 | 1101111`

#### Encoded Instruction:

| **Representation**   | **Value**         |
|-----------------------|-------------------|
| Binary               | `00000011101111000000000011101111` |
| Hexadecimal          | `0x3bc000ef`      |

---


### Instruction 8: `mv a0, a2`
- `mv` is a pseudoinstruction and translates to:`addi a0, a2, 0`
- **Instruction Format**: I-type
- **Fields**:
- Immediate (`imm`): `0` → Binary: `000000000000`.
- Source register (`rs1`): `a2` (`x12`) → Binary: `01100`.
- Destination register (`rd`): `a0` (`x10`) → Binary: `01010`.
- `funct3`: For `addi`, `funct3 = 000`.
- `opcode`: For `addi`, `opcode = 0010011`.
- **Combine**:`imm[11:0] | rs1[19:15] | funct3[14:12] | rd[11:7] | opcode[6:0] `
              `000000000000 | 01100 | 000 | 01010 | 0010011`
- **Hexadecimal**:`0x00060513`

---

### Instruction 9: `mv a7, a1`
- `mv` is a pseudoinstruction and translates to:`addi a7, a1, 0`
- **Instruction Format**: I-type
- **Fields**:
- Immediate (`imm`): `0` → Binary: `000000000000`.
- Source register (`rs1`): `a1` (`x11`) → Binary: `01011`.
- Destination register (`rd`): `a7` (`x17`) → Binary: `10001`.
- `funct3`: For `addi`, `funct3 = 000`.
- `opcode`: For `addi`, `opcode = 0010011`.
- **Combine**:`imm[11:0] | rs1[19:15] | funct3[14:12] | rd[11:7] | opcode[6:0]`
              ` 000000000000 | 01011 | 000 | 10001 | 0010011`
- **Hexadecimal**:`0x00058a13`

---

### Instruction 10: `ecall`
- `ecall` is a system instruction and directly encodes as:`000000000000 | 00000 | 000 | 00000 | 111001`
- **Hexadecimal**:`0x00000073`

---

### Instruction 11: `ld ra, 8(sp)`
- `ld` uses the I-type format:`imm[11:0] | rs1[19:15] | funct3[14:12] | rd[11:7] | opcode[6:0]`
- **Fields**:
- Immediate (`imm`): `8` → Binary: `0000000001000`.
- Base register (`rs1`): `sp` (`x2`) → Binary: `00010`.
- Destination register (`rd`): `ra` (`x1`) → Binary: `00001`.
- `funct3`: For `ld`, `funct3 = 011`.
- `opcode`: For `ld`, `opcode = 0000011`.
- **Combine**:`0000000001000 | 00010 | 011 | 00001 | 0000011
- **Hexadecimal**:`0x00813003`

---

### Instruction 12: `addi sp, sp, 16`
- **Instruction Format**: I-type
- **Fields**:
- Immediate (`imm`): `16` → Binary: `0000000010000`.
- Source register (`rs1`): `sp` (`x2`) → Binary: `00010`.
- Destination register (`rd`): `sp` (`x2`) → Binary: `00010`.
- `funct3`: For `addi`, `funct3 = 000`.
- `opcode`: For `addi`, `opcode = 0010011`.
- **Combine**:`imm[11:0] | rs1[19:15] | funct3[14:12] | rd[11:7] | opcode[6:0]`
              `0000000010000 | 00010 | 000 | 00010 | 0010011`
- **Hexadecimal**:`0x01010113`

---

### Instruction 13: `ret`
- `ret` is a pseudoinstruction and translates to:`jalr x0, 0(ra)`
- - **Instruction Format**: I-type
- **Fields**:
- Immediate (`imm`): `0` → Binary: `000000000000`.
- Base register (`rs1`): `ra` (`x1`) → Binary: `00001`.
- Destination register (`rd`): `x0` → Binary: `00000`.
- `funct3`: For `jalr`, `funct3 = 000`.
- `opcode`: For `jalr`, `opcode = 1100111`.
- **Combine**:`imm[11:0] | rs1[19:15] | funct3[14:12] | rd[11:7] | opcode[6:0]`
              `000000000000 | 00001 | 000 | 00000 | 1100111`
- **Hexadecimal**:`0x00008067`

### Instruction 14: `AUIPC a5, 0xFFFF0`
- **Instruction**: `AUIPC` loads a 20-bit immediate value into the upper 20 bits of the destination register and adds the PC value to it.
- **Instruction Format**: U-type
- **Fields**:
  - Immediate (`imm[31:12]`): `0xFFFF0` → Binary: `11111111111111110000`.
  - Destination register (`rd`): `a5` (`x15`) → Binary: `01111`.
  - Opcode: For `AUIPC`, `opcode = 0010111`.
- **Combine**:`11111111111111110000 01111 0010111`
- **Convert to Hexadecimal**:`0xFFFFF797`

---

### Instruction 15: `ADDI a5, a5, -220`

- **Instruction**: `ADDI` adds an immediate value to a source register and stores the result in a destination register.  
- **Instruction Format**: I-type  

#### Fields:
1. **Immediate (`imm[11:0]`)**:  
   - Value: `-220`  
   - Convert to binary (12-bit signed):  
     `-220` in decimal → Two's complement → `111111001110`.  

2. **Source register (`rs1`)**:  
   - Register: `a5` → Corresponds to `x15` in RISC-V.  
   - Binary: `01111`.  

3. **Destination register (`rd`)**:  
   - Register: `a5` → Corresponds to `x15` in RISC-V.  
   - Binary: `01111`.  

4. **funct3**:  
   - For `ADDI`, `funct3 = 000`.  

5. **Opcode**:  
   - Opcode for `ADDI`: `0010011`.  

#### Combine Fields:
The final instruction format is:`imm[11:0] | rs1[19:15] | funct3[14:12] | rd[11:7] | opcode[6:0]` 
                                `111111001110 | 01111 | 000 | 01111 | 0010011` 

#### Convert to Hexadecimal:
1. Group the binary:  
   `1111 1100 1110 0111 1000 0011 0011`.  

2. Convert to hexadecimal:  
   `0xFCF78313`.  

#### Final Encoded Instruction:
The instruction `ADDI a5, a5, -220` is encoded as:`0xFCF78313`.    

</details>
<hr>
<details>
<summary>Task 4: Simulation of RISC-V Core Verilog netlist and testbench. </summary>

   `NOTE: Since the designing of RISCV Architecture and writing it's testbench is not the part of this Research Internship, so we will use the Verilog Code and Testbench of RISCV that 
    has already been designed. The reference GitHub repository is : iiitb_rv32i`


## Objective
The objective of this task is to perform simulation of the RISK-V core using LogNetList and TestBench. The simulation involves compiling the Verilog files, generating a `.vcd` file, and observing the waveform in GTKWave.

---

## Steps to Perform Simulation

### 1. Setting up the Environment
- Ensure you have the following installed:
  - **Icarus Verilog** for compiling and simulating Verilog files.
  - **GTKWave** for waveform analysis.
- Use a Linux-based system or a terminal supporting Verilog tools.

### 2. Create Required Files
- Create the following files:
  1. **LogNetList**: Contains the design implementation in Verilog (e.g., `divya_rv32i.v`).
  2. **TestBench**: A Verilog file to simulate the design (e.g., `divya_rv32i_tb.v`).

### 3. TestBench Requirements
Ensure your testbench includes the following lines to generate a `.vcd` file:
`verilog
initial begin
    $dumpfile("divya_rv32i.vcd");  // Specify the .vcd file name
    $dumpvars(0, <module_name>);  // Replace <module_name> with the top module name
end `

### 4. Compile the Verilog Files
Run the following command in the terminal to compile your Verilog files:
`iverilog -o divya_rv32i divya_rv32i.v divya_rv32i_tb.v`


### 5.Run the Simulation
Execute the following command to simulate the design and generate the .vcd file:
`./divya_rv32i`

### 6. Observe the Waveform in GTKWave
Open the .vcd file in GTKWave using the following command:
`gtkwave divya_rv32i.vcd`

![4 10](https://github.com/user-attachments/assets/c6c1a1f7-cca7-4336-a14a-e94394080760)


## Analysing Waveform

The waveforms were analysed for the below instructions

![4 11](https://github.com/user-attachments/assets/1a2b3d7d-874d-410f-b06e-6629961a1d6c)


### Instruction 1: `add r6, r1, r2 `

#### **Input:**
- Values: `1` and `2`
#### **Output:**
- Result: `3`
#### **Explanation**:
- r1 = 1
- r2 = 2
- r6 = r1 + r2 = 3

![3 1](https://github.com/user-attachments/assets/6285c2b1-9eb5-4993-9e85-bec820719079)


### Insrtuction 2: `sub r7, r1, r2`

#### **Input:**
- Values: `1` and `3`
#### **Output:**
- Result: `FFFFFFFF` (32-bit representation of `-1` in two's complement)
#### **Analysis:**
The output `FFFFFFFF` suggests that the operation performed was a **Subtraction** resulting in a negative value. This matches a **SUB** instruction in your instruction set.

![4 2](https://github.com/user-attachments/assets/0d56b63d-0608-4716-8d33-bdadb3579b7c)


### Instruction 3: `slt r11, r2, r5`

#### **Input:**
- Values: `2` and `5`
#### **Output:**
- Result: `1`
#### **Analysis:**
The output `1` indicates a **Set Less Than** operation, where the result is `1` if the first input is less than the second input. This matches an **SLT** instruction in your instruction set.

![4 3](https://github.com/user-attachments/assets/3387ff00-485d-43be-b677-d9d943158e2b)


### Instruction 4: `add r6, r1, r4`

#### **Input:**
- Values: `1` and `4`
#### **Output:**
- Result: `7`
#### **Analysis:**
The output `7` indicates an **Addition** operation, where the two inputs are summed. This matches an **ADD** instruction in your instruction set.

![4 4](https://github.com/user-attachments/assets/3e2d9dad-c3c2-4bce-8fe5-a2ae42c95006)


### Instruction 5: `slt r11, r2, r4 `

#### **Input:**
- Values: `4` and `5`
#### **Output:**
- Result: `1`
#### **Analysis:**
The output `1` indicates a **Set Less Than (SLT)** operation, which compares two inputs and returns `1` if the first input is less than the second input.

![4 6](https://github.com/user-attachments/assets/db25668e-4dce-4c30-8ae7-6db285801047)

</details>
<hr>
<details>
<summary>Task 5: Adaptive Traffic Signal System using RISC-V </summary>

## Overview  
This project implements a **smart traffic signal system** using a **RISC-V board**, **ultrasonic sensors**, and **RFID technology**. The system dynamically adjusts signal timings based on real-time traffic congestion and provides emergency vehicle clearance using RFID detection. This helps in reducing traffic congestion and ensuring faster movement of emergency vehicles.

## Components Required  
Below is the list of components needed to build the project:

### **Hardware Components**
1. **RISC-V Board** 
2. **Ultrasonic Sensor (HC-SR04)** – For measuring traffic congestion  
3. **RFID Reader Module (RC522)** – To detect emergency vehicles  
4. **RFID Tags** – Attached to emergency vehicles  
5. **Traffic Light LEDs** (Red, Yellow, Green)  
6. **Resistors (220Ω, 1kΩ)** – For LED current limiting  
7. **Buzzer** – For emergency vehicle alert  
8. **Breadboard & Jumper Wires**  
9. **Power Supply (5V)**  
---
## **Block Diagram**

![5 4](https://github.com/user-attachments/assets/aea09317-cd54-4a45-bf3b-af3f43cdb850)


---

## **Circuit Connection Diagram**
### **Pinout Diagram**
  

![5 3](https://github.com/user-attachments/assets/9065c0f9-3e45-4efe-ac6b-f285a22afbdf)



---

## **Circuit Connections**  
The following table describes the pin connections between the **RISC-V Board** and hardware components:

| **Component**      | **Pin Name**       | **RISC-V Board Pin** |
|--------------------|--------------------|----------------------|
| **Ultrasonic Sensor (HC-SR04)** | VCC | 5V |
|  | GND | GND |
|  | TRIG | GPIO 5 |
|  | ECHO | GPIO 6 |
| **RFID Reader (RC522)** | VCC | 3.3V |
|  | GND | GND |
|  | RST | GPIO 7 |
|  | MISO | GPIO 9 |
|  | MOSI | GPIO 10 |
|  | SCK | GPIO 11 |
| **Traffic Lights (LEDs)** | Red LED | GPIO 2 |
|  | Yellow LED | GPIO 3 |
|  | Green LED | GPIO 4 |
| **Buzzer** | VCC | 5V |
|  | GND | GND |
|  | Signal | GPIO 8 |

---

## **How It Works**
1. **Traffic Monitoring:**  
   - The **ultrasonic sensor** measures vehicle density.  
   - If congestion is high, the **green light duration** is increased.  

2. **Emergency Vehicle Detection:**  
   - If an **RFID-tagged emergency vehicle** is detected, the **red light turns off** and the **green light activates** to clear the road.  

3. **Traffic Light Control:**  
   - LEDs switch based on real-time traffic conditions.  

---

## **Summary of Circuit Functionality**
1. The **ultrasonic sensor** detects vehicle congestion and **adjusts the green light duration**.
2. The **RFID reader** detects emergency vehicles and **immediately turns the green light ON**.
3. The **traffic lights (Red, Yellow, Green)** operate based on traffic conditions.
4. The **buzzer provides an alert** when an emergency vehicle is detected.

---

</details>
<hr>
<details>
<summary>Task 6:Adaptive Traffic Signal System using RISC-V:Final Implementation . </summary>

### **Adaptive Traffic Signal System**  

---

## **📌 1️⃣ Project Overview**
The **Adaptive Traffic Signal System** is a **smart traffic management solution** that dynamically adjusts signal timings based on **real-time vehicle congestion detection**. This implementation **does not** include RFID-based emergency vehicle detection yet, but it is planned for future development.

✅ **Current Implementation:**
- **Traffic Congestion Detection using Ultrasonic Sensors**  
- **Automated Traffic Light Control (Red, Yellow, Green LEDs)**  
- **Buzzer Alerts for High Congestion**  

🚀 **Future Scope:**  
- **RFID-based Emergency Vehicle Detection** (To clear signals for ambulances & police)  
- **AI-based Smart Traffic Optimization**  

---

## **🛠️ 2️⃣ Components Required**
| **Component** | **Quantity** | **Purpose** |
|--------------|------------|-------------|
| **RISC-V Board (CH32V003F4U6)** | 1 | Main Microcontroller |
| **Ultrasonic Sensor (HC-SR04)** | 1 | Measures vehicle congestion |
| **Traffic Signal LEDs (Red, Yellow, Green)** | 3 | Simulate traffic lights |
| **Buzzer** | 1 | Alerts during high traffic congestion |
| **Voltage Divider (20kΩ, 10kΩ resistors)** | 2 | Converts Ultrasonic Sensor Echo from 5V to 3.3V |
| **Connecting Wires** | As required | Circuit connections |

---

## **📡 3️⃣ Circuit Connections**
### **🔹 Ultrasonic Sensor (HC-SR04)**
| **HC-SR04 Pin** | **RISC-V GPIO Pin** | **Notes** |
|---------------|-----------------|------------|
| **VCC**       | **5V**           | ✅ Power (Safe) |
| **GND**       | **GND**          | ✅ Common Ground |
| **TRIG**      | **PC4**          | ✅ Digital Output (Trigger) |
| **ECHO**      | **PC6 (via Voltage Divider)** | ⚠️ Use **20kΩ + 10kΩ resistors** |

### **🔹 Traffic Light LEDs**
| **LED**      | **RISC-V GPIO Pin** |
|-------------|-----------------|
| **Red LED** | **PD0** |
| **Yellow LED** | **PD1** |
| **Green LED** | **PD2** |

### **🔹 Buzzer**
| **Buzzer Pin** | **RISC-V GPIO Pin** |
|-------------|-----------------|
| **VCC**     | **5V** |
| **GND**     | **GND** |
| **Signal**  | **PD5 (PWM Capable)** |

---

## **🚀 4️⃣ How the System Works**
1️⃣ The **Ultrasonic Sensor** continuously monitors vehicle congestion at an intersection.  
2️⃣ If **traffic is heavy**, the **Green Light duration is extended** to clear congestion.  
3️⃣ If **traffic is normal**, the system follows a **fixed Red-Yellow-Green cycle**.  
4️⃣ **Buzzer alerts** when traffic is extremely high to notify authorities.  

---

## **💻 5️⃣ Final Code Implementation**
### **🚀 Adaptive Traffic Signal System (Without RFID)**
```c
#include <stdio.h>
#include "ch32v003fun.h"

// 🚦 Define GPIO Pins for Traffic Lights
#define RED_LIGHT   GPIO_Pin_0  // PD0
#define YELLOW_LIGHT GPIO_Pin_1 // PD1
#define GREEN_LIGHT  GPIO_Pin_2 // PD2

// 🔊 Define Buzzer Pin
#define BUZZER GPIO_Pin_5 // PD5

// 📡 Define GPIO Pins for Ultrasonic Sensor
#define TRIG GPIO_Pin_4  // PC4
#define ECHO GPIO_Pin_6  // PC6

// 🚀 Initialize GPIO Pins
void setup() {
    FUNCONF_Init();
    
    // 🚦 Setup Traffic Light LEDs
    GPIO_Init(GPIOD, RED_LIGHT, GPIO_Mode_Out_PP);
    GPIO_Init(GPIOD, YELLOW_LIGHT, GPIO_Mode_Out_PP);
    GPIO_Init(GPIOD, GREEN_LIGHT, GPIO_Mode_Out_PP);

    // 🔊 Setup Buzzer
    GPIO_Init(GPIOD, BUZZER, GPIO_Mode_Out_PP);
    
    // 📡 Setup Ultrasonic Sensor
    GPIO_Init(GPIOC, TRIG, GPIO_Mode_Out_PP);
    GPIO_Init(GPIOC, ECHO, GPIO_Mode_IN_FLOATING);
}

// 📡 Function to Measure Distance (Ultrasonic Sensor)
float measure_distance() {
    GPIO_ResetBits(GPIOC, TRIG);
    delay(2);
    GPIO_SetBits(GPIOC, TRIG);
    delay(10);
    GPIO_ResetBits(GPIOC, TRIG);

    while (!GPIO_ReadInputDataBit(GPIOC, ECHO));
    long startTime = micros();
    while (GPIO_ReadInputDataBit(GPIOC, ECHO));
    long travelTime = micros() - startTime;

    float distance = travelTime / 58.0;
    return distance;
}

// 🚦 Traffic Signal Control Logic
void control_traffic(float distance) {
    if (distance < 10) { // 🚗 Heavy Traffic
        printf("🚗 High Traffic! Extending GREEN Light.\n");
        GPIO_SetBits(GPIOD, GREEN_LIGHT);
        GPIO_ResetBits(GPIOD, RED_LIGHT);
        GPIO_SetBits(GPIOD, BUZZER);
    } 
    else {
        printf("✅ Normal Traffic Flow.\n");
        GPIO_ResetBits(GPIOD, GREEN_LIGHT);
        GPIO_SetBits(GPIOD, RED_LIGHT);
    }

    delay(5000); // Simulate light duration
    GPIO_ResetBits(GPIOD, BUZZER); // Turn off buzzer
}

int main() {
    setup();
    while (1) {
        float distance = measure_distance();  // Get Traffic Data
        control_traffic(distance);  // Update Traffic Lights
    }
    return 0;
}
```

## **🌍 6️⃣ Where Can This Be Implemented?**
🚦 Urban Cities – Reduce congestion and improve traffic flow.
🚑 Near Hospitals – Future RFID integration can clear roads for ambulances.
🏫 School Zones – Adaptive signals can ensure student safety.
🏭 Industrial Areas – Prevent truck congestion at intersections.

---

## **📌 7️⃣ Future Enhancements**
🚀 RFID-Based Emergency Vehicle Detection (Automatically clear signals for ambulances & police).
🚀 AI-Based Vehicle Recognition (Use Computer Vision to improve traffic detection).
🚀 IoT-Based Data Analytics (Store real-time traffic data for optimization).
🚀 Smartphone App Control (Manually override signals in case of emergencies).

---

## **🎥 8️⃣ Video Demonstration**



---

## **📢 9️⃣ Conclusion**

This Adaptive Traffic Signal System using RISC-V provides a low-cost, automated, and real-world applicable solution for traffic congestion. By leveraging Ultrasonic Sensors for congestion detection, the system optimizes traffic flow and enhances road safety.

🔹 Current Implementation: Ultrasonic-based traffic control ✅
🔹 Future Upgrade: RFID-based emergency vehicle clearance 🚑

🚀 This project demonstrates the power of RISC-V in real-world applications!

