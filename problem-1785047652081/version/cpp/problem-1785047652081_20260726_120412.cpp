// Last updated: 7/26/2026, 12:04:12 PM
1class Solution {
2public:
3    static const int MOD = 1000000007;
4    static const int MAXN = 500000;
5
6    long long power(long long a, long long b) {
7        long long res = 1;
8        while (b) {
9            if (b & 1) res = res * a % MOD;
10            a = a * a % MOD;
11            b >>= 1;
12        }
13        return res;
14    }
15
16    long long nCr(int n, int r) {
17        if (r < 0 || r > n) return 0;
18
19        static vector<long long> fact;
20        static vector<long long> invFact;
21        static bool initialized = false;
22
23        if (!initialized) {
24            initialized = true;
25            fact.resize(MAXN + 1);
26            invFact.resize(MAXN + 1);
27
28            fact[0] = 1;
29            for (int i = 1; i <= MAXN; i++)
30                fact[i] = fact[i - 1] * i % MOD;
31
32            invFact[MAXN] = power(fact[MAXN], MOD - 2);
33
34            for (int i = MAXN - 1; i >= 0; i--)
35                invFact[i] = invFact[i + 1] * (i + 1) % MOD;
36        }
37
38        return fact[n] * invFact[r] % MOD * invFact[n - r] % MOD;
39    }
40
41    int countValidSequences(int n, int k) {
42      
43
44        long long ans = nCr(n - 1, k - 1);
45
46        if ((n - k) % 2 == 0) {
47            int m = (n - k) / 2;
48            ans = (ans - nCr(m + k - 1, k - 1) + MOD) % MOD;
49        }
50
51        return (int)ans;
52    }
53};