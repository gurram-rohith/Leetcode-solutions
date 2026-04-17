class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        int maxlen=0;
        vector<int>presum(n,0);
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            if(i==0)
            {
                if(nums[i]==0) presum[i]=-1;
                else presum[i]=1;
            }
            else
            {
                if(nums[i]==0)
                presum[i]=presum[i-1]-1;
                else presum[i]=presum[i-1]+1;
            }
            mpp[presum[i]]=i;
            if(presum[i]==0) maxlen=max(maxlen,i+1);
        }
        for(int i:presum) cout<<i<<" ";
        for(int i=1;i<n;i++)
        {
            int s=presum[i-1];
           maxlen=max(maxlen,mpp[s]-i+1);
        }
        return maxlen;


    }
};