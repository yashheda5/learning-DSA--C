#include <bits/stdc++.h>
using namespace std;
bool Binaryfind(vector<int>nums,int n,int s){
    int e=nums.size()-1;
    while (s<=e)
    {
        int mid =s+(e-s)/2;
        if(nums[mid]==n){
            return true;
        }else if(n>nums[mid]){
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    return false;
    
}
int main(){
    
    vector <int>nums{1,3,1,5,4};

    int k=0;
    set<pair<int,int>>ans;
    
    sort(nums.begin(), nums.end());
    for(int i=0; i<nums.size();i++){
        int temp=nums[i]+k;
        if(Binaryfind(nums,temp,i+1)){
            ans.insert({nums[i], temp});
        }
    }
    cout<<ans.size()<<endl;
}