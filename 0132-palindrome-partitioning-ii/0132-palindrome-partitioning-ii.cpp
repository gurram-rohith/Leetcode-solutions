class Solution {
public:
    bool checkpal(string &s,int i,int j)
    {
        if(i<0) return false;
        while(i<=j)
        {
            if(s[i]!=s[j]) return false;
            i++,j--;
        }
        return true;
    }
    int minCut(string s) {
        int n=s.size();
        vector<int>dp(n,0);
        for(int i=0;i<n;i++)
        {
            int mincost=INT_MAX;
            for(int k=i;k>=0;k--)
            {
                if(checkpal(s,k,i))
                {
                    if(k==0) mincost=1;
                    else
                    mincost=min(mincost,1+dp[k-1]);
                }
            }
            dp[i]=mincost;
        }
        return dp[n-1]-1;
    }
};