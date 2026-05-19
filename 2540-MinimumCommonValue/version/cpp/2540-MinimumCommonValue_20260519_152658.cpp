// Last updated: 5/19/2026, 3:26:58 PM
1class Solution {
2public:
3    int getCommon(vector<int>& nums1, vector<int>& nums2) {
4        int l=0,r=0;
5        while(l<nums1.size()&&r<nums2.size())
6        {
7            if(nums1[l]==nums2[r]) return nums1[l];
8            if(nums1[l]<nums2[r]) l++;
9            else r++;
10        }
11         return -1;
12
13    }
14};