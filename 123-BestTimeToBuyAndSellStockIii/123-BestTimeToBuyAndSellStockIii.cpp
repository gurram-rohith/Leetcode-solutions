// Last updated: 4/5/2026, 12:15:01 AM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>after(2,vector<int>(3,0));
        auto curr=after;
        after[0][1]=0;
        after[0][2]=0;
        after[1][1]=0;
        after[1][2]=0;
        for(int i=n-1;i>=0;i--)
        {
            for(int buy=0;buy<=1;buy++)
            {
                curr[buy][0]=0;
                for(int cap=1;cap<=2;cap++)
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
        return after[1][2];
        
    }
};