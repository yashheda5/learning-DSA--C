#include <bits/stdc++.h>
using namespace std;
class Graph{
    public:
    unordered_map<int,list<pair<int,int> > >adjList;
    void addEdge(int u, int v, int weight, bool direction){
        if(direction){
            adjList[u].push_back({v, weight});
        }else{
             adjList[u].push_back({v, weight});
             adjList[v].push_back({u, weight});
        }
    }
    void printGraph(){
        for(auto i:adjList){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<"("<<j.first<<","<<j.second<<")";
            }
            cout<<endl;
        }
    }
    void dfsTOPsort(int src , unordered_map<int,bool>& visited,stack<int>& s){
        visited[src]=true;
       
        for(auto i:adjList[src]){
            if(!visited[i.first]){
                dfsTOPsort(i.first,visited,s);
            }
        }
         s.push(src);
    }
};
int main(){
      Graph g;
    g.addEdge(0,1,5,1);
    g.addEdge(1,2,8,1);
    g.addEdge(2,3,6,1);
     g.addEdge(3,4,6,1);
    g.addEdge(3,5,6,1);
    g.addEdge(5,6,6,1);
    g.addEdge(4,6,6,1);
    g.addEdge(6,7,6,1);
       stack<int>s;
    unordered_map<int,bool> visited;
    int n=8;
    for (int i = 0; i < n; i++)
    {
        if(!visited[i]){
                g.dfsTOPsort(i,visited,s);
        }
    }
   while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
   }
   
    // g.printGraph();

}