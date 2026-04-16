class Solution {
public:
    vector<vector<string>> wordSquares(vector<string>& words) {
        vector<vector<string>>ans;
        for(int i=0;i<words.size();i++)
        {
            for(int j=0;j<words.size();j++)
            {
                if(j==i) continue;
                for(int k=0;k<words.size();k++)
                {
                    if(k==j||k==i) continue;
                    for(int l=0;l<words.size();l++)
                    {
                        if(l==k||l==j||l==i) continue;
                        if(words[i][0]==words[k][0]&&words[i][3]==words[l][0]&&words[j][0]==words[k][3]&&words[j][3]==words[l][3])
                        ans.push_back({words[i],words[k],words[l],words[j]});
                    }
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};