// Last updated: 7/28/2026, 8:23:48 PM
1class Solution {
2public:
3    string smallestPalindrome(string s) {
4        vector<int>freq(26,0);
5        string oddfreq="";
6        for(char c:s)
7        {
8            freq[c-'a']++;
9        }
10        string t;
11        for(int i=0;i<26;i++)
12        {
13            int times=freq[i]/2;
14            if(freq[i]%2!=0) oddfreq=(i+'a');
15            while(times--)
16            t+=i+'a';
17        }
18        string p=t;
19        t+=oddfreq;
20        reverse(p.begin(),p.end());
21        t+=p;
22        return t;
23        
24    }
25};