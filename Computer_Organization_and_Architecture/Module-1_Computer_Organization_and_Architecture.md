
---

## ✅ **Module 1**

---

### 🔷 1. **Functional Blocks of a Computer**

Every digital computer is built around five key components:

#### (i) **CPU (Central Processing Unit)**

* **Performs all processing tasks**: arithmetic, logic, decision-making.
* Subcomponents:

  * **ALU (Arithmetic Logic Unit)**: Performs operations like addition, subtraction, AND, OR.
  * **CU (Control Unit)**: Sends timing/control signals to coordinate data flow.
  * **Registers**: Special fast-access memory (e.g., MAR, MDR, IR, PC, Accumulator).

> Think of CPU as the “brain” that computes, decides, and controls.

---

#### (ii) **Memory**

* **Stores both data and instructions**.
* **Types**:

  * **Primary**:

    * **RAM (volatile)**: Temporary, fast access.
    * **ROM (non-volatile)**: Stores firmware.
  * **Secondary**: HDD, SSD → permanent storage.
  * **Cache**: Sits between CPU and RAM for faster access.
  * **Registers**: Fastest, inside CPU.

---

#### (iii) **I/O Subsystem**

* Interfaces with external world.
* **Examples**: Keyboard, Display, USB, HDD.
* **Role**: Converts electrical signals to human-usable data and vice versa.

---

#### (iv) **Control Unit (CU)**

* Decodes instructions and **manages execution** using timing/control signals.
* Works with **clock** to synchronize steps like fetch, decode, execute.

---

### 🔷 2. **Instruction Set Architecture (ISA)**

ISA is the **programmer's view** of the computer — a contract between hardware and software.

#### (i) **Registers**

* Temporary, fast-access storage inside CPU.
* **Types**:

  * **PC (Program Counter)**: Holds address of next instruction.
  * **IR (Instruction Register)**: Holds current instruction.
  * **MAR (Memory Address Register)** & **MDR (Memory Data Register)**: Coordinate memory I/O.
  * **General-purpose**: e.g., R0 to Rn.

---

#### (ii) **Instruction Execution Cycle**

1. **Fetch**: Instruction is read from memory.
2. **Decode**: Opcode and operands are identified.
3. **Execute**: ALU performs required operation.
4. **Write-back**: Result is stored.

> Cycle repeats until program ends.

---

#### (iii) **RTL (Register Transfer Language)**

* Describes micro-operations in a symbolic way.
* **Example**: `IR ← M[PC]` → Load memory at PC into IR.

---

#### (iv) **Addressing Modes**

Tells CPU how to find operand.

| Mode             | Example         | Description               |
| ---------------- | --------------- | ------------------------- |
| Immediate        | MOV R1, #5      | Operand is in instruction |
| Register         | MOV R1, R2      | Operand is in register    |
| Direct           | MOV R1, 1000    | Address given directly    |
| Indirect         | MOV R1, (R2)    | Address is stored in R2   |
| Indexed/Relative | MOV R1, 100(R2) | Base + offset used        |

---

#### (v) **Instruction Set Types**

| CISC            | RISC                |
| --------------- | ------------------- |
| Complex         | Reduced             |
| Variable-length | Fixed-length        |
| Examples: x86   | Examples: ARM, MIPS |

---

### 🔷 3. **Data Representation**

#### (i) **Signed Numbers**

| Format         | Range (for 4 bits)  |
| -------------- | ------------------- |
| Sign-Magnitude | -7 to +7            |
| 1's Complement | -7 to +7            |
| 2's Complement | -8 to +7 (standard) |

---

#### (ii) **Floating Point (IEEE 754)**

* Uses **Sign bit**, **Exponent**, and **Mantissa**.
* Example:
  `-4.25 → 1 | 10000001 | 000100000000...`

> Allows representation of very large/small numbers using scientific notation.

---

#### (iii) **Character Codes**

* **ASCII**: A = 65, a = 97
* **Unicode**: Universal 16/32-bit character set.

---

### 🔷 4. **Computer Arithmetic**

#### (i) **Addition & Subtraction**

* Binary addition uses carry.
* Overflow detected if sign bit changes unexpectedly.

---

#### (ii) **Ripple Carry Adder**

* Adds LSB to MSB sequentially.
* Delay increases with number of bits.

#### (iii) **Carry Lookahead Adder**

* Uses logic to predict carries.
* Much faster, used in modern CPUs.

---

#### (iv) **Multiplication**

1. **Shift-and-Add**: Binary long multiplication.
2. **Booth’s Algorithm**:

   * Reduces number of operations using 2’s complement.
   * Handles positive and negative operands.
3. **Carry-Save Multiplier**:

   * Speeds up multi-operand additions by delaying carry propagation.

---

#### (v) **Division**

1. **Restoring Division**:

   * Subtract divisor, if result negative → restore.
2. **Non-Restoring**:

   * Avoids restoring step → faster in hardware.

---

#### (vi) **Floating Point Arithmetic**

* **Addition**: Align exponents, add mantissas.
* **Multiplication**: Add exponents, multiply mantissas.
* Requires rounding, overflow/underflow handling.

---

### 📚 **Previous Year Questions with Concepts**

| Question                                                           | Concept Covered            |
| ------------------------------------------------------------------ | -------------------------- |
| Explain RTL with example.                                          | Register Transfer Language |
| Compare 1’s, 2’s complement and sign-magnitude.                    | Number representation      |
| Explain shift-and-add vs Booth’s multiplication with example.      | Binary multiplication      |
| Differentiate RISC and CISC.                                       | Instruction set            |
| Explain floating point representation and arithmetic with diagram. | Data formats               |
| Design and explain a 4-bit ripple carry adder.                     | Computer arithmetic        |
| Describe the instruction execution cycle with PC and IR.           | Instruction lifecycle      |

---
