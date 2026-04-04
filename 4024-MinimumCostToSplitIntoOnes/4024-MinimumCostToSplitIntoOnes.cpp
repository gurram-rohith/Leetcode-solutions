// Last updated: 4/5/2026, 12:11:48 AM
class Solution {
public:
    int minCost(int n) {
        int t=n-1;
        int ans=(t*(t+1))/2;
        return ans;
    }
};