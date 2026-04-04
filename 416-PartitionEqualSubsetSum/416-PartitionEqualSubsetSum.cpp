// Last updated: 4/5/2026, 12:14:04 AM
class Solution {
public:
    bool ans(vector<int>&nums,vector<vector<int>>&dp,int i,int target)
    {
        if(i<0) return false;
        if(i==0)
        {
            if(target==0) return true;
            if(nums[0]==target) return true;
            return false;
        }
        if(dp[i][target]!=-1) return dp[i][target];
        bool take=false;
        if(nums[i]<=target)
        take=ans(nums,dp,i-1,target-nums[i]);
        bool nottake=ans(nums,dp,i-1,target);
        return dp[i][target]=(take||nottake);
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i:nums) sum+=i;
        if(sum%2!=0) return false;
        vector<vector<int>>dp(n,vector<int>(sum/2+1,-1));
        return ans(nums,dp,n-1,sum/2);
    }
};