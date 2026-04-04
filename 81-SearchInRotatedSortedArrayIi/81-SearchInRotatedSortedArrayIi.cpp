// Last updated: 4/5/2026, 12:15:13 AM
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size(),low,high,mid;
        if(n==1&&nums[0]!=target) return false;
        else if(n==1&&nums[0]==target) return true;
        
        int bre=-1;
        for(int i=n-2;i>=0;i--)
        {
           if(nums[i]>nums[i+1])
           {
            bre=i;
           break;
           }
        }
        if(bre!=-1)
         low=bre+1,high=bre;
         else
         low=0,high=n-1;
        if(target>=nums[low]&&target<=nums[n-1]){
            if(target==nums[low]||target==nums[high]) return true;
            high=n;
        }
        else if(target>=nums[low]&&target>nums[n-1])
        {
             if(target==nums[low]||target==nums[high]) return true;
            low=0;
        }
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target)
            return true;
            else if(nums[mid]>target)
            high=mid-1;
            else
            low=mid+1;
        }
        return false;
    }
};