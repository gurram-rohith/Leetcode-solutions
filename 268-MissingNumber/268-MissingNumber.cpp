// Last updated: 4/5/2026, 12:14:21 AM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
sum+=nums[i];
        }
        return (nums.size()*(nums.size()+1)/2)-sum;

    }
};