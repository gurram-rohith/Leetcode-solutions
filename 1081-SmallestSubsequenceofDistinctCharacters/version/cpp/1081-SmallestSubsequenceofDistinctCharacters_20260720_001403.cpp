// Last updated: 7/20/2026, 12:14:03 AM
1class Solution {
2public:
3    string smallestSubsequence(string s) {
4
5        vector<int> freq(26, 0);
6        vector<bool> vis(26, false);
7
8        for (char c : s)
9            freq[c - 'a']++;
10
11        string st;
12
13        for (char c : s) {
14            freq[c - 'a']--;
15            if (vis[c - 'a'])
16                continue;
17            while (!st.empty() &&
18                   st.back() > c &&
19                   freq[st.back() - 'a'] > 0) {
20
21                vis[st.back() - 'a'] = false;
22                st.pop_back();
23            }
24
25            st.push_back(c);
26            vis[c - 'a'] = true;
27        }
28
29        return st;
30    }
31};