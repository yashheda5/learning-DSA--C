#include <iostream>
using namespace std;
int main(){
    int a[]={1,1,1,0,0,0,1,0,1,1};
    int n1=0,n0=0 ;
    for (int i = 0; i < 10;  i++)
    {
        if(a[i]==1){
            n1++;
        }else{
            n0++;
        }
    }
    cout<<"1 count is ="<<n1<<endl;
    cout<<"0 count is ="<<n0<<endl;
    
}