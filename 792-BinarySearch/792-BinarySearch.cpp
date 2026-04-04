// Last updated: 4/5/2026, 12:13:39 AM
class Solution {
public:
    int searchIndex(int low,int high,int target,vector<int>&nums)
    {
        if(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target)
            return mid;

            if(nums[mid]>target){
                high=mid-1;
                return searchIndex(low,high,target,nums);
            }
            else if(nums[mid]<target){
                low=mid+1;
                return searchIndex(low,high,target,nums);
            }
        }
        return -1;
    }


    int search(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        return searchIndex(low,high,target,nums);

    }
};