#include <bits/stdc++.h>
using namespace std;
double search(int k){
    int s=0,e=k;
    while(s<=e){
        int mid =s+(e-s)/2;
        if(mid * mid ==k){
            return mid;
        } else if((mid * mid)>k){
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return e;
}
double precision(int k,double num,int p){
    float increment =0.1;
    for (int i = 0; i < p; i++)
    {
        while(num*num <=k ){
            num+=increment;
        }
        num-=increment;
        increment=increment/10;
    }
    return num;
    
}
int main(){
    int k=10;
    int p=15;
    double n=search(k);
    cout<<precision(k,n,p)<<endl;
}
