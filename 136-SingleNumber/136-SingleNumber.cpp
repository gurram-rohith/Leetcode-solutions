// Last updated: 4/5/2026, 12:14:56 AM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x=0;
        for(int i=0;i<nums.size();i++)
        {
            x=x^nums[i];
        }
        return x;
    }
};