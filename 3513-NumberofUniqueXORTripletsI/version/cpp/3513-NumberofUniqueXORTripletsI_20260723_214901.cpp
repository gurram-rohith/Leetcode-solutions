// Last updated: 7/23/2026, 9:49:01 PM
1class Solution {
2public:
3    int uniqueXorTriplets(vector<int>& nums) {
4        int n=nums.size();
5        if(n<=2) return n;
6        int bits=0;
7        while(n)
8        {
9            bits++;
10            n>>=1;
11        }
12        return 1<<bits;
13
14    }
15};