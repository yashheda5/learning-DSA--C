#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the value for n" << endl;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int j=0;
       for (j = 0; j < i+1; j++)
       {
        cout<<char(j+'A')<<" ";
       }
       for (int j = i; j >=1; j--)
       {
        cout<<char(j+'A'-1)<<" ";
       }
       
        
        cout<<endl;
        
    }
    
}