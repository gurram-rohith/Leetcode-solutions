// Last updated: 4/8/2026, 11:13:46 AM
1class Solution {
2public:
3    const int mod=1e9+7;
4    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
5        for(int i=0;i<queries.size();i++)
6        {
7            int l=queries[i][0],r=queries[i][1],k=queries[i][2];
8            long long v=queries[i][3];
9            int j=l;
10            while(j<=r)
11            {
12                nums[j]=(nums[j]*v)%mod;
13                j+=k;
14            }
15        }
16        int xorall=0;
17        for(int i:nums)
18        xorall^=i;
19        return xorall;
20    }
21};