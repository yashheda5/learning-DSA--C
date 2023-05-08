#include <iostream>
using namespace std;
int main(){
    int a[5]={12,34,43,54,56};
    for (int i = 0; i < 5; i++)
    {
        a[i]=1;
    }
    for (int j = 0; j < 5; j++)
    {
        cout<<a[j]<<" ";
    }
    
    
}