// Solution.cpp
#include <vector>
#include <queue>
#include <climits>
using namespace std;

class Solution {
public:
    int minimumObstacles(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        using Node = pair<int, pair<int, int>>; // {cost, {row, col}}
        priority_queue<Node, vector<Node>, greater<Node>> pq;
        
        vector<vector<int>> minCost(m, vector<int>(n, INT_MAX));
        vector<vector<int>> directions = {{0,1}, {0,-1}, {1,0}, {-1,0}};
        
        pq.push({grid[0][0], {0, 0}});
        minCost[0][0] = 0;
        
        while (!pq.empty()) {
            auto [cost, coords] = pq.top();
            auto [i, j] = coords;
            pq.pop();
            
            // If destination is reached
            if (i == m-1 && j == n-1) {
                return cost;
            }
            
            // Explore neighbors
            for (auto& dir : directions) {
                int newRow = i + dir[0];
                int newCol = j + dir[1];
                
                if (newRow < 0 || newRow >= m || newCol < 0 || newCol >= n) continue;
                
                int newCost = cost + grid[newRow][newCol];
                if (newCost < minCost[newRow][newCol]) {
                    minCost[newRow][newCol] = newCost;
                    pq.push({newCost, {newRow, newCol}});
                }
            }
        }
        
        return minCost[m-1][n-1];
    }
};
