// Last updated: 4/20/2026, 8:09:25 PM
1class Solution {
2public:
3    bool checkpal(string &s,int i,int j)
4    {
5        if(i<0) return false;
6        while(i<=j)
7        {
8            if(s[i]!=s[j]) return false;
9            i++,j--;
10        }
11        return true;
12    }
13    int minCut(string s) {
14        int n=s.size();
15        vector<int>dp(n,0);
16        for(int i=0;i<n;i++)
17        {
18            int mincost=INT_MAX;
19            for(int k=i;k>=0;k--)
20            {
21                if(checkpal(s,k,i))
22                {
23                    if(k==0) mincost=1;
24                    else
25                    mincost=min(mincost,1+dp[k-1]);
26                }
27            }
28            dp[i]=mincost;
29        }
30        return dp[n-1]-1;
31    }
32};