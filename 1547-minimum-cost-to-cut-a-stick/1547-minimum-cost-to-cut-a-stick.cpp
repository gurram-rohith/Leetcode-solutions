class Solution {
public:
    int cost(vector<vector<int>>&dp,vector<int>&cuts,int i,int j)
    {
        if(i>j) return 0;
        if(i<0||i>=cuts.size()) return 0;
        if(j<0||j>=cuts.size()) return 0;
        if(dp[i][j]!=INT_MAX) return dp[i][j];
        for(int index=i;index<=j;index++)
        {
            dp[i][j]=min(dp[i][j],cuts[j+1]-cuts[i-1]+cost(dp,cuts,i,index-1)+cost(dp,cuts,index+1,j));
        }
        return dp[i][j];
    }
    int minCost(int n, vector<int>& cuts) {
        int t=cuts.size();
        cuts.push_back(0);
        cuts.push_back(n);
        sort(cuts.begin(),cuts.end());
        int m=cuts.size();
        vector<vector<int>>dp(m,vector<int>(m,INT_MAX));
        return cost(dp,cuts,1,m-2);

    }
};