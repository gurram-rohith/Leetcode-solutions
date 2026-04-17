// Last updated: 4/17/2026, 8:12:27 AM
1class Solution {
2public:
3    long long reverse(int n)
4    {
5        long long temp=0;
6        while(n>0)
7        {
8           temp=temp*10+n%10;
9            n/=10;
10        }
11        return temp;
12    }
13    int minMirrorPairDistance(vector<int>& nums) {
14        map<int,vector<int>>mpp;
15        int minans=INT_MAX;
16
17        for(int i=0;i<nums.size();i++)
18        {
19            mpp[nums[i]].push_back(i);
20        }
21        for(int i=0;i<nums.size();i++)
22        {
23            long long y=reverse(nums[i]);
24            if(mpp.find(y)!=mpp.end())
25           {
26            vector<int>&vec=mpp[y];
27            int ind=upper_bound(vec.begin(),vec.end(),i)-vec.begin();
28            
29            if(ind>=0&&ind<vec.size())
30            minans=min(minans,vec[ind]-i);
31           }
32        }
33        if(minans==INT_MAX) return -1;
34        return minans;
35    }
36};