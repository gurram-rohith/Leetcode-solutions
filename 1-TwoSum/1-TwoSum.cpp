// Last updated: 4/5/2026, 12:16:13 AM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            int a=nums[i];
            int second=target-a;
            if(mpp.find(second)!=mpp.end())
            return {mpp[second],i};
            mpp[a]=i;
        }
        return {};
    }
};