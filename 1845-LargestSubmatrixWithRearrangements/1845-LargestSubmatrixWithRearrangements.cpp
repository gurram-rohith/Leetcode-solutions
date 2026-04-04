// Last updated: 4/5/2026, 12:13:00 AM
class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        int ans=0;
        if(m==1)
        {
            for(int j=0;j<n;j++)
            ans+=matrix[0][j];
            return ans;

        }
        for(int i=m-2;i>=0;i--)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0) continue;
                matrix[i][j]+=matrix[i+1][j];
            }
        }
        int maxans=0;
        for(int i=0;i<m;i++)
        {
            sort(matrix[i].begin(),matrix[i].end(),greater<int>());
            for(int j=0;j<n;j++)
            {
                maxans=max(maxans,matrix[i][j]*(j+1));
            }
        }
        return maxans;
    }
};