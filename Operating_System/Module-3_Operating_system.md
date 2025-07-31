
---

## **Module 3: Inter-Process Communication (IPC)**

**Lecture Hours: 6**

---

### 🔸 **1. Inter-Process Communication (IPC)**

**Definition:**
Inter-Process Communication is a mechanism that allows processes to communicate with each other and synchronize their actions without sharing the same address space.

**Why IPC is needed:**

* Processes often need to cooperate.
* For modular programming and concurrent execution.
* To share data and messages across processes.

---

### 🔸 **2. Critical Section Problem**

A **critical section** is a part of a process where shared resources (like memory, files, printers) are accessed.

**Problem:**
When multiple processes try to access shared data simultaneously, it can lead to **data inconsistency** or **race conditions**.

**Requirements for Critical Section Solution:**

* **Mutual Exclusion:** Only one process can enter the critical section at a time.
* **Progress:** If no process is in the critical section, any process wishing to enter should be allowed to proceed.
* **Bounded Waiting:** A limit must exist on how many times other processes are allowed to enter the critical section before a waiting process is granted access.

---

### 🔸 **3. Race Condition**

Occurs when multiple processes or threads access shared data at the same time and try to change it. The outcome depends on the order in which the access takes place.

**Example:** Two threads updating a counter at the same time may lead to an incorrect final value.

---

### 🔸 **4. Mutual Exclusion Techniques**

#### a) **Hardware Solutions**

* **Disable interrupts** while in the critical section. Not suitable for multiprocessor systems.
* **Test and Set / Compare and Swap:** Atomic operations provided by CPU hardware.

#### b) **Strict Alternation**

Ensures alternation between two processes using a shared turn variable. However, it lacks flexibility and violates progress conditions.

#### c) **Peterson’s Solution**

A classic software-based solution to the two-process critical section problem using two variables:

```c
boolean flag[2];
int turn;
```

* Each process signals intention and waits if the other is also interested and has priority.

---

### 🔸 **5. Producer-Consumer Problem**

A classic IPC problem where:

* **Producer** creates data and places it into a buffer.
* **Consumer** removes data from the buffer and uses it.

**Goal:** Synchronize producer and consumer so that:

* Producer doesn’t add data to full buffer.
* Consumer doesn’t remove data from empty buffer.

Solutions use **semaphores** or **monitors**.

---

### 🔸 **6. Semaphores**

A **semaphore** is a synchronization primitive used to control access to a common resource by multiple processes.

Types:

* **Binary Semaphore** (mutex): 0 or 1
* **Counting Semaphore:** Non-negative integer value

**Operations:**

* **wait (P):** Decreases the semaphore value
* **signal (V):** Increases the semaphore value

Used to solve producer-consumer, readers-writers, and other IPC problems.

---

### 🔸 **7. Event Counters**

Used for synchronization in distributed systems. Similar to semaphores but offer better control and are suitable for real-time applications.

---

### 🔸 **8. Monitors**

High-level synchronization construct that allows threads to have both mutual exclusion and the ability to wait (block) for a certain condition to become true.

Monitors encapsulate:

* Shared variables
* Procedures that operate on shared data
* Synchronization between concurrent procedure invocations

---

### 🔸 **9. Message Passing**

A method of IPC where processes communicate by sending and receiving messages, either directly or through a mailbox.

**Direct Communication:**
Sender and receiver know each other.

**Indirect Communication:**
Messages are sent to and received from mailboxes.

**Key concepts:**

* Blocking vs Non-blocking communication
* Synchronous vs Asynchronous messaging

---

### 🔸 **10. Shared Memory**

Processes share a region of memory for communication.

* Faster than message passing.
* Needs explicit synchronization (semaphores or mutexes) to avoid race conditions.

---

### 🔸 **11. Classical IPC Problems**

#### a) **Reader-Writer Problem**

* Multiple readers can read at the same time.
* Writers need exclusive access.
* The goal is to avoid starvation of readers/writers.

**Two Variants:**

* Reader priority
* Writer priority

#### b) **Dining Philosophers Problem**

* N philosophers sit around a table.
* Each must pick up two chopsticks to eat.
* Deadlock, starvation, and resource contention must be avoided.

**Used to model synchronization problems.**

---
