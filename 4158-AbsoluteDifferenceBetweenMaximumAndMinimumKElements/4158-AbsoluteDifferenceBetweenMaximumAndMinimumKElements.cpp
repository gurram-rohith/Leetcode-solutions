// Last updated: 4/5/2026, 12:11:11 AM
class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        long long sum1=0,sum2=0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<k;i++)
            {
                sum1+=nums[i];
                sum2+=nums[n-1-i];
            }
        return abs(sum1-sum2);
        
    }
};