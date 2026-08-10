// Last updated: 8/10/2026, 9:59:34 PM
1class Solution {
2public:
3    void dfs(vector<vector<char>>&grid,vector<vector<bool>>&vis,int i,int j)
4    {
5        if(i<0||j<0||i>=grid.size()||j>=grid[0].size()||grid[i][j]=='0'||vis[i][j]) return;
6        vis[i][j]=true;
7        dfs(grid,vis,i+1,j);
8        dfs(grid,vis,i,j+1);
9        dfs(grid,vis,i-1,j);
10        dfs(grid,vis,i,j-1);
11    }
12    int numIslands(vector<vector<char>>& grid) {
13        int m=grid.size(),n=grid[0].size();
14        vector<vector<bool>>vis(m,vector<bool>(n,false));
15        int ans=0;
16        for(int i=0;i<m;i++)
17        {
18            for(int j=0;j<n;j++)
19            {
20                if(grid[i][j]=='1'&&!vis[i][j]) 
21                {
22                    dfs(grid,vis,i,j);
23                    ans++;
24                }
25            }
26        }
27        return ans;
28    }
29};