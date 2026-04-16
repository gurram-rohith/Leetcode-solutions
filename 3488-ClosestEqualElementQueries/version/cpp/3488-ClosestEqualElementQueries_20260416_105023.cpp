// Last updated: 4/16/2026, 10:50:23 AM
1class Solution {
2public:
3    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
4        vector<int>ans;
5        int n=nums.size();
6        unordered_map<int,vector<int>>mpp;
7        for(int i=0;i<nums.size();i++)
8        {
9            mpp[nums[i]].push_back(i);
10        }
11        for(int i=0;i<queries.size();i++)
12        {
13            int index=queries[i];
14            int val=nums[queries[i]];
15            if(mpp[val].size()==1) 
16            ans.push_back(-1);
17            else
18            {
19                vector<int>&vec=mpp[val];
20                int minans=INT_MAX;
21               int fg=upper_bound(vec.begin(),vec.end(),index)-vec.begin();
22
23               int lg=vec.size()-1;
24               if(vec[lg]==index) lg=-1;
25
26               int ls=lower_bound(vec.begin(),vec.end(),index)-vec.begin()-1;
27               
28               int fs=0;
29               if(index==vec[fs]) fs=-1;
30               if(fg>=0&&fg<=vec.size()-1)
31               {
32                int d=abs(index-vec[fg]);
33                minans=min({minans,d,n-d});
34               }
35
36               if(lg>=0&&lg<=vec.size()-1)
37               {
38                int d=abs(index-vec[lg]);
39                minans=min({minans,d,n-d});
40               }
41
42               if(fs>=0&&fs<=vec.size()-1)
43               {
44                int d=abs(index-vec[fs]);
45                minans=min({minans,d,n-d});
46               }
47
48               if(ls>=0&&ls<=vec.size()-1)
49               {
50                int d=abs(index-vec[ls]);
51                minans=min({minans,d,n-d});
52               }
53               ans.push_back(minans);
54            }
55        }
56        return ans;
57    }
58};