// Last updated: 4/5/2026, 12:12:18 AM
class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
         vector<vector<int>>px(grid.size(),vector<int>(grid[0].size(),0));
         auto py=px;
    int ans=0;
         for(int i=0;i<grid.size();i++)
         {
            for(int j=0;j<grid[0].size();j++)
            {
                px[i][j]=(grid[i][j]=='X');
                py[i][j]=(grid[i][j]=='Y');
                if(i>0)
                {
                    px[i][j]+=px[i-1][j];
                    py[i][j]+=py[i-1][j];
                }
                if(j>0)
                {
                    px[i][j]+=px[i][j-1];
                    py[i][j]+=py[i][j-1];
                }
                if(i>0&&j>0)
                {
                    px[i][j]-=px[i-1][j-1];
                    py[i][j]-=py[i-1][j-1];
                }
                if(px[i][j]==py[i][j]&&px[i][j]>=1) ans++;

            }
         }
         return ans;
    }
};