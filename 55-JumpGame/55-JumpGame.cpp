// Last updated: 4/5/2026, 12:15:33 AM
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxreach=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i>maxreach) return false;
            if(maxreach>=nums.size()-1) return true;
            maxreach=max(maxreach,i+nums[i]);
        }
        return true;
        
    }
};