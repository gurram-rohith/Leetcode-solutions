// Last updated: 4/5/2026, 12:12:00 AM
class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>>ans(m+1-k,vector<int>(n+1-k,0));
        for(int i=0;i<m+1-k;i++)
        {
            for(int j=0;j<n+1-k;j++)
            {
                set<int>temp;
                for(int l=i;l<i+k;l++)
                {
                    for(int o=j;o<j+k;o++)
                    {
                        temp.insert(grid[l][o]);
                    }
                }
                int minans=INT_MAX;
                auto prev=temp.begin();
                auto curr=next(temp.begin());
                for(;curr!=temp.end();prev++,curr++)
                {
                    minans=min(minans,abs(*(curr)-*(prev)));
                }
                if(minans==INT_MAX) minans=0;
                ans[i][j]=minans;
            }
        }
        return ans;
    }
};