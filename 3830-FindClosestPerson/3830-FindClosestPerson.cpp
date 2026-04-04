// Last updated: 4/5/2026, 12:12:07 AM
class Solution {
public:
    int findClosest(int x, int y, int z) {
       x=x-z;
       y=y-z;
       if(x<0) x*=-1;
       if(y<0) y*=-1;
       if(x<y)return 1;
       else if(x>y) return 2;
       else return 0;

    }
};