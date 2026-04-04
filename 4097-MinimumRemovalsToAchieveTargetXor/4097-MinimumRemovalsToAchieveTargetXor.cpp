// Last updated: 4/5/2026, 12:11:32 AM
class Solution {
public:
    int ans(vector<vector<int>>&dp,int i,int xorele,int target,vector<int>&nums)
    {
        if(i<0)
        {
            return (xorele==target?0:-1e9);
        }
        if(dp[i][xorele]!=-1) return dp[i][xorele];
        int take=ans(dp,i-1,xorele^nums[i],target,nums);
        if(take!=-1e9)take+=1;
        int nottake=ans(dp,i-1,xorele,target,nums);
        return dp[i][xorele]=max(take,nottake);
    }
    int minRemovals(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(16384,-1));
        int ansvar=ans(dp,n-1,0,target,nums);
        if(ansvar<0) return -1;
        return n-ansvar;
    }
};