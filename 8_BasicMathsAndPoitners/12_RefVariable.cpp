#include <bits/stdc++.h>
using namespace std;
void solve(int*& p){
    p=p+1;
}
int main(){
    int a =5;
    int* ptr=&a;
    cout<<ptr<<endl;
    solve(ptr);
    cout<<ptr<<endl;
}
