// Last updated: 4/5/2026, 12:15:40 AM
class Solution {
public:
    int jump(vector<int>& nums) {
        int l=0,r=0;
        int farthest,jumps=0;
        while(r<nums.size()-1)
        {
            farthest=0;
            for(int i=l;i<=r;i++)
            {
                farthest=max(i+nums[i],farthest);
            }
            l+=1;
            r=farthest,jumps++;
        }
        return jumps;
    }
};