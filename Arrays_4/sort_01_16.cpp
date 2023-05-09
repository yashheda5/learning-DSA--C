#include <iostream>
# include <vector>
using namespace std;
int main(){
    vector <int> arr{1,0,1,0,1,1,0,0,0};
    bool f= false;
    for (int  i = 0; i < arr.size(); i++)
    {
       for (int  j = 0; j < arr.size()-1-i; j++)
       {
        if(arr[j]>arr[j+1]){
            f= true;
            swap(arr[j],arr[j+1]);
        }
       }
       if(f==false){
        break;
       }
        
    }
     for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
}