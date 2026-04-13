class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int minans=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            minans=min(minans,abs(i-start));
        }
        return minans;
    }
};