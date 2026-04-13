// Last updated: 4/13/2026, 6:15:56 PM
1class Solution {
2public:
3    int getMinDistance(vector<int>& nums, int target, int start) {
4        int minans=INT_MAX;
5        for(int i=0;i<nums.size();i++)
6        {
7            if(nums[i]==target)
8            minans=min(minans,abs(i-start));
9        }
10        return minans;
11    }
12};