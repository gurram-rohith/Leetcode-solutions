// Last updated: 5/28/2026, 6:55:53 PM
1class Solution {
2public:
3    int numberOfSpecialChars(string word) {
4        vector<int>lc(26,0),uc(26,0);
5        int ans=0;
6        for(char c:word)
7        {
8            if(c>='a'&&c<='z')
9            lc[c-'a']++;
10            else uc[c-'A']++;
11        }
12        for(int i=0;i<26;i++)
13        {
14            if(lc[i]>=1&&uc[i]>=1)
15            ans++;
16        }
17        return ans;
18        
19    }
20};