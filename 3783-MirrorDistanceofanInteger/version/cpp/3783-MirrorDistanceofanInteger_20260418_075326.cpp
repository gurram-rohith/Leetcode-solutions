// Last updated: 4/18/2026, 7:53:26 AM
1class Solution {
2public:
3    int reverse(int n)
4    {
5        int temp=0;
6        while(n>0)
7        {
8            temp=temp*10+n%10;
9            n/=10;
10        }
11        return temp;
12    }
13    int mirrorDistance(int n) {
14        return abs(n-reverse(n));
15    }
16};