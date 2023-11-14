#include <bits/stdc++.h>
using namespace std;
void print(int* ptr){
    ptr=ptr+1;
}
int main(){
    int a=5;
    int* ptr=&a;
    cout<<ptr<<endl;
    print(ptr);
    cout<<ptr<<endl;
}