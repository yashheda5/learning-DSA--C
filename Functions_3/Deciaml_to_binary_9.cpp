#include <iostream>
using namespace std;
void binary(int n){
    if(n==1){
        cout<<1;
        return ;
    }
    binary(n/2);
    cout<<n%2;
}
int main(){
    cout<<"Enter a number "<<endl;
    int n;
    cin>>n;
    binary(n);
}