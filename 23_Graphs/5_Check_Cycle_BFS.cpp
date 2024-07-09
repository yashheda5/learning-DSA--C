#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Graph
{
public:
    unordered_map<T, list<pair<T, int>>> adjList;
    void addEdge(T u, T v, int weight, bool Direction)
    {
        if (Direction)
        {
            adjList[u].push_back({v, weight});
        }
        else
        {
            adjList[u].push_back({v, weight});
            adjList[v].push_back({u, weight});
        }
    }
    void PrintGraph()
    {
        for (auto i : adjList)
        {
            cout << i.first << "-> ";
            for (auto j : i.second)
            {
                cout << "(" << j.first << "," << j.second << ") ";
            }
            cout << endl;
        }
    }
    bool checkCycle(int src, unordered_map<int,bool>& visited){
        queue<int> q;
        unordered_map<int,int> parent;
        parent[src]=-1;
        visited[src]=true;
        q.push(src);
        while(!q.empty()){
            int temp = q.front();
            q.pop();
            for(auto i: adjList[temp]){
                if(! visited[i.first]){
                    q.push(i.first);
                    visited[i.first]=true;
                    parent[i.first]=temp;
                }else{
                    if(i.first != parent[temp]){
                        return true;
                    }
                }
            }
        }
        return false;
    }
  
};
int main()
{
    Graph<int> g;
    int n = 4;
    g.addEdge(0, 1, 0, 0);
    g.addEdge(1, 2, 0, 0);
    g.addEdge(2, 3, 0, 0);
    // g.addEdge(3, 1, 0, 0);
    g.PrintGraph();
    unordered_map<int, bool> visited;
    
    bool ans=false;
    for (int  i = 0; i < n; i++)
    {
        if(!visited[i]){
            ans=g.checkCycle(i,visited);
            if(ans){
                cout<<"cycle detected"<<endl;
                break;
            }
        }
    }
    if(!ans){
        cout<<"cycle not detected"<<endl;
    }
    
    
}