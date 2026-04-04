// Last updated: 4/5/2026, 12:13:25 AM
class Solution {
public:
    string removeOuterParentheses(string s) {
        int depth=0;
        string result;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
            {
                if(depth>0)
                 result+='(';
                depth++;
            }
            else{
                depth--;
                if(depth>0)
                result+=')';
            }
            
        }
        return result;
    }
};