// Last updated: 4/5/2026, 12:11:09 AM
class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        vector<long long>prefixsum(nums.size(),0),suffixmin(nums.size(),INT_MAX);
        for(int i=0;i<nums.size();i++)
            {
                if(i==0)
                    prefixsum[i]=nums[i];
                else
                    prefixsum[i]=prefixsum[i-1]+nums[i];
                
            }
       
        for(int i=nums.size()-2;i>=0;i--)
            {
                suffixmin[i]=min(suffixmin[i+1]*1LL,nums[i+1]*1LL);
            
            }
        long long maxans=INT_MIN;
        for(int i=0;i<nums.size();i++)
            {
                
                maxans=max(maxans*1LL,(prefixsum[i]-suffixmin[i])*1LL);
            }
       
        return maxans;
    }
};