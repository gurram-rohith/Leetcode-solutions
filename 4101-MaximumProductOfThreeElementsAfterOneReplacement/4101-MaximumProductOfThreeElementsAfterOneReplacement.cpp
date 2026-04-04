// Last updated: 4/5/2026, 12:11:29 AM
class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        long long i,j;
        long long c0=0;
        long long ans=1;
        for(i=0;i<nums.size();i++){
            if(nums[i]==0)
                c0++; 
            else if(nums[i]<0)
                nums[i]*=-1;
                
        }
       
        sort(nums.begin(),nums.end(),greater<int>());
        ans*=100000ll;
        i=nums[0],j=nums[1];
        ans*=i*j;
        
        return ans;
       
            
    }
};