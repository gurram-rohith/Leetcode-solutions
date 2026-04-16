// Last updated: 4/16/2026, 2:10:08 PM
1class Solution {
2public:
3    vector<vector<string>> wordSquares(vector<string>& words) {
4        vector<vector<string>>ans;
5        for(int i=0;i<words.size();i++)
6        {
7            for(int j=0;j<words.size();j++)
8            {
9                if(j==i) continue;
10                for(int k=0;k<words.size();k++)
11                {
12                    if(k==j||k==i) continue;
13                    for(int l=0;l<words.size();l++)
14                    {
15                        if(l==k||l==j||l==i) continue;
16                        if(words[i][0]==words[k][0]&&words[i][3]==words[l][0]&&words[j][0]==words[k][3]&&words[j][3]==words[l][3])
17                        ans.push_back({words[i],words[k],words[l],words[j]});
18                    }
19                }
20            }
21        }
22        sort(ans.begin(),ans.end());
23        return ans;
24    }
25};