#include <iostream>
using namespace std;
string oddeve(int n){
    return (n%2==0) ? "even ": "odd";
}
int main(){
    int n;
    cout<<"Enter the value for n"<<endl;
    cin>>n;
    cout<<oddeve(n)<<endl;
}