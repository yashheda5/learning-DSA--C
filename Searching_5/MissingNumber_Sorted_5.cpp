#include <bits/stdc++.h>
using namespace std;
int missing(vector<int>arr){
    int s=0,e=arr.size()-1;
    while(s<e){
        int mid =s+(e-s)/2;
        if(arr[mid] != mid+1){
            e=mid ;
        } else{
            s=mid+1;
        }
    }
    return s+1;
}
int main(){
    vector<int>arr{1,2,3,4,5,6,7,9,10};
    cout<<missing(arr)<<endl;
}