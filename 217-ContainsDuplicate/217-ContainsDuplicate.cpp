// Last updated: 4/5/2026, 12:14:34 AM
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int f=0;
       for(int i=0;i<nums.size()-1;i++)
       {
        if(nums[i]==nums[i+1])
        {
           f=1;
           break;
        }
       }
       if(f==1)
       return true;
       else
       return false; 
    }
};