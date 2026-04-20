// Last updated: 4/20/2026, 10:04:54 PM
1class Solution {
2public:
3using ll=long long;
4    ll maxsum(vector<ll>&dp,int i,int k,vector<int>&arr)
5    {
6        if(i==arr.size()) return  0;
7        if(dp[i]!=-1) return dp[i];
8        ll maxele=LLONG_MIN,temp=0,maxans=LLONG_MIN;
9        for(int j=i;j<i+k&&j<arr.size();j++)
10        {
11            maxele=max(maxele,(ll)arr[j]);
12            temp=(j+1-i)*maxele+maxsum(dp,j+1,k,arr);
13            maxans=max(maxans,temp);
14        }
15        return dp[i]=maxans;
16    }
17    int maxSumAfterPartitioning(vector<int>& arr, int k) {
18        int n=arr.size();
19        vector<ll>dp(n,-1);
20        return (ll)maxsum(dp,0,k,arr);
21    }
22};