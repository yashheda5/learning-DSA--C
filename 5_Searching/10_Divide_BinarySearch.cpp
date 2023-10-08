#include <bits/stdc++.h>
using namespace std;
double precision(double q, int divisor , int dividend,int p){
    float n=0.1;
    for (int i = 0; i < p; i++)
    {
        while(q*divisor <= dividend){
            q+=n;
        }
        q-=n;
        n=n/10;
    }
    return q;
    
}
int solve(int dividend,int divisor){
    int s=0,e=dividend;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(mid*divisor ==dividend){
            return mid;
        }else if(mid*divisor >dividend){
            e=mid-1;
        } else{
            s=mid+1;
        }
    }
    return e;
}
int main(){
    int divisor =3;
    int dividend =10;
    double num=solve(dividend,divisor);
    int p=3;
    double ans=precision(num,divisor,dividend,p);
    if ((divisor<0 && dividend <0) || (divisor>0 && dividend >0)){
        cout<<ans;
    } else{
        cout<<ans *-1;
    }
}
