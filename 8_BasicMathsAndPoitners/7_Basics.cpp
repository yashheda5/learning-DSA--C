#include <bits/stdc++.h>
using namespace std;
void update(int *p){
    *p=*p +10;
cout<<*p<<endl;
}
int main(){
    int a =5;
    int* ptr=&a;
    update(ptr);
    cout<<"value of a : "<<a<<endl;
}