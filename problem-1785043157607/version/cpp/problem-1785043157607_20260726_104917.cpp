// Last updated: 7/26/2026, 10:49:17 AM
1class Solution {
2public:
3    int largestInteger(int n, int s) {
4        int temp=0;
5        while(n--)
6            {
7                temp=temp*10+min(9,s);
8                s-=min(9,s);
9            }
10        if(s==0) return temp;
11        return -1;
12    }
13};