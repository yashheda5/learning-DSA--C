#include <iostream>
#include <vector>
using namespace std;
 int main(){
    int a[]={1,2,3};
    int b[]={4,5,6};
    vector <int> arr;
    for (int  i = 0; i < sizeof(a)/sizeof(int); i++)
    {
        arr.push_back(a[i]);
    }
    for (int  j = 0; j < sizeof(b)/sizeof(int); j++)
    {
        arr.push_back(b[j]);
    }
    for (int k = 0; k < arr.size(); k++)
    {
        cout<<arr[k]<<" ";
    }
    
 }