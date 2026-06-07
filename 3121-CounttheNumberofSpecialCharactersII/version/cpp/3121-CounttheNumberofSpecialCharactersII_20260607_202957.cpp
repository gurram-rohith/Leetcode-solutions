// Last updated: 6/7/2026, 8:29:57 PM
1class Solution {
2public:
3    int numberOfSpecialChars(string word) {
4        vector<int>find(26,-1);
5        vector<int>freq(26,0);
6        for(char c:word) {
7            if(c>='a'&&c<='z')
8            {
9                freq[c-'a']++;
10            }
11        }
12        int ans=0;
13        for(int i=0;i<word.size();i++)
14        {
15            if(word[i]>='A'&&word[i]<='Z')
16            {
17                if(find[word[i]-'A']==-1) find[word[i]-'A']=i;
18            }
19        }
20        for(int i=0;i<26;i++)
21        {
22            int f=0;
23            if(find[i]==-1) continue;
24            for(int j=find[i]+1;j<word.size();j++)
25            {
26                if(word[j]>='a'&&word[j]<='z')
27                {
28                    if(word[j]-32-'A'==i) {
29                    f=1;
30                    break;
31                    }
32                }
33            }
34            if(!f&&freq[i]!=0) ans++;
35        }
36        return ans;
37    }
38};