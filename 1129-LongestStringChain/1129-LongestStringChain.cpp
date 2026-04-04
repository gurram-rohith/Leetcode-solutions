// Last updated: 4/5/2026, 12:13:23 AM
class Solution {
public:
    static bool cmp(string a,string b)
    {
        return a.size()<b.size();
    }
    bool checkPossible(string a,string b)
    {
        if(a.size()!=b.size()+1) return false;
        int i=0,j=0;
        while(i<a.size())
        {
            if(a[i]==b[j]) i++,j++;
            else
            {
                i++;
            }
        }
        if(i==a.size()&&j==b.size()) return true;
        return false;
        
    }
    int longestStrChain(vector<string>& words) {
        sort(words.begin(),words.end(),cmp);
        int maxans=0;
        vector<int>dp(words.size(),1);
        for(int i=0;i<words.size();i++)
        {
            for(int prev=0;prev<i;prev++)
            {
                if(checkPossible(words[i],words[prev])&&1+dp[prev]>dp[i])
                {
                    dp[i]=1+dp[prev];
                }
            }
            maxans=max(maxans,dp[i]);
        }
        return maxans;
    }
};