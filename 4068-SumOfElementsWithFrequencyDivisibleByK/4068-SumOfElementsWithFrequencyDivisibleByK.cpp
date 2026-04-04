// Last updated: 4/5/2026, 12:11:40 AM
class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        vector<int>hasharr(101,0);
        long long ans=0;
        for(int i=0;i<nums.size();i++){
            hasharr[nums[i]]++;
        }
        for(int i=1;i<=100;i++){
            if(hasharr[i]%k==0)
            {
                ans+=hasharr[i]*i;
                hasharr[i]=0;
            }
        }
        return ans;
        
    }
};