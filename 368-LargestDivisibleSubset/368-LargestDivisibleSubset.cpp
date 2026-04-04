// Last updated: 4/5/2026, 12:14:09 AM
class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>dp(nums.size(),1);
        vector<int>hash(n);
        int maxele=-1,lind;
        for(int i=0;i<nums.size();i++)
        {
            hash[i]=i;
            for(int j=0;j<i;j++)
            {
                if(nums[i]%nums[j]==0&&(1+dp[j]>dp[i]))
                {
                    dp[i]=1+dp[j];
                    hash[i]=j;
                }
            }
            if(dp[i]>maxele)
            {
                maxele=dp[i];
                lind=i;
            }
        }
        vector<int>ans;
        ans.push_back(nums[lind]);
        int i=lind;
        while(hash[i]!=i)
        {
            i=hash[i];
            ans.push_back(nums[i]);
        }
        return ans;
    }
};