// Last updated: 4/5/2026, 12:14:14 AM
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1) return true;
        if(n==0||n<0) return false;
        while(n>0){
            if(n%3!=0&&n!=1) return false;
            else n=n/3;
        }
        return true;
    }
};