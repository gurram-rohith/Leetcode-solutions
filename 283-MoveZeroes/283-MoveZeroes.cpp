// Last updated: 4/5/2026, 12:14:20 AM
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
if(nums[i]!=0)
nums[j++]=nums[i];
        }
        for(j;j<nums.size();j++)
        {
            nums[j]=0;
        }

    }
};