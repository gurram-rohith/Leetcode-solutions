// Last updated: 4/5/2026, 12:14:18 AM
class Solution {
public:
    bool canWinNim(int n) {
       if(n<=3) return true;
       if(n%4==0) return false;
       else return true;
    }
};