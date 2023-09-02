#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "Enter the value for n" << endl;
    int n;
    cin>>n;
    int c = 0;
    int ans = 0;
    int store=0;
    while (n > 0)
    {
        int d=n%10;
        n=n/10;
        store=d*pow(2,c++);
        ans+=store;

    }
    cout<<ans<<endl;
}