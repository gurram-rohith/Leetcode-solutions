// Last updated: 7/15/2026, 6:42:11 PM
1class Solution {
2public:
3    int gcdOfOddEvenSums(int n) {
4        int sum=0;
5        n*=2;
6        sum=(n*(n+1))/2;
7        int t=n/2;
8        int evsum=t*(t+1);
9        return __gcd(evsum,sum-evsum);
10    }
11};