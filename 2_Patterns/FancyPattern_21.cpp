#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the value for n" << endl;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n+3; j++)
        {
            cout<<"* ";
        }
        for (int k = 0; k < 2*i+1; k++)
        {
            if(k%2==1){
                cout<<"* ";
            } else{
                cout<<i+1<<" ";
            }
        }
        for (int j = i; j < n+3; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
        
    }
}