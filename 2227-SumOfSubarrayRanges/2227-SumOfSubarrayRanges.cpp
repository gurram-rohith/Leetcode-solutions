// Last updated: 4/5/2026, 12:12:46 AM
class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long ans=0,sum=0;
        int minele=INT_MAX,maxele=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            minele=INT_MAX;
            maxele=INT_MIN;
            for(int j=i;j<nums.size();j++)
            {
                minele=min(minele,nums[j]);
                maxele=max(maxele,nums[j]);
                sum+=maxele-minele;
            }
        }
        return sum;
    }
};