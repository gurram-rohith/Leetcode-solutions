// Last updated: 4/5/2026, 12:16:01 AM
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int i,k,j;
        i=0,j=1,k=nums.size()-1;
       for(int i=0;i<nums.size()-2;i++)
        {
            j=i+1,k=nums.size()-1;
            if(i>0&&nums[i]==nums[i-1]) continue;
            while(j<k&&k<nums.size())
            {
                if(nums[i]+nums[j]+nums[k]==0)
                {
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++,k--;
                    while(j<k&&nums[j]==nums[j-1]) j++;
                    while(j<k&&nums[k]==nums[k+1]) k--;
                }
                else if(nums[i]+nums[j]+nums[k]>0)
                {
                    k--;
                }
                else
                {j++;
                }
            }
           
        }
        return ans;
    }
};