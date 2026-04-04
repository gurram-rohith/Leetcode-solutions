// Last updated: 4/5/2026, 12:12:57 AM
class Solution {
public:
    bool checkOnesSegment(string s) {
        int c=0,maxc=0;
        int tc=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
               c++;
               tc++;
            }
            else
            maxc=max(maxc,c),c=0;
        }
        maxc=max(maxc,c);
        if(s.size()==1)
        {
            if(maxc==1) return true;
            return false;
        }
        if(maxc!=tc) return false;
        return true;
    }
};