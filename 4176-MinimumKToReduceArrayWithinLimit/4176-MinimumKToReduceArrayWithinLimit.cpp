// Last updated: 4/5/2026, 12:11:07 AM
class Solution {
public:
    int minimumK(vector<int>& nums) {
        int low=1,high=1e5;
        long long mid;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            long long temp=0;
            for(int i=0;i<nums.size();i++)
            {
                temp+=ceil(nums[i]/(mid*(1.0)));
            }
            if(temp>mid*mid)
            low=mid+1;
            else if(temp<=mid*mid)
            {
                high=mid-1;
            }
        }
        return high+1;
    }
};