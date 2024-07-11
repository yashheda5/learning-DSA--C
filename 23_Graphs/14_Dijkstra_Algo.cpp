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
                cout << "(" << j.first << "," << j.second << "),";
            }
            cout << endl;
        }
    }
    void Dijkstra(int src,int n ){
        vector<int>dist(n,INT_MAX);
        set<pair<int,int>>st;
        dist[src]=0;
        st.insert(make_pair(0,src));
        while(! st.empty()){
            auto top=*(st.begin());
            int nodeDistance = top.first;
            int node = top.second;
            st.erase(st.begin());
            for(auto i : adjList[node]){
                if(nodeDistance + i.second < dist[i.first]){
                    auto result = st.find(make_pair(dist[i.first],i.first));
                    if(result != st.end()){
                        st.erase(result);
                    }
                    dist[i.first]=nodeDistance + i.second ;
                    st.insert(make_pair(dist[i.first],i.first)); 
                }
            }

        }
        for(auto i : dist){
            cout<<i<<" ";
        }

    }
};
int main()
{
    Graph g;
    g.addEdge(6, 1, 14, 0);
    g.addEdge(6, 3, 2, 0);
    g.addEdge(6, 5, 9, 0);
    g.addEdge(5, 4, 6, 0);
    g.addEdge(4, 3, 11, 0);
    g.addEdge(4, 2, 15, 0);
    g.addEdge(3, 1, 9, 0);
    g.addEdge(3, 2, 10, 0);
    g.addEdge(2, 1, 7, 0);
    g.Dijkstra(6,7);
   
}