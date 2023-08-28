#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the value for n" << endl;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a=65;
        int j=0;
        for ( j = 0; j < i+1; j++)
        {
            cout<<(char)a++<<" ";
        }
        j--;
        
        for (j=i; j >=0 ; j--)
        {
            cout<<(char)a--<<" ";
        }
        
        
        cout<<endl;
        
    }
    
}