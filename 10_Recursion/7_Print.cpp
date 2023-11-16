#include <bits/stdc++.h>
using namespace std;
void print(vector<int>& arr, int i){
    if(i==arr.size()){
        return;
    }
    cout<<arr[i]<<" ";
    return print(arr, ++i);
    
}
int main(){
 vector<int>arr{1,2,3,4,5};
 print(arr,0);   
}