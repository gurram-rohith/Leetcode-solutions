// Last updated: 7/22/2026, 10:10:41 PM
1class Solution {
2public:
3    vector<bool> transformStr(string s, vector<string>& strs) {
4        int n=s.size();
5        vector<bool>ans(strs.size(),false);
6        vector<int>oness(s.size()+1,0);
7        for(int i=0;i<n;i++)
8        {
9            oness[i+1]=oness[i]+(s[i]-'0');
10        } 
11        for(int i=0;i<strs.size();i++)
12        {
13            vector<int>pre1(strs[i].size()+1,0),preqc(strs[i].size()+1,0);
14            int len=strs[i].size();
15            for(int j=0;j<len;j++)
16            {
17            pre1[j+1] = pre1[j];
18            preqc[j+1] = preqc[j];
19
20            if(strs[i][j]=='1')
21            pre1[j+1]++;
22            else if(strs[i][j]=='?')
23            preqc[j+1]++;
24            }
25            int onespresent=pre1[len];
26            int requiredones=oness[n]-onespresent;
27            if(requiredones>preqc[len]||requiredones<0) continue;
28            int accones=preqc[len]-requiredones;
29            bool ok=true;
30            for(int k=1;k<=len;k++)
31            {
32                int bk=pre1[k]+max(0,preqc[k]-accones);
33                if(bk>oness[k])
34                {
35                    ok=false;
36                    break;
37                }
38            }
39            ans[i]=ok;
40        }
41        return ans;
42        
43    }
44};