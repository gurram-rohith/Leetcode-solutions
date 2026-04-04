// Last updated: 4/5/2026, 12:12:37 AM
class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp;
        int min1=10,min2=10;
        int minimap=10;
        for(int i=0;i<nums1.size();i++)
        {
            mp[nums1[i]]=1;
            min1=min(min1,nums1[i]);
        }
        for(int j=0;j<nums2.size();j++)
        {
            if(mp.find(nums2[j])!=mp.end())
            minimap=min(minimap,nums2[j]);
            min2=min(min2,nums2[j]);
        }
        if(minimap==10)
        {
        if(min1<min2){
            return min1*10+min2;
        }
        else return min2*10+min1;
        }else
        return minimap;
    }
};