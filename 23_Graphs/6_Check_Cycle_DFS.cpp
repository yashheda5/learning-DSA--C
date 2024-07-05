#include <bits/stdc++.h>
using namespace std;

class Graph {
public:
    unordered_map<int, list<pair<int, int>>> adjList;

    void addEdge(int u, int v, int weight, bool direction) {
        if (direction) {
            adjList[u].push_back({v, weight});
        } else {
            adjList[u].push_back({v, weight});
            adjList[v].push_back({u, weight});
        }
    }

    void printAdjList() {
        for (auto i : adjList) {
            cout << i.first << "->";
            for (auto j : i.second) {
                cout << "(" << j.first << "," << j.second << ")";
            }
            cout << endl;
        }
    }

    bool checkCycle(int src, int parent, unordered_map<int, bool>& visited) {
        visited[src] = true;
        for (auto nbr : adjList[src]) {
            if (!visited[nbr.first]) {
                bool checkNextAns = checkCycle(nbr.first, src, visited);
                if (checkNextAns) {
                    return true;
                }
            } else if (nbr.first != parent) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    Graph g;
    g.addEdge(0, 1, 5, 0); // Changed to undirected graph for cycle detection
    g.addEdge(1, 2, 8, 0); // Changed to undirected graph for cycle detection
    g.addEdge(0, 2, 6, 0); // Changed to undirected graph for cycle detection

    g.printAdjList();

    unordered_map<int, bool> visited;
    bool ans = false;

    // Define n as the number of vertices in the graph
    int n = 3; // Assuming we have 3 vertices (0, 1, 2)

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            ans = g.checkCycle(i, -1, visited);
            if (ans) {
                cout << "cycle present" << endl;
                break;
            }
        }
    }

    if (!ans) {
        cout << "cycle absent" << endl;
    }

    return 0;
}
