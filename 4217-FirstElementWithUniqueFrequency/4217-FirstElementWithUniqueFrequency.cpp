// Last updated: 4/5/2026, 12:10:52 AM
class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        map<int,int>freq;
        map<int,vector<int>>mvp;
        for(int i=0;i<nums.size();i++)
            {
                freq[nums[i]]++;
            }
        for(int i=0;i<nums.size();i++)
            {
                mvp[freq[nums[i]]].push_back(nums[i]);
            }
        for(int i=0;i<nums.size();i++)
            {
                if(mvp[freq[nums[i]]].size()==freq[nums[i]]) return nums[i];
            }
        return -1;
    }
};