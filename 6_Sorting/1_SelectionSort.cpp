#include <bits/stdc++.h>
using namespace std;
// unstabel algo
int main(){
    vector<int>arr{1,6,7,2,3,4,9,0,18,5};
    for (int i = 0; i < arr.size()-1; i++)
    {
        for (int j = i+1; j < arr.size() ; j++)
        {
            if(arr[j]<arr[i]){
                swap(arr[j],arr[i]);
            }
        }
        
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
}