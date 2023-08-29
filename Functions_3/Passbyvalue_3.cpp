#include <iostream>
using namespace std;

void change(int a){
    a=a+5;
}
int main(){
    int n=7;
    change(n);
    cout<<n;
}