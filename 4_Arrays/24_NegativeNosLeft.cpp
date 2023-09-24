#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>arr{-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int low=0,high=arr.size()-1;
    while(low<=high){
       if(arr[low]>0 && arr[high]<0){
        swap(arr[low],arr[high]);
       } else if(arr[low]<0 ){
        low++;
       } else if(arr[high]>0){
        high--;
       } else{
        low++;
        high--;
       }

    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
}