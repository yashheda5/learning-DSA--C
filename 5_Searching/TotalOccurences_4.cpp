#include <bits/stdc++.h>
using namespace std;
int firstOccurence(vector<int>arr,int k){
    int s=0,e=arr.size()-1,c=-1;
    while(s<=e){
        int mid =s+(e-s)/2;
        if(arr[mid]==k){
            c=mid;
            e=mid-1;
        } else if(k>arr[mid]){
            s=mid+1;
        } else{
            e=mid-1;
        }
    }
    return c;
}
int lastOccurence(vector<int>arr,int k){
    int s=0,e=arr.size()-1,c=-1;
    while(s<=e){
        int mid =s+(e-s)/2;
        if(arr[mid]==k){
            c=mid;
            s=mid+1;
        } else if(k>arr[mid]){
            s=mid+1;
        } else{
            e=mid-1;
        }
    }
    return c;
}
int main(){
    vector<int>arr{1,2,3,4,4,4,4,4,4,5,6 };
    int k=4;
    int f= firstOccurence(arr,k);
    int l=lastOccurence(arr,k);
    cout<<(l-f)+1;
}