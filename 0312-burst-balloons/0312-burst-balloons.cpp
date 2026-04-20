class Solution {
public:
    int maxCoins(vector<int>& nums) {
        nums.insert(nums.begin(),1);
        nums.push_back(1);
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(n,0));
        for(int i=n-2;i>=1;i--)
        {
            for(int j=1;j<=n-2;j++)
            {
                for(int k=i;k<=j;k++)
                {
                    dp[i][j]=max(dp[i][j],nums[k]*nums[i-1]*nums[j+1]+dp[i][k-1]+dp[k+1][j]);
                }
            }
        }
        return dp[1][n-2];
    }
};