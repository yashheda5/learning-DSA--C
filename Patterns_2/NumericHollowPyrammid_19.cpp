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
            if(i==0 || j==0 || i==n-1 || j==i){
                cout<<j+1<<" ";
            } else{
                cout<<"  ";
            }
        }
        cout<<endl;
        
    }
}