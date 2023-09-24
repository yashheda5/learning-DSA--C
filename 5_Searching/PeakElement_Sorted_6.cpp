#include <bits/stdc++.h>
using namespace std;
int peak(vector<int>arr){
    int s=0,e=arr.size()-1;
    while(s<=e){
        int mid =s+(e-s)/2;
        if(s==e){
            return s;
        }else if(arr[mid+1]<arr[mid]){
            e=mid;
        } else{
            s=mid+1;
        }
    }
}
int main(){
    vector<int>arr{1,2,3,4,3,2,1};
    cout<<arr[peak(arr)]<<endl;
}