// Last updated: 4/5/2026, 12:11:25 AM
class Solution {
public:
    int minMoves(vector<int>& nums) {
        long long maxele=*max_element(nums.begin(),nums.end()),cost=0;
        for(int i=0;i<nums.size();i++)
            cost+=maxele-nums[i];
        return cost;
    }
};