// Last updated: 7/18/2026, 8:11:18 PM
1class Solution {
2public:
3    string rearrangeString(string s, char x, char y) {
4        int freq=0;
5        for(char c:s) {
6            if(c==x) freq++;
7        }
8        for(int i=s.size()-1;i>=0;i--)
9            {
10                if(s[i]==x)
11                s.erase(s.begin()+i);
12            }
13        while(freq--)
14            s+=x;
15        return s;
16    }
17};