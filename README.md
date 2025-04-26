# Leetcode-2290.-Minimum-Obstacle-Removal-to-Reach-Corner
# 🚀 Minimum Obstacles to Reach the Corner

A C++ solution to efficiently find the minimum number of obstacles that must be removed to reach the bottom-right corner of a grid.

---

## 📖 Problem Description

Given a grid of `0`s (empty space) and `1`s (obstacles), you start at the top-left corner `(0,0)` and want to reach the bottom-right `(m-1, n-1)`.  
You may move in four directions (up, down, left, right).  
Each time you move into a cell with a `1`, you must remove that obstacle.

The goal is to **minimize** the number of obstacles removed.

---

## 🛠️ Approach

- **Dijkstra's Algorithm** is used because the number of obstacles to remove acts like a "weight" or "cost".
- **Priority Queue (Min-Heap)** is used to always pick the next cell with the least removal cost.
- **Grid traversal** happens with 4-directional moves.
- The cost to reach each cell is tracked and only updated if a better (smaller) cost is found.

---

## 🧩 Tech Stack

- C++ (STL)
- Priority Queue
- Dijkstra-like shortest path algorithm

---


💡 Example
Input Grid:
[
  [0,1,1],
  [1,1,0],
  [1,0,0]
]

Output: 2
Explanation:
You can remove 2 obstacles to reach the bottom-right with the minimal cost.

✨ Key Points
Priority queues always give optimal next move.

Think of obstacle removal as the "weight" or "distance" in Dijkstra's algorithm.

No need to revisit cells if a better cost is not found.

📜 License
This project is open-source and free to use.

❤️ Thank You!
If you like it, give a ⭐️ on GitHub!
