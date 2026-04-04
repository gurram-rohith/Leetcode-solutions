// Last updated: 4/5/2026, 12:13:06 AM
class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        vector<int>rowsum(mat.size(),0),colsum(mat[0].size(),0);
        int ans=0;
        int rows=mat.size();
        int cols=mat[0].size();
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                colsum[j]+=mat[i][j];
                rowsum[i]+=mat[i][j];
            }
        }
        int i=0,j=0;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(rowsum[i]==colsum[j]&&mat[i][j]==1&&rowsum[i]==1) ans++;
            }
        }
        return ans;
        
    }
};