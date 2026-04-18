// Last updated: 4/18/2026, 9:00:47 PM
1class Solution {
2public:
3    int minCost(int n, vector<int>& cuts) {
4        int t=cuts.size();
5        cuts.push_back(0);
6        cuts.push_back(n);
7        sort(cuts.begin(),cuts.end());
8        int m=cuts.size();
9        vector<vector<long long>>dp(m,vector<long long>(m,0));
10        for(int i=m-2;i>=1;i--)
11        {
12            for(int j=1;j<=m-2;j++)
13            {
14                if(i>j) continue;
15                int mini=INT_MAX;
16                for(int index=i;index<=j;index++)
17                {
18                  int cost=cuts[j+1]-cuts[i-1]+dp[i][index-1]+dp[index+1][j];
19                   mini=min(mini,cost);
20
21                }
22                dp[i][j]=mini;
23            }
24        }
25        return dp[1][m-2];
26
27    }
28};