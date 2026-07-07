// Last updated: 7/7/2026, 7:05:57 PM
1class Solution {
2public:
3    long long sumAndMultiply(int n) {
4        long long ans=0;
5        while(n>0){
6            if(n%10!=0) ans=ans*10+n%10;
7            n/=10;
8        }
9        long long temp=0;
10        long long sum=0;
11        while(ans>0)
12        {
13            temp=temp*10+ans%10;
14            sum+=ans%10;
15            ans/=10;
16        }
17        temp*=sum;
18        return temp;
19    }
20};