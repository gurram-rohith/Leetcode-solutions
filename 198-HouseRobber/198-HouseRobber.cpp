// Last updated: 4/5/2026, 12:14:42 AM
class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int n=nums.size();
        int ans=-1;
        int prev=nums[0];
        int prev2=0;
        for(int i=1;i<n;i++)
        {
            int take=nums[i];
            if(i>1) take+=prev2;
            int nottake=prev;
            ans=max(take,nottake);
            prev2=prev;
            prev=ans;
        }
        return prev;

        
    }
};