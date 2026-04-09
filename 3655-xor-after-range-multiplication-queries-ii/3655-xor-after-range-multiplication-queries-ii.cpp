class Solution {
public:
    const int MOD=1e9+7;
    using ll = long long;
    int pow(ll x, ll y) {
        ll res = 1;
        for (; y; y >>= 1) {
            if (y & 1) {
                res = res * x % MOD;
            }
            x = x * x % MOD;
        }
        return res;
    }
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        int T=sqrt(n);
        vector<vector<vector<int>>>groups(T);
       for(int i=0;i<queries.size();i++)
       {
            int l=queries[i][0];
            int r=queries[i][1];
            int k=queries[i][2];
            int v=queries[i][3];
            if(k>=T)
            {
                for(int j=l;j<=r;j+=k)
                {
                    nums[j]=(nums[j]*(long long)v)%MOD;
                }
            }
            else
            {
                groups[k].push_back({l,r,v});
            }
       }
       vector<ll>dif(n+T);
       for(int k=1;k<T;k++)
       {
        if(groups[k].empty())
        continue;
        fill(dif.begin(),dif.end(),1);
        for(auto &q:groups[k])
        {
            int l=q[0],r=q[1],v=q[2];
            dif[l]=(dif[l]*v)%MOD;
            int R=l+((r-l)/k+1)*k;
            dif[R]=dif[R]*pow(v,MOD-2)%MOD;
        }

        for(int i=k;i<n;i++)
        {
            dif[i]=(dif[i]*dif[i-k])%MOD;
        }
        for(int i=0;i<n;i++)
        {
            nums[i]=(nums[i]*(long long)dif[i])%MOD;
        }
       }
       int res=0;
       for(int i=0;i<n;i++)
       {
        res=res^nums[i];
       }
       return res;
    }
};