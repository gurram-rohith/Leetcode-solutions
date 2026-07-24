// Last updated: 7/25/2026, 1:25:17 AM
1class Solution {
2public:
3    int uniqueXorTriplets(vector<int>& nums) {
4        vector<bool>pair_xor(2048,false);
5        vector<bool>triplet_xor(2048,false);
6        int n=nums.size();
7        for(int i=0;i<n;i++)
8        {
9            for(int j=0;j<n;j++)
10            pair_xor[nums[i]^nums[j]]=true;
11        }
12        for(int i=0;i<2048;i++)
13        {
14            if(!pair_xor[i]) continue;
15            for(int v:nums) triplet_xor[v^i]=true;
16        }
17        int ans=0;
18        for(int i=0;i<2048;i++)
19        {
20            if(triplet_xor[i]) ans++;
21        }
22        return ans;
23    }
24};