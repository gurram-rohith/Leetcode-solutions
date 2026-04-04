// Last updated: 4/5/2026, 12:13:31 AM
class Solution {
public:
    int ansFunc(vector<int>&nums,int k)
    {
        map<int,int>mpp;
        int l=0,r=0,count=0;
        while(r<nums.size()&&l<=r)
        {
            mpp[nums[r]]++;
            while(mpp.size()>k)
            {
                mpp[nums[l]]--;
            if(mpp[nums[l]]==0)
            mpp.erase(nums[l]);
            l++;
            }
            if(mpp.size()<=k) count+=r+1-l,r++;
            
           
        }
        return count;

    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
       int ans=ansFunc(nums,k)-ansFunc(nums,k-1);
       return ans; 
    }
};