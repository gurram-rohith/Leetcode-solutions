// Last updated: 7/17/2026, 10:11:42 PM
1class Solution {
2public:
3    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
4        int maxele=*max_element(nums.begin(),nums.end());
5        unordered_map<int,int>freq;
6        vector<long long>divfreq(maxele+1,0);
7        for(int i:nums) freq[i]++;
8        for(int i=1;i<=maxele;i++)
9        {
10            int cnt=0;
11            for(int j=i;j<=maxele;j+=i)
12            {
13                if(freq.find(j)!=freq.end())
14                cnt+=freq[j];
15            }
16            divfreq[i]=cnt;
17            // for finding the freq of element which are divisible by i
18        }
19        for(int i=1;i<=maxele;i++)
20        {
21            divfreq[i]=(divfreq[i]*(divfreq[i]-1))/2;
22            // no of pairs whose gcd will be >=i
23        }
24        for(int i=maxele;i>=1;i--)
25        {
26            for(int j=2*i;j<=maxele;j+=i)
27            divfreq[i]-=divfreq[j]; 
28            // removing the gcd values which are greater than i
29        }
30
31        // to identify the element which index the query asks for 
32        for(int i=1;i<=maxele;i++) divfreq[i]+=divfreq[i-1];
33        vector<int>ans;
34        for(long long q:queries)
35        {
36            q++;
37            int pos=lower_bound(divfreq.begin(),divfreq.end(),q)-divfreq.begin();
38            ans.push_back(pos);
39        }
40        return ans;
41
42
43
44        
45
46    }
47};