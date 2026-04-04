// Last updated: 4/5/2026, 12:13:58 AM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=INT_MIN,count=0;
        for(int i=0;i<nums.size();i++)
        {
     if(nums[i]==1)
     ++count;
     else{
        maxi=max(maxi,count);
        count=0;

     }
        }
        maxi=max(maxi,count);
        return maxi;
    }
};