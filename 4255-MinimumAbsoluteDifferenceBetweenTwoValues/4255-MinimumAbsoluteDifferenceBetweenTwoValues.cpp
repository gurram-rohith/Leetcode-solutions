// Last updated: 4/5/2026, 12:10:37 AM
class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int ans=INT_MAX;
        int f=0;
        for(int i=0;i<nums.size();i++)
            {
                for(int j=i+1;j<nums.size();j++)
                    {
                        if(nums[i]==1&&nums[j]==2||(nums[i]==2&&nums[j]==1))
                        {
                            ans=min(ans,abs(i-j));
                            f=1;
                        }
                    }
            }
        if(f==0) return -1;
        return ans;
    }
};