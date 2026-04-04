// Last updated: 4/5/2026, 12:11:37 AM
class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int hasharr[101]={0};
        for(int i=0;i<nums.size();i++){
            hasharr[nums[i]]++;
        }
        int f=0;
        int val=k;
        for(int i=0;i<101;i++){
            if(val<=100)
            {if(hasharr[val]==0){
                return val;
            }
            else
                val+=k;}
            else
                f=1;
        }
        if(f==1) return val;
        return 0;
    }
};