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
            return mid;
        }
        if(mid-1>= s && arr[mid-1]>arr[mid]){
            return mid-1;
        }
        if(arr[s]>arr[mid]){ 
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return -1;
}
int binary (vector<int>arr,int s,int e ,int k){
    while(s<=e){
        int mid =s+(e-s)/2;
        if(arr[mid]==k){
            return mid;
        }else if(k>arr[mid]){
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    return -1;
}
int search(vector<int>arr,int key){
int p=pivot(arr);
if(key  >=0 && key <=arr[p]){
    return binary(arr,0,p,key);
}else{
    return binary(arr,p+1,arr.size()-1,key);
}
}

int main(){
    vector<int>arr{2,3,4,5,6,7,8,9,10,1,0};
    int key=3;
    cout<<search(arr,key)<<endl;
}