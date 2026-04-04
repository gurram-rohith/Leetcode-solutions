// Last updated: 4/5/2026, 12:12:29 AM
class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        for(int i=0;i<=1;i++)
        {
            if(s1[i]==s2[i]) continue;
            swap(s2[i],s2[i+2]);

        }
        for(int i=0;i<=3;i++)
        {
            if(s1[i]!=s2[i])  return false;
        }
        return true;
    }
};