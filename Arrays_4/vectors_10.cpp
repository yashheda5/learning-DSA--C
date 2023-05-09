#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int > arr;
    arr.push_back(14);
    arr.push_back(19);
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector <int> crr{1,2,3,4,5,6};
    for (int i = 0; i < crr.size(); i++)
    {
        cout<<crr[i]<<" ";
    }
    
}