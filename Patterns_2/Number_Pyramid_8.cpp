#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the value for n"<<endl;
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int  j = 1; j <= n-i; j++)
        {
            cout<<"  ";
        }
        for (int k = i; k <=i*2-1; k++)
        {
            cout<<k<<" ";
        }
        int element=2*i-2;
        for (int l = 2; l <=i; l++)
        {
            cout<<element--<<" ";
        }
        cout<<endl;
    }
    
}