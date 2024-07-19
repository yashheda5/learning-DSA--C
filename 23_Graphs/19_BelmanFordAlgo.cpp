#include <bits/stdc++.h>
using namespace std;

class Graph {
public:
    unordered_map<int, list<pair<int, int>>> adjList;
    
    void addEdge(int u, int v, int weight, bool direction) {
        adjList[u].push_back({v, weight});
        if (!direction) {
            adjList[v].push_back({u, weight});
        }
    }
    
    void printGraph() {
        for (auto i : adjList) {
            cout << i.first << "->";
            for (auto j : i.second) {
                cout << "(" << j.first << "," << j.second << "),";
            }
            cout << endl;
        }
    }
    
    void belmanFordAlgo(int n, int src) { // Typo: should be bellmanFordAlgo
        vector<int> dist(n, INT_MAX);
        dist[src] = 0;
        
        for (int i = 0; i < n - 1; i++) {
            for (auto t : adjList) {
                for (auto nbr : t.second) {
                    int u = t.first;
                    int v = nbr.first;
                    int wt = nbr.second;
                    if (dist[u] != INT_MAX && dist[u] + wt < dist[v]) {
                        dist[v] = dist[u] + wt;
                    }
                }
            }
        }
        
        // Missing final check for negative weight cycles
        // Without this, the algorithm does not fully comply with the Bellman-Ford algorithm
        for (auto t : adjList) {
            for (auto nbr : t.second) {
                int u = t.first;
                int v = nbr.first;
                int wt = nbr.second;
                if (dist[u] != INT_MAX && dist[u] + wt < dist[v]) {
                    cout << "Graph contains negative weight cycle" << endl;
                    return;
                }
            }
        }
        
        // Printing distances could be more user-friendly
        for (int i = 0; i < n; i++) {
            if (dist[i] == INT_MAX) {
                cout << "INF, "; // Better to handle INT_MAX gracefully
            } else {
                cout << dist[i] << ", ";
            }
        }
        cout << endl;
    }
};

int main() {
    Graph g;
    g.addEdge(0, 1, -1, 0);
    g.addEdge(0, 2, 4, 0);
    g.addEdge(1, 2, 3, 0);
    g.addEdge(1, 3, 2, 0);
    g.addEdge(1, 4, 2, 0);
    g.addEdge(3, 1, 1, 0);
    g.addEdge(3, 2, 5, 0);
    g.addEdge(4, 3, -3, 0);
    g.belmanFordAlgo(5, 0); // Typo: should be bellmanFordAlgo
    return 0;
}
