// Last updated: 4/5/2026, 12:13:20 AM
class Solution {
public:
    long long sumOfDivisors(vector<int>&nums,long long divisor){
        long long sum=0;
        for(int i:nums){
            if(i%divisor!=0)
            sum+=i/divisor+1;
            else
            sum+=i/divisor;
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxiele=INT_MIN;
        for(int n:nums){
            maxiele=max(maxiele,n);
        }
        int low=1,high=maxiele,mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(sumOfDivisors(nums,mid)<=threshold){
                 high=mid-1;
             
            }
            else
            low=mid+1;
        }
        return low;
    }
};