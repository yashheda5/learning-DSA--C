#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Graph
{
public:
    unordered_map<T, list<pair<T, int>>> adjList;

    void addEdge(T u, T v, int weight, bool direction)
    {
        adjList[u].push_back({v, weight});
        if (direction == 0)
        {
            adjList[v].push_back({u, weight});
        }
    }

    void printAdjacencyList()
    {
        for (auto node : adjList)
        {
            cout << node.first << "-> ";
            for (auto neighbor : node.second)
            {
                cout << "(" << neighbor.first << "," << neighbor.second << ")";
            }
            cout << endl;
        }
    }

    void bfs(T src,unordered_map<T, bool>& visited)
    {
        queue<T> q;
        
        q.push(src);
        visited[src] = true;

        while (!q.empty())
        {
            T frontNode = q.front();
            q.pop();
            cout << frontNode << " ";

            for (auto neighbor : adjList[frontNode])
            {
                if (!visited[neighbor.first])
                {
                    q.push(neighbor.first);
                    visited[neighbor.first] = true;
                }
            }
        }
    }
};

int main()
{
    Graph<int> g;
   g.addEdge(0, 1, 0, 0);
    g.addEdge(1, 3, 0, 0);
    g.addEdge(0, 2, 0, 0);
    g.addEdge(2, 4, 0, 0);

    g.printAdjacencyList();
    unordered_map<int, bool> visited;
int n=5;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            g.bfs(i,visited);
        }
    }

    return 0;
}
