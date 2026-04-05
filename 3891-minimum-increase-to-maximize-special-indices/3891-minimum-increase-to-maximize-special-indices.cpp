class Solution {
public:
    long long minIncrease(vector<int>& nums) {
        long long ans=0,k=1;
        int n=nums.size();
        if(n%2!=0)
        {
            for(int i=1;i<=n-2;i+=2)
            {
                if(nums[i]>nums[i-1]&&nums[i]>nums[i+1]) continue;
                ans+=max({nums[i],nums[i-1],nums[i+1]})+1-nums[i];
            }
            return ans;
        }
        long long len=(n-1)/2;
        vector<long long>presum(len+1,0),sufsum(len+1,0);
        for(int i=1;i<n-1;i+=2)
        {
            if(nums[i]>nums[i-1]&&nums[i]>nums[i+1])
            {
                presum[k]=presum[k-1];
            }
            else
            presum[k]=presum[k-1]+max({nums[i],nums[i+1],nums[i-1]})-nums[i]+1;
            if(nums[n-1-i]>nums[n-2-i]&&nums[n-1-i]>nums[n-i])
            {
                sufsum[k]=sufsum[k-1];
            }
            else
            sufsum[k]=sufsum[k-1]+max({nums[n-1-i],nums[n-i],nums[n-2-i]})-nums[n-1-i]+1;
            k++;
        }

        long long maxans=LLONG_MAX;
        for(int i=0;i<=len;i++)
        {
            maxans=min(maxans,presum[i]+sufsum[len-i]);
        }
        return maxans;


        

    }
};