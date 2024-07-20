class Solution {
public:
int solvingUsingRecusion(vector<int>& nums,int n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return nums[0];
    }
    int include =solvingUsingRecusion(nums,n-2)+nums[n];
    int exclude =solvingUsingRecusion(nums,n-1);
    return max(include ,exclude);
}
    int rob(vector<int>& nums) {
        int n=nums.size()-1;
        return solvingUsingRecusion(nums,n);
    }
};