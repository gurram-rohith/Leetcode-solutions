class Solution {
public:
    bool detect(vector<vector<int>>&adj,int node,vector<bool>&vis1,vector<bool>&pathvis)
    {
        vis1[node]=true;
        pathvis[node]=true;
        for(int i:adj[node])
        {
           if(vis1[i])
           {
            if(pathvis[i]) return true;
           }
           else
           {
             if(detect(adj,i,vis1,pathvis)==true) return true;
           }
        }
        pathvis[node]=false;
        return false;
    }
    void dfs(int node,vector<vector<int>>&adj,vector<bool>&vis,stack<int>&st)
    {
        vis[node]=true;
        for(int i:adj[node])
        {
            if(!vis[i]) dfs(i,adj,vis,st);
        }
        st.push(node);
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int n=numCourses;
        vector<bool>vis1(n,false),vis(n,false),pathvis(n,false);
        vector<vector<int>>adj(n);
        vector<int>ans;

        for(int i=0;i<prerequisites.size();i++)
        adj[prerequisites[i][1]].push_back(prerequisites[i][0]);

        stack<int>st;
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            dfs(i,adj,vis,st);
            if(!vis1[i]){
                if(detect(adj,i,vis1,pathvis)==true) return {};
            }
        }
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        return ans;

    }
};