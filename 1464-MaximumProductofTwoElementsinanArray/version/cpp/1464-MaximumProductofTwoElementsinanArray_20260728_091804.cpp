// Last updated: 7/28/2026, 9:18:04 AM
1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4        sort(nums.begin(),nums.end(),greater<int>());
5        return (nums[0]-1)*(nums[1]-1);
6    }
7};