#include <bits/stdc++.h>
using namespace std;
int getKthHighestElement(vector<int>arr,int k){
    priority_queue<int,vector<int>,greater<int>>pq;
    for (int i = 0; i <k ; i++)
    {
        pq.push(arr[i]); 
    }
    for (int i = k; i <arr.size(); i++)
    {
        if(arr[i]>pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    int ans=pq.top();
    return ans;
    
    
}
int getKthSmallestElement(vector<int>arr,int k){
    priority_queue<int>pq;
    for (int i = 0; i <k ; i++)
    {
        pq.push(arr[i]); 
    }
    for (int i = k; i <arr.size(); i++)
    {
        if(arr[i]<pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    int ans=pq.top();
    return ans;
    
    
}
int main(){
    vector<int>arr{10,5,20,4,15};
    int k=2;
    int ans=getKthSmallestElement(arr,k);
    cout<<"Smallest kth element = "<<ans<<endl;
    int ans2 = getKthHighestElement(arr,k);
     cout<<"Largest kth element = "<<ans2<<endl;
      
    return 0;
}