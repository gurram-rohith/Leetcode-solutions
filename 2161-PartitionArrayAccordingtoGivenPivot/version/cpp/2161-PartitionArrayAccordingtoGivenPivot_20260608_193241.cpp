// Last updated: 6/8/2026, 7:32:41 PM
1class Solution {
2public:
3    vector<int> pivotArray(vector<int>& nums, int pivot) {
4        vector<int>ans;
5        for(int i:nums)
6        {
7            if(i<pivot)
8            ans.push_back(i);
9        }
10        for(int i:nums)
11        {
12            if(i==pivot) ans.push_back(i);
13        }
14        for(int i:nums)
15        {
16            if(i>pivot) ans.push_back(i);
17        }
18        return ans;
19    }
20};