// Last updated: 4/5/2026, 12:15:54 AM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k,i,j;
        for(i=0,j=1;j<nums.size();)
        {
            if(nums[i]==nums[j])
            j++;
            else if(nums[i]!=nums[j])
            {
                i+=1;
                nums[i]=nums[j];
            }
        }
        k=i;
        return k+1;
    }
};