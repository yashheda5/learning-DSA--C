#include <iostream>
using namespace std;
int main(){
    int a[]={1,2,3,3,1,2};
    int u=0;
    for (int  i = 0; i < 6; i++)
    {
        u= u ^ a[i];
    }
    cout<<u;
}