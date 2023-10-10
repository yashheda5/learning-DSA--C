#include <bits/stdc++.h>
using namespace std;
int search(vector<int>arr){
    int s=0;
    int e=arr.size()-1;
   
    while(s<=e){
        int mid =s+(e-s)/2;
        if(s==e){
            return s;
        }
        if(arr[mid]= arr[mid+1]){
            s=mid+2;
        } else{
            e=mid;
        }
    }
}
int main(){
    vector<int>arr{1,1,2,2,3,3,4,4,3,5,5,600,600};
    cout<<search(arr);
}