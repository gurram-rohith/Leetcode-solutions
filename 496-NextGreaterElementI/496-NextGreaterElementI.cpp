// Last updated: 4/5/2026, 12:13:55 AM
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<pair<int,int>>pairs;
        vector<int>ans;
        int f=0;
       map<int,int>indices;
        for(int i=0;i<nums2.size();i++){
            indices[nums2[i]]=i;
        }
        for(int i=0;i<nums1.size();i++){
            if(indices.find(nums1[i])!=indices.end())
            pairs.push_back(make_pair(nums1[i],indices[nums1[i]]));
        }
        for(int i=0;i<pairs.size();i++){
            f=0;
            for(int j=pairs[i].second+1;j<nums2.size();j++){
                if(nums2[j]>pairs[i].first)
                {
                    f=1;
                    ans.push_back(nums2[j]);
                    break;
                }
            }
            if(f==0)ans.push_back(-1);
        }
        return ans;

        
    }
};