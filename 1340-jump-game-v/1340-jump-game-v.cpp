class Solution {
public:
    int maxJumps(vector<int>& arr, int d) {
        int n=arr.size();
        vector<int>dp(n,1);
        
        int ans=1;
        vector<pair<int,int>>vpp;
        for(int i=0;i<n;i++) vpp.push_back({arr[i],i});
        sort(vpp.begin(),vpp.end());
        // we have to sort because the subproblems which are the lower numbers must be solved first
        for(auto it:vpp)
        {
            int i=it.second;
           for(int j=i+1;j<=min(i+d,n-1);j++)
            {
            if(arr[j]>=arr[i]) break;
            dp[i]=max(dp[i],1+dp[j]);
            }
            for(int j=i-1;j>=max(i-d,0);j--)
            {
            if(arr[j]>=arr[i]) break;
            dp[i]=max(dp[i],1+dp[j]);
            }
            ans=max(ans,dp[i]);
        }
        return ans;

    }
};