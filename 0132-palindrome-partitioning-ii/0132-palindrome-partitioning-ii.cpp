class Solution {
public:
    bool checkPal(string &s,int i,int j)
    {
        while(i<=j)
        {
            if(s[i]!=s[j]) return false;
            i++,j--;
        }
        return true;
    }
    int mincuts(string &s,vector<int>&dp,int i,int n)
    {
        if(i==n) return 0;
        if(dp[i]!=-1) return dp[i];
        int minc=INT_MAX,c;
        for(int k=i;k<n;k++)
        {
            if(checkPal(s,i,k))
            {
               c=1+mincuts(s,dp,k+1,n);
               minc=min(minc,c);
            }
        }
        return dp[i]=minc;

    }
    int minCut(string s) {
        int n=s.size();
        vector<int>dp(n,-1);
        return mincuts(s,dp,0,n)-1;
    }
};