class Solution {
public:
    int minCost(int n, vector<int>& cuts) {
        int t=cuts.size();
        cuts.push_back(0);
        cuts.push_back(n);
        sort(cuts.begin(),cuts.end());
        int m=cuts.size();
        vector<vector<long long>>dp(m,vector<long long>(m,0));
        for(int i=m-2;i>=1;i--)
        {
            for(int j=1;j<=m-2;j++)
            {
                if(i>j) continue;
                int mini=INT_MAX;
                for(int index=i;index<=j;index++)
                {
                  int cost=cuts[j+1]-cuts[i-1]+dp[i][index-1]+dp[index+1][j];
                   mini=min(mini,cost);

                }
                dp[i][j]=mini;
            }
        }
        return dp[1][m-2];

    }
};