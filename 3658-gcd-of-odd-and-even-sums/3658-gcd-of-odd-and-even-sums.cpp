class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sum=0;
        n*=2;
        sum=(n*(n+1))/2;
        int t=n/2;
        int evsum=t*(t+1);
        return __gcd(evsum,sum-evsum);
    }
};