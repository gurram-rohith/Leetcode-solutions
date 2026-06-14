// Last updated: 6/14/2026, 8:01:56 AM
1class Solution {
2public:
3    bool checkGoodInteger(int n) {
4        long long sqsum=0,digsum=0;
5        while(n>0)
6            {
7                int temp=n%10;
8                digsum+=temp;
9                sqsum+=temp*temp;
10                n/=10;
11            }
12        if(sqsum-digsum>=50) return true;
13        return false;
14    }
15};