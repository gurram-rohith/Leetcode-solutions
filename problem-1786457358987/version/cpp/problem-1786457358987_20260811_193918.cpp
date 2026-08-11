// Last updated: 8/11/2026, 7:39:18 PM
1class Solution {
2public:
3    vector<int>order;
4    bool detectCycle(vector<vector<int>>&adj,int node,vector<bool>&vis,vector<bool>&pathvis)
5    {
6        vis[node]=true;
7        pathvis[node]=true;
8        
9        for(int i:adj[node])
10        {
11            if(vis[i])
12            {
13                if(pathvis[i]) return true;
14            }
15            else {
16                if(detectCycle(adj,i,vis,pathvis)==true) return true;
17            }
18        }
19        order.push_back(node);
20        pathvis[node]=false;
21        return false;
22
23    }
24
25    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
26        int n=numCourses;
27        vector<vector<int>>adj(n);
28        for(int i=0;i<prerequisites.size();i++)
29        {
30            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
31        }
32        vector<bool>vis(n,false),pathvis(n,false);
33        for(int i=0;i<numCourses;i++)
34        {
35            if(!vis[i]) {
36                if(detectCycle(adj,i,vis,pathvis)==true) return {};
37            }
38        }
39        reverse(order.begin(),order.end());
40        return order;
41    }
42};