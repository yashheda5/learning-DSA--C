#include <bits/stdc++.h>
using namespace std;
template<typename T>
class Graph{
    public :
    unordered_map<T,list<pair<T,T>> >adjList;
    void addEdge(int u, int v,T weight, bool direction){
        adjList[u].push_back({v, weight});
        if(direction == 0){
            adjList[v].push_back({u, weight});
        }
    }
    void printAdjacencyList(){
        for(auto node: adjList){
            cout<<node.first<<"->";
            for(auto neighbours:node.second ){
                cout<<"("<<neighbours.first<<","<<neighbours.second<<"),";
            }
            cout<<endl;
        }
    }
};
int main(){
    Graph<int> g;
    g.addEdge(0,1,5,1);
    g.addEdge(1,2,8,1);
    g.addEdge(0,2,6,1);
    cout<<endl;
    g.printAdjacencyList();

}