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
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int n=numCourses;
        vector<bool>vis1(n,false),pathvis(n,false);
        vector<vector<int>>adj(n);
        vector<int>ans;
        vector<int>indegree(2001,0);
        for(int i=0;i<prerequisites.size();i++)
        adj[prerequisites[i][1]].push_back(prerequisites[i][0]),indegree[prerequisites[i][0]]++;


        for(int i=0;i<n;i++)
        {
            if(!vis1[i])
            {
                if(detect(adj,i,vis1,pathvis)==true) return {};
            }
            else
            {
                if(pathvis[i]) return {};
            }
        }
        queue<int>q;
        for(int i=0;i<n;i++)
        {
            if(indegree[i]==0)
            q.push(i);
        }
        while(!q.empty())
        {
            int ele=q.front();
            q.pop();
            ans.push_back(ele);
            for(int i:adj[ele])
            {
                indegree[i]--;
                if(indegree[i]<=0)
                q.push(i);
            }
        }
        return ans;

    }
};