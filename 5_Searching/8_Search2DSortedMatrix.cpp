#include <bits/stdc++.h>
using namespace std;
vector<int> search(vector<vector<int>>arr,int k){
int r=0,c=arr[0].size()-1;
vector<int>ans;
while(r<arr.size() && c>=0){
    if(arr[r][c]==k){
        ans.push_back(r);
        ans.push_back(c);
        return ans;
    } else if(k>arr[r][c]){
        r++;
    } else{
        c--;
    }
}
ans.push_back(-1);
ans.push_back(-1);
return ans;
}
int main(){
    vector<vector<int>>arr{
        {1,2,3,4,},
        {5,6,7,8},
        {9,10,11,12}
    };
    int k=19;
    vector<int>brr=search(arr,k);
    for (int i = 0; i < brr.size(); i++)
    {
        cout<<brr[i]<<" ";
    }
    
}