// Last updated: 4/5/2026, 12:13:38 AM
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        string total=s+s;
        if(total.find(goal)!=string::npos)
        return true;
        else
        return false;
    }
};