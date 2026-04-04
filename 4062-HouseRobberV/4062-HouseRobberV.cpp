// Last updated: 4/5/2026, 12:11:42 AM
class Solution {
public:
    long long sum(vector<long long>&dp,vector<int>&nums,vector<int>&cols,int i)
    {
        if(i<0) return 0;
        if(i==0)
        {
            return nums[i];
        }
        if(dp[i]!=-1) return dp[i];
        long long pick=0,notpick=0;
        notpick=sum(dp,nums,cols,i-1);
        if(cols[i]==cols[i-1])
            pick=nums[i]+sum(dp,nums,cols,i-2);
        else
            pick=nums[i]+sum(dp,nums,cols,i-1);
        return dp[i]=max(notpick,pick);
        
    }
    long long rob(vector<int>& nums, vector<int>& cols) {
        vector<long long>dp(nums.size(),-1);
        return sum(dp,nums,cols,nums.size()-1);
        
    }
};