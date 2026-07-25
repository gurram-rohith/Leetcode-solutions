// Last updated: 7/25/2026, 1:44:17 PM
1class Solution {
2public:
3    int maxProduct(int n) {
4        vector<int>t;
5        while(n)
6        {
7            t.push_back(n%10);
8            n/=10;
9        }
10        sort(t.begin(),t.end(),greater<int>());
11        return t[0]*t[1];
12    }
13};