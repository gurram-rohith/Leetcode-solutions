// Last updated: 7/18/2026, 9:25:32 PM
1class Solution {
2public:
3        const int mod=1e9+7;
4    int minAdjacentSwaps(vector<int>& nums, int a, int b) {
5        int ela=0,grb=0,rem=nums.size();
6        for(int i:nums) {
7            if(i<a) ela++;
8            else if(i>b) grb++;
9        }
10        rem-=ela+grb;
11        vector<int>ans;
12        long long ansval=0;
13        vector<int>tvec;
14        for(int i=0;i<nums.size();i++)
15            {
16                if(nums[i]<a)
17                {
18                    int k=ans.size();
19                   
20                    long long temp=i-k;
21                     ans.push_back(nums[i]);
22                    ansval=(ansval+temp)%mod;   
23                }
24                else tvec.push_back(nums[i]);
25            }
26        for(int i=0;i<tvec.size();i++)
27            {
28                if(tvec[i]>=a&&tvec[i]<=b)
29                {
30                    int k=ans.size();
31                    long long temp=ela+i-k;
32                    ans.push_back(tvec[i]);
33                    ansval=(ansval+temp*1LL)%mod;
34                }
35            }
36        return ansval;
37        
38    }
39};