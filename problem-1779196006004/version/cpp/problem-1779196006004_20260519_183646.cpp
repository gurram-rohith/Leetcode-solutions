// Last updated: 5/19/2026, 6:36:46 PM
1class Solution {
2public:
3
4    int maxi = 0;
5    int endindex = 0;
6
7    int lcs(string &s, string &t,
8            vector<vector<int>>& dp,
9            int i, int j)
10    {
11        if(i < 0 || j < 0)
12            return 0;
13
14        if(dp[i][j] != -1)
15            return dp[i][j];
16
17        if(s[i] == t[j])
18        {
19            dp[i][j] = 1 + lcs(s, t, dp, i-1, j-1);
20            int len = dp[i][j];
21            if(i - len + 1 == (int)s.size() - 1 - j)
22            {
23                if(len > maxi)
24                {
25                    maxi = len;
26                    endindex = i;
27                }
28            }
29        }
30        else
31        {
32            dp[i][j] = 0;
33        }
34
35        lcs(s, t, dp, i-1, j);
36        lcs(s, t, dp, i, j-1);
37
38        return dp[i][j];
39    }
40
41    string longestPalindrome(string s)
42    {
43        string t = s;
44
45        reverse(t.begin(), t.end());
46
47        int n = s.size();
48
49        vector<vector<int>> dp(n, vector<int>(n, -1));
50
51        lcs(s, t, dp, n-1, n-1);
52
53        return s.substr(endindex - maxi + 1, maxi);
54    }
55};