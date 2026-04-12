// Last updated: 4/12/2026, 8:02:52 AM
1class Solution {
2public:
3    vector<int> findDegrees(vector<vector<int>>& matrix) {
4        vector<int>ans;
5        for(int i=0;i<matrix.size();i++)
6            {
7                int t=0;
8                for(int j=0;j<matrix[0].size();j++)
9                    {
10                        if(i==j) continue;
11                        if(matrix[i][j]==1) t++;
12                    }
13                ans.push_back(t);
14            }
15        return ans;
16    }
17};