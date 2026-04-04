// Last updated: 4/5/2026, 12:11:45 AM
class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        set<int>even,odd;
        int maxi=0;
        int i,j;
        for( i=0;i<nums.size();i++){
            even.clear();
            odd.clear();
            for( j=i;j<nums.size();j++){
                if(nums[j]&1==1)
                odd.insert(nums[j]);
                else
                even.insert(nums[j]);
                if(even.size()==odd.size())
                maxi=max(maxi,j-i+1);
            }
        }
        return maxi;
    }
};