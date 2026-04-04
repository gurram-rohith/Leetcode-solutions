// Last updated: 4/5/2026, 12:11:16 AM
class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long ans=0;
        map<int,int>mpp;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]!=nums[i+1])
            mpp[nums[i]]=i;
        }
        mpp[nums[nums.size()-1]]=nums.size()-1;
        
        for(int i=0;i<nums.size();i++)
        {
            if(k<=(nums.size()-1-mpp[nums[i]]))
            ans+=1;
        }
        return ans;
    }
};