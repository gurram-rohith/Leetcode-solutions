// Last updated: 4/5/2026, 12:11:10 AM
class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        vector<int>temp;
        for(int i=0;i<nums.size();i++)
            {
                if(nums[i]>=0)
                    temp.push_back(nums[i]);
            }
        if(temp.size()==1||temp.size()==0) return nums;
        if(k>temp.size()) k%=temp.size();
        int revk=temp.size()-k;
        vector<int>t(temp.size());
        for(int i=0;i<t.size();i++)
            {
                t[(i+revk)%temp.size()]=temp[i];
            }
        int l=0;
        for(int i=0;i<nums.size();i++)
            {
                if(nums[i]>=0)
                nums[i]=t[l++];
            }
        return nums;
    }
};