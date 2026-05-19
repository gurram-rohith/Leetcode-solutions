// Last updated: 5/19/2026, 6:51:23 PM
1class Solution {
2public:
3    int lenpal(string s,int l,int r)
4    {
5        while(l>=0&&r<s.size())
6        {
7            if(s[l]!=s[r]) return r-l-1;
8            l--,r++;
9        }
10        return (r-l-1);
11    }
12    string longestPalindrome(string s) {
13        if(s.size()==1) return s;
14        int lind=-1,maxlen=0;
15        for(int i=0;i<s.size();i++)
16        {
17            int len=lenpal(s,i,i);
18            if(len>maxlen)
19            {
20                maxlen=len;
21                lind=i;
22            }
23            if(i<s.size()-1)
24            {
25                len=lenpal(s,i,i+1);
26                if(len>maxlen)
27                {
28                    maxlen=len;
29                    lind=i;
30                }
31            }
32        }
33        cout<<lind<<endl;
34        lind+=maxlen/2;
35        string ans;
36        while(maxlen--)
37        {
38            ans+=s[lind];
39            lind--;
40        }
41        return ans;
42        
43    }
44};