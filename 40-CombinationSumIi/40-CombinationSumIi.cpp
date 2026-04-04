// Last updated: 4/5/2026, 12:15:44 AM
class Solution {
public:
    void genSum(vector<int>&candidates,int sum,int i,int &target,vector<int>&temp,vector<vector<int>>&ans)
    {
        if(sum==target)
        {
        ans.push_back(temp);
        return;
        }
        if(sum>target||i==candidates.size()) return;
        
        temp.push_back(candidates[i]);
        genSum(candidates,sum+candidates[i],i+1,target,temp,ans);
        temp.pop_back();
        int next =i+1;
        while (next<candidates.size()&&candidates[next]==candidates[i])
        next++;
        genSum(candidates,sum,next,target,temp,ans);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>temp;
        vector<vector<int>>ans;
        int sum=0,i=0;
        genSum(candidates,sum,i,target,temp,ans);
        return ans;
    }
};