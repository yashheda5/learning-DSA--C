#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of digits you want to enter"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the digits"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int number=0;
    for (int j = 0; j <n; j++)
    {
        number=number*10+a[j];
    }
    cout<<number<<endl;
    
}