#include <bits/stdc++.h>
using namespace std;
class Graph
{
public:
    unordered_map<int, list<pair<int, int>>> adjList;
    void addEdge(int u, int v, int weight, bool direction)
    {
        if (direction)
        {
            adjList[u].push_back({v, weight});
        }
        else
        {
            adjList[u].push_back({v, weight});
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
                cout << "(" << j.first << "," << j.second << ") ";
            }
            cout << endl;
        }
    }
    void bfs(int src, unordered_map<int, bool> &visited)
    {
        queue<int> q;
        q.push(src);
        visited[src] = true;
        while (!q.empty())
        {
            int temp = q.front();
            q.pop();
            cout << temp << " ";

            for (auto i : adjList[temp])
            {
                if (!visited[i.first])
                {
                    q.push(i.first);
                    visited[i.first] = true;
                }
            }
        }
    }
    void dfs(int src, unordered_map<int, bool> &visited)
    {
        cout << src << " ";
        visited[src] = true;
        for (auto i : adjList[src])
        {
            if (!visited[i.first])
            {
                dfs(i.first, visited);
            }
        }
    }
    bool checkCycleUnDirectedBFS(int src, unordered_map<int, bool> &visited)
    {
        queue<int> q;
        unordered_map<int, int> parent;
        parent[src] = -1;
        q.push(src);
        visited[src] = true;
        while (!q.empty())
        {
            int temp = q.front();
            q.pop();
            for (auto i : adjList[temp])
            {
                if (!visited[i.first])
                {
                    parent[i.first] = temp;
                    q.push(i.first);
                    visited[i.first] = true;
                }
                else
                {
                    if (i.first != parent[temp])
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
    bool checkCycleUnDirectedDFS(int src ,unordered_map<int, bool> &visited, int parent ){
        visited[src] = true;
        for(auto i : adjList[src]){
            if(!visited[i.first]){
              
                return  checkCycleUnDirectedDFS(i.first,visited,src);
            }else{
                if(i.first != parent){
                    return true;
                }
            }
        }
        return false;
    }
    bool checkCycleDirectedDFS(int src ,unordered_map<int, bool> visited,unordered_map<int, bool> dfsCalls  ){
        visited[src] = true;
        dfsCalls[src] = true;
        for(auto i : adjList[src]){
            if(! visited[i.first]){
                return checkCycleDirectedDFS(i.first,visited, dfsCalls);
            }else{
                if(dfsCalls[i.first]){
                    return true;
                }
            }
        }
        dfsCalls[src]=false;
        return false;
    }
};
int main()
{
    Graph g;
    g.addEdge(1, 2, 0, 1);
    g.addEdge(2, 3, 0, 1);
    g.addEdge(3, 1, 0, 1);
    // g.addEdge(3, 1, 0, 0);
 
    g.printGraph();
    int n = 4;
    bool ans = false;
    unordered_map<int, bool> visited;
    unordered_map<int, bool> dfsCalls;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            ans = g.checkCycleDirectedDFS(i, visited,dfsCalls);
            if (ans)
            {
                cout << "cycle detected" << endl;
                break;
            }
        }
    }
    if (!ans)
    {
        cout << "cycle not  detected" << endl;
    }
    
}
