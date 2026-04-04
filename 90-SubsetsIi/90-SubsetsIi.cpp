// Last updated: 4/5/2026, 12:15:09 AM
class Solution {
public:
    void genSubset(vector<int>&temp,vector<vector<int>>&ans,vector<int>&nums,int i)
    {
        if(i==nums.size())
        {
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        genSubset(temp,ans,nums,i+1);
        temp.pop_back();
        int next=i+1;
        while(next<nums.size()&&nums[i]==nums[next])
        next++;
        genSubset(temp,ans,nums,next);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>temp;
        vector<vector<int>>ans;
        genSubset(temp,ans,nums,0);
        return ans;
    }
};