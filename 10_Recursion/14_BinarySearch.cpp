#include <bits/stdc++.h>
using namespace std;
int search(vector<int>& arr,int& key , int s , int e){
    int mid =s+(e-s)/2;
    if(arr[mid]== key){
        return mid;
    }
    if(s>e){
        return -1;
    }
    if(key>arr[mid]){
        return search(arr,key,mid+1,e);
    } else{
        return search(arr,key,s,mid-1);
    }
}
int main(){
    vector<int>arr{1,2,3,4,5,8,9,10,11,12,13,14};
    int key =1,s=0,e=arr.size()-1;
    cout<<search(arr, key,s,e);
}