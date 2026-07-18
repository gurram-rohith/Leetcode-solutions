// Last updated: 7/18/2026, 8:45:08 PM
1class Solution {
2public:
3    long long maximumValue(int n, int s, int m) {
4        
5        if(n==1) return (long long)s;
6        long long maxi=s*1LL+(n/2)*1LL*m-(n/2-1);
7        
8        
9        return maxi;
10        
11    }
12};