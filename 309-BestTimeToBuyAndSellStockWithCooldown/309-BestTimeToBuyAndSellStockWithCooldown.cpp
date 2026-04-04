// Last updated: 4/5/2026, 12:14:16 AM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n+2,vector<int>(2,0));
        vector<int>front1(2,0);
        auto front2=front1;
        auto curr= front2;
        for(int i=n-1;i>=0;i--)
        {
            for(int buy=0;buy<=1;buy++)
            {
                int profit;
                if(buy)
                {
                    profit=max(-prices[i]+front1[0],front1[1]);
                }
                else
                profit=max(prices[i]+front2[1],front1[0]);
                curr[buy]=profit;
            }
            front2=front1;
            front1=curr;
        }
        return  front1[1];

    }
};