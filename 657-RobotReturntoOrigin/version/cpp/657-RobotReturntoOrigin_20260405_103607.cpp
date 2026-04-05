// Last updated: 4/5/2026, 10:36:07 AM
1class Solution {
2public:
3    bool judgeCircle(string moves) {
4        int x=0,y=0;
5        for(char c:moves)
6        {
7            if(c=='U') y++;
8            else if(c=='D') y--;
9            else if(c=='L') x--;
10            else x++;
11        }
12        return (x==y&&y==0);
13    }
14};