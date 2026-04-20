// Last updated: 4/20/2026, 7:48:24 PM
1class Solution {
2public:
3    bool checkPal(string &s,int i,int j)
4    {
5        while(i<=j)
6        {
7            if(s[i]!=s[j]) return false;
8            i++,j--;
9        }
10        return true;
11    }
12    int mincuts(string &s,vector<int>&dp,int i,int n)
13    {
14        if(i==n) return 0;
15        if(dp[i]!=-1) return dp[i];
16        int minc=INT_MAX,c;
17        for(int k=i;k<n;k++)
18        {
19            if(checkPal(s,i,k))
20            {
21               c=1+mincuts(s,dp,k+1,n);
22               minc=min(minc,c);
23            }
24        }
25        return dp[i]=minc;
26
27    }
28    int minCut(string s) {
29        int n=s.size();
30        vector<int>dp(n,-1);
31        return mincuts(s,dp,0,n)-1;
32    }
33};