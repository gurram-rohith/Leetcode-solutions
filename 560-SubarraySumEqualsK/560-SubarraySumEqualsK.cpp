// Last updated: 4/5/2026, 12:13:49 AM
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       map<int,int>presum;
       presum[0]=1;
        int prefixsum=0,count=0;
        for(int i=0;i<nums.size();i++)
        { prefixsum+=nums[i];
          int remove=prefixsum-k;

          count+=presum[remove];
          presum[prefixsum]+=1;
            
        }
        return count;
    }
};