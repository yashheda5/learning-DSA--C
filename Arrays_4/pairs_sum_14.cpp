#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> arr{1,3,5,7,2,4,6};
    for (int i = 0; i < arr.size(); i++)
    {
        for (int  j = i+1; j < arr.size(); j++)
        {
            if(arr[i]+arr[j]==9){
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
        
    }
    
}