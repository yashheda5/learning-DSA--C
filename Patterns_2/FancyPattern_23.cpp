#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the value for n" << endl;
    int n;
    cin >> n;
    cout<<"*"<<endl;;
    for (int i = 0; i < n; i++)
    {
        cout<<"* ";
        int j=0;
        for ( j = 0; j < i; j++)
        {
            cout<<j+1<<" ";
        }
        for ( j = i+1; j >=1; j--)
       {
         cout<<j<<" ";
       }
        cout<<"* ";
        cout<<endl;
    }
    for (int i = n; i > 0; i--)
    {
        cout<<"* ";
        int j=0;
        for ( j = 0; j < i; j++)
        {
            cout<<j+1<<" ";
        }
        for ( j = i+1; j >=1; j--)
       {
         cout<<j<<" ";
       }
        cout<<"* ";
        cout<<endl;
    }
    cout<<"*";
}