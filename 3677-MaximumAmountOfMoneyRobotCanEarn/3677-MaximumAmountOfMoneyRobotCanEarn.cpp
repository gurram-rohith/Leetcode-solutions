// Last updated: 4/5/2026, 12:12:11 AM
class Solution {
public:
    int maximumAmount(vector<vector<int>>& coins) {
        int m=coins.size(),n=coins[0].size();
        vector<vector<int>>prev(n,vector<int>(3,0));
        if(coins[0][0]>=0)
        {
           for(int used=0;used<3;used++)
           prev[0][used]=coins[0][0];
        }
        else
        {
            prev[0][2]=coins[0][0];
        }
        for(int i=0;i<m;i++)
        {
             vector<vector<int>>curr(n,vector<int>(3,0));
            for(int j=0;j<n;j++)
            {
                if(i==0&&j==0)
                {
                    curr[j]=prev[j];
                    continue;
                }
                for(int used=0;used<3;used++)
                {
                    if(coins[i][j]>=0||used>=2)
                    {
                        int goleft=INT_MIN,gotop=INT_MIN;
                        if(i>0)
                        goleft=prev[j][used];
                        if(j>0)
                        gotop=curr[j-1][used];
                        curr[j][used]=coins[i][j]+max(goleft,gotop);
                    }
                    else
                    {
                        int take=INT_MIN;
                        int nottake=INT_MIN;
                        int tl,tt,nl,nt;
                        tl=INT_MIN,tt=tl,nl=tt,nt=tt;
                        if(i>0)
                        {
                            tt=prev[j][used+1];
                            nt=prev[j][used];
                        }
                        if(j>0)
                        {
                            tl=curr[j-1][used+1];
                            nl=curr[j-1][used];
                        }
                        take=max(tt,tl);
                        nottake=max(nt,nl);
                        curr[j][used]=max(take,nottake+coins[i][j]);
                    }
                }
            }
            prev=curr;
        }
        return prev[n-1][0];

    }
};