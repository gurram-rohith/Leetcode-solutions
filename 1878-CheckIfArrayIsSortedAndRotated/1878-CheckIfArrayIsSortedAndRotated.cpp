// Last updated: 4/5/2026, 12:12:59 AM
class Solution {
public:
    bool check(vector<int>& nums) {
        if(nums.size()==1||nums.size()==0) return true;
        int f=0;
        for(int i=1;i<nums.size()+1;)
        {
            if(nums[i%nums.size()]<nums[(i-1)%nums.size()])
            f+=1;
               i=i+1;
             
         
           
        }
        if(f<=1)
        return true;
        else
        return false;
    }
};