// Last updated: 4/5/2026, 12:11:04 AM
class Solution {
public:
    string largestEven(string s) {
        int len=s.size();
        for(int i=len-1;i>=0;i--)
            {
                if(s[i]=='2')
                    return s;
                else
                    s.erase(s.begin()+i);
            }
        return s;
    }
};