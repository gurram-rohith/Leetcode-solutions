class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
     int sum=0,totsum=0;
     for(int i:nums) totsum+=i;
     vector<int>ans;
     for(int i:nums)
     {
        ans.push_back(abs(sum-(totsum-sum-i)));
        sum+=i;
     }
     return ans;
    }
};