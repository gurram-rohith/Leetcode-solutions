// Last updated: 7/18/2026, 6:35:38 PM
1class Solution {
2public:
3    int findGCD(vector<int>& nums) {
4        int mini=1001,maxii=0;
5        for(int i:nums) mini=min(mini,i),maxii=max(maxii,i);
6        return __gcd(mini,maxii);
7    }
8};