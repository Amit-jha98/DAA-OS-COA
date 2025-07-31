
---

## ✅ MODULE 3: **Greedy, Dynamic Programming, Branch and Bound, Backtracking**

**Lecture Hours: 10**

---

### 🔷 1. **Brute Force Method**

* Try **all possible solutions**, pick the best one
* **Simple but inefficient**
* Used when input is small

> Example: Try every possible subset for Knapsack problem.

---

### 🔷 2. **Greedy Algorithms**

#### ⚙️ Idea:

Build up a solution **piece by piece**, choosing the **locally optimal** choice at each step.

#### 📌 Works only when:

* Greedy choice leads to global optimum
* **No need to reconsider previous choices**

---

#### 🧩 Examples of Greedy Algorithms:

| Problem                           | Approach                              |
| --------------------------------- | ------------------------------------- |
| **Fractional Knapsack**           | Take highest value/weight first       |
| **Job Sequencing with Deadlines** | Sort by profit, pick job if slot free |
| **Huffman Coding**                | Merge two smallest frequencies        |
| **Minimum Spanning Tree (MST)**   | Kruskal’s and Prim’s algorithms       |
| **Dijkstra’s Algorithm**          | Pick min-distance vertex greedily     |

---

### 🔷 3. **Dynamic Programming (DP)**

#### ⚙️ Idea:

Break problem into **overlapping subproblems**, solve each **once**, store results.

#### Key Characteristics:

* Optimal Substructure
* Overlapping Subproblems
* Uses table (bottom-up) or memoization (top-down)

---

#### 🔁 Greedy vs DP

| Greedy             | DP                                     |
| ------------------ | -------------------------------------- |
| Local best         | Optimal substructure                   |
| Fast               | Uses memory                            |
| Not always optimal | Always optimal for structured problems |

---

#### 🧩 Classic DP Problems:

| Problem                              | Substructure               |
| ------------------------------------ | -------------------------- |
| **Fibonacci**                        | F(n) = F(n−1) + F(n−2)     |
| **0/1 Knapsack**                     | Include or exclude item    |
| **Longest Common Subsequence (LCS)** | If match → 1 + subproblem  |
| **Matrix Chain Multiplication**      | Break at different points  |
| **Rod Cutting**                      | Try all lengths            |
| **TSP**                              | DP with bitmask            |
| **Bin Packing**                      | Fit items in bins using DP |

---

### 🔷 4. **Backtracking**

#### ⚙️ Idea:

Try all solutions recursively and **backtrack** if one fails.

* Used in **combinatorial** problems
* Only feasible when solution space is small

---

#### 🧩 Examples:

* **N-Queens Problem**
* **Sudoku Solver**
* **Graph Coloring**
* **Subset Sum**

---

### 🔷 5. **Branch and Bound**

* An **optimization** over backtracking
* **Prunes** solution space using bounds
* Often used in:

  * **Travelling Salesman Problem (TSP)**
  * **Integer Programming**
  * **Job Assignment**

---

### 🔷 6. **Heuristics**

* Approximate solutions when exact is hard (e.g., NP problems)
* Fast, not guaranteed optimal
* Examples: A\* search, Nearest Neighbor (for TSP)

---

### 🔷 7. Summary Table

| Technique           | Best For                        | Example Problem          |
| ------------------- | ------------------------------- | ------------------------ |
| Brute Force         | Small inputs                    | Subset sum, permutations |
| Greedy              | Structure follows greedy choice | Fractional Knapsack      |
| Dynamic Programming | Overlapping subproblems         | 0/1 Knapsack, LCS        |
| Backtracking        | Combinatorics / constraint      | N-Queens, Sudoku         |
| Branch & Bound      | Optimization with pruning       | TSP, Assignment problem  |
| Heuristics          | Approximate solutions           | TSP, Scheduling          |

---

### 📝 PYQs (Previous Year Questions – What & How)

| Question                                      | How to Answer                                   |
| --------------------------------------------- | ----------------------------------------------- |
| Compare Greedy and DP approaches              | Define both, give Knapsack example              |
| Solve 0/1 Knapsack using DP                   | Table approach with steps                       |
| Explain Job Sequencing Problem                | Greedy choice, sort jobs                        |
| What is Backtracking? Use N-Queens as example | Show recursive approach with backtrack          |
| Write a DP solution for LCS                   | Table filling, recurrence: if match +1 else max |

---


