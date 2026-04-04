// Last updated: 4/5/2026, 12:13:47 AM
class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        vector<int>dp(nums.size(),1),cnt(nums.size(),1);
        int maxlen=1,maxans=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int prev=0;prev<i;prev++)
            {
                if((nums[prev]<nums[i])&&(1+dp[prev]>dp[i]))
                {
                    dp[i]=1+dp[prev];
                    cnt[i]=cnt[prev];
                }
                else if((nums[prev]<nums[i])&&(1+dp[prev]==dp[i]))
               cnt[i]+=cnt[prev];
            }
            maxlen=max(maxlen,dp[i]);
            
        }
        for(int i=0;i<nums.size();i++)
        {
            if(dp[i]==maxlen) maxans+=cnt[i];
        }
        return maxans;
    }
};