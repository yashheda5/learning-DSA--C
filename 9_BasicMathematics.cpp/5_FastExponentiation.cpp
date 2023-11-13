#include <bits/stdc++.h>
using namespace std;
int fastExponent(int a , int b ){
    int ans =1;
    while(b>0){
        if(b & 1){
            ans*=a;
        }
        a=a*a;
        b>>=1;
    }
    return ans;
}
int main(){
    cout<<fastExponent(3,3)<<endl;
}