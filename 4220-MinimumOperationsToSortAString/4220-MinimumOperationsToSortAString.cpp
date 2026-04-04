// Last updated: 4/5/2026, 12:10:51 AM
class Solution {
public:
    int minOperations(string s) {
        int highchar=0,lowchar=26,li=-1,hi=-1;
        string t=s;
        sort(t.begin(),t.end());
        int f=0;
        for(int i=0;i<s.size();i++)
            {
                if(s[i]!=t[i])
                {
                    f=1;
                    break;
                }
            }
        if(f==0) return 0;
        for(char c:s)
            {
                highchar=max(highchar,c-'a');
                lowchar=min(lowchar,c-'a');
            }
        for(int i=0;i<s.size();i++)
            {
                if(li==-1)
                {
                    if(s[i]==lowchar+'a')li=i;
                }
            }
        for(int i=s.size()-1;i>=0;i--)
            {
                if(hi==-1)
                {
                    if(s[i]==highchar+'a')hi=i;
                }
            }
        if(hi==s.size()-1||li==0) return 1;
        if((hi==0)&&(li==s.size()-1)&&(s.size()==2)) return -1;
        if((hi==0)&&(li==s.size()-1)) return 3;
        return 2;
    }
};