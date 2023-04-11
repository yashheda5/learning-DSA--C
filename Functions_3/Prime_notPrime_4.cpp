#include <iostream>
using namespace std;
bool isprime(int n){
    for (int i = 2; i <n ; i++)
    {
        if(n%i==0){
            return false;
        }
    }
    
    return true;
}
 int main(){
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;
    if(isprime(n)==1){
        cout<<"true"<<endl;
    } else{
        cout<<"False"<<endl;
    }
 }