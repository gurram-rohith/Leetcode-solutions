// Last updated: 4/5/2026, 12:13:33 AM
class Solution {
public:

  int countArray(vector<int>&nums,int goal){
    if(goal<0) return 0;
    int l=0,r=0,sum=0,count=0;
    while(r<nums.size())
    {   
        sum+=nums[r];
        while(sum>goal)
        {
            sum-=nums[l];
            l++;
        }
        count+=(r+1-l);
        r++;
    }
    return count;
  }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return countArray(nums,goal)-countArray(nums,goal-1);
    }
};