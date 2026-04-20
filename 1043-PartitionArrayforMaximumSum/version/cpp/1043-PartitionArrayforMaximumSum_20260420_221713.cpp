// Last updated: 4/20/2026, 10:17:13 PM
1class Solution {
2public:
3using ll=long long;
4    int maxSumAfterPartitioning(vector<int>& arr, int k) {
5        int n=arr.size();
6        vector<ll>dp(n,0);
7        for(int i=0;i<n;i++)
8        {
9            ll maxele=LLONG_MIN,temp=0,maxans=LLONG_MIN;
10            for(int j=i;j>=0&&j>=i-k+1;j--)
11            {
12                maxele=max(maxele,(ll)arr[j]);
13                ll prev = (j > 0? dp[j - 1]:0);
14                maxans = max(maxans, (ll)(i - j + 1) * maxele + prev);
15            }
16            dp[i]=maxans;
17        }
18        return dp[n-1];
19        
20    }
21};