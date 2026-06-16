class Solution {
public:
    string processStr(string s) {
        string ans;
        for(char c:s)
        {
            if(c>='a'&&c<='z') ans+=c;
            else if(c=='*')
            {
                if(ans.size()!=0)
                ans.erase(ans.size()-1);
            }
            else if(c=='#') ans+=ans;
            else {
                reverse(ans.begin(),ans.end());
            }
        }
        return ans;
    }
};