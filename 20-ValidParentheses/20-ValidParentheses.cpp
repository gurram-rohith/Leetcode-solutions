// Last updated: 4/5/2026, 12:15:58 AM
class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        int j=0;
        for(int i=0;i<s.size();i++){
            if((s[i]==')'||s[i]=='}'||s[i]==']')&&(st.empty()))
            return false;
            else {
                  if(s[i]=='('||s[i]=='{'||s[i]=='[')
                  {
                    st.push(s[i]);
                    j++;
                  }
                  else if((s[i]==')'&&st.top()=='(')||(s[i]=='}'&&st.top()=='{')||(s[i]==']'&&st.top()=='[')&&j!=0)
                  {
                    st.pop();
                    j--;
                  }
                  else
                  return false;
            }

        }
        if(!(st.empty())) return false;
        return true;

    }
};