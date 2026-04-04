// Last updated: 4/5/2026, 12:15:45 AM
class Solution {
public:
    void genSum(vector<int>&candidates,int sum,int i,int &target,vector<int>temp,vector<vector<int>>&ans)
    {

        if(sum>target||i==candidates.size())
        {
            return;
        }
        if(sum==target)
        {
            ans.push_back(temp);
            return;
        }
        temp.push_back(candidates[i]);
        genSum(candidates,sum+candidates[i],i,target,temp,ans);
        temp.pop_back();
        genSum(candidates,sum,i+1,target,temp,ans);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        vector<vector<int>>ans;
        int sum=0,i=0;
        genSum(candidates,sum,i,target,temp,ans);
        return ans;
    }
};