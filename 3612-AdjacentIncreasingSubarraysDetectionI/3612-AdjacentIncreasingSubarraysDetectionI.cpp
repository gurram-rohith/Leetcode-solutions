// Last updated: 4/5/2026, 12:12:14 AM
class Solution {
public:
bool isIncreasing(vector<int>&nums,int i,int n){
  
    for(int j=i+1;j<=n;j++){
        if(nums[j-1]>=nums[j])
        return false;
    }
    return true;
}
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        if(nums.size()<2*k) return false;
        for(int i=0;i<=nums.size()-2*k;i++){
            if(isIncreasing(nums,i,i+k-1)&&isIncreasing(nums,i+k,i+2*k-1))
            return true;
        }
       
        return false;
    }
};