// Last updated: 4/11/2026, 8:20:04 PM
1class Solution {
2public:
3    bool isprime(int n)
4    {
5        if(n==1) return false;
6        for(int i=2;i*i<=n;i++)
7            {
8                if(n%i==0) return false;
9            }
10        return true;
11    }
12    int nextprime(int n)
13    {
14        for(int i=n+1;i<=1e5+3;i++)
15            {
16                bool prime=true;
17                for(int j=2;j*j<=i;j++)
18                    {
19                        if(i%j==0) 
20                        {
21                            prime=false;
22                            break;
23                        }
24                    }
25                if(prime) return i;
26            }
27        return 0;
28    }
29    int minOperations(vector<int>& nums) {
30        int ans=0;
31        for(int i=0;i<nums.size();i+=2)
32            {
33                if(isprime(nums[i])) continue;
34                ans+=nextprime(nums[i])-nums[i];
35            }
36        for(int i=1;i<nums.size();i+=2)
37            {
38                if(!(isprime(nums[i])))
39                    continue;
40                if(nums[i]==2)
41                    ans+=2;
42                else ans+=1;
43            }
44        return ans;
45    }
46};