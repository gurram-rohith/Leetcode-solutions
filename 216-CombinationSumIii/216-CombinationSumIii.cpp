// Last updated: 4/5/2026, 12:14:35 AM
class Solution {
public:
    void genCombsum(vector<vector<int>>&ans,vector<int>&temp,int n,int k,int i,int sum)
    {
        if(sum==n&&k==temp.size())
        {
        ans.push_back(temp);
        return;
        }
        if(i>9||temp.size()>k)
        return;
        temp.push_back(i);
        genCombsum(ans,temp,n,k,i+1,sum+i);
        temp.pop_back();
        genCombsum(ans,temp,n,k,i+1,sum);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>temp;
        vector<vector<int>>ans;
        genCombsum(ans,temp,n,k,1,0);
        return ans;
    }
};