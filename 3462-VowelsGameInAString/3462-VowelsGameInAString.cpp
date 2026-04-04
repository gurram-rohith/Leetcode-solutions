// Last updated: 4/5/2026, 12:12:19 AM
class Solution {
public:
    bool doesAliceWin(string s) {
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            count++;
        }
        if(count==0) return false;
        else return true;
    }
};