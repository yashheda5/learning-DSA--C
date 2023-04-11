#include <iostream>
using namespace std;
// void fun(int n){
//     while(n>0){
//         cout<<n%10<<" ";
//         n=n/10;
//     }
    
// }
void fun(int n){
    if(n<1){
        return;
    }
    
    fun(n/10);
    cout<<n%10<<" ";
}
int main(){
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;
    fun(n);
}