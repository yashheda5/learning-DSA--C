#include <bits/stdc++.h>
using namespace std;
class Graph
{
public:
    unordered_map<int, list<pair<int, int>>> adjList;
    void addEdge(int u, int v, int weight, bool direction)
    {
        adjList[u].push_back({v, weight});
        if (!direction)
        {
            adjList[v].push_back({u, weight});
        }
    }
    void printGraph()
    {
        for (auto i : adjList)
        {
            cout << i.first << "->";
            for (auto j : i.second)
            {
                cout << "(" << j.first << "," << j.second << ")";
            }
            cout << endl;
        }
    }
    void shortestPathBfs(int src, int dest)
    {
        queue<int> q;
        unordered_map<int, bool> visited;
        unordered_map<int, int> parent;
        q.push(src);
        visited[src] = true;
        parent[src] = -1;
        while(!q.empty()){
            int temp = q.front();
            q.pop();
            for(auto i:adjList[temp]){
                if(!visited[i.first]){
                    q.push(i.first);
                    visited[i.first]=true;
                    parent[i.first]=temp;
                }
            }
        }
        vector<int>ans;
        int node=dest;
        while(node != -1){
            ans.push_back(node);
            node=parent[node];
        }
        reverse(ans.begin(),ans.end());
       for(auto i:ans){
        cout<<i<<" ";
       }
    }
};
int main()
{
    Graph g;
    g.addEdge(0, 1, 1, 0);
    g.addEdge(1, 2, 1, 0);
    g.addEdge(2, 3, 1, 0);
    g.addEdge(3, 4, 1, 0);
    g.addEdge(0, 5, 1, 0);
    g.addEdge(5, 4, 1, 0);
    g.addEdge(0, 6, 1, 0);
    g.addEdge(6, 7, 1, 0);
    g.addEdge(7, 8, 1, 0);
    g.addEdge(8, 4, 1, 0);

    g.printGraph();
    int src = 0;
    int dest = 4;
    g.shortestPathBfs(src, dest);
}
