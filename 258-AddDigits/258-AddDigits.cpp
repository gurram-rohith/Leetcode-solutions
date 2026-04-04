// Last updated: 4/5/2026, 12:14:22 AM
class Solution {
public:
    int addDigits(int num) {
        if(num==0) return 0;
        if(num%9==0) return 9;
        else return num%9;
    }
};