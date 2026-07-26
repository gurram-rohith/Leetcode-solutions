// Last updated: 7/26/2026, 6:12:09 PM
1class Solution {
2public:
3    int maximumProduct(vector<int>& nums) {
4        sort(nums.begin(),nums.end(),greater<int>());
5        if(nums[0]<0) return nums[0]*nums[1]*nums[2];
6        int last=nums[nums.size()-1],last2=nums[nums.size()-2];
7        return nums[0]*max(last*last2,nums[1]*nums[2]);
8    }
9};