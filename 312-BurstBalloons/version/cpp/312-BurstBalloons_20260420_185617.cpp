// Last updated: 4/20/2026, 6:56:17 PM
1class Solution {
2public:
3    int maxCoins(vector<int>& nums) {
4        nums.insert(nums.begin(),1);
5        nums.push_back(1);
6        int n=nums.size();
7        vector<vector<int>>dp(n,vector<int>(n,0));
8        for(int i=n-2;i>=1;i--)
9        {
10            for(int j=1;j<=n-2;j++)
11            {
12                for(int k=i;k<=j;k++)
13                {
14                    dp[i][j]=max(dp[i][j],nums[k]*nums[i-1]*nums[j+1]+dp[i][k-1]+dp[k+1][j]);
15                }
16            }
17        }
18        return dp[1][n-2];
19    }
20};