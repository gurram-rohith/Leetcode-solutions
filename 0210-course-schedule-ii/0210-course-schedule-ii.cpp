class Solution {
public:
    vector<int>order;
    bool detectCycle(vector<vector<int>>&adj,int node,vector<bool>&vis,vector<bool>&pathvis)
    {
        vis[node]=true;
        pathvis[node]=true;
        
        for(int i:adj[node])
        {
            if(vis[i])
            {
                if(pathvis[i]) return true;
            }
            else {
                if(detectCycle(adj,i,vis,pathvis)==true) return true;
            }
        }
        order.push_back(node);
        pathvis[node]=false;
        return false;

    }

    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int n=numCourses;
        vector<vector<int>>adj(n);
        for(int i=0;i<prerequisites.size();i++)
        {
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        vector<bool>vis(n,false),pathvis(n,false);
        for(int i=0;i<numCourses;i++)
        {
            if(!vis[i]) {
                if(detectCycle(adj,i,vis,pathvis)==true) return {};
            }
        }
        reverse(order.begin(),order.end());
        return order;
    }
};