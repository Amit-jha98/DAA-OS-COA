
---

## ✅ **Module 2: CPU Architecture, Memory Design, and I/O Systems**

**Lecture Hours: 14**

---

### 🔷 1. **Introduction to x86 Architecture**

#### 🧠 What is x86?

* A **CISC** (Complex Instruction Set Computer) architecture developed by Intel.
* Used in PCs, laptops.
* Registers: **AX**, **BX**, **CX**, **DX**, **SP**, **BP**, **SI**, **DI**
* Segmentation model: Code, Data, Stack segments

#### 🔹 Features:

* Variable-length instructions
* Rich addressing modes
* Backward compatibility
* Powerful arithmetic and string instructions

#### 🧪 Example:

```assembly
MOV AX, [1234h]   ; Moves value from memory into AX
ADD AX, BX        ; Adds BX to AX
```

---

### 🔷 2. **CPU Control Unit Design**

#### 🔹 (i) **Hardwired Control Unit**

* Uses **fixed logic circuits** (AND, OR gates) to generate control signals.
* **Fast**, but **inflexible**
* Best for RISC systems

> Think of it as a circuit with no “program,” just rules hardwired into the system.

#### 🔹 (ii) **Microprogrammed Control Unit**

* Control signals generated using a **control memory** (microinstructions)
* Easier to modify
* Slower than hardwired

> Think of it as a software-like approach — uses firmware to generate signals.

---

### 🔷 3. **Case Study – Simple CPU Design**

* Registers: AC (Accumulator), PC, MAR, IR
* Cycle: Fetch → Decode → Execute
* Instructions: `LOAD`, `ADD`, `STORE`, `JUMP`
* Control Signals: `Read`, `Write`, `ALU Op`

> Helps understand how a real processor executes basic instructions.

---

### 🔷 4. **Memory System Design**

#### 🔹 Semiconductor Memory Technologies

* **SRAM**: Fast, used in cache
* **DRAM**: Slow, cheap, used as main memory
* **ROM**: Permanent, used for BIOS
* **Flash**: Used in SSDs

#### 🔹 Memory Organization

* **Byte-addressable**
* **Word alignment**
* **Memory hierarchy**: Register → Cache → RAM → Disk

---

### 🔷 5. **Peripheral Devices**

#### 🖥️ Characteristics:

* **Speed mismatch** with CPU
* **Modes**: Input, Output, Storage

#### 🔌 Examples:

* **Input**: Keyboard, Mouse
* **Output**: Monitor, Printer
* **Storage**: USB, HDD

---

### 🔷 6. **I/O Transfers**

| Transfer Type                  | Description                              |
| ------------------------------ | ---------------------------------------- |
| **Program-Controlled**         | CPU actively waits for device            |
| **Interrupt-Driven**           | Device notifies CPU when ready           |
| **DMA (Direct Memory Access)** | Device transfers data to memory directly |

#### 🔹 DMA Process:

1. CPU initializes DMA controller
2. CPU is free during transfer
3. DMA controller transfers data block
4. Sends interrupt when done

> **DMA = efficient I/O without CPU load**

---

### 🔷 7. **Instruction Privileges**

| Instruction Type   | Use                                            |
| ------------------ | ---------------------------------------------- |
| **Privileged**     | Only OS can run (e.g., HALT, I/O, memory mgmt) |
| **Non-Privileged** | User-level instructions                        |

> Protects hardware by limiting access to critical operations.

---

### 🔷 8. **Interrupts & Exceptions**

#### 🛎️ Interrupt:

* Signal to CPU indicating **an event** (I/O complete, error, etc.)
* **External**: from I/O devices
* **Internal (Exception)**: divide by 0, invalid opcode

#### 💡 Role in Process Control:

* Interrupts help switch between programs
* Saves current state → handles interrupt → resumes execution

---

### 🔷 9. **I/O Device Interfaces**

| Interface | Description                             |
| --------- | --------------------------------------- |
| **SCSI**  | High-speed interface for HDDs, scanners |
| **USB**   | Universal interface for many devices    |
| **PCI**   | Bus interface for internal devices      |

> Interface = standard method to connect hardware components to CPU.

---

### 📚 PYQs (Previous Year Questions)

| Question                                                     | Concept Covered         |
| ------------------------------------------------------------ | ----------------------- |
| Compare hardwired and microprogrammed control units.         | Control unit design     |
| Explain DMA with block diagram.                              | Direct memory access    |
| Describe instruction privileges and their role in security.  | CPU instruction control |
| Explain x86 architecture with register set and examples.     | x86 architecture        |
| Differentiate between interrupts and exceptions.             | Interrupt handling      |
| Design a simple hypothetical CPU and explain its components. | CPU control logic       |
| Discuss memory hierarchy with types of memory.               | Memory design           |

---
