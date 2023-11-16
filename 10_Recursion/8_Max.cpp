#include <bits/stdc++.h>
using namespace std;
int print(vector<int>& arr, int i,int max ){
    if(i==arr.size()){
        return max;
    }
    if(arr[i]>max){
        max = arr[i];
    }
    return print(arr, ++i, max);
    
}
int main(){
 vector<int>arr{1,2,3,4,5};
 cout<<print(arr,0,INT_MIN);   
}