// Last updated: 4/10/2026, 12:22:24 AM
1class Solution {
2public:
3    const int MOD=1e9+7;
4    using ll = long long;
5    int pow(ll x, ll y) {
6        ll res = 1;
7        for (; y; y >>= 1) {
8            if (y & 1) {
9                res = res * x % MOD;
10            }
11            x = x * x % MOD;
12        }
13        return res;
14    }
15    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
16        int n=nums.size();
17        int T=sqrt(n);
18        vector<vector<vector<int>>>groups(T);
19       for(int i=0;i<queries.size();i++)
20       {
21            int l=queries[i][0];
22            int r=queries[i][1];
23            int k=queries[i][2];
24            int v=queries[i][3];
25            if(k>=T)
26            {
27                for(int j=l;j<=r;j+=k)
28                {
29                    nums[j]=(nums[j]*(long long)v)%MOD;
30                }
31            }
32            else
33            {
34                groups[k].push_back({l,r,v});
35            }
36       }
37       vector<ll>dif(n+T);
38       for(int k=1;k<T;k++)
39       {
40        if(groups[k].empty())
41        continue;
42        fill(dif.begin(),dif.end(),1);
43        for(auto &q:groups[k])
44        {
45            int l=q[0],r=q[1],v=q[2];
46            dif[l]=(dif[l]*v)%MOD;
47            int R=l+((r-l)/k+1)*k;
48            dif[R]=dif[R]*pow(v,MOD-2)%MOD;
49        }
50
51        for(int i=k;i<n;i++)
52        {
53            dif[i]=(dif[i]*dif[i-k])%MOD;
54        }
55        for(int i=0;i<n;i++)
56        {
57            nums[i]=(nums[i]*(long long)dif[i])%MOD;
58        }
59       }
60       int res=0;
61       for(int i=0;i<n;i++)
62       {
63        res=res^nums[i];
64       }
65       return res;
66    }
67};