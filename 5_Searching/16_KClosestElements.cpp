#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr{1,2,3,4,5};
    int x=3, k=4;
    int high=arr.size()-1, low =0;
    while(high-low >=k){
        if(arr[high]-x < x-arr[low] ){
            low++;
        }else{
            high--;
        }
    }
    vector<int>ans;
    for (int i = low; i <= high ; i++)
    {
        ans.push_back(arr[i]);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    
    
}