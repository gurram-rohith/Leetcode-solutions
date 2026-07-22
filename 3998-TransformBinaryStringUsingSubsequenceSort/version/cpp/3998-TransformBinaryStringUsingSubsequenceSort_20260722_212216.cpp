// Last updated: 7/22/2026, 9:22:16 PM
1class Solution {
2public:
3    vector<bool> transformStr(string s, vector<string>& strs) {
4        vector<bool>ans;
5        for(int i=0;i<strs.size();i++)
6        {
7                int cnt0=0,cnt1=0,cnt2=0;
8            for(int j=0;j<strs[i].size();j++)
9            {
10                if(strs[i][j]=='0') cnt0++;
11                else if(strs[i][j]=='1') cnt1++;
12                else cnt2++;
13                if(s[j]=='0')
14                {
15                    if(cnt0==0)
16                    {
17                        if(cnt2==0)
18                        {
19                            ans.push_back(false);
20                            break;
21                        }
22                        else cnt2--;
23                    }
24                    else cnt0--;
25                }
26            }
27            if(ans.size()!=i+1)
28            {
29                if(cnt0>0) ans.push_back(false);
30                else ans.push_back(true);
31            }
32        }
33        return ans;
34    }
35};