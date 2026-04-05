// Last updated: 4/5/2026, 8:21:02 AM
1class Solution {
2public:
3    int mirrorFrequency(string s) {
4        vector<int>freq(26,0),freqint(10,0);
5        set<int>st;
6        int ans=0;
7        for(int i=0;i<s.size();i++)
8            {
9                if(s[i]>='0'&&s[i]<='9')
10                {
11                    freqint[s[i]-'0']++;
12                }
13                else
14                {
15                    freq[s[i]-'a']++;
16                }
17            }
18        int totsum=0;
19        for(int i=0;i<=12;i++)
20            {
21                totsum+=abs(freq[i]-freq[25-i]);
22               
23            }
24        for(int i=0;i<=4;i++)
25            {
26                totsum+=abs(freqint[i]-freqint[9-i]);
27            }
28        
29        return totsum;
30    }
31};