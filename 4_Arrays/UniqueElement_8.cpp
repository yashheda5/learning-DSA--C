#include <iostream>
#include <vector>
using namespace std;
int main(){
    cout<<"Enter the value for n"<<endl;
    int n;
    cin>>n;
    vector <int>arr(n);
    cout<<"Enter the value for the array"<<endl;
    // cout<<arr.size()<<endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }
    for (int  i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int ans=0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans=ans^arr[i];
    }
    cout<<"The unique element in the array is = "<<ans<<endl;
    
    
}