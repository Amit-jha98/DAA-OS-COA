
---

# **PCC CS 403 – Operating Systems**

### **Module 1: Introduction (4 Hrs)** 

---

## **1. Concept of Operating System**

### **What is an OS?**

* An **Operating System (OS)** is a system program that **controls and coordinates the use of hardware** among various application programs and users.
* Without OS, the user would have to directly interact with hardware (complicated and inefficient).

### **Why is OS needed?**

1. **Abstraction:** Hides hardware complexities.
2. **Resource manager:** Allocates CPU, memory, devices fairly.
3. **Coordination:** Allows multiple programs to run without conflicts.
4. **User convenience:** Provides GUI or CLI for easy access.

**Diagram:**

```
+-------------------+   <- User 
|  Application      |   Examples: MS Word, Browser  
+-------------------+  
| Operating System  |   Examples: Windows, Linux, MacOS  
+-------------------+  
| Hardware          |   CPU, Memory, Disk, Devices  
```

### **Key OS Functions**

1. **Process Management:** Creates, schedules, and terminates processes.
2. **Memory Management:** Allocates memory dynamically and prevents unauthorized access.
3. **File System Management:** Handles files and directories.
4. **I/O Management:** Controls input/output devices.
5. **Security & Protection:** Prevents unauthorized access and malware.
6. **Networking & Communication:** Supports data transfer across devices.

> **Example:** When you open Chrome, OS allocates CPU time, memory, and handles file/network access without you worrying about it.

---

## **2. Generations of Operating Systems**

### **First Generation (1940-1955)**

* Hardware: Vacuum tubes.
* **No OS:** Programs loaded manually using switches/wires.
* Only **machine language**.
* Example: ENIAC.
* **Problem:** Very time-consuming, error-prone.

---

### **Second Generation (1955-1965)**

* Hardware: Transistors.
* **Batch Processing:** Jobs (programs + data) collected and processed in batches without user interaction.
* Used **punch cards** and magnetic tape.
* Example: IBM 1401 with Batch OS.

---

### **Third Generation (1965-1980)**

* Hardware: Integrated Circuits.
* **Multiprogramming:** Several jobs loaded in memory; CPU switches jobs when one waits for I/O.
* **Time-sharing:** Each user gets a time slice.
* Example: IBM OS/360.

---

### **Fourth Generation (1980-Present)**

* Hardware: Microprocessors.
* **Personal Computers:** GUI-based OS like Windows and Mac.
* Networking introduced.
* Example: Windows 95, UNIX.

---

### **Fifth Generation (Current & Future)**

* AI-enabled OS, cloud-centric, autonomous decision-making.
* Example: Mobile OS like Android with AI assistants.

---

## **3. Types of Operating Systems**

### **1) Batch OS**

* Executes jobs in groups (batches) without user interaction.
* Example: Early IBM systems.
* **Advantage:** Better throughput.
* **Disadvantage:** No interaction; long waiting time.

### **2) Multiprogramming OS**

* Multiple programs reside in memory; CPU switches between them.
* **Example:** UNIX.
* **Advantage:** Improves CPU utilization.

### **3) Time-Sharing OS**

* Extends multiprogramming by allocating time slices to each user/program.
* **Example:** Windows multi-user systems.

### **4) Real-Time OS (RTOS)**

* Processes tasks within strict deadlines.
* **Example:** VxWorks (used in spacecraft).

### **5) Distributed OS**

* Controls multiple computers as if they were a single machine.
* **Example:** LOCUS.

### **6) Network OS**

* Provides services for computers connected via a network.
* **Example:** Novell NetWare.

### **7) Mobile OS**

* Designed for smartphones/tablets.
* **Example:** Android, iOS.

---

## **4. Operating System Services**

**Main Services:**

1. **Program Execution:** Load, execute, terminate programs.
2. **I/O Operations:** Handle device I/O.
3. **File System Management:** Read/write files and directories.
4. **Inter-Process Communication (IPC):** Allow processes to exchange data.
5. **Error Detection:** Detect and recover from hardware/software errors.
6. **Resource Allocation:** CPU, memory, devices allocated fairly.
7. **Protection and Security:** User authentication, access rights.
8. **Accounting:** Keep track of resource usage.

**Exam Tip:** Always quote examples (e.g., *file services in Linux = `open()`, `read()`*).

---

## **5. System Calls**

### **Definition**

* System calls are **functions that user programs call to request services from the OS kernel**.

### **Why?**

* Applications cannot directly access hardware; OS provides secure interfaces.

### **Types:**

1. **Process Control:** `fork()`, `exit()`, `wait()`.
2. **File Management:** `open()`, `read()`, `write()`, `close()`.
3. **Device Management:** `ioctl()`, `read()`, `write()`.
4. **Information Maintenance:** `getpid()`, `alarm()`.
5. **Communication:** `pipe()`, `send()`, `recv()`.

**Example:**

```c
int fd = open("data.txt", O_RDONLY);
```

This **system call** asks OS to open a file.

---

## **6. Structure of an OS**

### **A) Monolithic Kernel**

* Entire OS runs as one large program in kernel mode.
* **Advantages:** Fast, less overhead.
* **Disadvantages:** Hard to maintain/debug.
* **Example:** Early UNIX, MS-DOS.

### **B) Layered OS**

* OS divided into layers; each layer provides services to the one above.
* **Advantages:** Easier to design/debug.
* **Disadvantages:** Overhead from multiple layers.
* **Example:** THE OS.

### **C) Microkernel**

* Minimal kernel: handles only core functions (IPC, scheduling).
* Remaining services run in user space.
* **Advantages:** Modular, secure.
* **Disadvantages:** Slower due to message-passing overhead.
* **Example:** MINIX, QNX.

---

## **7. Concept of Virtual Machine**

### **What is VM?**

* A **virtual machine** is a software-based emulation of a physical computer.
* Multiple VMs can run on the same physical machine, each with its own OS.

**Examples:**

* VMware, VirtualBox, Hyper-V.

**Benefits:**

* Isolation between systems.
* Better resource utilization.
* Supports testing and portability.

---

## **8. Case Studies: UNIX & Windows**

### **UNIX**

* Multi-user, multitasking, time-sharing.
* Portable (written in C).
* Hierarchical file system.
* Modular design: Kernel + Shell + Utilities.

### **Windows**

* GUI-based, multitasking.
* Uses **Hybrid Kernel** (mix of monolithic & microkernel).
* Rich device driver support.
* Examples: Windows 10, Windows Server.

---

## **Memory Hooks**

* **OS Services:** **PEF-CARP** (Program Execution, Error detection, File mgmt, Communication, Accounting, Resource allocation, Protection).
* **Structures:** Monolithic > Layered > Microkernel.
* **Types:** Batch, Multiprogramming, Time-Sharing, RTOS, Distributed, Network, Mobile.

---

## **Sample Questions (Exam-Oriented)**

1. Define Operating System. List and explain its main functions.
2. Explain the **generations of OS** with examples.
3. Compare **Batch OS vs Time-Sharing OS**.
4. What are **system calls**? Classify with examples.
5. Differentiate **Monolithic, Layered and Microkernel** structures with diagrams.
6. Explain the concept of **Virtual Machine** with advantages.
7. Compare **UNIX and Windows** operating systems.

---

## **Extras (will be attached):**

1. **Diagrams:**

   * OS Structures (layered, monolithic, microkernel)
   * Virtual Machine stack
2. **Previous Year Solved Questions**
3. **Lab viva questions:** OS basics, system calls, Linux commands.
4. **Mind map for quick revision**

---
