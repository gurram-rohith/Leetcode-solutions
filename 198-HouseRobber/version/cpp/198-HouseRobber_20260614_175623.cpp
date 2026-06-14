// Last updated: 6/14/2026, 5:56:23 PM
1class Solution {
2public:
3    int maxmoney(vector<int>&nums,vector<vector<int>>&dp,int i,int prev)
4    {
5        if(i>=nums.size()) return 0;
6        if(dp[i][prev+1]!=-1) return dp[i][prev+1];
7        if(prev==-1)
8        {
9            int take=nums[i]+maxmoney(nums,dp,i+1,i);
10            int nottake=maxmoney(nums,dp,i+1,prev);
11            dp[i][prev+1]=max(take,nottake);
12        }
13        else
14        {
15            dp[i][prev+1]=maxmoney(nums,dp,i+1,prev);
16            if(prev!=i-1)
17            dp[i][prev+1]=max(dp[i][prev+1],nums[i]+maxmoney(nums,dp,i+1,i)); 
18        }
19        return dp[i][prev+1];
20    }
21    int rob(vector<int>& nums) {
22        int n=nums.size();
23        vector<vector<int>>dp(n,vector<int>(n+1,-1));
24        return maxmoney(nums,dp,0,-1);
25        
26
27    }
28};