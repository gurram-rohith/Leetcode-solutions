// Last updated: 5/4/2026, 11:02:34 PM
1class Solution {
2public:
3    void rotate(vector<vector<int>>& matrix) {
4        int n=matrix.size();
5
6        for(int i=0;i<n-1;i++)
7        {
8            for(int j=i+1;j<n;j++)
9            {
10                
11                    int temp=matrix[i][j];
12                    matrix[i][j]=matrix[j][i];
13                    matrix[j][i]=temp;
14            }
15
16        }
17       for(int i=0;i<n;i++)
18       {
19        reverse(matrix[i].begin(),matrix[i].end());
20       }
21    }
22};