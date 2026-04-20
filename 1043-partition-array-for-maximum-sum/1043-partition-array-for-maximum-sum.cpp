class Solution {
public:
using ll=long long;
    ll maxsum(vector<ll>&dp,int i,int k,vector<int>&arr)
    {
        if(i==arr.size()) return  0;
        if(dp[i]!=-1) return dp[i];
        ll maxele=LLONG_MIN,temp=0,maxans=LLONG_MIN;
        for(int j=i;j<i+k&&j<arr.size();j++)
        {
            maxele=max(maxele,(ll)arr[j]);
            temp=(j+1-i)*maxele+maxsum(dp,j+1,k,arr);
            maxans=max(maxans,temp);
        }
        return dp[i]=maxans;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n=arr.size();
        vector<ll>dp(n,-1);
        return (ll)maxsum(dp,0,k,arr);
    }
};