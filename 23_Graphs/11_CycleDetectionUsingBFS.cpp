#include <bits/stdc++.h>
using namespace std;
class Graph {
    public:
    unordered_map<int,list<int>> adjList;
    void addEdge(int u,int v){
        adjList[u].push_back(v);
    }
    void printGraph(){
        for(auto i:adjList){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<j<<",";
            }
            cout<<endl;
        }
    }
    void BFScycleDetectUsingKahnsTopoAlgo(int n,vector<int>& ans){
        queue<int>q;
        unordered_map<int,int> indegree;

        for(auto i:adjList){
            for(auto j:i.second){
                indegree[j]++;
            }
        }
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int temp =q.front();
            q.pop();
            ans.push_back(temp);
            for(auto i : adjList[temp]){
                indegree[i]--;
                if(indegree[i]==0){
                    q.push(i);
                }
            }
        }
    }
};
int main(){
    Graph g;
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.addEdge(3, 5);
    g.addEdge(5, 6);
    g.addEdge(4, 6);
    g.addEdge(6, 7);
    // g.addEdge(7, 1);
    vector<int>ans;
    int n=8;
    g.BFScycleDetectUsingKahnsTopoAlgo(n,ans);
    if(n != ans.size()){
        cout<<"cycle present";
    }else{
        cout<<"cycle absent ";
    }
}