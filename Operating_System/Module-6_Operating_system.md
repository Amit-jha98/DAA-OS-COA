
---

### ✅ **Module 6: File and Disk Management**

**Lecture: 9 hrs**

---

## 🔷 1. **File Management**

### 📌 Concept of File

A **file** is a named collection of related data that is stored on secondary storage (like HDD, SSD). It acts as an abstraction for storing data — anything from text, images, videos, etc.

**Key Features:**

* Logical storage unit
* Managed by File System
* Can be of various types (text, binary, executable)

---

### 📌 Access Methods

Access method = how data in a file can be accessed.

| Access Method              | Description               | Example        |
| -------------------------- | ------------------------- | -------------- |
| **Sequential Access**      | Data is read in order     | Tapes, logs    |
| **Direct Access (Random)** | Access any block directly | Databases      |
| **Indexed Access**         | Uses an index to access   | Search engines |

---

### 📌 File Types

Files can be:

* **Text files**: human-readable
* **Binary files**: machine-readable
* **Executable files**: contains code to run

---

### 📌 File Operations

Operations supported by OS:

* `create()`
* `write()`
* `read()`
* `delete()`
* `seek()`
* `close()`
* `append()`

These are provided via system calls.

---

### 📌 Directory Structure

OS maintains directories to organize files.

#### Directory types:

1. **Single-level**: All files in same directory.
2. **Two-level**: One directory per user.
3. **Tree-structured**: Hierarchical structure.
4. **Acyclic graph**: Shared files via links.
5. **General graph**: Allows cycles (complex).

---

### 📌 File System Structure

A file system includes:

* **Boot control block**: Info to boot the OS
* **Volume control block**: Info about partitions
* **Directory structure**: File locations
* **File control blocks (FCB)**: Metadata of files

---

### 📌 File Allocation Methods

#### 1. **Contiguous Allocation**

* Files occupy consecutive blocks.
* Fast, simple, but **fragmentation** happens.

#### 2. **Linked Allocation**

* Each block points to the next.
* No fragmentation, but **slow** access.

#### 3. **Indexed Allocation**

* Uses an index block to store addresses.
* Efficient and supports direct access.

---

### 📌 Free-Space Management

OS must track free space on disk.

| Technique       | Description                         |
| --------------- | ----------------------------------- |
| **Bit Vector**  | 1 = used, 0 = free                  |
| **Linked List** | Free blocks linked                  |
| **Grouping**    | Store block addresses in a block    |
| **Counting**    | Keep track of number of free blocks |

---

### 📌 Directory Implementation

* **Linear List**: Simple, slow searching
* **Hash Table**: Fast lookup using hash function

---

### 📌 Efficiency and Performance

Depends on:

* Access time
* Throughput
* Disk scheduling
* Fragmentation handling

---

## 🔷 2. **Disk Management**

### 📌 Disk Structure

* Disk = platters + read/write head + tracks + sectors
* Access time = **seek time + rotational latency + transfer time**

---

### 📌 Disk Scheduling Algorithms

| Algorithm  | Working                  | Feature                     |
| ---------- | ------------------------ | --------------------------- |
| **FCFS**   | First Come First Serve   | Simple, poor performance    |
| **SSTF**   | Shortest Seek Time First | Greedy, reduces seek        |
| **SCAN**   | Elevator                 | Moves back and forth        |
| **C-SCAN** | Circular SCAN            | One direction, wraps around |

---

### 📌 Disk Reliability

Ways to improve:

* **Redundant disks (RAID)**
* **Checksums**
* **Error correction codes (ECC)**

---

### 📌 Disk Formatting

* **Low-level formatting**: Divides disk into sectors.
* **Logical formatting**: Creates file system structures.

---

### 📌 Boot Block

* Contains OS loader
* BIOS/UEFI loads this during boot

---

### 📌 Bad Blocks

* Damaged sectors of disk
* Handled by remapping or marking as unusable

---

## 🔷 3. **I/O Hardware & Software**

### 📌 I/O Devices

* Input: Keyboard, mouse
* Output: Monitor, printer
* I/O: Disk, USB

---

### 📌 Device Controllers

* Hardware that controls a specific device
* Communicates via registers and buffers

---

### 📌 Direct Memory Access (DMA)

* Bypasses CPU to transfer data directly between memory and device
* Improves performance

---

### 📌 Interrupt Handlers

* **Interrupt**: Signal to CPU that device needs attention
* **Handler**: Special code to deal with interrupt

---

### 📌 Device Drivers

* Software to manage communication with hardware

---

### 📌 Device Independent I/O Software

* Provides uniform I/O interface regardless of device

---

### 📌 Secondary Storage Structure

* HDDs, SSDs, USBs etc.
* Must be managed efficiently for speed and reliability

---

## ✅ PYQs (Previous Year Questions)

1. **What is indexed file allocation? What are its advantages over linked allocation?**
2. **Explain disk scheduling algorithms with examples. Which one is best and why?**
3. **Compare FCFS and SSTF scheduling with example seek time calculation.**
4. **Explain directory structures in detail.**
5. **What is DMA? Explain how it improves I/O performance.**
6. **How does file system manage free space? Explain methods.**
7. **Write short notes on: Bit vector, Hash table directory, Boot block, Page fault.**
8. **Differentiate between logical and physical I/O.**
9. **Explain different methods of file access.**
10. **What are bad blocks and how does OS handle them?**

---
