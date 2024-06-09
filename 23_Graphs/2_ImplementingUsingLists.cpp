#include<bits/stdc++.h>
using namespace std;
class Graph{
    public:
    unordered_map<int,list<pair<int,int>>>adjList;
    void addEdge(int u,int v,int weight,bool direction ){
        //direction = 0 - undirected graph
        //direction = 1 - directed graph
        adjList[u].push_back({v,weight});
        if(direction==0){
            adjList[v].push_back({u,weight});
        }
    }
    void printAdjacencyList(){
        for(auto i:adjList){
            cout<<i.first<<"->";
            for(auto neighbor:i.second){
                cout<<"("<<neighbor.first<<","<<neighbor.second<<")  ,";
        }
        cout<<endl;
    }
    }
};
int main(){
    Graph g;
    g.addEdge(0,1,5,1);
    g.addEdge(1,2,3,1);
    g.addEdge(0,2,1,1);
    g.printAdjacencyList();
}