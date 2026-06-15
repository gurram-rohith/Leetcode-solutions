// Last updated: 6/15/2026, 6:35:36 PM
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
11        // we have to sort because the subproblems which are the lower numbers must be solved first
12        for(auto it:vpp)
13        {
14            int i=it.second;
15           for(int j=i+1;j<=min(i+d,n-1);j++)
16            {
17            if(arr[j]>=arr[i]) break;
18            dp[i]=max(dp[i],1+dp[j]);
19            }
20            for(int j=i-1;j>=max(i-d,0);j--)
21            {
22            if(arr[j]>=arr[i]) break;
23            dp[i]=max(dp[i],1+dp[j]);
24            }
25            ans=max(ans,dp[i]);
26        }
27        return ans;
28
29    }
30};