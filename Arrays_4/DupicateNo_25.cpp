#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>arr{1,4,3,4,5,2};
    int i=0;
    while(i<arr.size()){
        int crt = arr[i]-1;
        if(arr[i] != arr[crt]){
            swap(arr[i],arr[crt]);
        }else{
            i++;
        }
    }
       for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
}