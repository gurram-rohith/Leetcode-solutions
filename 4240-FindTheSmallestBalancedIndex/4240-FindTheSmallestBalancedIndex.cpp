// Last updated: 4/5/2026, 12:10:45 AM
class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
       vector<long long>presum(nums.size(),0),sufpro(nums.size(),1); 
        for(int i=1;i<nums.size();i++)
            {
                presum[i]=presum[i-1]+nums[i-1];
            }
        for(int i=nums.size()-2;i>=0;i--)
            {
                if(sufpro[i+1]<=1e14/nums[i+1])
                sufpro[i]=sufpro[i+1]*nums[i+1];
                else
                    sufpro[i]=1e14;
            }
        for(int i=0;i<nums.size();i++)
            {
                    if(presum[i]==sufpro[i])
                     return i;
            }
        return -1;
        
    }
};