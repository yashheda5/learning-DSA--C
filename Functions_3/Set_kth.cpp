#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value for n"<<endl;
    cin>>n;
    int k;
    cout<<"Enter the positon"<<endl;
    cin>>k;
    int a=1;
    for (int i = 1; i <=k; i++)
    {
        a=a<<1;
    }
    cout<<a<<endl;
    cout<<(a|n);
    
}