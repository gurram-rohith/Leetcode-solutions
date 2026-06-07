// Last updated: 6/7/2026, 7:47:55 PM
1class Solution {
2public:
3    bool canReach(string s, int minJump, int maxJump) {
4        int n=s.size();
5        vector<bool>dp(s.size(),false);
6        dp[0]=true;
7        int reachable=0;
8        for(int i=1;i<s.size();i++)
9        {
10            if(i-minJump>=0&&dp[i-minJump])
11            reachable++;
12            if(i-maxJump-1>=0&&dp[i-1-maxJump])
13            reachable--;
14            if(reachable>0&&s[i]=='0')
15            dp[i]=true;
16
17        }
18        return dp[n-1];
19    }
20};