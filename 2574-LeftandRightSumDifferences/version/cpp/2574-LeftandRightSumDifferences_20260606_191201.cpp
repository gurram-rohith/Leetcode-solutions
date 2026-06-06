// Last updated: 6/6/2026, 7:12:01 PM
1class Solution {
2public:
3    vector<int> leftRightDifference(vector<int>& nums) {
4     int sum=0,totsum=0;
5     for(int i:nums) totsum+=i;
6     vector<int>ans;
7     for(int i:nums)
8     {
9        ans.push_back(abs(sum-(totsum-sum-i)));
10        sum+=i;
11     }
12     return ans;
13    }
14};