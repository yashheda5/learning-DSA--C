#include <iostream>
using namespace std;
 int main(){
    int n;
    cout<<"Enter the value for n "<<endl;
    cin>>n;
    for (int i = 1; i <=n ; i++)
    {
        for (int j = 1; j <i; j++)
        {
            cout<<" ";
        }
        for (int k = 1; k <= n+1-i; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
        
    }
    
 }