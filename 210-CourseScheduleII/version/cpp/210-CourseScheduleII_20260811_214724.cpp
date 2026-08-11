// Last updated: 8/11/2026, 9:47:24 PM
1class Solution {
2public:
3    bool detect(vector<vector<int>>&adj,int node,vector<bool>&vis1,vector<bool>&pathvis)
4    {
5        vis1[node]=true;
6        pathvis[node]=true;
7        for(int i:adj[node])
8        {
9           if(vis1[i])
10           {
11            if(pathvis[i]) return true;
12           }
13           else
14           {
15             if(detect(adj,i,vis1,pathvis)==true) return true;
16           }
17        }
18        pathvis[node]=false;
19        return false;
20    }
21    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
22        int n=numCourses;
23        vector<bool>vis1(n,false),pathvis(n,false);
24        vector<vector<int>>adj(n);
25        vector<int>ans;
26        vector<int>indegree(2001,0);
27        for(int i=0;i<prerequisites.size();i++)
28        adj[prerequisites[i][1]].push_back(prerequisites[i][0]),indegree[prerequisites[i][0]]++;
29
30
31        for(int i=0;i<n;i++)
32        {
33            if(!vis1[i])
34            {
35                if(detect(adj,i,vis1,pathvis)==true) return {};
36            }
37            else
38            {
39                if(pathvis[i]) return {};
40            }
41        }
42        queue<int>q;
43        for(int i=0;i<n;i++)
44        {
45            if(indegree[i]==0)
46            q.push(i);
47        }
48        while(!q.empty())
49        {
50            int ele=q.front();
51            q.pop();
52            ans.push_back(ele);
53            for(int i:adj[ele])
54            {
55                indegree[i]--;
56                if(indegree[i]<=0)
57                q.push(i);
58            }
59        }
60        return ans;
61
62    }
63};