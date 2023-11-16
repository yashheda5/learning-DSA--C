#include <bits/stdc++.h>
using namespace std;
int print(vector<int>& arr, int i,int& min ){
    if(i==arr.size()){
        return min;
    }
    if(arr[i]<min){
        min = arr[i];
    }
    return print(arr, ++i, min);
    
}
int main(){
 vector<int>arr{1,2,3,4,5};
 cout<<print(arr,0,INT_MAX);   
}