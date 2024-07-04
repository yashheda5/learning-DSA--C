#include <bits/stdc++.h>
using namespace std;
class Graph{
    public:
    unordered_map<int ,list<pair<int ,int>>>adjList;
void addEdge(int u, int v , int weight , bool direction){
    if(direction){
        adjList[u].push_back({v,weight});
    }else{
        adjList[u].push_back({v,weight}); 
        adjList[v].push_back({u,weight}); 
    }
}
void printAdjList(){
    for(auto i:adjList){
        cout<<i.first<<"->";
        for(auto j :i.second){
            cout<<"("<<j.first<<","<<j.second<<")";
        }
        cout<<endl;
    }
}
};

int main(){
    Graph g;
    g.addEdge(0,1,5,1);
    g.addEdge(1,2,8,1);
    g.addEdge(0,2,6,1);

    g.printAdjList();
}