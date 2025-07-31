
---

## ✅ MODULE 4: **Graph and Tree Algorithms**

**Lecture Hours: 8**

---

### 🔷 1. **Graph Basics**

#### 🔗 Definition:

A **graph** G = (V, E), where:

* V → set of **vertices/nodes**
* E → set of **edges** (connections)

#### 📌 Types:

| Graph Type             | Description                                 |
| ---------------------- | ------------------------------------------- |
| **Undirected**         | Edges have no direction (e.g., friendships) |
| **Directed (Digraph)** | Edges point one way (e.g., followers)       |
| **Weighted**           | Each edge has a weight (e.g., distances)    |
| **Unweighted**         | All edge weights are equal or irrelevant    |
| **Cyclic / Acyclic**   | Graph contains (or not) cycles              |

---

### 🔷 2. **Graph Representation**

| Method               | Description                                    |
| -------------------- | ---------------------------------------------- |
| **Adjacency Matrix** | 2D array; good for dense graphs                |
| **Adjacency List**   | List of neighbors; efficient for sparse graphs |

---

### 🔷 3. **Graph Traversal**

---

#### 📍 A. Depth-First Search (DFS)

* Recursively visits **as deep as possible**, then backtracks
* Uses a **stack (implicit via recursion)**
* Good for:

  * Detecting **cycles**
  * **Topological Sorting**
  * Finding **connected components**

```cpp
void DFS(int node, bool visited[], vector<int> adj[]) {
  visited[node] = true;
  for (int neighbor : adj[node])
    if (!visited[neighbor])
      DFS(neighbor, visited, adj);
}
```

---

#### 📍 B. Breadth-First Search (BFS)

* Visits all neighbors **before going deeper**
* Uses a **queue**
* Good for:

  * **Shortest path** in unweighted graphs
  * Level order traversal

```cpp
void BFS(int start, vector<int> adj[]) {
  queue<int> q;
  bool visited[n] = {false};
  visited[start] = true;
  q.push(start);
  while (!q.empty()) {
    int node = q.front(); q.pop();
    for (int neighbor : adj[node]) {
      if (!visited[neighbor]) {
        visited[neighbor] = true;
        q.push(neighbor);
      }
    }
  }
}
```

---

### 🔷 4. **Shortest Path Algorithms**

---

#### 🧭 A. **Dijkstra’s Algorithm**

* Finds **shortest path** from source to all nodes (only for **non-negative** weights)
* Uses **Min Heap / Priority Queue**

```text
Time: O(E log V) using Min Heap
```

---

#### 🧮 B. **Bellman-Ford Algorithm**

* Handles **negative weights**
* Runs **|V| - 1** times over all edges

```text
Time: O(VE)
Can detect negative weight cycles.
```

---

#### 🌐 C. **Floyd-Warshall Algorithm**

* All-pairs shortest path
* Dynamic programming approach

```text
Time: O(V³)
Works for negative weights (but no negative cycles)
```

---

### 🔷 5. **Topological Sorting (for DAGs)**

* Only for **Directed Acyclic Graphs (DAG)**
* Order of tasks respecting dependencies

#### ✅ Use Cases:

* Compilation order
* Task scheduling

#### Methods:

1. DFS + postorder reverse
2. Kahn’s algorithm (BFS + in-degree tracking)

---

### 🔷 6. **Transitive Closure**

* Determines **if a path exists** between any two nodes
* Can be computed using **Floyd-Warshall** or DFS

---

### 🔷 7. **Network Flow (Max Flow)**

#### ➤ Problem:

* Network with **capacities on edges**
* Find the **maximum flow** from **source** to **sink**

#### ➤ Ford-Fulkerson Algorithm:

* Greedy approach using residual graph
* Repeatedly find **augmenting paths**

```text
Time: O(E * max flow)
```

---

### 🔷 8. **Connected Components**

* In undirected graphs, a connected component is a **maximal set of nodes** that are all reachable from each other
* Use DFS or BFS to detect

---

### 🔷 Summary Table

| Algorithm / Concept           | Used For                            | Notes                         |
| ----------------------------- | ----------------------------------- | ----------------------------- |
| DFS / BFS                     | Traversal                           | DFS = deep, BFS = level order |
| Dijkstra                      | Shortest path (no negative weights) | Uses priority queue           |
| Bellman-Ford                  | Shortest path with negative weights | Slower                        |
| Floyd-Warshall                | All-pairs shortest path             | DP method                     |
| Topological Sort              | Ordering in DAG                     | Task scheduling               |
| Network Flow (Ford-Fulkerson) | Max flow                            | Residual capacity logic       |

---

### 📝 PYQs – Practice Questions

| Question                                              | How to Approach                                    |
| ----------------------------------------------------- | -------------------------------------------------- |
| Explain BFS and DFS with example.                     | Give traversal logic, code sketch, use small graph |
| Compare Dijkstra’s and Bellman-Ford.                  | Use a table (criteria: weights, time, cycles)      |
| What is Topological Sort?                             | Explain + example DAG                              |
| Explain Floyd-Warshall algorithm.                     | Show 3-loop DP structure                           |
| Find shortest path from given graph using Dijkstra’s. | Draw graph, show steps                             |
| What are connected components?                        | Define, explain with DFS example                   |

---

