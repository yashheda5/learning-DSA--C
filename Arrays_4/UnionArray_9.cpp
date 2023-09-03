#include <iostream>
#include <vector>
using namespace std;
int main(){
    cout<<"Enter the size for array a"<<endl;
    int n1;
    cin>>n1;
    cout<<"Enter the values for array a "<<endl;
    int a[n1];
    for (int i = 0; i < n1; i++)
    {
        cin>>a[i];
    }
    
    cout<<"Enter the size for array b"<<endl;
    int n2;
    cin>>n2;
    int b[n2];
     cout<<"Enter the values for array b"<<endl;
    for (int i = 0; i < n2; i++)
    {
        cin>>b[i];
    }

    vector<int>arr;
    for (int i = 0; i < n1; i++)
    {
        arr.push_back(a[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        arr.push_back(b[i]);
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}