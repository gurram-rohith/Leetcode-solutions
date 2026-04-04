// Last updated: 4/5/2026, 12:11:06 AM
class Solution {
public:
    int vowelConsonantScore(string s) {
        int vcount=0,ccount=0;
        for(int i=0;i<s.size();i++)
            {
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                    vcount++;
                else if(s[i]>='a'&&s[i]<='z')
                    ccount++;
            }
        if(ccount>0)
            return floor(vcount/(ccount*(1.0)));
        return 0;
    }
};