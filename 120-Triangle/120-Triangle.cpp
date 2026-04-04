// Last updated: 4/5/2026, 12:15:05 AM
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<int>front(n,0),curr(n,0);
        for(int i=0;i<n;i++)
        front[i]=triangle[n-1][i];
        for(int i=n-2;i>=0;i--)
        {
            for(int j=i;j>=0;j--)
            {
                curr[j]=triangle[i][j]+min(front[j],front[j+1]);
            }
            front=curr;
        }
        return front[0];
    }
};