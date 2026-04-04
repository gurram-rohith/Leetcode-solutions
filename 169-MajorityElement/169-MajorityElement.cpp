// Last updated: 4/5/2026, 12:14:45 AM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int count=0,el;
        for(int i=0;i<nums.size();i++)
        {
           
            if(count==0)
            {
              el=nums[i];
              count++;
            }
            else if(nums[i]==el)
            {
                count++;
            }
            else
            count--;
        }
        int c1=0;
        for(int j=0;j<nums.size();j++)
        {
            if(nums[j]==el)
            c1++;
        }
        if(c1>(nums.size()/2))
        return el;
        return -1;
    }
};