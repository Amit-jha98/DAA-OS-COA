# Design and Analysis of Algorithms (PCC CS 404) - Question Bank with Answers

## Module 1: Algorithm Analysis & Complexity (10 Hours)

### 1. **Define algorithm and explain the characteristics of a good algorithm.**

**Answer:**
An algorithm is a finite sequence of well-defined, unambiguous instructions for solving a computational problem.

**Characteristics of a good algorithm:**
- **Input:** Zero or more inputs
- **Output:** At least one output
- **Definiteness:** Each step must be clear and unambiguous
- **Finiteness:** Must terminate after finite number of steps
- **Effectiveness:** Each step must be basic enough to be carried out
- **Correctness:** Should produce correct output for all valid inputs
- **Efficiency:** Should use minimum time and space resources

**Additional qualities:**
- **Generality:** Should work for a set of inputs
- **Simplicity:** Easy to understand and implement
- **Optimality:** Best possible solution in terms of time/space

### 2. **Explain asymptotic analysis with Big O, Omega, and Theta notations.**

**Answer:**

**Asymptotic Notation:**
Used to describe the running time of algorithms as input size approaches infinity.

**1. Big O Notation (Upper Bound):**
- f(n) = O(g(n)) if there exist positive constants c and n₀ such that:
- f(n) ≤ c·g(n) for all n ≥ n₀
- Represents worst-case complexity

**2. Omega Notation (Lower Bound):**
- f(n) = Ω(g(n)) if there exist positive constants c and n₀ such that:
- f(n) ≥ c·g(n) for all n ≥ n₀
- Represents best-case complexity

**3. Theta Notation (Tight Bound):**
- f(n) = Θ(g(n)) if f(n) = O(g(n)) and f(n) = Ω(g(n))
- Represents average-case complexity

**Examples:**
```
Algorithm: Linear Search
Best case: Ω(1) - element found at first position
Worst case: O(n) - element at last position or not found
Average case: Θ(n) - element found at middle on average
```

**Common Complexity Classes:**
- O(1) - Constant time
- O(log n) - Logarithmic time
- O(n) - Linear time
- O(n log n) - Linearithmic time
- O(n²) - Quadratic time
- O(2ⁿ) - Exponential time

### 3. **Analyze the time complexity of recursive algorithms using recurrence relations.**

**Answer:**

**Methods for Solving Recurrence Relations:**

**1. Substitution Method:**
- Guess the solution
- Verify by mathematical induction
- Find constants

**Example:** T(n) = 2T(n/2) + n
```
Guess: T(n) = O(n log n)
Assume: T(k) ≤ ck log k for k < n
Prove: T(n) ≤ cn log n

T(n) = 2T(n/2) + n
     ≤ 2c(n/2)log(n/2) + n
     = cn(log n - 1) + n
     = cn log n - cn + n
     ≤ cn log n (if c ≥ 1)
```

**2. Recursion Tree Method:**
- Draw tree showing recursive calls
- Calculate cost at each level
- Sum costs across all levels

**Example:** T(n) = 2T(n/2) + n
```
Level 0:           n
Level 1:       n/2   n/2
Level 2:     n/4 n/4 n/4 n/4
...

Cost per level: n
Number of levels: log n
Total cost: n × log n = O(n log n)
```

**3. Master's Theorem:**
For recurrences of the form T(n) = aT(n/b) + f(n):

**Case 1:** If f(n) = O(n^(log_b(a)-ε)) for some ε > 0
Then T(n) = Θ(n^log_b(a))

**Case 2:** If f(n) = Θ(n^log_b(a))
Then T(n) = Θ(n^log_b(a) × log n)

**Case 3:** If f(n) = Ω(n^(log_b(a)+ε)) for some ε > 0 and af(n/b) ≤ cf(n)
Then T(n) = Θ(f(n))

### 4. **Compare time and space trade-offs in algorithm design.**

**Answer:**

**Time-Space Trade-off:**
The principle that faster algorithms often require more space and vice versa.

**Examples:**

**1. Lookup Tables vs Computation:**
```python
# Space-efficient (more time)
def fibonacci_recursive(n):
    if n <= 1: return n
    return fibonacci_recursive(n-1) + fibonacci_recursive(n-2)
# Time: O(2^n), Space: O(n)

# Time-efficient (more space)
def fibonacci_memoized(n, memo={}):
    if n in memo: return memo[n]
    if n <= 1: return n
    memo[n] = fibonacci_memoized(n-1, memo) + fibonacci_memoized(n-2, memo)
    return memo[n]
# Time: O(n), Space: O(n)
```

**2. String Matching:**
```python
# Boyer-Moore preprocessing
# More space for skip tables = Faster search time
```

**Trade-off Considerations:**
- **Memory constraints:** Limited RAM in embedded systems
- **Performance requirements:** Real-time applications
- **Scalability:** Large datasets
- **Hardware characteristics:** Cache size, memory bandwidth

### 5. **Analyze the performance measurement techniques for algorithms.**

**Answer:**

**Performance Measurement Approaches:**

**1. Theoretical Analysis:**
- Mathematical analysis of algorithms
- Asymptotic complexity analysis
- Independent of hardware/implementation

**2. Empirical Analysis:**
- Actual implementation and testing
- Measure real execution time
- Hardware and implementation dependent

**3. Hybrid Analysis:**
- Combine theoretical and empirical approaches
- Validate theoretical predictions with experiments

**Measurement Techniques:**

**1. Time Complexity Measurement:**
```python
import time

def measure_time(func, *args):
    start_time = time.time()
    result = func(*args)
    end_time = time.time()
    execution_time = end_time - start_time
    return result, execution_time
```

**2. Space Complexity Measurement:**
```python
import sys

def measure_memory(func, *args):
    # Measure memory usage before and after
    before = sys.getsizeof(args)
    result = func(*args)
    after = sys.getsizeof(result)
    return result, after - before
```

**3. Profiling Tools:**
- Built-in profilers (cProfile in Python)
- Memory profilers
- Performance counters

**Benchmarking Best Practices:**
- Multiple test runs
- Various input sizes
- Statistical analysis of results
- Control for external factors

## Module 2: Divide and Conquer & Heap (10 Hours)

### 6. **Explain the divide and conquer paradigm with Binary Search example.**

**Answer:**

**Divide and Conquer Paradigm:**
A problem-solving approach that breaks down problems into smaller subproblems.

**Steps:**
1. **Divide:** Break problem into smaller subproblems
2. **Conquer:** Solve subproblems recursively
3. **Combine:** Merge solutions of subproblems

**Binary Search Example:**
```python
def binary_search(arr, target, left, right):
    # Base case
    if left > right:
        return -1
    
    # Divide: Find middle point
    mid = (left + right) // 2
    
    # Conquer: Check if target found
    if arr[mid] == target:
        return mid
    elif arr[mid] > target:
        # Search left half
        return binary_search(arr, target, left, mid - 1)
    else:
        # Search right half
        return binary_search(arr, target, mid + 1, right)

# Time Complexity: O(log n)
# Space Complexity: O(log n) due to recursion stack
```

**Iterative Version:**
```python
def binary_search_iterative(arr, target):
    left, right = 0, len(arr) - 1
    
    while left <= right:
        mid = (left + right) // 2
        if arr[mid] == target:
            return mid
        elif arr[mid] > target:
            right = mid - 1
        else:
            left = mid + 1
    
    return -1

# Time Complexity: O(log n)
# Space Complexity: O(1)
```

### 7. **Compare and implement Quick Sort and Merge Sort algorithms.**

**Answer:**

**Merge Sort:**
```python
def merge_sort(arr):
    if len(arr) <= 1:
        return arr
    
    # Divide
    mid = len(arr) // 2
    left_half = merge_sort(arr[:mid])
    right_half = merge_sort(arr[mid:])
    
    # Combine
    return merge(left_half, right_half)

def merge(left, right):
    result = []
    i = j = 0
    
    while i < len(left) and j < len(right):
        if left[i] <= right[j]:
            result.append(left[i])
            i += 1
        else:
            result.append(right[j])
            j += 1
    
    result.extend(left[i:])
    result.extend(right[j:])
    return result

# Time Complexity: O(n log n) - all cases
# Space Complexity: O(n)
```

**Quick Sort:**
```python
def quick_sort(arr, low, high):
    if low < high:
        # Divide: Partition array
        pi = partition(arr, low, high)
        
        # Conquer: Sort subarrays
        quick_sort(arr, low, pi - 1)
        quick_sort(arr, pi + 1, high)

def partition(arr, low, high):
    pivot = arr[high]  # Choose last element as pivot
    i = low - 1
    
    for j in range(low, high):
        if arr[j] <= pivot:
            i += 1
            arr[i], arr[j] = arr[j], arr[i]
    
    arr[i + 1], arr[high] = arr[high], arr[i + 1]
    return i + 1

# Time Complexity: 
# Best/Average: O(n log n)
# Worst: O(n²)
# Space Complexity: O(log n) average, O(n) worst
```

**Comparison:**
| Aspect | Merge Sort | Quick Sort |
|--------|------------|------------|
| Worst Case | O(n log n) | O(n²) |
| Average Case | O(n log n) | O(n log n) |
| Best Case | O(n log n) | O(n log n) |
| Space | O(n) | O(log n) avg |
| Stability | Stable | Not stable |
| In-place | No | Yes |

### 8. **Explain linear time selection algorithm (QuickSelect).**

**Answer:**

**QuickSelect Algorithm:**
Finds the kth smallest element in an unsorted array in average O(n) time.

```python
def quickselect(arr, k):
    """Find kth smallest element (0-indexed)"""
    if len(arr) == 1:
        return arr[0]
    
    pivot = arr[len(arr) // 2]
    
    # Partition array around pivot
    lows = [x for x in arr if x < pivot]
    highs = [x for x in arr if x > pivot]
    pivots = [x for x in arr if x == pivot]
    
    if k < len(lows):
        return quickselect(lows, k)
    elif k < len(lows) + len(pivots):
        return pivot
    else:
        return quickselect(highs, k - len(lows) - len(pivots))

# Optimized in-place version
def quickselect_inplace(arr, left, right, k):
    if left == right:
        return arr[left]
    
    pivot_index = partition_for_select(arr, left, right)
    
    if k == pivot_index:
        return arr[k]
    elif k < pivot_index:
        return quickselect_inplace(arr, left, pivot_index - 1, k)
    else:
        return quickselect_inplace(arr, pivot_index + 1, right, k)

def partition_for_select(arr, left, right):
    pivot = arr[right]
    i = left
    
    for j in range(left, right):
        if arr[j] <= pivot:
            arr[i], arr[j] = arr[j], arr[i]
            i += 1
    
    arr[i], arr[right] = arr[right], arr[i]
    return i

# Time Complexity:
# Average: O(n)
# Worst: O(n²)
# Space: O(log n) average
```

### 9. **Implement Strassen's Matrix Multiplication algorithm.**

**Answer:**

**Strassen's Algorithm:**
Reduces matrix multiplication complexity from O(n³) to O(n^2.807).

```python
import numpy as np

def strassen_multiply(A, B):
    n = len(A)
    
    # Base case for small matrices
    if n <= 64:  # Threshold for efficiency
        return np.dot(A, B)
    
    # Pad matrices to make them even-sized
    if n % 2 != 0:
        A = pad_matrix(A)
        B = pad_matrix(B)
        n = len(A)
    
    # Divide matrices into quadrants
    mid = n // 2
    
    A11 = A[:mid, :mid]
    A12 = A[:mid, mid:]
    A21 = A[mid:, :mid]
    A22 = A[mid:, mid:]
    
    B11 = B[:mid, :mid]
    B12 = B[:mid, mid:]
    B21 = B[mid:, :mid]
    B22 = B[mid:, mid:]
    
    # Calculate the 7 products
    M1 = strassen_multiply(A11 + A22, B11 + B22)
    M2 = strassen_multiply(A21 + A22, B11)
    M3 = strassen_multiply(A11, B12 - B22)
    M4 = strassen_multiply(A22, B21 - B11)
    M5 = strassen_multiply(A11 + A12, B22)
    M6 = strassen_multiply(A21 - A11, B11 + B12)
    M7 = strassen_multiply(A12 - A22, B21 + B22)
    
    # Calculate result quadrants
    C11 = M1 + M4 - M5 + M7
    C12 = M3 + M5
    C21 = M2 + M4
    C22 = M1 - M2 + M3 + M6
    
    # Combine quadrants
    C = np.vstack([
        np.hstack([C11, C12]),
        np.hstack([C21, C22])
    ])
    
    return C

def pad_matrix(matrix):
    n = len(matrix)
    new_size = n + 1
    padded = np.zeros((new_size, new_size))
    padded[:n, :n] = matrix
    return padded

# Time Complexity: O(n^2.807)
# Space Complexity: O(n²)
```

### 10. **Explain heap data structure and implement heap sort.**

**Answer:**

**Heap Properties:**
- **Max Heap:** Parent ≥ Children
- **Min Heap:** Parent ≤ Children
- **Complete Binary Tree:** All levels filled except possibly last

**Heap Implementation:**
```python
class MaxHeap:
    def __init__(self):
        self.heap = []
    
    def parent(self, i):
        return (i - 1) // 2
    
    def left_child(self, i):
        return 2 * i + 1
    
    def right_child(self, i):
        return 2 * i + 2
    
    def insert(self, key):
        self.heap.append(key)
        self._heapify_up(len(self.heap) - 1)
    
    def _heapify_up(self, i):
        while i > 0 and self.heap[self.parent(i)] < self.heap[i]:
            self.heap[i], self.heap[self.parent(i)] = \
                self.heap[self.parent(i)], self.heap[i]
            i = self.parent(i)
    
    def extract_max(self):
        if not self.heap:
            return None
        
        max_val = self.heap[0]
        self.heap[0] = self.heap[-1]
        self.heap.pop()
        
        if self.heap:
            self._heapify_down(0)
        
        return max_val
    
    def _heapify_down(self, i):
        largest = i
        left = self.left_child(i)
        right = self.right_child(i)
        
        if (left < len(self.heap) and 
            self.heap[left] > self.heap[largest]):
            largest = left
        
        if (right < len(self.heap) and 
            self.heap[right] > self.heap[largest]):
            largest = right
        
        if largest != i:
            self.heap[i], self.heap[largest] = \
                self.heap[largest], self.heap[i]
            self._heapify_down(largest)

def build_max_heap(arr):
    """Build heap from array in O(n) time"""
    n = len(arr)
    # Start from last non-leaf node
    for i in range(n // 2 - 1, -1, -1):
        heapify_down(arr, n, i)

def heapify_down(arr, n, i):
    largest = i
    left = 2 * i + 1
    right = 2 * i + 2
    
    if left < n and arr[left] > arr[largest]:
        largest = left
    
    if right < n and arr[right] > arr[largest]:
        largest = right
    
    if largest != i:
        arr[i], arr[largest] = arr[largest], arr[i]
        heapify_down(arr, n, largest)

def heap_sort(arr):
    n = len(arr)
    
    # Build max heap
    build_max_heap(arr)
    
    # Extract elements one by one
    for i in range(n - 1, 0, -1):
        # Move current root to end
        arr[0], arr[i] = arr[i], arr[0]
        
        # Restore heap property
        heapify_down(arr, i, 0)
    
    return arr

# Time Complexity:
# Build Heap: O(n)
# Heap Sort: O(n log n)
# Space Complexity: O(1)
```

## Module 3: Greedy & Dynamic Programming (10 Hours)

### 11. **Explain the Greedy algorithm paradigm with Minimum Spanning Tree example.**

**Answer:**

**Greedy Algorithm Paradigm:**
Makes locally optimal choices at each step, hoping to find global optimum.

**Properties:**
- **Greedy Choice Property:** Local optimum leads to global optimum
- **Optimal Substructure:** Optimal solution contains optimal solutions to subproblems

**Kruskal's Algorithm for MST:**
```python
class UnionFind:
    def __init__(self, n):
        self.parent = list(range(n))
        self.rank = [0] * n
    
    def find(self, x):
        if self.parent[x] != x:
            self.parent[x] = self.find(self.parent[x])
        return self.parent[x]
    
    def union(self, x, y):
        px, py = self.find(x), self.find(y)
        if px == py:
            return False
        
        if self.rank[px] < self.rank[py]:
            px, py = py, px
        
        self.parent[py] = px
        if self.rank[px] == self.rank[py]:
            self.rank[px] += 1
        
        return True

def kruskal_mst(n, edges):
    """
    Find MST using Kruskal's algorithm
    edges: list of (weight, u, v)
    """
    # Sort edges by weight
    edges.sort()
    
    uf = UnionFind(n)
    mst = []
    total_weight = 0
    
    for weight, u, v in edges:
        if uf.union(u, v):
            mst.append((u, v, weight))
            total_weight += weight
            
            if len(mst) == n - 1:
                break
    
    return mst, total_weight

# Time Complexity: O(E log E)
# Space Complexity: O(V)
```

**Prim's Algorithm for MST:**
```python
import heapq

def prim_mst(graph, start=0):
    """
    graph: adjacency list representation
    graph[u] = [(v, weight), ...]
    """
    n = len(graph)
    visited = [False] * n
    min_heap = [(0, start, -1)]  # (weight, vertex, parent)
    mst = []
    total_weight = 0
    
    while min_heap:
        weight, u, parent = heapq.heappop(min_heap)
        
        if visited[u]:
            continue
        
        visited[u] = True
        if parent != -1:
            mst.append((parent, u, weight))
            total_weight += weight
        
        for v, w in graph[u]:
            if not visited[v]:
                heapq.heappush(min_heap, (w, v, u))
    
    return mst, total_weight

# Time Complexity: O(E log V)
# Space Complexity: O(V)
```

### 12. **Solve the 0/1 Knapsack problem using Dynamic Programming.**

**Answer:**

**0/1 Knapsack Problem:**
Given items with weights and values, maximize value in knapsack of capacity W.

**Dynamic Programming Solution:**
```python
def knapsack_01(weights, values, capacity):
    n = len(weights)
    
    # Create DP table
    dp = [[0 for _ in range(capacity + 1)] for _ in range(n + 1)]
    
    # Fill DP table
    for i in range(1, n + 1):
        for w in range(1, capacity + 1):
            # Don't include current item
            dp[i][w] = dp[i-1][w]
            
            # Include current item if possible
            if weights[i-1] <= w:
                include_value = dp[i-1][w - weights[i-1]] + values[i-1]
                dp[i][w] = max(dp[i][w], include_value)
    
    # Backtrack to find selected items
    selected_items = []
    w = capacity
    for i in range(n, 0, -1):
        if dp[i][w] != dp[i-1][w]:
            selected_items.append(i-1)
            w -= weights[i-1]
    
    return dp[n][capacity], selected_items[::-1]

# Space-optimized version
def knapsack_01_optimized(weights, values, capacity):
    n = len(weights)
    dp = [0] * (capacity + 1)
    
    for i in range(n):
        # Traverse from right to left to avoid using updated values
        for w in range(capacity, weights[i] - 1, -1):
            dp[w] = max(dp[w], dp[w - weights[i]] + values[i])
    
    return dp[capacity]

# Example usage
weights = [1, 3, 4, 5]
values = [1, 4, 5, 7]
capacity = 7

max_value, items = knapsack_01(weights, values, capacity)
print(f"Maximum value: {max_value}")
print(f"Selected items: {items}")

# Time Complexity: O(nW)
# Space Complexity: O(nW) or O(W) optimized
```

### 13. **Implement Matrix Chain Multiplication using Dynamic Programming.**

**Answer:**

**Matrix Chain Multiplication:**
Find optimal parenthesization to minimize scalar multiplications.

```python
def matrix_chain_multiplication(dimensions):
    """
    dimensions: array where dimensions[i-1] x dimensions[i] is size of matrix i
    """
    n = len(dimensions) - 1  # number of matrices
    
    # dp[i][j] = minimum cost to multiply matrices from i to j
    dp = [[0 for _ in range(n)] for _ in range(n)]
    
    # s[i][j] = optimal split point for matrices from i to j
    s = [[0 for _ in range(n)] for _ in range(n)]
    
    # Fill dp table for chains of increasing length
    for length in range(2, n + 1):  # chain length
        for i in range(n - length + 1):
            j = i + length - 1
            dp[i][j] = float('inf')
            
            # Try all possible split points
            for k in range(i, j):
                cost = (dp[i][k] + dp[k+1][j] + 
                       dimensions[i] * dimensions[k+1] * dimensions[j+1])
                
                if cost < dp[i][j]:
                    dp[i][j] = cost
                    s[i][j] = k
    
    return dp[0][n-1], s

def print_optimal_parentheses(s, i, j):
    """Print optimal parenthesization"""
    if i == j:
        print(f"M{i+1}", end="")
    else:
        print("(", end="")
        print_optimal_parentheses(s, i, s[i][j])
        print_optimal_parentheses(s, s[i][j] + 1, j)
        print(")", end="")

# Example: Matrices A1(1x2), A2(2x3), A3(3x4), A4(4x5)
dimensions = [1, 2, 3, 4, 5]
min_cost, split_points = matrix_chain_multiplication(dimensions)

print(f"Minimum cost: {min_cost}")
print("Optimal parenthesization: ", end="")
print_optimal_parentheses(split_points, 0, len(dimensions) - 2)
print()

# Time Complexity: O(n³)
# Space Complexity: O(n²)
```

### 14. **Compare Greedy vs Dynamic Programming approaches.**

**Answer:**

**Comparison Table:**

| Aspect | Greedy | Dynamic Programming |
|--------|--------|-------------------|
| **Strategy** | Local optimal choice | Optimal substructure |
| **Guarantee** | May not find global optimum | Finds global optimum |
| **Efficiency** | Generally faster | More time/space |
| **Memory** | Less memory | More memory (memoization) |
| **Approach** | Top-down | Bottom-up or memoized |

**When to Use Greedy:**
- Problem has greedy choice property
- Local optimum leads to global optimum
- Examples: MST, Huffman coding, Dijkstra's

**When to Use Dynamic Programming:**
- Optimal substructure exists
- Overlapping subproblems
- Examples: Knapsack, LCS, matrix chain multiplication

**Example Comparison - Coin Change:**

**Greedy Approach:**
```python
def coin_change_greedy(coins, amount):
    """Works only for canonical coin systems"""
    coins.sort(reverse=True)
    result = []
    
    for coin in coins:
        while amount >= coin:
            result.append(coin)
            amount -= coin
    
    return result if amount == 0 else None

# Time: O(n log n), Space: O(1)
# May not work for all coin systems
```

**Dynamic Programming Approach:**
```python
def coin_change_dp(coins, amount):
    """Always finds optimal solution"""
    dp = [float('inf')] * (amount + 1)
    dp[0] = 0
    parent = [-1] * (amount + 1)
    
    for i in range(1, amount + 1):
        for coin in coins:
            if coin <= i and dp[i - coin] + 1 < dp[i]:
                dp[i] = dp[i - coin] + 1
                parent[i] = coin
    
    if dp[amount] == float('inf'):
        return None
    
    # Reconstruct solution
    result = []
    curr = amount
    while curr > 0:
        coin = parent[curr]
        result.append(coin)
        curr -= coin
    
    return result

# Time: O(amount × coins), Space: O(amount)
# Always finds optimal solution
```

### 15. **Implement Huffman Coding algorithm.**

**Answer:**

**Huffman Coding:**
Creates optimal prefix-free code based on character frequencies.

```python
import heapq
from collections import defaultdict, Counter

class HuffmanNode:
    def __init__(self, char=None, freq=0, left=None, right=None):
        self.char = char
        self.freq = freq
        self.left = left
        self.right = right
    
    def __lt__(self, other):
        return self.freq < other.freq

def build_huffman_tree(text):
    """Build Huffman tree from text"""
    # Count character frequencies
    freq = Counter(text)
    
    # Create priority queue with leaf nodes
    heap = [HuffmanNode(char, frequency) for char, frequency in freq.items()]
    heapq.heapify(heap)
    
    # Build tree bottom-up
    while len(heap) > 1:
        left = heapq.heappop(heap)
        right = heapq.heappop(heap)
        
        merged = HuffmanNode(
            freq=left.freq + right.freq,
            left=left,
            right=right
        )
        
        heapq.heappush(heap, merged)
    
    return heap[0] if heap else None

def build_codes(root):
    """Build character codes from Huffman tree"""
    if not root:
        return {}
    
    codes = {}
    
    def dfs(node, code):
        if node.char:  # Leaf node
            codes[node.char] = code or "0"  # Handle single character case
            return
        
        if node.left:
            dfs(node.left, code + "0")
        if node.right:
            dfs(node.right, code + "1")
    
    dfs(root, "")
    return codes

def huffman_encode(text):
    """Encode text using Huffman coding"""
    if not text:
        return "", None
    
    root = build_huffman_tree(text)
    codes = build_codes(root)
    
    encoded = "".join(codes[char] for char in text)
    return encoded, root

def huffman_decode(encoded_text, root):
    """Decode Huffman encoded text"""
    if not encoded_text or not root:
        return ""
    
    decoded = []
    current = root
    
    for bit in encoded_text:
        if bit == "0":
            current = current.left
        else:
            current = current.right
        
        if current.char:  # Leaf node
            decoded.append(current.char)
            current = root
    
    return "".join(decoded)

def calculate_compression_ratio(original, encoded, codes):
    """Calculate compression statistics"""
    original_bits = len(original) * 8  # ASCII encoding
    encoded_bits = len(encoded)
    
    print("Character frequencies and codes:")
    for char, code in codes.items():
        print(f"'{char}': {code}")
    
    print(f"\nOriginal size: {original_bits} bits")
    print(f"Encoded size: {encoded_bits} bits")
    print(f"Compression ratio: {original_bits/encoded_bits:.2f}")
    print(f"Space saved: {(1 - encoded_bits/original_bits)*100:.1f}%")

# Example usage
text = "ABRACADABRA"
encoded, root = huffman_encode(text)
codes = build_codes(root)
decoded = huffman_decode(encoded, root)

print(f"Original: {text}")
print(f"Encoded: {encoded}")
print(f"Decoded: {decoded}")
calculate_compression_ratio(text, encoded, codes)

# Time Complexity: O(n log n)
# Space Complexity: O(n)
```

## Module 4: Graph Algorithms (8 Hours)

### 16. **Implement Depth-First Search (DFS) and Breadth-First Search (BFS).**

**Answer:**

**Graph Representation:**
```python
from collections import defaultdict, deque

class Graph:
    def __init__(self):
        self.graph = defaultdict(list)
        self.vertices = set()
    
    def add_edge(self, u, v):
        self.graph[u].append(v)
        self.vertices.add(u)
        self.vertices.add(v)
    
    def add_vertex(self, v):
        self.vertices.add(v)
```

**Depth-First Search (DFS):**
```python
def dfs_recursive(graph, start, visited=None):
    if visited is None:
        visited = set()
    
    visited.add(start)
    print(start, end=" ")
    
    for neighbor in graph.graph[start]:
        if neighbor not in visited:
            dfs_recursive(graph, neighbor, visited)
    
    return visited

def dfs_iterative(graph, start):
    visited = set()
    stack = [start]
    
    while stack:
        vertex = stack.pop()
        
        if vertex not in visited:
            visited.add(vertex)
            print(vertex, end=" ")
            
            # Add neighbors to stack (reverse order for same traversal as recursive)
            for neighbor in reversed(graph.graph[vertex]):
                if neighbor not in visited:
                    stack.append(neighbor)
    
    return visited

def dfs_with_timestamps(graph, start):
    """DFS with discovery and finishing times"""
    visited = set()
    discovery_time = {}
    finish_time = {}
    time = [0]  # Use list to make it mutable in nested function
    
    def dfs_visit(vertex):
        visited.add(vertex)
        time[0] += 1
        discovery_time[vertex] = time[0]
        
        for neighbor in graph.graph[vertex]:
            if neighbor not in visited:
                dfs_visit(neighbor)
        
        time[0] += 1
        finish_time[vertex] = time[0]
    
    dfs_visit(start)
    return discovery_time, finish_time

# Time Complexity: O(V + E)
# Space Complexity: O(V) for recursion stack
```

**Breadth-First Search (BFS):**
```python
def bfs(graph, start):
    visited = set()
    queue = deque([start])
    visited.add(start)
    
    while queue:
        vertex = queue.popleft()
        print(vertex, end=" ")
        
        for neighbor in graph.graph[vertex]:
            if neighbor not in visited:
                visited.add(neighbor)
                queue.append(neighbor)
    
    return visited

def bfs_with_levels(graph, start):
    """BFS with level information"""
    visited = set()
    queue = deque([(start, 0)])  # (vertex, level)
    visited.add(start)
    levels = {start: 0}
    
    while queue:
        vertex, level = queue.popleft()
        
        for neighbor in graph.graph[vertex]:
            if neighbor not in visited:
                visited.add(neighbor)
                levels[neighbor] = level + 1
                queue.append((neighbor, level + 1))
    
    return levels

def bfs_shortest_path(graph, start, end):
    """Find shortest path using BFS"""
    if start == end:
        return [start]
    
    visited = set()
    queue = deque([(start, [start])])
    visited.add(start)
    
    while queue:
        vertex, path = queue.popleft()
        
        for neighbor in graph.graph[vertex]:
            if neighbor == end:
                return path + [neighbor]
            
            if neighbor not in visited:
                visited.add(neighbor)
                queue.append((neighbor, path + [neighbor]))
    
    return None  # No path found

# Time Complexity: O(V + E)
# Space Complexity: O(V) for queue
```

### 17. **Implement Dijkstra's algorithm for shortest path.**

**Answer:**

**Dijkstra's Algorithm:**
Finds shortest paths from source to all vertices in weighted graph with non-negative weights.

```python
import heapq
from collections import defaultdict

def dijkstra(graph, start):
    """
    graph: adjacency list {u: [(v, weight), ...]}
    returns: distances and previous vertices
    """
    distances = defaultdict(lambda: float('inf'))
    distances[start] = 0
    previous = {}
    visited = set()
    pq = [(0, start)]  # (distance, vertex)
    
    while pq:
        current_dist, current = heapq.heappop(pq)
        
        if current in visited:
            continue
        
        visited.add(current)
        
        for neighbor, weight in graph[current]:
            if neighbor in visited:
                continue
            
            new_dist = current_dist + weight
            
            if new_dist < distances[neighbor]:
                distances[neighbor] = new_dist
                previous[neighbor] = current
                heapq.heappush(pq, (new_dist, neighbor))
    
    return dict(distances), previous

def reconstruct_path(previous, start, end):
    """Reconstruct shortest path from start to end"""
    path = []
    current = end
    
    while current is not None:
        path.append(current)
        current = previous.get(current)
    
    path.reverse()
    return path if path[0] == start else None

# Example usage
graph = {
    'A': [('B', 4), ('C', 2)],
    'B': [('C', 1), ('D', 5)],
    'C': [('D', 8), ('E', 10)],
    'D': [('E', 2)],
    'E': []
}

distances, previous = dijkstra(graph, 'A')
path_to_E = reconstruct_path(previous, 'A', 'E')

print("Distances from A:", distances)
print("Shortest path from A to E:", path_to_E)

# Time Complexity: O((V + E) log V) with binary heap
# Space Complexity: O(V)
```

**Dijkstra with Path Tracking:**
```python
def dijkstra_with_paths(graph, start):
    """Dijkstra that tracks complete paths"""
    distances = defaultdict(lambda: float('inf'))
    distances[start] = 0
    paths = defaultdict(list)
    paths[start] = [start]
    visited = set()
    pq = [(0, start, [start])]
    
    while pq:
        current_dist, current, path = heapq.heappop(pq)
        
        if current in visited:
            continue
        
        visited.add(current)
        
        for neighbor, weight in graph[current]:
            if neighbor in visited:
                continue
            
            new_dist = current_dist + weight
            new_path = path + [neighbor]
            
            if new_dist < distances[neighbor]:
                distances[neighbor] = new_dist
                paths[neighbor] = new_path
                heapq.heappush(pq, (new_dist, neighbor, new_path))
    
    return dict(distances), dict(paths)
```

### 18. **Implement Bellman-Ford algorithm for detecting negative cycles.**

**Answer:**

**Bellman-Ford Algorithm:**
Finds shortest paths and detects negative weight cycles.

```python
def bellman_ford(graph, start):
    """
    graph: list of edges [(u, v, weight), ...]
    returns: distances and whether negative cycle exists
    """
    # Get all vertices
    vertices = set()
    for u, v, w in graph:
        vertices.add(u)
        vertices.add(v)
    
    # Initialize distances
    distances = {v: float('inf') for v in vertices}
    distances[start] = 0
    previous = {}
    
    # Relax edges V-1 times
    for _ in range(len(vertices) - 1):
        for u, v, weight in graph:
            if distances[u] + weight < distances[v]:
                distances[v] = distances[u] + weight
                previous[v] = u
    
    # Check for negative cycles
    for u, v, weight in graph:
        if distances[u] + weight < distances[v]:
            return None, True  # Negative cycle detected
    
    return distances, False

def find_negative_cycle(graph):
    """Find vertices affected by negative cycle"""
    vertices = set()
    for u, v, w in graph:
        vertices.add(u)
        vertices.add(v)
    
    distances = {v: float('inf') for v in vertices}
    
    # Start from arbitrary vertex
    start = next(iter(vertices))
    distances[start] = 0
    
    # Relax edges V-1 times
    for _ in range(len(vertices) - 1):
        for u, v, weight in graph:
            if distances[u] != float('inf') and distances[u] + weight < distances[v]:
                distances[v] = distances[u] + weight
    
    # Find vertices in negative cycles
    negative_cycle_vertices = set()
    for u, v, weight in graph:
        if distances[u] != float('inf') and distances[u] + weight < distances[v]:
            negative_cycle_vertices.add(v)
    
    # Find all vertices reachable from negative cycle vertices
    affected = set(negative_cycle_vertices)
    changed = True
    while changed:
        changed = False
        for u, v, weight in graph:
            if u in affected and v not in affected:
                affected.add(v)
                changed = True
    
    return affected

# Example usage
edges = [
    ('A', 'B', 4),
    ('A', 'C', 2),
    ('B', 'C', -3),
    ('C', 'D', 2),
    ('D', 'B', -1)  # Creates negative cycle
]

distances, has_negative_cycle = bellman_ford(edges, 'A')

if has_negative_cycle:
    print("Negative cycle detected!")
    affected = find_negative_cycle(edges)
    print("Affected vertices:", affected)
else:
    print("Distances:", distances)

# Time Complexity: O(VE)
# Space Complexity: O(V)
```

### 19. **Implement Floyd-Warshall algorithm for all-pairs shortest paths.**

**Answer:**

**Floyd-Warshall Algorithm:**
Finds shortest paths between all pairs of vertices.

```python
def floyd_warshall(graph):
    """
    graph: adjacency matrix representation
    graph[i][j] = weight of edge from i to j, inf if no edge
    """
    n = len(graph)
    
    # Initialize distance matrix
    dist = [[float('inf')] * n for _ in range(n)]
    next_vertex = [[None] * n for _ in range(n)]
    
    # Copy graph and initialize next matrix
    for i in range(n):
        for j in range(n):
            if i == j:
                dist[i][j] = 0
            elif graph[i][j] != float('inf'):
                dist[i][j] = graph[i][j]
                next_vertex[i][j] = j
    
    # Floyd-Warshall algorithm
    for k in range(n):
        for i in range(n):
            for j in range(n):
                if dist[i][k] + dist[k][j] < dist[i][j]:
                    dist[i][j] = dist[i][k] + dist[k][j]
                    next_vertex[i][j] = next_vertex[i][k]
    
    return dist, next_vertex

def reconstruct_path_floyd(next_vertex, start, end):
    """Reconstruct path using Floyd-Warshall next matrix"""
    if next_vertex[start][end] is None:
        return None
    
    path = [start]
    current = start
    
    while current != end:
        current = next_vertex[current][end]
        path.append(current)
    
    return path

def detect_negative_cycle_floyd(dist):
    """Detect negative cycles using Floyd-Warshall result"""
    n = len(dist)
    for i in range(n):
        if dist[i][i] < 0:
            return True
    return False

# Example usage
INF = float('inf')
graph = [
    [0, 3, INF, 7],
    [8, 0, 2, INF],
    [5, INF, 0, 1],
    [2, INF, INF, 0]
]

distances, next_matrix = floyd_warshall(graph)

print("All-pairs shortest distances:")
for i, row in enumerate(distances):
    for j, dist in enumerate(row):
        if dist == INF:
            print(f"INF", end="\t")
        else:
            print(f"{dist}", end="\t")
    print()

print("\nPath from 0 to 2:", reconstruct_path_floyd(next_matrix, 0, 2))

# Time Complexity: O(V³)
# Space Complexity: O(V²)
```

### 20. **Implement topological sorting using DFS.**

**Answer:**

**Topological Sorting:**
Linear ordering of vertices in DAG such that for every edge (u,v), u comes before v.

```python
def topological_sort_dfs(graph):
    """Topological sort using DFS"""
    visited = set()
    stack = []
    
    def dfs(vertex):
        visited.add(vertex)
        
        for neighbor in graph.get(vertex, []):
            if neighbor not in visited:
                dfs(neighbor)
        
        stack.append(vertex)  # Add to stack after visiting all neighbors
    
    # Visit all vertices
    for vertex in graph:
        if vertex not in visited:
            dfs(vertex)
    
    return stack[::-1]  # Reverse to get topological order

def topological_sort_with_cycle_detection(graph):
    """Topological sort with cycle detection"""
    WHITE, GRAY, BLACK = 0, 1, 2
    color = {vertex: WHITE for vertex in graph}
    result = []
    
    def dfs(vertex):
        if color[vertex] == GRAY:
            return False  # Back edge found, cycle detected
        
        if color[vertex] == BLACK:
            return True  # Already processed
        
        color[vertex] = GRAY
        
        for neighbor in graph.get(vertex, []):
            if not dfs(neighbor):
                return False
        
        color[vertex] = BLACK
        result.append(vertex)
        return True
    
    for vertex in graph:
        if color[vertex] == WHITE:
            if not dfs(vertex):
                return None  # Cycle detected
    
    return result[::-1]

def kahn_algorithm(graph):
    """Topological sort using Kahn's algorithm (BFS-based)"""
    from collections import deque, defaultdict
    
    # Calculate in-degrees
    in_degree = defaultdict(int)
    vertices = set(graph.keys())
    
    for vertex in graph:
        for neighbor in graph[vertex]:
            in_degree[neighbor] += 1
            vertices.add(neighbor)
    
    # Initialize queue with vertices having in-degree 0
    queue = deque([v for v in vertices if in_degree[v] == 0])
    result = []
    
    while queue:
        vertex = queue.popleft()
        result.append(vertex)
        
        for neighbor in graph.get(vertex, []):
            in_degree[neighbor] -= 1
            if in_degree[neighbor] == 0:
                queue.append(neighbor)
    
    # Check if all vertices are included (no cycle)
    if len(result) != len(vertices):
        return None  # Cycle detected
    
    return result

# Example usage
graph = {
    '5': ['2', '0'],
    '4': ['0', '1'],
    '2': ['3'],
    '3': ['1'],
    '1': [],
    '0': []
}

print("DFS-based topological sort:", topological_sort_dfs(graph))
print("Kahn's algorithm:", kahn_algorithm(graph))

# Cycle detection example
graph_with_cycle = {
    'A': ['B'],
    'B': ['C'],
    'C': ['A']  # Creates cycle
}

result = topological_sort_with_cycle_detection(graph_with_cycle)
print("With cycle detection:", result)

# Time Complexity: O(V + E)
# Space Complexity: O(V)
```

## Module 5: Complexity Classes & NP-Completeness (5 Hours)

### 21. **Explain P, NP, NP-Complete, and NP-Hard complexity classes.**

**Answer:**

**Complexity Classes:**

**P (Polynomial Time):**
- Problems solvable in polynomial time by deterministic Turing machine
- Time complexity: O(n^k) for some constant k
- Examples: Sorting, searching, shortest path, MST

**NP (Nondeterministic Polynomial):**
- Problems verifiable in polynomial time
- Solution can be checked in polynomial time if provided
- Includes all problems in P
- Examples: Hamiltonian Path, 3-SAT, Subset Sum

**NP-Complete:**
- Problems that are both in NP and NP-hard
- Every problem in NP can be reduced to them in polynomial time
- If any NP-Complete problem has polynomial solution, then P = NP
- Examples: 3-SAT, Hamiltonian Cycle, Vertex Cover

**NP-Hard:**
- At least as hard as any problem in NP
- May not be in NP themselves
- Every problem in NP reduces to them in polynomial time
- Examples: Halting Problem, Traveling Salesman Decision Problem

**Relationships:**
```
If P ≠ NP:
┌─────────────────┐
│    NP-Hard      │
│  ┌──────────────┤
│  │ NP-Complete  │
│  │  ┌─────────┐ │
│  │  │    P    │ │
│  │  │         │ │
│  │  └─────────┘ │
│  └──────────────┘
└─────────────────┘
```

### 22. **Prove that 3-SAT is NP-Complete using reduction.**

**Answer:**

**3-SAT Problem:**
Given boolean formula in CNF with exactly 3 literals per clause, determine if satisfiable.

**Proof that 3-SAT is NP-Complete:**

**Step 1: Show 3-SAT ∈ NP**
```python
def verify_3sat(formula, assignment):
    """Verify 3-SAT solution in polynomial time"""
    for clause in formula:
        clause_satisfied = False
        for literal in clause:
            if literal.startswith('¬'):
                var = literal[1:]
                if not assignment[var]:
                    clause_satisfied = True
                    break
            else:
                if assignment[literal]:
                    clause_satisfied = True
                    break
        
        if not clause_satisfied:
            return False
    
    return True

# Time complexity: O(number of clauses × 3) = O(n)
```

**Step 2: Show 3-SAT is NP-Hard**
Reduce SAT to 3-SAT (Cook-Levin theorem shows SAT is NP-Complete).

**Reduction Algorithm:**
```python
def reduce_sat_to_3sat(formula):
    """Convert arbitrary SAT formula to 3-SAT"""
    new_clauses = []
    new_var_counter = 0
    
    for clause in formula:
        if len(clause) == 1:
            # (x) → (x ∨ y ∨ z) ∧ (x ∨ y ∨ ¬z) ∧ (x ∨ ¬y ∨ z) ∧ (x ∨ ¬y ∨ ¬z)
            y = f"new_var_{new_var_counter}"
            z = f"new_var_{new_var_counter + 1}"
            new_var_counter += 2
            
            new_clauses.extend([
                [clause[0], y, z],
                [clause[0], y, f"¬{z}"],
                [clause[0], f"¬{y}", z],
                [clause[0], f"¬{y}", f"¬{z}"]
            ])
            
        elif len(clause) == 2:
            # (x ∨ y) → (x ∨ y ∨ z) ∧ (x ∨ y ∨ ¬z)
            z = f"new_var_{new_var_counter}"
            new_var_counter += 1
            
            new_clauses.extend([
                clause + [z],
                clause + [f"¬{z}"]
            ])
            
        elif len(clause) == 3:
            new_clauses.append(clause)
            
        else:  # len(clause) > 3
            # (x₁ ∨ x₂ ∨ ... ∨ xₙ) → 
            # (x₁ ∨ x₂ ∨ y₁) ∧ (¬y₁ ∨ x₃ ∨ y₂) ∧ ... ∧ (¬yₙ₋₃ ∨ xₙ₋₁ ∨ xₙ)
            prev_var = None
            
            for i in range(len(clause) - 2):
                if i == 0:
                    new_var = f"new_var_{new_var_counter}"
                    new_var_counter += 1
                    new_clauses.append([clause[0], clause[1], new_var])
                    prev_var = new_var
                elif i == len(clause) - 3:
                    new_clauses.append([f"¬{prev_var}", clause[i+1], clause[i+2]])
                else:
                    new_var = f"new_var_{new_var_counter}"
                    new_var_counter += 1
                    new_clauses.append([f"¬{prev_var}", clause[i+1], new_var])
                    prev_var = new_var
    
    return new_clauses

# Reduction is polynomial time: O(total literals in formula)
```

### 23. **Implement approximation algorithm for Vertex Cover problem.**

**Answer:**

**Vertex Cover Problem:**
Find minimum set of vertices such that every edge has at least one endpoint in the set.

**2-Approximation Algorithm:**
```python
def vertex_cover_approximation(edges):
    """2-approximation algorithm for vertex cover"""
    cover = set()
    remaining_edges = set(edges)
    
    while remaining_edges:
        # Pick any edge
        u, v = remaining_edges.pop()
        
        # Add both endpoints to cover
        cover.add(u)
        cover.add(v)
        
        # Remove all edges covered by u or v
        to_remove = set()
        for edge in remaining_edges:
            if u in edge or v in edge:
                to_remove.add(edge)
        
        remaining_edges -= to_remove
    
    return cover

def vertex_cover_greedy(graph):
    """Greedy approximation based on vertex degree"""
    cover = set()
    remaining_edges = set()
    
    # Create edge set from adjacency list
    for u in graph:
        for v in graph[u]:
            if (v, u) not in remaining_edges:
                remaining_edges.add((u, v))
    
    while remaining_edges:
        # Count degrees of vertices in remaining edges
        degree = {}
        for u, v in remaining_edges:
            degree[u] = degree.get(u, 0) + 1
            degree[v] = degree.get(v, 0) + 1
        
        # Pick vertex with maximum degree
        max_vertex = max(degree, key=degree.get)
        cover.add(max_vertex)
        
        # Remove edges incident to max_vertex
        to_remove = set()
        for edge in remaining_edges:
            if max_vertex in edge:
                to_remove.add(edge)
        
        remaining_edges -= to_remove
    
    return cover

# Example usage
edges = [('A', 'B'), ('B', 'C'), ('C', 'D'), ('D', 'A'), ('A', 'C')]
graph = {
    'A': ['B', 'D', 'C'],
    'B': ['A', 'C'],
    'C': ['B', 'A', 'D'],
    'D': ['C', 'A']
}

approx_cover = vertex_cover_approximation(edges)
greedy_cover = vertex_cover_greedy(graph)

print("2-approximation cover:", approx_cover)
print("Greedy cover:", greedy_cover)

# Time Complexity: O(E) for 2-approximation, O(V×E) for greedy
# Approximation Ratio: 2 for both algorithms
```

### 24. **Implement randomized algorithm for QuickSort.**

**Answer:**

**Randomized QuickSort:**
Uses random pivot selection to achieve expected O(n log n) performance.

```python
import random

def randomized_quicksort(arr, low=0, high=None):
    """Randomized QuickSort implementation"""
    if high is None:
        high = len(arr) - 1
    
    if low < high:
        # Randomly select pivot and partition
        pivot_index = randomized_partition(arr, low, high)
        
        # Recursively sort subarrays
        randomized_quicksort(arr, low, pivot_index - 1)
        randomized_quicksort(arr, pivot_index + 1, high)

def randomized_partition(arr, low, high):
    """Partition with random pivot selection"""
    # Randomly select pivot and swap with last element
    random_index = random.randint(low, high)
    arr[random_index], arr[high] = arr[high], arr[random_index]
    
    # Standard partition with arr[high] as pivot
    return partition(arr, low, high)

def partition(arr, low, high):
    """Standard partition function"""
    pivot = arr[high]
    i = low - 1
    
    for j in range(low, high):
        if arr[j] <= pivot:
            i += 1
            arr[i], arr[j] = arr[j], arr[i]
    
    arr[i + 1], arr[high] = arr[high], arr[i + 1]
    return i + 1

def randomized_select(arr, k):
    """Randomized selection of kth smallest element"""
    if len(arr) == 1:
        return arr[0]
    
    # Random pivot selection
    pivot_idx = random.randint(0, len(arr) - 1)
    pivot = arr[pivot_idx]
    
    # Partition around pivot
    smaller = [x for x in arr if x < pivot]
    equal = [x for x in arr if x == pivot]
    larger = [x for x in arr if x > pivot]
    
    if k <= len(smaller):
        return randomized_select(smaller, k)
    elif k <= len(smaller) + len(equal):
        return pivot
    else:
        return randomized_select(larger, k - len(smaller) - len(equal))

# Monte Carlo algorithm example: Primality testing
def miller_rabin_primality(n, k=10):
    """Miller-Rabin primality test (Monte Carlo)"""
    if n < 2:
        return False
    if n == 2 or n == 3:
        return True
    if n % 2 == 0:
        return False
    
    # Write n-1 as 2^r * d
    r = 0
    d = n - 1
    while d % 2 == 0:
        r += 1
        d //= 2
    
    # Perform k rounds of testing
    for _ in range(k):
        a = random.randint(2, n - 2)
        x = pow(a, d, n)  # a^d mod n
        
        if x == 1 or x == n - 1:
            continue
        
        for _ in range(r - 1):
            x = pow(x, 2, n)
            if x == n - 1:
                break
        else:
            return False  # Composite
    
    return True  # Probably prime

# Example usage
arr = [64, 34, 25, 12, 22, 11,# Design and Analysis of Algorithms (PCC CS 404) - Question Bank with Answers
