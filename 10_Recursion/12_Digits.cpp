#include <bits/stdc++.h>
using namespace std;
void digit(int n){
    if(n<1){
        return;
    }
    
     digit(n/10);
    cout<<n%10<<" ";
}
int main(){
    digit(4);
}