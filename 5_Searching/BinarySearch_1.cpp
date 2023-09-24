#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int>arr,int k){
    int s=0,e=arr.size()-1;
   if(arr[s]<=arr[e]){
     while(s<=e){
        int mid= s+(e-s)/2;
        if(arr[mid]==k){
            return mid;
        } else if(k>arr[mid]){
            s=mid+1;
        } else{
            e=mid-1;
        }
    }
   } else{
     while( s<=e){
        int mid= s+(e-s)/2;
        if(arr[mid]==k){
            return mid;
        } else if(k<arr[mid]){
            s=mid+1;
        } else{
            e=mid-1;
        }
    }
   }
    return -1;
}
int main(){
     vector<int>arr{6,5,2,1,0};
     int k=1;
     cout<<binarySearch(arr,k);
}