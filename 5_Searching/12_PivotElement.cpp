#include <bits/stdc++.h>
using namespace std;
int pivot(vector<int> arr){
    int s=0 , e=arr.size()-1;
    while(s<=e){
        if(s==e){
            return s;
        }
        int mid =s+(e-s)/2;
        if(mid+1<=e && arr[mid]>arr[mid+1]){
            return arr[mid];
        }
        if(mid-1>= s && arr[mid-1]>arr[mid]){
            return arr[mid-1];
        }
        if(arr[s]>arr[mid]){ 
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return -1;
}
int main(){
    vector<int>arr{2,3,4,5,6,7,8,9,10,1,0};
    cout<<pivot(arr)<<endl;
}