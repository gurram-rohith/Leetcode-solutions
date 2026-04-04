// Last updated: 4/5/2026, 12:13:17 AM
class Solution {
public:
    int maximum69Number (int num) {
        vector<int>nums;
        int temp=num,rem;
        int digits=0;
        while(temp>0){
            rem=temp%10;
            nums.insert(nums.begin(),rem);
            temp=temp/10;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==6)
            return num+3*pow(10,nums.size()-i-1);
        }
        return num;
    }
};