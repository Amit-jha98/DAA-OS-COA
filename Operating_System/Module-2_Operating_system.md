
---

# ✅ **Module 2 – Processes, Threads & Scheduling (10 Hours)**

---

## 🔹 **SYLLABUS MAPPING**

1. **Processes**

   * Definition, Process Relationship
   * States of a Process
   * Process State Transitions
   * Process Control Block (PCB)
   * Context Switching

2. **Threads**

   * Definition, Various States
   * Benefits and Types
   * Multithreading Concept

3. **Process Scheduling**

   * Scheduling Foundation & Objectives
   * Types of Schedulers
   * Scheduling Criteria (CPU Utilization, Turnaround, etc.)
   * Scheduling Algorithms (FCFS, SJF, RR) – Preemptive and Non-preemptive
   * Multiprocessor Scheduling
   * Real-Time Scheduling (Rate Monotonic & Earliest Deadline First)

---

## ✅ **1. Processes**

### 🔹 Definition

A **process** is a **program in execution**.
It is an active entity with:

* Code (text section)
* Data (global, stack, heap)
* Program Counter (PC)
* CPU registers
* State, resources, and scheduling information

---

### 🔹 Process Relationships

* **Parent → Child** via system calls (e.g., `fork()` in UNIX).
* **Tree of processes**: each child can create its own child processes.

Example:

```bash
init (PID 1)
├── bash (PID 1001)
│   ├── nano (PID 1002)
│   └── python (PID 1003)
```

---

### 🔹 States of a Process

A process typically goes through the following **5 states**:

| State           | Description                        |
| --------------- | ---------------------------------- |
| New             | Process is being created           |
| Ready           | Waiting to be assigned to CPU      |
| Running         | Instructions are being executed    |
| Waiting/Blocked | Waiting for some event (e.g., I/O) |
| Terminated      | Finished execution                 |

---

### 🔹 Process State Transition Diagram

```plaintext
NEW → READY → RUNNING → TERMINATED  
          ↓      ↑  
        WAITING (Blocked)  
```

---

### 🔹 Process Control Block (PCB)

The **PCB** is a data structure maintained by the OS for each process.

**Contains:**

* Process ID (PID)
* Program Counter
* CPU Registers
* Scheduling info (priority, queues)
* Memory info (page tables, limits)
* I/O status, file descriptors

PCB is **loaded during context switch**.

---

### 🔹 Context Switching

When CPU switches from one process to another:

* Saves the state (PCB) of the old process
* Loads the PCB of the new process
* Incurred **context switch overhead** (CPU cycles wasted)

**Fast context switching = better performance**

---

## ✅ **2. Threads**

### 🔹 Definition

A **thread** is the **smallest unit of CPU execution** within a process.
A process can have **multiple threads**, sharing the same memory and resources.

---

### 🔹 Benefits of Threads

1. **Faster Context Switching** (no need to load separate PCB)
2. **Shared Memory** = easy data communication
3. **Improved Responsiveness** (UI thread vs background thread)
4. **Better CPU Utilization** on multicore systems

---

### 🔹 Types of Threads

* **User-Level Threads (ULT):** Managed by user libraries (faster but limited by single core)
* **Kernel-Level Threads (KLT):** Managed by OS (true parallelism, higher overhead)

---

### 🔹 Thread States

Same as processes: New, Ready, Running, Blocked, Terminated

---

### 🔹 Multithreading

Allows multiple threads to run **concurrently** within the same process.

**Example:**

* Word Processor:

  * Thread 1: GUI
  * Thread 2: Spell check
  * Thread 3: Auto-save

---

## ✅ **3. Process Scheduling**

---

### 🔹 Foundation & Objectives

**Goal:** Decide *which process/thread to run next* to improve performance.

---

### 🔹 Types of Schedulers

| Scheduler Type  | Role                                     |
| --------------- | ---------------------------------------- |
| **Long-term**   | Loads jobs into memory (job scheduler)   |
| **Short-term**  | Picks one process from ready queue (CPU) |
| **Medium-term** | Swaps processes in/out of memory         |

---

### 🔹 Scheduling Criteria

| Criterion       | Meaning                                     |
| --------------- | ------------------------------------------- |
| CPU Utilization | Keep CPU busy as much as possible           |
| Throughput      | Number of processes completed per unit time |
| Turnaround Time | Completion time − Arrival time              |
| Waiting Time    | Time spent in ready queue                   |
| Response Time   | Time to respond to a request                |

---

### 🔹 Scheduling Algorithms

#### ✅ **1. First-Come, First-Served (FCFS)**

* Non-preemptive
* Scheduled in the order of arrival
* **Problem:** Convoy effect (long job delays others)

#### ✅ **2. Shortest Job First (SJF)**

* Can be preemptive or non-preemptive
* Selects process with **shortest burst time**
* **Optimal** in terms of average waiting time
* **Problem:** Can cause starvation

#### ✅ **3. Round Robin (RR)**

* **Preemptive**
* Each process gets **time quantum** (e.g., 10ms)
* If not completed, goes back to the queue
* **Good for time-sharing**

**Example:**

```plaintext
Ready Queue: P1, P2, P3  
Quantum = 4ms  
P1 (6ms) → executes 4ms, goes back with 2ms  
P2 (3ms) → completes  
...
```

---

### 🔹 Multiprocessor Scheduling

Used in systems with **multiple CPUs or cores**.

**Types:**

* **Symmetric (SMP):** All processors are equal
* **Asymmetric:** One CPU is the master, rest execute assigned tasks

**Challenge:** Load balancing and processor affinity

---

### 🔹 Real-Time Scheduling

Used in **embedded systems, avionics, robotics**, etc.

#### ✅ **1. Rate Monotonic (RM)**

* Static priority assigned based on frequency.
* More frequent = higher priority
* Suitable for **periodic tasks**
* **Preemptive**

#### ✅ **2. Earliest Deadline First (EDF)**

* Dynamic priority based on **earliest deadline**
* **Optimal** for uniprocessors

---

## 📌 **Quick Revision**

| Topic      | Key Points                 |
| ---------- | -------------------------- |
| Process    | Executing program          |
| PCB        | Metadata of process        |
| Thread     | Lightweight process        |
| Scheduling | Decides which process runs |
| RR         | Best for time-sharing      |
| SJF        | Optimal avg waiting time   |
| RM & EDF   | Used in Real-Time OS       |

---

## 📚 Sample Questions (University Pattern)

1. Define process. Explain process states and transitions with diagram.
2. What is PCB? Explain its role in context switching.
3. Compare process and thread with examples.
4. Explain FCFS, SJF, and Round Robin algorithms with Gantt charts.
5. What is multiprocessor scheduling? How is it handled?
6. Explain RM and EDF real-time scheduling algorithms.
7. Write advantages of multithreading. Differentiate ULT and KLT.

---

---

# ✅ **A. Visual Diagrams**

---

### 🔹 1. **Process State Transition Diagram**

![Process State Transition Diagram](https://upload.wikimedia.org/wikipedia/commons/thumb/a/ad/Process_states.svg/1024px-Process_states.svg.png)

---

### 🔹 2. **Gantt Chart Example: FCFS Scheduling**

#### Problem:

```text
Processes: P1 (BT=5), P2 (BT=3), P3 (BT=8)
Arrival Time: All arrive at time 0
```

#### Gantt Chart:

```text
| P1 | P2 | P3 |
0    5    8    16
```

| Process | BT | WT | TAT |
| ------- | -- | -- | --- |
| P1      | 5  | 0  | 5   |
| P2      | 3  | 5  | 8   |
| P3      | 8  | 8  | 16  |

* **Avg WT** = (0+5+8)/3 = 4.33
* **Avg TAT** = (5+8+16)/3 = 9.66

---

### 🔹 3. **Gantt Chart Example: Round Robin**

#### Problem:

```text
Processes: P1 (BT=5), P2 (BT=3), P3 (BT=1)
Time Quantum: 2
```

#### Gantt Chart:

````text
| P1 | P2 | P3 | P1 | P2 | P1 |
0    2    4    5    7    8    10

Completion Times:
P1 = 10, P2 = 8, P3 = 5  
WT = CT - BT - AT

| Process | BT | CT | WT | TAT |
|---------|----|----|----|-----|
| P1      | 5  | 10 | 5  | 10  |
| P2      | 3  | 8  | 5  | 8   |
| P3      | 1  | 5  | 4  | 5   |

---

# ✅ **B. Solved Examples: Scheduling Algorithms**

---

### 🔹 **Shortest Job First (Non-preemptive)**

```text
P1: 6ms
P2: 8ms
P3: 7ms
P4: 3ms
(All arrive at 0)
````

#### Order: P4 → P1 → P3 → P2

#### Gantt Chart:

````text
| P4 | P1 | P3 | P2 |
0    3    9    16   24

| Process | WT | TAT |
|---------|----|-----|
| P1      | 3  | 9   |
| P2      | 16 | 24  |
| P3      | 9  | 16  |
| P4      | 0  | 3   |

Avg WT = (3+16+9+0)/4 = **7**  
Avg TAT = (9+24+16+3)/4 = **13**

---

# ✅ **C. Viva Questions**

| # | Question | Answer |
|--|----------|--------|
| 1 | What is a process? | A program in execution with its own PCB and state. |
| 2 | What is the role of PCB? | Stores all info about process: ID, PC, registers, etc. |
| 3 | Define context switching. | Switching the CPU from one process to another. |
| 4 | What is the difference between process and thread? | Threads share memory and resources of the parent process. |
| 5 | Name common scheduling algorithms. | FCFS, SJF, RR, Priority, RM, EDF. |
| 6 | What is turnaround time? | Completion time − Arrival time. |
| 7 | Define starvation. | A low priority process waits indefinitely. |
| 8 | What is preemption? | Interrupting a process to run another. |

---

# ✅ **D. Lab Practicals: C Programs**

---

### 🔹 1. **Create a new process using fork()**

```c
#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if(pid == 0)
        printf("Child process: PID = %d\n", getpid());
    else
        printf("Parent process: PID = %d\n", getpid());

    return 0;
}
````

---

### 🔹 2. **Thread creation using pthread**

```c
#include <stdio.h>
#include <pthread.h>

void* myThread(void* arg) {
    printf("Hello from thread!\n");
    return NULL;
}

int main() {
    pthread_t tid;
    pthread_create(&tid, NULL, myThread, NULL);
    pthread_join(tid, NULL);
    return 0;
}
```

✅ Compile with: `gcc filename.c -lpthread`

---

# ✅ **Memory Hooks (Mnemonics)**

* **Process States:** New, Ready, Run, Wait, Terminate = **"N-R-R-W-T"**
* **Scheduling Criteria:** *CPU-Through-Turn-Wait-Respond*

---



