// Last updated: 4/5/2026, 12:15:21 AM
class Solution {
public:
    int minDistance(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        vector<int>prev(m+1,0),curr(m+1,0);
        for(int j=0;j<=m;j++)
        prev[j]=j;
        for(int i=1;i<=n;i++)
        {
            curr[0]=i;
            for(int j=1;j<=m;j++)
            {
                if(word1[i-1]==word2[j-1])
                {
                    curr[j]=prev[j-1];
                }
                else
                {
                    int ins=0,del=0,rep=0;
                    ins=1+curr[j-1];
                    del=1+prev[j];
                    rep=1+prev[j-1];
                    curr[j]=min({ins,del,rep});
                }
            }
            prev=curr;
        }
        return prev[m];
    }
};