// Last updated: 4/5/2026, 12:14:36 AM
class Solution {
public:
    int maxamt(vector<int>&nums,int i,int j)
    {
        int prev=nums[i];
        int prev2=0;
        for(int k=i+1;k<=j;k++)
        {
            int take=nums[k];
           if(k>1)
           {
            take+=prev2;
           }
           int nottake=+prev;
           int ans=max(take,nottake);
           prev2=prev;
           prev=ans;
        }
        return prev;
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        return max(maxamt(nums,0,nums.size()-2),maxamt(nums,1,nums.size()-1));
    }
};