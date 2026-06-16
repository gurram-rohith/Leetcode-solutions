// Last updated: 6/16/2026, 1:14:13 PM
1class Solution {
2public:
3    string processStr(string s) {
4        string ans;
5        for(char c:s)
6        {
7            if(c>='a'&&c<='z') ans+=c;
8            else if(c=='*')
9            {
10                if(ans.size()!=0)
11                ans.erase(ans.size()-1);
12            }
13            else if(c=='#') ans+=ans;
14            else {
15                reverse(ans.begin(),ans.end());
16            }
17        }
18        return ans;
19    }
20};