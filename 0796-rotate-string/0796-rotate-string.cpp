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