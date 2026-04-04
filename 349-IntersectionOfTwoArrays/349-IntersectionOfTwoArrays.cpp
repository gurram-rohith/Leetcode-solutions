// Last updated: 4/5/2026, 12:14:12 AM
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums1.size();i++)
        {
            mp[nums1[i]]=0;
        }
        for(int i=0;i<nums2.size();i++)
        {
             if(mp.find(nums2[i])!=mp.end()&&mp[nums2[i]]!=-1)
             {
             ans.push_back(nums2[i]);
             mp[nums2[i]]=-1;
        }
        }
        return ans;
    }
};