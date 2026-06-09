// Last updated: 6/9/2026, 3:54:30 PM
1class Solution {
2public:
3    long long maxTotalValue(vector<int>& nums, int k) {
4        long long ans=0;
5        long long mini=LLONG_MAX,maxi=LLONG_MIN;
6        for(int i:nums)
7        {
8            mini=min(mini,(long long)i);
9            maxi=max(maxi,(long long)i);
10        }
11        return (maxi-mini)*k*(1LL);
12
13    }
14};