// Last updated: 5/22/2026, 11:42:57 AM
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int n=nums.size();
5        int low=0,high=n-1,mid;
6        while(low<=high){
7            mid=low+(high-low)/2;
8            if(nums[mid]==target) return mid;
9           if(nums[low]<=nums[mid]){
10            if(nums[low]<=target&&target<=nums[mid])
11            high=mid-1;
12            else
13            low=mid+1;
14           }
15           else{
16            if(target<=nums[high]&&target>=nums[mid])
17            low=mid+1;
18            else
19            high=mid-1;
20
21           }
22        }
23        return -1;
24    }
25};