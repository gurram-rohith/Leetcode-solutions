// Last updated: 4/5/2026, 12:13:21 AM
class Solution {
public:
    int countArray(vector<int>&nums,int k){
        if(k<0) return 0;
        int l=0,r=0,count=0,sum=0;
        while(r<nums.size())
        {
            sum+=nums[r];
            while(sum>k)
            {
                sum-=nums[l];
                l++;
            }
            r++;
            count+=r+1-l;
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            nums[i]=0;
            else
            nums[i]=1;
        }
        return countArray(nums,k)-countArray(nums,k-1);

    }
};