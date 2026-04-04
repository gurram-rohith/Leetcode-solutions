// Last updated: 4/5/2026, 12:10:41 AM
class Solution {
public:
    long long countCommas(long long n) {
        long long ans=0;
        if(n<(int)1e3) return 0;
        if(n>=(long long)1e15)
        ans+=5*(n-((long long)1e15-1)),n=((long long)1e15-1);
        if(n>=(long long)1e12)
        ans+=4*(n-((long long)1e12-1)),n=((long long)1e12-1);
        if(n>=(long long)1e9)
        ans+=3*(n-((long long)1e9-1)),n=((long long)1e9-1);
        if(n>=(long long)1e6)
        ans+=2*(n-((long long)1e6-1)),n=((long long)1e6-1);
        if(n>=(long long)1e3)
        ans+=(n-((long long)1e3-1)),n=((long long)1e3-1);
    return ans;
    }
};