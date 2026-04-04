// Last updated: 4/5/2026, 12:10:59 AM
class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        int n=nums1.size(),m=nums2.size();
        const long long NEG = -1e18;
         vector<vector<vector<long long>>> dp(
            k + 1,
            vector<vector<long long>>(n + 1, vector<long long>(m + 1, NEG))
        );
        for (int i = 0; i <= n; i++)
            for (int j = 0; j <= m; j++)
                dp[0][i][j] = 0;
        long long ans=0;
        for(int t=1;t<=k;t++)
        {
            for(int i=1;i<=n;i++)
            {
            for(int j=1;j<=m;j++)
            {
                dp[t][i][j]=max({dp[t][i][j-1],dp[t][i-1][j],dp[t-1][i-1][j-1]+1LL*nums1[i-1]*nums2[j-1]});
            }
            }
        }
        return dp[k][n][m];
        
    }
};