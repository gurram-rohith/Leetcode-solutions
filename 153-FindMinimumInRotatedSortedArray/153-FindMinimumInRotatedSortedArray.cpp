// Last updated: 4/5/2026, 12:14:49 AM
class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int n=nums.size();
        int mid,mini=5001;
        int low=0,high=n-1;
        while(low<=high){
           mid=low+(high-low)/2;
            if(nums[low]<=nums[mid]){
                mini=min(mini,nums[low]);
                low=mid+1;
            }
            else
            {
                mini=min(mini,nums[mid]);
                high=mid-1;
            }

           
        }
       return mini;
    }
};