// Last updated: 4/5/2026, 12:12:06 AM
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        long long sum=0,temp;
        for(int i=0;i<nums.size();i++)
        sum+=nums[i];
        temp=sum%k;
        return temp;
        

    }
};