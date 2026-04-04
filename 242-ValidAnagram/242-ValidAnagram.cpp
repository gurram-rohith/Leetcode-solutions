// Last updated: 4/5/2026, 12:14:24 AM
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        vector<int>hash1(26,0),hash2(26,0);
        for(int i=0;i<s.size();i++ )
        {
            hash1[s[i]-'a']++;
            hash2[t[i]-'a']++;
        }
        for(int  i=0;i<26;i++){
            if(hash1[i]!=hash2[i])
            return false;
        }
        return true;
    }
};