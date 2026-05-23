// Last updated: 5/23/2026, 7:37:34 PM
1class Solution {
2public:
3    using ll =long long;
4    using ull = unsigned long long;
5    ll mod=(1LL<<31)-1;
6    ull binexp(ull a,ull b)
7    {
8        ull res=1;
9        while(b>0)
10        {
11            if(b&1) res=(res*a);
12            a=(a*a);
13            b>>=1;
14        }
15        return res;
16    }
17    int check(vector<int>&nums,int len)
18    {
19        unordered_map<ull,int>mpp;
20        ull h=0;
21        ull p=binexp(1000003ULL,(len-1)*1ULL);
22        int k;
23        for( k=0;k<len;k++)
24        {
25            h=h*1000003ULL+nums[k];
26        }
27        mpp[h]++;
28        for(k;k<nums.size();k++)
29        {
30          h=h-nums[k-len]*p;
31          h=h*1000003ULL+nums[k];
32            mpp[h]++;
33        }
34        for(auto it:mpp)
35        {
36            if(it.second==1) return 1;
37        }
38        return 0;
39
40    }
41    int smallestUniqueSubarray(vector<int>& nums) {
42        int r=nums.size();
43        int l=1;
44        int minans=INT_MAX;
45        while(l<=r)
46        {
47            int mid=l+(r-l)/2;
48            if(check(nums,mid))
49            {
50                minans=mid;
51                r=mid-1;
52            }
53            else l=mid+1;
54        }
55        return minans;
56    }
57};