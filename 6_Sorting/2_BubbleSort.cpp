#include <bits/stdc++.h>
using namespace std;
// stable algo
int main(){
    vector<int>arr{1,6,7,2,3,4,9,0,18,5};
    bool f=false;
    for (int i = 0; i < arr.size(); i++)
    {
        f=true;
        for (int j = 0; j < arr.size()-i-1 ; j++)
        {
            if(arr[j]>arr[j+1]){
                f=false;
                swap(arr[j],arr[j+1]);
            }
        }
        if(f==true){
            break;
        }
        
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
}