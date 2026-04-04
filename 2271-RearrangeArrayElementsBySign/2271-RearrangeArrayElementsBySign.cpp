// Last updated: 4/5/2026, 12:12:45 AM
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
      int x=nums.size();
      vector<int>ans(x,0);
       int pos=0,neg=1;
       for(int i=0;pos<x||neg<x;i++)
       {
        if(nums[i]>=0)
        {
            ans[pos]=nums[i];
            pos+=2;
        }
        else
        {
            ans[neg]=nums[i];
        neg+=2;
        }
       }
       return ans;
    }
};