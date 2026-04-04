// Last updated: 4/5/2026, 12:13:59 AM
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end(),greater<int>());
        sort(s.begin(),s.end(),greater<int>());
        int mini=min(g.size(),s.size());
        long long ans=0;
        int i=0,j=0;
        while(i<g.size()&&j<s.size())
        {
            if(g[i]>s[j]) i++;
            else
            ans+=1,j++,i++;
        }
        return ans;
    }
};