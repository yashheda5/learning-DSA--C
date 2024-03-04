#include <bits/stdc++.h>
using namespace std;
int solve(vector<int>& dp,int n){
    if(n<=1){
        return n;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    dp[n]=solve(dp,n-1)+solve(dp,n-2);
    return dp[n];
}
int topDownSolve(int n){
    vector<int>dp(n+1,-1);
    return solve(dp,n);
}

int main(){
    cout<<topDownSolve(10)<<endl;
}