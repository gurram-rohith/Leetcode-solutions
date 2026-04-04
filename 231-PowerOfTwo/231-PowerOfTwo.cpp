// Last updated: 4/5/2026, 12:14:28 AM
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==INT_MIN) return false;
        int c=0;
        long long x;
       for(int i=0;i<32;i++){
       x=n>>i;
       if(x&1)
        c++;
       }
       if(c==1) return true;
       else
       return false;
    }
};