// Last updated: 4/5/2026, 12:15:48 AM
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0,high=n-1,mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target) return mid;
           if(nums[low]<=nums[mid]){
            if(nums[low]<=target&&target<=nums[mid])
            high=mid-1;
            else
            low=mid+1;
           }
           else{
            if(target<=nums[high]&&target>=nums[mid])
            low=mid+1;
            else
            high=mid-1;

           }
        }
        return -1;
    }
};