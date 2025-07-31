
---

## ✅ **Module 3: Pipelining and Parallel Processing**

**Lecture Hours: 10**

---

### 🔷 1. **Pipelining – Basic Concepts**

#### 🧠 What is Pipelining?

* Technique to **overlap instruction execution**.
* Like an assembly line: fetch one instruction while decoding another and executing a third.
* Goal: **Improve CPU throughput**, not latency.

---

#### 🔹 Pipeline Stages (Typical 5-Stage):

1. **IF** – Instruction Fetch
2. **ID** – Instruction Decode
3. **EX** – Execute
4. **MEM** – Memory Access
5. **WB** – Write Back

Each instruction moves through these stages one step at a time.

> Like in a washing machine factory: one shirt washes, one rinses, one dries.

---

### 🔷 2. **Throughput and Speedup**

#### Definitions:

* **Throughput**: Number of instructions completed per unit time.
* **Speedup** = Time (non-pipelined) / Time (pipelined)

#### Ideal Case:

* For n instructions and k stages:

  * Non-pipelined time = n × k
  * Pipelined time ≈ k + (n - 1)
  * Speedup ≈ n / (k + n - 1)

> Real speedup is **less** due to hazards and stalls.

---

### 🔷 3. **Pipeline Hazards**

Hazards are situations that **prevent the next instruction** from executing in the next cycle.

| Type           | Cause                                     | Example                         |
| -------------- | ----------------------------------------- | ------------------------------- |
| **Structural** | Resource conflict                         | Memory or ALU shared            |
| **Data**       | Instruction depends on result of previous | ADD R1, R2, R3 → SUB R4, R1, R5 |
| **Control**    | Branching or jumps                        | IF condition is unknown         |

#### Fixes:

* **Stalling**: Insert bubbles (idle cycles)
* **Forwarding**: Pass result directly to next stage
* **Branch Prediction**: Guess path of branch instruction

---

### 🔷 4. **Parallel Processors**

#### What is it?

* Systems with **multiple processors/cores**.
* Perform multiple tasks **simultaneously**.

---

### 🔹 Types of Parallelism:

| Type                        | Example                                       |
| --------------------------- | --------------------------------------------- |
| **Instruction Level (ILP)** | Pipelining, superscalar                       |
| **Thread Level**            | Multithreading                                |
| **Data Level**              | SIMD (Single Instruction Multiple Data), GPUs |
| **Task Level**              | Distributed systems                           |

---

### 🔷 5. **Concurrent Access to Memory**

* In multiprocessors, multiple CPUs may access shared memory simultaneously.
* Issues: **Race conditions**, **data inconsistency**

---

### 🔷 6. **Cache Coherency**

Problem:

* Each CPU core may have its **own cache**.
* If one updates a memory block, others may have **outdated versions**.

#### 🔁 Solution: Cache Coherence Protocols

1. **Write-through**: Write updates to both cache and memory.
2. **MESI Protocol**: Maintains four states (Modified, Exclusive, Shared, Invalid)
3. **Snooping / Directory-based** coherence

---

### 📝 Summary Table

| Concept         | Purpose                             |
| --------------- | ----------------------------------- |
| Pipelining      | Improve throughput                  |
| Hazards         | Stall pipeline or create delays     |
| Speedup         | Evaluate pipeline performance       |
| Parallelism     | Increase computational power        |
| Cache Coherency | Ensure data consistency across CPUs |

---

### 📚 PYQs (Previous Year Questions)

| Question                                                    | Concept Covered          |
| ----------------------------------------------------------- | ------------------------ |
| Explain instruction pipelining with an example.             | Basic pipelining         |
| What are different pipeline hazards? How are they resolved? | Hazards & solutions      |
| Define throughput and speedup. How is speedup calculated?   | Performance metrics      |
| What is cache coherence? Explain with protocols.            | Parallel memory access   |
| Describe various forms of parallelism in modern computers.  | Parallel processors      |
| Explain MESI protocol. Why is it used?                      | Cache coherence protocol |

---

