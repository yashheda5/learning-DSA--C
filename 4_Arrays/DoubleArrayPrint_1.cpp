#include <iostream>
using namespace std;
int main(){
     cout << "Enter the value for n" << endl;
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter the value for a" << endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"Printing the array" << endl;
    for (int  i = 0; i < n; i++)
    {
        cout<<a[i]*2<<" ";
    }
    
    
}