#include <bits/stdc++.h>
using namespace std;

class Graph {
    unordered_map<int, list<int>> adjList;

public:
    void addEdge(int u, int v) {
        adjList[u].push_back(v); // Corrected: push_back uses parentheses ()
    }

    void dfs(int src, stack<int>& s, unordered_map<int, bool>& visited) {
        visited[src] = true;
        for (int nbr : adjList[src]) {
            if (!visited[nbr]) {
                dfs(nbr, s, visited);
            }
        }
        s.push(src); // Corrected: pushing src after exploring neighbors
    }

    void dfs2(int src, unordered_map<int, bool>& visited, unordered_map<int, list<int>>& adjListNew) {
        visited[src] = true;
        for (int nbr : adjListNew[src]) { // Corrected: use adjListNew for reversed graph
            if (!visited[nbr]) {
                dfs2(nbr, visited, adjListNew);
            }
        }
    }

    int countSCC(int n) {
        stack<int> s;
        unordered_map<int, bool> visited;

        // Step 1: Perform DFS and fill stack based on finishing times
        for (int i = 0; i < n; ++i) {
            if (!visited[i]) {
                dfs(i, s, visited);
            }
        }

        // Step 2: Reverse the graph
        unordered_map<int, list<int>> adjListNew;
        for (auto i : adjList) {
            for (int j : i.second) {
                adjListNew[j].push_back(i.first); // Corrected: use j as neighbor directly
            }
        }

        // Step 3: Perform DFS based on finishing times (topological order)
        int count = 0;
        visited.clear(); // Reset visited map
        while (!s.empty()) {
            int i = s.top();
            s.pop();
            if (!visited[i]) {
                dfs2(i, visited, adjListNew);
                count++;
            }
        }

        return count;
    }
};

int main() {
    Graph g;
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 0);
    g.addEdge(2, 4);
    g.addEdge(4, 5);
    g.addEdge(5, 6);
    g.addEdge(6, 4);
    g.addEdge(6, 7);
    cout << g.countSCC(8) << endl; // Should print 3

    return 0;
}
