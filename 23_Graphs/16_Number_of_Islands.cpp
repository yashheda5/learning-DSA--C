#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void bfs(map<pair<int,int>,bool>& visited, int row, int col, vector<vector<char>>& grid) {
        queue<pair<int,int>> q;
        q.push({row, col});
        visited[{row, col}] = true;
        
        int dx[] = {-1, 0, 1, 0};
        int dy[] = {0, 1, 0, -1};
        
        while (!q.empty()) {
            pair<int,int> temp = q.front();
            q.pop();
            int x = temp.first;
            int y = temp.second;
            
            for (int i = 0; i < 4; i++) {
                int newX = x + dx[i];
                int newY = y + dy[i];
                
                // Check boundaries first
                if (newX >= 0 && newX < grid.size() && newY >= 0 && newY < grid[0].size() &&  // Boundary check order changed
                    !visited[{newX, newY}] && grid[newX][newY] == '1') {  // Check if the cell is '1' and not visited
                    q.push({newX, newY});
                    visited[{newX, newY}] = true;
                }
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int c = 0;
        map<pair<int,int>,bool> visited;
        
        for (int row = 0; row < grid.size(); row++) {
            for (int col = 0; col < grid[row].size(); col++) {
                if (!visited[{row, col}] && grid[row][col] == '1') {  // Initiate BFS only if cell is '1' and not visited
                    bfs(visited, row, col, grid);
                    c++;  // Increment island count if BFS is initiated
                }
            }
        }
        
        return c;
    }
};
