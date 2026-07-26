class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        if(nums[0]<0) return nums[0]*nums[1]*nums[2];
        int last=nums[nums.size()-1],last2=nums[nums.size()-2];
        return nums[0]*max(last*last2,nums[1]*nums[2]);
    }
};