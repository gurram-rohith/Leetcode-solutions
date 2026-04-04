// Last updated: 4/5/2026, 12:14:10 AM
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        vector<int>ans;
        int arr[1001]={0};
        for(int i=0;i<nums1.size();i++)
        {
            arr[nums1[i]]++;
        }
        for(int j=0;j<nums2.size();j++)
        {
            if(arr[nums2[j]]!=0)
            {
            ans.push_back(nums2[j]);
            arr[nums2[j]]--;
        }
        }
        
return ans;
    }
};