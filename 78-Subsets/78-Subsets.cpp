// Last updated: 4/5/2026, 12:15:15 AM
class Solution {
public:
    void subsequence(vector<vector<int>>&ans,vector<int>&temp,int i,int n,vector<int>&nums)
    {
        if(i==n)
        {
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        subsequence(ans,temp,i+1,n,nums);
        temp.pop_back();
        subsequence(ans,temp,i+1,n,nums);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int>>ans;
       vector<int>temp;
        subsequence(ans,temp,0,nums.size(),nums);
        return ans;
    }
};