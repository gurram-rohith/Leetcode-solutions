// Last updated: 7/21/2026, 10:25:32 PM
1class Solution {
2public:
3    bool canReach(vector<int>& start, vector<int>& target) {
4        int a=start[0]-target[0];
5        int b=start[1]-target[1];
6        if(a<0) a*=-1;
7        if(b<0) b*=-1;
8        
9        if(a%2==0&&b%2!=0||a%2!=0&&b%2==0) return false;
10        return true;
11    }
12};