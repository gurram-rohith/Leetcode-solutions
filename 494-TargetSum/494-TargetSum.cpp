// Last updated: 4/5/2026, 12:13:57 AM
class Solution {
public:
    int returnCount(vector<int>&nums,int target,vector<vector<int>>&dp)
    {
        int n=nums.size();
        if(nums[0]==0)
        dp[0][0]=2;
        else dp[0][0]=1;
        if (nums[0] != 0 && nums[0] <= target)
        dp[0][nums[0]] = 1;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<=target;j++)
            {
                int pick=0,notpick=0;
                if(nums[i]<=j)
                pick=dp[i-1][j-nums[i]];
                notpick=dp[i-1][j];
                dp[i][j]=pick+notpick;
            }
        }
        return dp[n-1][target];
    }
    int countPartitions(vector<int>&nums,int target)
    {
        int n=nums.size();
        int totsum=0;
        for(int i=0;i<nums.size();i++)
        totsum+=nums[i];
        if (totsum < abs(target)) return 0;
        if ((totsum - target) % 2 != 0) return 0;
        target=(totsum-target)/2;
        vector<vector<int>>dp(n,vector<int>(target+1,0));
        return returnCount(nums,target,dp);
        
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return countPartitions(nums,target);
    }
};