// Last updated: 4/20/2026, 6:53:21 PM
1class Solution {
2public:
3    int maxans(vector<vector<int>>&dp,int i,int j,vector<int>&nums)
4    {
5        if(i>j) return 0;
6        if(dp[i][j]!=-1) return dp[i][j];
7        for(int k=i;k<=j;k++)
8        {
9            dp[i][j]=max(dp[i][j],nums[i-1]*nums[k]*nums[j+1]+maxans(dp,i,k-1,nums)+maxans(dp,k+1,j,nums));
10        }
11        return dp[i][j];
12
13    }
14    int maxCoins(vector<int>& nums) {
15        nums.insert(nums.begin(),1);
16        nums.push_back(1);
17        int n=nums.size();
18        vector<vector<int>>dp(n,vector<int>(n,-1));
19        return maxans(dp,1,n-2,nums);
20    }
21};