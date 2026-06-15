// Last updated: 6/15/2026, 6:34:49 PM
1class Solution {
2public:
3    int maxJumps(vector<int>& arr, int d) {
4        int n=arr.size();
5        vector<int>dp(n,1);
6        
7        int ans=1;
8        vector<pair<int,int>>vpp;
9        for(int i=0;i<n;i++) vpp.push_back({arr[i],i});
10        sort(vpp.begin(),vpp.end());
11        for(auto it:vpp)
12        {
13            int i=it.second;
14           for(int j=i+1;j<=min(i+d,n-1);j++)
15            {
16            if(arr[j]>=arr[i]) break;
17            dp[i]=max(dp[i],1+dp[j]);
18            }
19            for(int j=i-1;j>=max(i-d,0);j--)
20            {
21            if(arr[j]>=arr[i]) break;
22            dp[i]=max(dp[i],1+dp[j]);
23            }
24            ans=max(ans,dp[i]);
25        }
26        return ans;
27
28    }
29};