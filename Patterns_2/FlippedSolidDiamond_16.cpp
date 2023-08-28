#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the value for n" << endl;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < n-i; j++)
        {
            cout<<"*";
        }
        for (int k = 0; k < i; k++)
        {
            cout<<"  ";
        }
        for (int  l = 0; l < n-i; l++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<"*";
        }
        for (int k = 0; k < n-i-1; k++)
        {
            cout<<"  ";
        }
        for (int j = 0; j < i+1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
        
        
    }
    
    
}