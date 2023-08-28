#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the value for n" << endl;
    int n;
    cin >> n;
    for (int i = 0; i <n+1; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout<<"   ";
        }
        for (int k = i; k <2*i ; k++)
        {
            cout<<k<<"  ";
        }
        for (int l = 2; l < i+1; l++)
        {
            cout<<l<<"  ";
        }
        
        cout<<endl;
        
        
    }
    
}