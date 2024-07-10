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
   void topSort(stack<int>& s, unordered_map<int,bool>& visited,int src ){
    visited[src]=true;
    for(auto i:adjList[src]){
        if(! visited[i.first]){
            topSort(s, visited,i.first);
        }
    }
    s.push(src);
   }
   void shortPath(int dest ,stack<int>& s ,int n){
    vector<int>distance(n,INT_MAX);
    int src =s.top();
    s.pop();
    distance[src]=0;
    for(auto i :adjList[0]){
                if(distance[0]+i.second < distance[i.first]){
                    distance[i.first]=distance[0]+i.second ;
                }
            }
    while(!s.empty()){
        int temp = s.top();
        s.pop();
        if(distance[temp] != INT_MAX){
            for(auto i :adjList[temp]){
                if(distance[temp]+i.second < distance[i.first]){
                    distance[i.first]=distance[temp]+i.second ;
                }
            }
        }

    }
    for(auto i:distance){
        cout<<i<<" ";
    }
   }
};
int main()
{
    Graph g;
    g.addEdge(0, 1, 5, 1);
    g.addEdge(0, 2, 2, 1);
    g.addEdge(1, 3, 3, 1);
    g.addEdge(2, 1, 3, 1);
    g.addEdge(2, 3, 5, 1);
    g.addEdge(2, 4, 6, 1);
    g.addEdge(4, 3, 1, 1);
    unordered_map<int,bool> visited;
    stack<int> s;
    g.topSort(s, visited,0);
    g.shortPath(3,s,5);
  
 
}