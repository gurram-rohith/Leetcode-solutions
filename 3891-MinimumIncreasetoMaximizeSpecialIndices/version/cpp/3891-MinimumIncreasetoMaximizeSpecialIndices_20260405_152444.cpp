// Last updated: 4/5/2026, 3:24:44 PM
1class Solution {
2public:
3    long long minIncrease(vector<int>& nums) {
4        long long ans=0,k=1;
5        int n=nums.size();
6        if(n%2!=0)
7        {
8            for(int i=1;i<=n-2;i+=2)
9            {
10                if(nums[i]>nums[i-1]&&nums[i]>nums[i+1]) continue;
11                ans+=max({nums[i],nums[i-1],nums[i+1]})+1-nums[i];
12            }
13            return ans;
14        }
15        long long len=(n-1)/2;
16        vector<long long>presum(len+1,0),sufsum(len+1,0);
17        for(int i=1;i<n-1;i+=2)
18        {
19            if(nums[i]>nums[i-1]&&nums[i]>nums[i+1])
20            {
21                presum[k]=presum[k-1];
22            }
23            else
24            presum[k]=presum[k-1]+max({nums[i],nums[i+1],nums[i-1]})-nums[i]+1;
25            if(nums[n-1-i]>nums[n-2-i]&&nums[n-1-i]>nums[n-i])
26            {
27                sufsum[k]=sufsum[k-1];
28            }
29            else
30            sufsum[k]=sufsum[k-1]+max({nums[n-1-i],nums[n-i],nums[n-2-i]})-nums[n-1-i]+1;
31            k++;
32        }
33
34        long long maxans=LLONG_MAX;
35        for(int i=0;i<=len;i++)
36        {
37            maxans=min(maxans,presum[i]+sufsum[len-i]);
38        }
39        return maxans;
40
41
42        
43
44    }
45};