// Last updated: 4/5/2026, 12:13:46 AM
class Solution {
public:
    bool checkValidString(string s) {
        int l=0,h=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            l++,h++;
            if(s[i]==')')
            l--,h--;
            if(s[i]=='*')
            l--,h++;
            if(l<0)
            l=0;
            if(h<0)
            return false;
        }
        return (l==0);
    }
};