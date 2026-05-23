// Last updated: 5/23/2026, 6:44:46 PM
1class Solution {
2public:
3    bool check(vector<int>& nums) {
4        nums.push_back(nums[0]);
5        int f=0;
6        for(int i=1;i<nums.size();i++)
7        {
8            if(nums[i-1]>nums[i]) f++;
9        }
10        if(f<=1) return true;
11        return false;
12    }
13};