// Last updated: 4/5/2026, 12:13:30 AM
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int temp,maxcount=INT_MIN;
        int i=0,j=0,count=0;
        temp=k;
        while(j<nums.size())
        {
            if(nums[j]==1)
            count++,j++;
            else if(nums[j]==0&&temp>0)
            count++,j++,temp--;
            else{
                maxcount=max(maxcount,count);
                count-=1;
                if(nums[i]==0)
                temp++;
                i++;
            }
        }
        maxcount=max(maxcount,count);
        return maxcount;
    }
};