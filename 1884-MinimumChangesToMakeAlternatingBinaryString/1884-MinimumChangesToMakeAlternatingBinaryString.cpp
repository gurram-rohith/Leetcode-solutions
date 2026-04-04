// Last updated: 4/5/2026, 12:12:58 AM
class Solution {
public:
    int compare(string s,string c)
    {
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=c[i]) ans++;
        }
        return ans;
    }
    int minOperations(string s) {
        string c;
        int st=0;
        for(int i=0;i<s.size();i++)
        {
            c+=st+'0';
            st^=1;
        }
        string t;
        st=1;
        for(int i=0;i<s.size();i++)
        {
            t+=st+'0';
            st^=1;
        }
        return min(compare(s,c),compare(s,t));
    }
};