// Last updated: 4/5/2026, 12:10:40 AM
class Solution {
public:
    const int mod=1e9+7;
    const int MAXN=1e5;
    vector<long long>fact,invFact;
    long long power(long long a,long long b)
    {
        long long res=1;
        while(b>0)
            {
                if(b&1) res=(res*a)%mod;
                a=(a*a)%mod;
                b>>=1;
            }
        return res;
    }
    void precompute(int n)
    {
        fact.resize(n+1);
        invFact.resize(n+1);
        fact[0]=1;
        for(int i=1;i<=n;i++)
            {
                fact[i]=(fact[i-1]*i)%mod;
            }
        invFact[n]=power(fact[n],mod-2);
        for(int i=n-1;i>=0;i--)
            invFact[i]=(invFact[i+1]*(i+1))%mod;
        
    }
    long long ncr(int n,int r)
    {
        if(r<0||r>n) return 0;
        return ((fact[n]*invFact[r])%mod*invFact[n-r])%mod;
    }
    int countVisiblePeople(int n, int pos, int k) {
        precompute(n);
        int lint=pos-0,rint=n-1-pos;
        int ok=k;
        long long ans=0;
        while(k>=0)
            {
                ans=(ans+(ncr(lint,k)*ncr(rint,ok-k))%mod)%mod;
                k--;
            }
        return (ans*2)%mod;
    }
};