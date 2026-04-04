// Last updated: 4/5/2026, 12:11:53 AM
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int f=0;
        for(int i=0;i<nums.size()-1;i++)
            {
                if(nums[i]!=nums[i+1])
                    f=1;
            }
        if(f==0) return 0;
        else
            return 1;
    }
};