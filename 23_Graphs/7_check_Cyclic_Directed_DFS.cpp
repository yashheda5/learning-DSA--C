#include <bits/stdc++.h>
using namespace std;
class graph{
    public:
    unordered_map<int ,list<pair<int, int>>> adjList;
    void addEdge(int u, int v, int weight, bool direction){
        if(direction){
            adjList[u].push_back({v, weight});
        }else{
            adjList[u].push_back({v, weight});
            adjList[v].push_back({u, weight});
        }
    }
    void printGraph(){
        for(auto i: adjList){
            cout<<i.first<<" ";
            for(auto j: i.second){
                cout<<"("<<j.first<<","<<j.second<<")";
            }
            cout<<endl;
        }
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
int main(){
 graph g;
    g.addEdge(0,1,5,1);
    g.addEdge(1,2,8,1);
    g.addEdge(0,2,6,1);
    
    g.printGraph();
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