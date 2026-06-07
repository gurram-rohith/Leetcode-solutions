class Solution {
public:
    int jumps(vector<int>&dp,int i,int d,vector<int>&arr)
    {
        if(dp[i]!=-1) return dp[i];
        dp[i]=1;
        int n=arr.size();
        for(int j=i+1;j<=min(i+d,n-1);j++)
        {
            if(arr[j]>=arr[i]) break;
            dp[i]=max(dp[i],1+jumps(dp,j,d,arr));
        }
        for(int j=i-1;j>=max(i-d,0);j--)
        {
            if(arr[j]>=arr[i]) break;
            dp[i]=max(dp[i],1+jumps(dp,j,d,arr));
        }
        return dp[i];

    }
    int maxJumps(vector<int>& arr, int d) {
        int n=arr.size();
        vector<int>dp(n,-1);
        
        int ans=1;
        for(int i=0;i<n;i++) 
        {
            ans=max(ans,jumps(dp,i,d,arr));
        }
        return ans;

    }
};