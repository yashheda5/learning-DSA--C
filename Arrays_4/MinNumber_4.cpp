#include <iostream>
#include <limits.h>
using namespace std;

int minNumber(int a[], int n)
{
    int num = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < num)
        {
            num = a[i];
        }
    }
    return num;
}
int main()
{
    cout << "Enter the value for n" << endl;
    int n;
    cin >> n;
    int a[n];
    cout << "Enter the value for a" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << minNumber(a, n) << endl;
}