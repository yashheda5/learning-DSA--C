class Solution {
public:
int solveUsingRecursion(vector<int>& coins, int amount){
    if(amount ==0 ){
        return 0;
    }
    if(amount<0){
        return INT_MAX;
    }
    int mini=INT_MAX;
    for(int i=0;i<coins.size();i++){
        int ans=solveUsingRecursion(coins,amount-coins[i]);
        if(ans !=INT_MAX){
            mini=min(mini,1+ans);
        }
    }
    return mini;
}
    int coinChange(vector<int>& coins, int amount) {
        int ans=solveUsingRecursion( coins,  amount);
        if(ans == INT_MAX){
            return -1;
        }else{
            return ans;
        }
    }
};