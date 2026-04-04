// Last updated: 4/5/2026, 12:14:30 AM
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1=0,count2=0,el1,el2,c1=0,c0=0;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            if(count1==0&&el2!=nums[i])
            {
                count1=1;
                el1=nums[i];
            }
            else if(count2==0&&el1!=nums[i])
            {
                count2=1;
                el2=nums[i];
            }
            else if(el1==nums[i])
            count1++;
            else if(el2==nums[i])
            count2++;
            else
            count1--,count2--;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==el1)
            c1++;
            else if(nums[i]==el2)
            c0++;
        }
        if(c1>=int(nums.size()/3)+1)
        ans.push_back(el1);
         if(c0>=int(nums.size()/3)+1)
        ans.push_back(el2);
         sort(ans.begin(),ans.end());
         return ans;
    }
};