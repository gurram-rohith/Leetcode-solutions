// Last updated: 4/5/2026, 12:14:15 AM
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<int>prev(amount+1,-1),curr(amount+1,-1);
        for(int i=0;i<=amount;i++)
        {
            if(i%coins[0]!=0)
            prev[i]=(int)1e4+1;
            else
            prev[i]=i/coins[0];
        }
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<=amount;j++)
            {
                int pick=(int)1e4+1;
                int notpick=(int)1e4+1;
                if(coins[i]<=j)
                pick=1+curr[j-coins[i]];
                notpick=prev[j];
                curr[j]=min(pick,notpick);
            }
            prev=curr;
        }
        if(prev[amount]==(int)1e4+1) return -1;
        return prev[amount];


    }
};