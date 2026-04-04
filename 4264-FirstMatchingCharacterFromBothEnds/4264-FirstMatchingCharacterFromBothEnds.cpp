// Last updated: 4/5/2026, 12:10:31 AM
class Solution {
public:
    int firstMatchingIndex(string s) {
        int f=0;
        for(int i=0;i<s.size();i++)
            {
                if(s[i]==s[s.size()-1-i]) return i;
            }
        return -1;
    }
};