#include <iostream>
using namespace std;
int main(){
    int n,c=0;
    cout<<"Enter the value for n"<<endl;
    cin>>n;
    while(n>0){
        if(n&1==1){
            c++;
        }
       n= n>>1;
    }
    cout<<c;
}