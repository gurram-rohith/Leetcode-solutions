// Last updated: 5/19/2026, 7:08:00 PM
1class Solution {
2public:
3    int countSquares(vector<vector<int>>& matrix) {
4        int m=matrix.size();
5        int n=matrix[0].size();
6        auto dp=matrix;
7        int sum=0;
8        for(int i=1;i<m;i++)
9        {
10            for(int j=1;j<n;j++)
11            {
12                if(matrix[i][j]==0) continue;
13                dp[i][j]=1+min({dp[i-1][j],dp[i-1][j-1],dp[i][j-1]});
14            }
15        }
16        for(int i=0;i<m;i++)
17        {
18            for(int j=0;j<n;j++) sum+=dp[i][j];
19        }
20        return sum;
21    }
22};