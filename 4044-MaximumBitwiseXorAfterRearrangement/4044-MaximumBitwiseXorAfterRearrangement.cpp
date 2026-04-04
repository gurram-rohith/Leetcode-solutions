// Last updated: 4/5/2026, 12:11:47 AM
class Solution {
public:
    string maximumXor(string s, string t) {
        int ones=0,zeroes=0;
        for(int i=0;i<t.size();i++)
            {
                if(t[i]=='1')ones++;
                else zeroes++;
            }
        
        for(int i=0;i<s.size();i++)
            {
                if(s[i]=='0')
                {
                    if(ones>0)
                        t[i]='1',ones--;
                    else
                        t[i]='0',zeroes--;
                }
                else
                {
                    if(zeroes>0)
                        t[i]='0',zeroes--;
                    else t[i]='1',ones--;
                }
            }
        string ans;
        for(int i=0;i<s.size();i++)
            {
                if(s[i]!=t[i])
                    ans+='1';
                else
                    ans+='0';
            }
        return ans;
    }
};