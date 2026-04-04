// Last updated: 4/5/2026, 12:13:11 AM
class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        vector<int>indices;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            indices.push_back(i);
        }
        int prev=0;
        for(int i=1;i<indices.size();i++)
        {
            cout<<abs(indices[i]-indices[prev])<<endl;
            if(abs(indices[i]-indices[prev])<=k)
            return false;
            else
            prev=i;
        }
        return true;
    }
};