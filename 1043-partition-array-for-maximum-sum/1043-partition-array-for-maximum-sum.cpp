class Solution {
public:
using ll=long long;
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n=arr.size();
        vector<ll>dp(n,0);
        for(int i=0;i<n;i++)
        {
            ll maxele=LLONG_MIN,temp=0,maxans=LLONG_MIN;
            for(int j=i;j>=0&&j>=i-k+1;j--)
            {
                maxele=max(maxele,(ll)arr[j]);
                ll prev = (j > 0? dp[j - 1]:0);
                maxans = max(maxans, (ll)(i - j + 1) * maxele + prev);
            }
            dp[i]=maxans;
        }
        return dp[n-1];
        
    }
};