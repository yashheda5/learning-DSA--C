#include <iostream>
using namespace std;
int main(){
    int a[5];
    cout<<"Enter 5 elements"<<endl;
    for (int i = 0; i<5; i++)
    {
        cin>>a[i];
    }
    for (int j = 0; j < 5 ; j++)
    {
        cout<<a[j]*2<<" ";
    }
    
}