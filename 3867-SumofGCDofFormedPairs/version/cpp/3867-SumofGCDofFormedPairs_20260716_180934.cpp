// Last updated: 7/16/2026, 6:09:34 PM
1class Solution {
2public:
3    long long gcdSum(vector<int>& nums) {
4        vector<int>maxele(nums.size(),INT_MIN);
5        long long ans=0;
6        vector<int>prefixgcd(nums.size());
7        for(int i=0;i<nums.size();i++)
8            {
9                if(i==0)
10                    maxele[i]=nums[i];
11                else maxele[i]=max(maxele[i-1],nums[i]);
12            }
13        for(int i=0;i<nums.size();i++)
14            prefixgcd[i]=__gcd(nums[i],maxele[i]);
15        sort(prefixgcd.begin(),prefixgcd.end());
16        int l=0,r=prefixgcd.size()-1;
17        while(l<r)
18            {
19                ans+=__gcd(prefixgcd[l],prefixgcd[r]);
20                l++,r--;
21            }
22        return ans;
23    }
24};