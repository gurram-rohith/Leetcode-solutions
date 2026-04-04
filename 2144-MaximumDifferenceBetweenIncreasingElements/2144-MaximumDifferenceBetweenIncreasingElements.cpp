// Last updated: 4/5/2026, 12:12:48 AM
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int mini=nums[0],cost=0,profit=0;
        for(int i=1;i<nums.size();i++)
        {
            cost=nums[i]-mini;
            profit=max(profit,cost);
            mini=min(mini,nums[i]);
        }
        if(profit!=0)
        return profit;
        else
        return -1;

    }
};