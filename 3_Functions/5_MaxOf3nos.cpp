#include <iostream>
#include <cmath>
using namespace std;

int add(int a , int b ,int c){
    int greater=max(a,max(c,b));
    return greater;
}

int main(){
cout<<add(1,2,3);
}