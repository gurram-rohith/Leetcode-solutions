// Last updated: 6/7/2026, 8:05:15 AM
1class Solution {
2public:
3    int sumOfGoodIntegers(int n, int k) {
4        int sum=0;
5        for(int i=1;i<=n+k;i++)
6            {
7                if(abs(n-i)<=k)
8                {
9                    if((n&i)==0) sum+=i;
10                }
11            }
12        return sum;
13    }
14};