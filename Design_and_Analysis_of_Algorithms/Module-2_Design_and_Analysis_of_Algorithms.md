
---

## ✅ MODULE 2: **Divide and Conquer, Fast Algorithms & Heaps**

**Lecture Hours: 10**

---

### 🔷 1. **Divide and Conquer (D\&C) Paradigm**

#### ⚙️ Idea:

Break a problem into **smaller sub-problems**, solve them **recursively**, and **combine** their results.

**Steps:**

1. **Divide**: Break the input into parts
2. **Conquer**: Solve subproblems recursively
3. **Combine**: Merge results

#### 📌 Master Theorem often used to analyze these.

---

### 🔶 Examples of Divide and Conquer Algorithms:

---

#### 📌 **1. Binary Search**

**Problem**: Search for `x` in sorted array
**Divide**: Look in left or right half
**Time Complexity**: O(log n)

```cpp
int binarySearch(int arr[], int l, int r, int x) {
  while (l <= r) {
    int mid = l + (r - l) / 2;
    if (arr[mid] == x) return mid;
    if (arr[mid] < x) l = mid + 1;
    else r = mid - 1;
  }
  return -1;
}
```

---

#### 📌 **2. Merge Sort**

* Divide: Array into halves
* Conquer: Recursively sort
* Combine: Merge sorted halves

**Time**: O(n log n)
**Space**: O(n)

---

#### 📌 **3. Quick Sort**

* Choose pivot
* Partition array into `< pivot` and `> pivot`
* Recur on both parts

**Average**: O(n log n)
**Worst**: O(n²) (if pivot is poor)

---

#### 📌 **4. Linear Time Selection (Median of Medians)**

* Find k-th smallest element in linear time
* Uses pivot strategy recursively
* Time: O(n) worst-case
  (Used in QuickSelect)

---

#### 📌 **5. Strassen’s Matrix Multiplication**

Instead of 8 multiplications in normal matrix multiplication:

* Uses only **7 multiplications** with extra additions
* Reduces time from O(n³) to ≈ O(n^2.81)

> Used in scientific computation and graphics

---

#### 📌 **6. Karatsuba’s Algorithm for Multiplication**

Multiplies large integers faster than traditional method:

* Normal: O(n²)
* Karatsuba: O(n^log₂3) ≈ O(n^1.585)

---

### 🔷 2. **Heaps & Heap Sort**

---

### 🌀 What is a Heap?

A special tree-based structure that satisfies:

* **Complete Binary Tree**
* **Heap Property**:

  * **Max Heap**: Parent ≥ children
  * **Min Heap**: Parent ≤ children

---

#### 📌 Operations on Heap:

* **Build-Heap**: O(n)
* **Insert**: O(log n)
* **Delete/Extract Max or Min**: O(log n)

---

### 🌀 **Heap Sort** Algorithm

* Build Max Heap
* Swap root with last element
* Reduce heap size and repeat heapify

**Time**: O(n log n)
**Space**: O(1)

```cpp
void heapify(int arr[], int n, int i) {
  int largest = i;
  int l = 2*i + 1;
  int r = 2*i + 2;
  if (l < n && arr[l] > arr[largest]) largest = l;
  if (r < n && arr[r] > arr[largest]) largest = r;
  if (largest != i) {
    swap(arr[i], arr[largest]);
    heapify(arr, n, largest);
  }
}
```

---

### 🔷 3. Summary Table

| Algorithm         | Time Complexity             | Notes                |
| ----------------- | --------------------------- | -------------------- |
| Binary Search     | O(log n)                    | Needs sorted array   |
| Merge Sort        | O(n log n)                  | Stable, not in-place |
| Quick Sort        | O(n log n) avg, O(n²) worst | In-place, unstable   |
| Strassen’s Matrix | O(n^2.81)                   | Faster matrix mult   |
| Karatsuba         | O(n^1.585)                  | Faster integer mult  |
| Heap Sort         | O(n log n)                  | Not stable           |

---

### 📝 PYQs (with explanation plan)

| Question                                                              | How to answer                               |
| --------------------------------------------------------------------- | ------------------------------------------- |
| Explain divide and conquer technique with an example.                 | Define D\&C → Give Binary Search/Merge Sort |
| Compare Merge Sort and Quick Sort.                                    | Time, space, stability                      |
| Explain Heap Sort with heapify operation.                             | Define heap → steps → code                  |
| Describe Karatsuba algorithm for fast multiplication.                 | Show recursive splitting and formula        |
| What is Strassen’s matrix multiplication? Derive its time complexity. | Show 7 multiplication approach              |

---
