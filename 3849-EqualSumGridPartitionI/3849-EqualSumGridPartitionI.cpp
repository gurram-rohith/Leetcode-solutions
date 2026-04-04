// Last updated: 4/5/2026, 12:12:04 AM
class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        vector<long long>rowsum(grid.size(),0),colsum(grid[0].size(),0);
        long long totrs=0,totcs=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                rowsum[i]+=grid[i][j];
                colsum[j]+=grid[i][j];
            }
        }
        for(int i=0;i<grid.size();i++)
        {
            totrs+=rowsum[i];
        }
        for(int i=0;i<grid[0].size();i++)
        {
            totcs+=colsum[i];
        }
        long long rsum=0,csum=0;
        for(int i=0;i<grid.size();i++)
        {
            rsum+=rowsum[i];
            if(2*rsum==totrs) return true;
        }
        cout<<"hi"<<endl;
        for(int i=0;i<grid[0].size();i++)
        {
            csum+=colsum[i];
            if(2*csum==totcs) return true;
        }
        return false;
    }
};