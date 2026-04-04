// Last updated: 4/5/2026, 12:11:34 AM
class Solution {
public:
    int maxDistinct(string s) {
        int ans=0;
        vector<int>hashmap(26,0);
        for(int i=0;i<s.size();i++)
            {
                hashmap[s[i]-'a']=1;
            }
        for(int i=0;i<26;i++)
            {
                if(hashmap[i]==1)
                    ans++;
            }
        return ans;
        
    }
};