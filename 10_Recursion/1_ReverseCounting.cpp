#include <bits/stdc++.h>
using namespace std;
void count(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    count(n-1);
}
int main(){
    count(5);
}