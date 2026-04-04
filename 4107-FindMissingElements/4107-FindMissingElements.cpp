// Last updated: 4/5/2026, 12:11:26 AM
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>hashmap(101,0);
        int left=102,right=-1;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            left=min(left,nums[i]);
            right=max(right,nums[i]);
            hashmap[nums[i]]++;
        }
        for(int i=left+1;i<right;i++){
            if(hashmap[i]==0)
                ans.push_back(i);
        }
        return ans;
    }
};