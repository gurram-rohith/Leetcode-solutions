// Last updated: 4/5/2026, 12:15:47 AM
class Solution {
public:
   int firstOccurence(int low,int high,int target,vector<int>&nums){
    int first=-1,mid;
        while(low<=high){
         mid=(low+(high-low)/2);
          if(nums[mid]==target){
            first=mid;
            high=mid-1;
          }
          else if(nums[mid]<target)
          low=mid+1;
          else
          high=mid-1;
        }
        return first;
   }
   int lastOccurence(int low,int high,int target,vector<int>&nums)
   { int last=-1,mid;
        while(low<=high){
         mid=(low+(high-low)/2);
          if(nums[mid]==target){
            last=mid;
            low=mid+1;
          }
          else if(nums[mid]<target)
          low=mid+1;
          else
          high=mid-1;
        }
        return last;
   }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=firstOccurence(0,nums.size()-1,target,nums);
        if(first==-1) return{-1,-1};
        else{
            int last=lastOccurence(0,nums.size()-1,target,nums);
            return {first,last};
        }

    }
};