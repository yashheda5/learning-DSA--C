#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the value for n" << endl;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*i+1; j++)
        {
            if(j%2==1){
                cout<<"*";
            } else{
                cout<<i+1;
            }
            
        }
        cout<<endl;
        
    }
    for (int i = n; i >0 ; i--)
    {
        for (int j = 0; j < 2*i-1; j++)
        {
            if(j%2==1){
                cout<<"*";
            } else{
                cout<<i;
            }
            
        }
        cout<<endl;
        
    }
}