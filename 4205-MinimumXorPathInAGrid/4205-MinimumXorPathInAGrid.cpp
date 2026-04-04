// Last updated: 4/5/2026, 12:10:58 AM
class Solution {
public:
    int ans(vector<vector<vector<int>>>&dp,int i,int j,vector<vector<int>>&grid,int temp)
    {
        temp^=grid[i][j];
        if(i==0&&j==0)
        {
            return dp[i][j][temp]=temp;
        }
        if(dp[i][j][temp]!=-1) return dp[i][j][temp];
        int moveleft=INT_MAX,movetop=INT_MAX;
        if(i>0)
            movetop=ans(dp,i-1,j,grid,temp);
        if(j>0)
            moveleft=ans(dp,i,j-1,grid,temp);
        return dp[i][j][temp]=min(moveleft,movetop);
    }
    int minCost(vector<vector<int>>& grid) {
        int temp=0;
        int m=grid.size(),n=grid[0].size();
        vector<vector<vector<int>>>dp(m,vector<vector<int>>(n,vector<int>(1024,-1)));
        return ans(dp,m-1,n-1,grid,temp);
    }
};