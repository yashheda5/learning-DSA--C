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
    void bfs 
};
int main(){
 graph g;
   g.addEdge(0, 1, 1, 0);
    g.addEdge(1, 2, 1, 0);
    g.addEdge(1, 3, 1, 0);
    g.addEdge(3, 5, 1, 0);
    g.addEdge(3, 7, 1, 0);
    g.addEdge(7, 4, 1, 0);
        g.printGraph();
        cout<<endl;
    
    

}