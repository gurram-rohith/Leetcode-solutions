// Last updated: 4/5/2026, 12:11:54 AM
class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),greater<int>());
        vector<int>ans;
        int count=1;
        ans.push_back(nums[0]);
        if(count!=k)
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]!=nums[i])
            {
                ans.push_back(nums[i]);
            count++;}
            if(count==k) break;
        }
        return ans;
    }
};