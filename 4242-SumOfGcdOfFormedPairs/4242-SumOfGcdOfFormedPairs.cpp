// Last updated: 4/5/2026, 12:10:44 AM
class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int>maxele(nums.size(),INT_MIN);
        long long ans=0;
        vector<int>prefixgcd(nums.size());
        for(int i=0;i<nums.size();i++)
            {
                if(i==0)
                    maxele[i]=nums[i];
                else maxele[i]=max(maxele[i-1],nums[i]);
            }
        for(int i=0;i<nums.size();i++)
            prefixgcd[i]=__gcd(nums[i],maxele[i]);
        sort(prefixgcd.begin(),prefixgcd.end());
        int l=0,r=prefixgcd.size()-1;
        while(l<r)
            {
                ans+=__gcd(prefixgcd[l],prefixgcd[r]);
                l++,r--;
            }
        return ans;
    }
};