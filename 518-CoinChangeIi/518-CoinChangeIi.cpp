// Last updated: 4/5/2026, 12:13:52 AM
class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        int mod=INT_MAX;
        vector<long long>prev(amount+1,0),curr(amount+1,0);
        for (int j=0;j<=amount;j++)
        {
            if(j % coins[0] == 0)
            prev[j] = 1;
        }
        for(int i=1;i<n;i++)
        {
            fill(curr.begin(),curr.end(),0);
            for(int j=0;j<=amount;j++)
            {
                long long pick=0,notpick=0;
                if(coins[i]<=j)
                pick=curr[j-coins[i]];
                notpick=prev[j];
                curr[j]=(pick%mod+notpick%mod)%mod;
            }
            prev=curr;
            
        }
        return (int)prev[amount];
    }
};