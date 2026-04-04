// Last updated: 4/5/2026, 12:14:06 AM
class Solution {
public:
    string removeKdigits(string num, int k) {
       stack<int>st;
       string ans;
        long long kused=0;
        for(int i=0;i<num.size();i++)
        {
                while(!st.empty()&&(kused<k)&&st.top()>(num[i]-'0'))
                {
                    st.pop();
                    kused++;
                }
                st.push(num[i]-'0');
        }
        while(kused<k)
        {
            st.pop();
            kused++;
        }
        while(!st.empty())
        {
            ans.push_back(st.top()+'0');
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        while(ans[0]=='0')
        ans.erase(ans.begin()+0);
        if(ans.size()==0)
        return "0";
        return ans;

    }
};