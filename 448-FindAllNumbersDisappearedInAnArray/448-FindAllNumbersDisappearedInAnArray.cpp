// Last updated: 4/5/2026, 12:14:01 AM
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        map<int,int>mpp;
        for(int i=0;i<n;i++){
           mpp[nums[i]]=1;
        }
        for(int i=n;i>=1;i--){
            if(mpp.find(i)==mpp.end())
            ans.push_back(i);
        }
        return ans;
    }
};