
---

## **Module 4 – Deadlocks (Lecture 4 hours)**

### 💡 **Definition of Deadlock**

A **deadlock** is a specific condition when two or more processes are each waiting for another to release a resource, and **none of them ever proceed**. It leads to a situation where processes are **stuck forever**, unable to finish execution.

Example:

* Process A holds resource R1 and waits for R2.
* Process B holds R2 and waits for R1.
  → Both are waiting indefinitely = **deadlock**.

---

### 🧩 **Necessary and Sufficient Conditions for Deadlock (Coffman’s Conditions)**

A deadlock can occur if **all four of these conditions hold simultaneously**:

1. **Mutual Exclusion:**
   At least one resource must be held in a **non-shareable mode**.
   Example: A printer can be used by only one process at a time.

2. **Hold and Wait:**
   A process is holding at least one resource and is **waiting to acquire additional resources** that are currently being held by other processes.

3. **No Preemption:**
   A resource cannot be forcibly taken away; it must be **released voluntarily** by the process holding it.

4. **Circular Wait:**
   A **circular chain of processes exists**, where each process is waiting for a resource held by the next process in the chain.

> 🔐 **All four conditions must be true** for a deadlock to occur.

---

### 🛡️ **Deadlock Prevention**

Deadlock prevention is about **ensuring that at least one of the four necessary conditions cannot hold**, thereby preventing deadlock from happening.

**Strategies:**

* **Mutual Exclusion:**
  Make resources shareable wherever possible (not always feasible, e.g., printers).

* **Hold and Wait:**
  Ensure that processes **request all required resources at once**, or **release held resources before requesting new ones**.

* **No Preemption:**
  If a process requests a resource that is unavailable, **preempt all currently held resources** and restart the process later.

* **Circular Wait:**
  Impose a **total ordering** on all resource types. A process can only request resources in increasing order of enumeration.

---

### 🧮 **Deadlock Avoidance – Banker’s Algorithm**

Deadlock avoidance requires that the **OS must know in advance** all the resources a process will need.

**Banker’s Algorithm (by Dijkstra):**

* Used in systems with **multiple instances of resources**.
* Named after a bank ensuring it has enough funds to cover all loans even in worst-case demands.

**Key Data Structures:**

* **Available:** Resources currently available.
* **Max:** Maximum resources each process may request.
* **Allocation:** Resources currently allocated to each process.
* **Need:** Remaining resources a process may still request.

**Algorithm Steps:**

1. Check if the system is in a **safe state**.
2. Simulate granting the resource.
3. See if the system remains in a safe state.
4. If yes, grant the resource; else, make the process wait.

> 🧠 **Safe State:** There exists a sequence of process execution such that all can finish.

---

### 🔍 **Deadlock Detection**

If prevention or avoidance isn’t used, then **deadlocks must be detected** and resolved.

**For single instance of each resource type:**

* Use a **wait-for graph**.
  If a **cycle is detected**, a deadlock has occurred.

**For multiple instances:**

* Similar to Banker’s algorithm.
* Try to find a safe sequence.
* If not possible, deadlock is present.

---

### 🛠️ **Deadlock Recovery**

Once a deadlock is detected, the system must recover.

**Methods:**

1. **Process Termination:**

   * Terminate **one process at a time** until deadlock breaks.
   * Or terminate **all deadlocked processes** (extreme).

2. **Resource Preemption:**

   * Temporarily **take resources away** from some processes.
   * Requires rollback to a safe state.

**Issues in recovery:**

* **Starvation**: Same process may always be chosen as victim.
* **Rollbacks**: May be difficult if the process can’t be restarted from the same state.

---

### ✅ Summary of Key Concepts:

| Concept          | Description                                                    |
| ---------------- | -------------------------------------------------------------- |
| **Deadlock**     | Processes wait indefinitely on each other.                     |
| **4 Conditions** | Mutual Exclusion, Hold and Wait, No Preemption, Circular Wait. |
| **Prevention**   | Block one of the 4 conditions.                                 |
| **Avoidance**    | Use Banker's Algorithm to ensure safe states.                  |
| **Detection**    | Use wait-for graph or safety check.                            |
| **Recovery**     | Kill processes or preempt resources.                           |

---

