https://leetcode.com/problems/course-schedule/

class Solution {
public:
bool BFScycleDetectUsingKahnsTopoAlgo(int n,unordered_map<int,list<int>>& adjList){
    vector<int> ans;
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
      
    if(n != ans.size()){
       return false;
    }
    return true;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int,list<int>>adjList;
        for(auto task : prerequisites){
            int u=task[0];
            int v=task[1];
            adjList[v].push_back(u);
        }
        return BFScycleDetectUsingKahnsTopoAlgo(numCourses,adjList);
    }
};