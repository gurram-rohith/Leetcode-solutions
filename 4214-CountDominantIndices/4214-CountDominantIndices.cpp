// Last updated: 4/5/2026, 12:10:54 AM
class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int ans=0;
        vector<int>avg(nums.size(),0);
        for(int i=0;i<nums.size()-1;i++)
            {
                for(int j=i+1;j<nums.size();j++)
                    {
                        avg[i]+=nums[j];
                    }
                avg[i]/=nums.size()-1-i;
                if(nums[i]>avg[i])
                    ans++;
            }
        return ans;
    }
};