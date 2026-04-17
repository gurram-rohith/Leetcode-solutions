// Last updated: 4/17/2026, 9:34:24 AM
1class Solution {
2public:
3    int findMaxLength(vector<int>& nums) {
4        int n=nums.size();
5        int maxlen=0;
6        vector<int>presum(n,0);
7        unordered_map<int,int>mpp;
8        for(int i=0;i<nums.size();i++)
9        {
10            if(i==0)
11            {
12                if(nums[i]==0) presum[i]=-1;
13                else presum[i]=1;
14            }
15            else
16            {
17                if(nums[i]==0)
18                presum[i]=presum[i-1]-1;
19                else presum[i]=presum[i-1]+1;
20            }
21            mpp[presum[i]]=i;
22            if(presum[i]==0) maxlen=max(maxlen,i+1);
23        }
24        for(int i:presum) cout<<i<<" ";
25        for(int i=1;i<n;i++)
26        {
27            int s=presum[i-1];
28           maxlen=max(maxlen,mpp[s]-i+1);
29        }
30        return maxlen;
31
32
33    }
34};