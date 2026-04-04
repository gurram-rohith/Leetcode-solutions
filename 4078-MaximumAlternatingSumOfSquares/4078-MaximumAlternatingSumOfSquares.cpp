// Last updated: 4/5/2026, 12:11:39 AM
class Solution {
public:
    
    long long maxAlternatingSum(vector<int>& nums) {
       vector<int>a;
        long long sum=0;
        int i;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=0)
                a.push_back(nums[i]*(-1));
            else
                a.push_back(nums[i]);
        }
        sort(a.begin(),a.end(),greater<>());
        for( i=0;i<(nums.size()+1)/2;i++){
            sum+=a[i]*a[i];
        }
        for(i;i<nums.size();i++)
            sum-=(a[i]*a[i]);
        return sum;
    }
};