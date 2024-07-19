class Solution {
public:
int SpaceOPT(int n){
   
    int prev2=0;
   int prev1=1;
   int curr=0;
   if(n==0){
    return prev2;
   }
   if(n==1){
    return prev1;
   }
   
    for(int i=2;i<=n;i++){
       curr=prev2+prev1;
       prev2=prev1;
       prev1=curr;
    }
    return curr;
}
    int fib(int n) {
        return  SpaceOPT( n);
    }
};