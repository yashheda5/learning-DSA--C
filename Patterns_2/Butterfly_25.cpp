#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the value for n" << endl;
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<"* ";
        }
        for (int  j = 0; j < 2*n-2*i-2; j++)
        {
            cout<<"  ";
        }
        for (int k = 0; k < i+1; k++)
        {
            cout<<"* ";
        }
        
        
        cout<<endl;
        
    }
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout<<"* ";
        }
        for (int j = 0; j < 2*i; j++)
        {
            cout<<"  ";
        }
         for (int j = 0; j < n-i; j++)
        {
            cout<<"* ";
        }
        
        cout<<endl;
        
    }
    
}