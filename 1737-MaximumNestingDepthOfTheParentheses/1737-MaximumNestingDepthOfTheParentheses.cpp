// Last updated: 4/5/2026, 12:13:04 AM
class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int len=0,maxlen=-1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                len++;
                st.push(s[i]);
                maxlen=max(maxlen,len);
            }
            else if(s[i]==')')
            {
                len--;
                st.pop();
            }
        }
        maxlen=max(maxlen,len);
        return maxlen;


    }
};