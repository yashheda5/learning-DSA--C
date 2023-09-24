#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the value for n" << endl;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
       for (int j = i; j < n; j++)
       {
      if (i == 0 || j == i || j == n-1)
                cout << j+1 << " ";
            else
                cout << "  ";
       }
       cout<<endl;
    }
}