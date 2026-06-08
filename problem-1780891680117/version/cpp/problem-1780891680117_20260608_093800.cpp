// Last updated: 6/8/2026, 9:38:00 AM
1class Solution {
2public:
3    bool consecutiveSetBits(int n) {
4        bool prev=false;
5        int t=0;
6        string s;
7        int c1=0;
8        for(int i=0;i<=30;i++)
9            {
10                if((n>>i)&1)
11                {
12                    s+='1';
13                }
14                else s+='0';
15            }
16        for(char c:s)
17            cout<<c;
18        cout<<endl;
19        for(char c:s)
20            {
21                if(prev&&c=='1') t++;
22                if(c=='1') prev=true;
23                else prev=false;
24            }
25        if(t==1) return true;
26        return false;
27    }
28};