// Last updated: 4/5/2026, 12:14:44 AM
class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>after(2,vector<int>(k+1,0));
        auto curr=after;
            for(int cap=1;cap<=k;cap++)
            {
                after[0][cap]=0;
                after[1][cap]=0;
            }
        
        for(int i=n-1;i>=0;i--)
        {
            for(int buy=0;buy<=1;buy++)
            {
                curr[buy][0]=0;
                for(int cap=1;cap<=k;cap++)
                {
                int profit;
                if(buy)
                {
                    profit=max(-prices[i]+after[0][cap],after[1][cap]);
                }
                else
                profit=max(prices[i]+after[1][cap-1],after[0][cap]);
                curr[buy][cap]=profit;
                }
            }
            after=curr;
        }
        return after[1][k];
        
    }
};