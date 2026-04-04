// Last updated: 4/5/2026, 12:11:01 AM
class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        int ans=0;
        for(int i=nums.size()-2;i>=0;i--)
            {
                if(nums[i+1]<=nums[i])
                    return i+1;
            }
        return 0;
    }
};