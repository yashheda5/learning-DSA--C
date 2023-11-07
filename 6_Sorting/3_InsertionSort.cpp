#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr{1,6,7,2,3,4,9,0,18,5};
    for (int i = 1; i < arr.size(); i++)
    {
        for (int j = i; j >=1; j--)
        {
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }else {
                break;
            }
        }
        
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
}