#include <bits/stdc++.h>
using namespace std;
int search(vector<int>a, int key){
    int s=0,e=a.size()-1;
    while (s<=e){
        int mid =s+(e-s)/2;
        if(a[mid]==key){
            return mid;
        }else if(mid-1>=0 && a[mid-1]==key){
            return mid-1;
        }else if(a[mid+1]==key){
            return mid+1;
        }else if(mid+1<a.size() && key>a[mid]){
            s=mid+2;
        }else{
            e=mid-2;
        }
    }
    return -1;
}
int main(){
    vector<int>arr{10, 3, 40, 20, 50, 80, 70};
    int key=3;
    cout<<search(arr,key);
}