// Last updated: 4/5/2026, 12:13:51 AM
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int n=nums.size();
        if(nums[0]!=nums[1]) return nums[0];
        if(nums[n-1]!=nums[n-2])return nums[n-1];
        for(int i=1;i<n;i++){
            if(i%2!=0){
                if(nums[i-1]!=nums[i]&&nums[i+1]==nums[i])
                    return nums[i-1];
            }
        }
        return -1;
    }
};