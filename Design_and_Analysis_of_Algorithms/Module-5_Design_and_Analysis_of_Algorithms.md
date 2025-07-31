
---

## ✅ MODULE 5 (DETAILED): **Tractable and Intractable Problems, Complexity Classes, Reductions, Approximation & Randomized Algorithms**

**Lecture Hours: 5**

---

### 🔷 1. **Tractable vs. Intractable Problems**

#### ✅ Tractable Problems:

* Problems that can be solved by an algorithm in **polynomial time**, e.g., O(n), O(n²), O(n³)
* Considered **efficient** or "easy" problems
* Example:

  * Searching (Binary Search → O(log n))
  * Sorting (Merge Sort → O(n log n))
  * Graph traversal (DFS/BFS → O(V + E))

#### ❌ Intractable Problems:

* Problems that **require exponential or super-polynomial time**
* Become infeasible for large inputs
* Example:

  * Travelling Salesman Problem (TSP) → O(n!)
  * Subset Sum → O(2ⁿ)

🧠 **Key Idea:**
Tractable = Solvable efficiently
Intractable = Theoretically solvable, but not practically (yet)

---

### 🔷 2. **Computability & Complexity**

#### 🔍 Computability:

* Whether a problem **can be solved by any algorithm** at all
* Example of uncomputable: **Halting Problem** (no algorithm can determine for all programs if they'll halt or loop forever)

#### 🧠 Complexity:

* **How efficiently** a problem can be solved (in time/space)
* Core concern of DAA

---

### 🔷 3. **Complexity Classes: P, NP, NP-Complete, NP-Hard**

| Class                 | Description                                            | Examples                            |
| --------------------- | ------------------------------------------------------ | ----------------------------------- |
| **P**                 | Solvable in polynomial time                            | Binary Search, DFS, Sorting         |
| **NP**                | Verifiable in polynomial time                          | Sudoku checking, SAT                |
| **NP-Complete (NPC)** | Hardest in NP, if 1 ∈ P → all NP ∈ P                   | 3-SAT, Clique, Hamiltonian Cycle    |
| **NP-Hard**           | At least as hard as NP-Complete, not necessarily in NP | TSP (Optimization), Halting Problem |

---

### 📘 P vs NP — Real-Life Analogy:

> **P**: You can **solve and check** a crossword puzzle quickly.
> **NP**: You can't solve it easily, but if someone gives a **filled-in puzzle**, you can verify correctness fast.

🧠 **Main Question (unsolved till today):**
Does P = NP?
If **YES**, then every NP problem can be solved efficiently.
Currently believed: **P ≠ NP**

---

### 🔷 4. **Cook's Theorem**

* First to **prove** that a problem (SAT) is **NP-Complete**
* Shows: If SAT ∈ P, then **every** NP problem ∈ P
* Key to understanding **complexity relationships**

---

### 🔷 5. **Standard NP-Complete Problems**

These are "base" problems to which many others can be reduced:

| Problem                         | Domain                                 |
| ------------------------------- | -------------------------------------- |
| **3-SAT**                       | Logic / Boolean expressions            |
| **Clique**                      | Graph theory                           |
| **Vertex Cover**                | Graph theory                           |
| **Subset Sum**                  | Arithmetic / sets                      |
| **Hamiltonian Cycle**           | Paths in graphs                        |
| **Partition Problem**           | Divide integers into equal-sum subsets |
| **Knapsack (Decision version)** | Combinatorics                          |

---

### 🔷 6. **Reduction Techniques**

Reductions allow us to **prove that a problem is NP-Complete** by showing it’s at least as hard as an existing one.

#### 🧠 What is a reduction?

A way to **transform one problem into another**, in **polynomial time**, such that a solution to the second gives a solution to the first.

#### Example:

* Reduce **3-SAT → Clique**
* Meaning: If you can solve Clique, you can solve 3-SAT.

---

### 🔷 7. **Approximation Algorithms**

Used for **NP-Hard optimization problems** where:

* Exact solution is **too slow**
* We need an answer **close to optimal**

#### Features:

* Runs in **polynomial time**
* Returns solution within **some factor** of the optimal (called **approximation ratio**)

#### Examples:

| Problem          | Approx. Algorithm                 |
| ---------------- | --------------------------------- |
| **Vertex Cover** | 2-approximation                   |
| **TSP** (metric) | 1.5-approximation (Christofides') |
| **Knapsack**     | Greedy fractional approach        |

---

### 🔷 8. **Randomized Algorithms**

Algorithms that use **random numbers** at some decision points.

#### 🔍 Why use them?

* Simpler logic
* Better average performance
* Sometimes the **only way** to beat worst-case complexity

---

#### 📌 Types:

| Type            | Accuracy                              | Example                          |
| --------------- | ------------------------------------- | -------------------------------- |
| **Las Vegas**   | Always correct, but time may vary     | Randomized QuickSort             |
| **Monte Carlo** | Fixed time, but small chance of error | Primality testing (Miller-Rabin) |

---

### 🧠 Summary Flow (Visual):

```
Problems
│
├─ Solvable?
│   ├─ Yes → Computable
│   │   ├─ Efficient (P)
│   │   └─ Verifiable (NP)
│   │         ├─ Hardest (NP-Complete)
│   │         └─ Beyond NP (NP-Hard)
│   └─ No → Uncomputable (e.g., Halting Problem)
```

---

### 📝 Previous Year Questions (PYQs)

| Question                                          | How to Answer                            |
| ------------------------------------------------- | ---------------------------------------- |
| Define P, NP, NP-Complete, NP-Hard with examples  | Tabular format, with real examples       |
| What is Cook’s Theorem? Explain its significance. | SAT → first NPC proof                    |
| List 3 NP-Complete problems and their domains.    | E.g., 3-SAT, Clique, Subset Sum          |
| Explain approximation algorithm with an example.  | Vertex Cover, show approximation ratio   |
| What are randomized algorithms? List types.       | Define, compare Las Vegas vs Monte Carlo |

---

