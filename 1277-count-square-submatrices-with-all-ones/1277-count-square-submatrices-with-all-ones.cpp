class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        auto dp=matrix;
        int sum=0;
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(matrix[i][j]==0) continue;
                dp[i][j]=1+min({dp[i-1][j],dp[i-1][j-1],dp[i][j-1]});
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++) sum+=dp[i][j];
        }
        return sum;
    }
};