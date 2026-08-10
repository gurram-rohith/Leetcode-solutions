class Solution {
public:
    bool dfs(vector<vector<int>>&graph,vector<int>&clr,int c,vector<bool>&vis,int ele){
        vector<int>adj=graph[ele];
        bool f=true;
        clr[ele]=c;
        vis[ele]=true;
        for(int i:adj)
        {
            if(vis[i])
            {
                if(clr[i]!=c) continue;
                return false;
            }
            else
            {
                f&=dfs(graph,clr,!c,vis,i);
            }
        }
        return f;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<bool>vis(n+1,false);
        bool f=true;
        vector<int>clr(n+1,0);
        for(int i=0;i<n;i++)
        {
            if(!vis[i]) f&=dfs(graph,clr,0,vis,i);
        }
        return f;
    }
};