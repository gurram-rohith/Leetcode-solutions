// Last updated: 4/5/2026, 12:13:05 AM
class Solution {
public:
    int maxProductPath(vector<vector<int>>& grid) {
        int MOD=1e9+7;
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<long long>>maxdp(m,vector<long long>(n));
        auto mindp=maxdp;
        mindp[0][0]=maxdp[0][0]=grid[0][0];
        for(int j=1;j<n;j++)
        mindp[0][j]=maxdp[0][j]=maxdp[0][j-1]*grid[0][j];
        for(int i=1;i<m;i++)
        mindp[i][0]=maxdp[i][0]=maxdp[i-1][0]*grid[i][0];
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                long long a,b,c,d;
                a=maxdp[i-1][j]*grid[i][j];
                b=maxdp[i][j-1]*grid[i][j];
                c=mindp[i-1][j]*grid[i][j];
                d=mindp[i][j-1]*grid[i][j];
                maxdp[i][j]=max({a,b,c,d});
                mindp[i][j]=min({a,b,c,d});
            }
        }
        long long ans=maxdp[m-1][n-1];
        if(ans<0) return -1;
        return ans%MOD;
    }
};