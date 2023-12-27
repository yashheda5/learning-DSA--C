#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>arr,int k,int s, int e){
    
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
    int n=16;
    vector<int> arr{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
    int low =0;
    int high =1;
    while (true )
    {
        
        if(n>=arr[low] && n<=arr[high]){
           cout<< binarySearch(arr,n,low,high);
           break;
        }else{
            low=high+1;
            high=high*2;
            if(high>arr.size()){
                high=arr.size()-1;
            }
        }
    }
    
}