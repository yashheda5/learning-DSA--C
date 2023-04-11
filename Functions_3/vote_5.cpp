#include <iostream>
using namespace std;
string vote(int n){
    return (n>=18) ? "can vote ": "cannot vote";
}
int main(){
    int n;
    cout<<"Enter the value for n"<<endl;
    cin>>n;
    cout<<vote(n)<<endl;
}