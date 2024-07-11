https://leetcode.com/problems/number-of-provinces/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void dfs(int src ,unordered_map<int,bool>& visited,vector<vector<int>>& isConnected){
        visited[src]=true;
        for(int i=0;i<isConnected[src].size();i++){
            if(i!=src && isConnected[src][i]==1){
                if(! visited[i]){
                    dfs(i,visited,isConnected);
                }
            }
        }
        
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        unordered_map<int,bool> visited;
        int count=0;
        int n=isConnected.size();
        for(int i=0;i<n;i++){
           if(! visited[i]){
             dfs(i,visited,isConnected);
            count++;
           }
        }
        return count;
        
    }
};