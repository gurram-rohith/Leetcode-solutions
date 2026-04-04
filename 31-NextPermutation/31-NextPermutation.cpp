// Last updated: 4/5/2026, 12:15:49 AM
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index=-1,x,i;
        for( i=nums.size()-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            { index=i;
            break;
            }
        }
        if(index==-1)
       {
         reverse(nums.begin(),nums.end());
        return ;
        }
        for( i=nums.size()-1;i>index;i--)
        {
           if(nums[index]<nums[i])
           break;
        }
        x=nums[i];
        nums[i]=nums[index];
        nums[index]=x;
        reverse(nums.begin()+index+1,nums.end());
     
    }
};