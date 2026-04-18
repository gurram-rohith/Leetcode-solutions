// Last updated: 4/18/2026, 8:44:23 PM
1class Solution {
2public:
3    int cost(vector<vector<int>>&dp,vector<int>&cuts,int i,int j)
4    {
5        if(i>j) return 0;
6        if(i<0||i>=cuts.size()) return 0;
7        if(j<0||j>=cuts.size()) return 0;
8        if(dp[i][j]!=INT_MAX) return dp[i][j];
9        for(int index=i;index<=j;index++)
10        {
11            dp[i][j]=min(dp[i][j],cuts[j+1]-cuts[i-1]+cost(dp,cuts,i,index-1)+cost(dp,cuts,index+1,j));
12        }
13        return dp[i][j];
14    }
15    int minCost(int n, vector<int>& cuts) {
16        int t=cuts.size();
17        cuts.push_back(0);
18        cuts.push_back(n);
19        sort(cuts.begin(),cuts.end());
20        int m=cuts.size();
21        vector<vector<int>>dp(m,vector<int>(m,INT_MAX));
22        return cost(dp,cuts,1,m-2);
23
24    }
25};