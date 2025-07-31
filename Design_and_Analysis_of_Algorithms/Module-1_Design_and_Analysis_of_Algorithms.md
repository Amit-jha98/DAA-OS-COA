
---

## ✅ **MODULE 1: Introduction to Algorithms and Their Analysis**

**Lecture Hours: 10**

---

### 🔷 1. **What Is an Algorithm?**

An **algorithm** is a **finite, step-by-step procedure** to solve a problem or perform a computation.

#### 📌 Real-life example:

To make tea:

1. Boil water
2. Add tea leaves
3. Add sugar/milk
4. Pour into cup
   → This is an **algorithm** for tea-making.

#### ✅ Properties of a Good Algorithm:

| Property          | Description                         |
| ----------------- | ----------------------------------- |
| **Input**         | Accepts 0 or more inputs            |
| **Output**        | Produces at least one result        |
| **Definiteness**  | Each instruction is precise         |
| **Finiteness**    | Terminates after finite steps       |
| **Effectiveness** | Simple enough to implement manually |

---

### 🔷 2. **Algorithm Analysis – Why Do We Need It?**

We need to analyze algorithms to:

* Compare multiple solutions
* Predict scalability with input size
* Choose the most efficient approach for large inputs

---

### 🔷 3. **Asymptotic Notations**

Asymptotic notation describes **how running time or space grows** with input size (n → ∞).

#### ✅ Big-O (O): Worst-case upper bound

Means algorithm **won’t be slower** than this.

> Example: Linear Search → O(n)

#### ✅ Omega (Ω): Best-case lower bound

Algorithm **won’t be faster** than this.

> Example: Bubble Sort (best-case: Ω(n))

#### ✅ Theta (Θ): Tight bound (both upper & lower)

Exact growth rate.

> Binary Search → Θ(log n)

#### 📈 Visual Summary:

```
f(n) ∈ O(g(n)) ⇒ f(n) grows at most like g(n)
f(n) ∈ Ω(g(n)) ⇒ f(n) grows at least like g(n)
f(n) ∈ Θ(g(n)) ⇒ f(n) grows exactly like g(n)
```

---

### 🔷 4. **Performance Metrics**

| Metric           | What It Measures             | Example                     |
| ---------------- | ---------------------------- | --------------------------- |
| Time Complexity  | Number of operations         | O(n), O(log n), O(n²), etc. |
| Space Complexity | Memory used during execution | O(1), O(n)                  |

#### ⏳ Time vs. 💾 Space Trade-off:

Sometimes you use **extra memory** to save time.

> Example: Memoization in DP (store results to avoid recomputation)

---

### 🔷 5. **Solving Recurrences (For Recursive Algorithms)**

To analyze time for recursive algorithms like Merge Sort or Binary Search.

#### ➤ **Substitution Method**

1. Guess the time complexity
2. Prove using **mathematical induction**

> Used in theoretical proofs

#### ➤ **Recursion Tree Method**

* Visualize recursive calls as a **tree**
* Add cost at each level
* Sum all levels

> Merge Sort example: T(n) = 2T(n/2) + n
> → Tree depth = log n, work per level = n
> → Total = n log n

#### ➤ **Master’s Theorem**

Applies to recurrences like:
**T(n) = aT(n/b) + f(n)**
where:

* a ≥ 1 is the number of subproblems
* n/b is size of each subproblem
* f(n) is cost outside recursion (e.g. merging)

| Case | Compare f(n) to n^log\_b(a)                     | Result                      |
| ---- | ----------------------------------------------- | --------------------------- |
| 1    | f(n) = O(n^c), c < log\_b(a)                    | T(n) = Θ(n^log\_b(a))       |
| 2    | f(n) = Θ(n^log\_b(a))                           | T(n) = Θ(n^log\_b(a) log n) |
| 3    | f(n) = Ω(n^c), c > log\_b(a) & reg. cond. holds | T(n) = Θ(f(n))              |

#### 📌 Example:

T(n) = 2T(n/2) + n
→ a = 2, b = 2, f(n) = n
→ n^log\_b(a) = n^1 = n
→ Case 2 → T(n) = Θ(n log n)

---

### 🔷 6. **Worked-Out Examples**

#### 🧪 Example 1: Binary Search

T(n) = T(n/2) + 1
→ Use Master’s Theorem
a = 1, b = 2, f(n) = 1
n^log\_b(a) = n^0 = 1
→ Case 2 → T(n) = Θ(log n)

---

#### 🧪 Example 2: Merge Sort

T(n) = 2T(n/2) + n
→ a = 2, b = 2, f(n) = n
→ Case 2 → T(n) = Θ(n log n)

---

#### 🧪 Example 3: Linear Search (Iterative)

T(n) = Θ(n) — Directly
Worst case: element at the end → check all n items

---

### 📝 PYQs (Previous Year Questions with Approach)

| Question                                                      | How to Attempt                                    |
| ------------------------------------------------------------- | ------------------------------------------------- |
| Define and explain Big-O, Omega, Theta.                       | Give formal definitions with graphs and examples  |
| Analyze T(n) = 3T(n/2) + n using Master’s Theorem.            | Identify a, b, f(n), apply appropriate case       |
| Compare space and time trade-off with a real-world algorithm. | Explain Memoization vs Recursion                  |
| Solve T(n) = 2T(n/2) + n² using Recursion Tree.               | Draw tree, sum costs, find total                  |
| What are characteristics of an algorithm? Give an example.    | List and explain all five characteristics clearly |

---


