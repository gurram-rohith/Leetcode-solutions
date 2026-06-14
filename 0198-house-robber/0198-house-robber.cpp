class Solution {
public:
    int maxmoney(vector<int>&nums,vector<vector<int>>&dp,int i,int prev)
    {
        if(i>=nums.size()) return 0;
        if(dp[i][prev+1]!=-1) return dp[i][prev+1];
        if(prev==-1)
        {
            int take=nums[i]+maxmoney(nums,dp,i+1,i);
            int nottake=maxmoney(nums,dp,i+1,prev);
            dp[i][prev+1]=max(take,nottake);
        }
        else
        {
            dp[i][prev+1]=maxmoney(nums,dp,i+1,prev);
            if(prev!=i-1)
            dp[i][prev+1]=max(dp[i][prev+1],nums[i]+maxmoney(nums,dp,i+1,i)); 
        }
        return dp[i][prev+1];
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return maxmoney(nums,dp,0,-1);
        

    }
};