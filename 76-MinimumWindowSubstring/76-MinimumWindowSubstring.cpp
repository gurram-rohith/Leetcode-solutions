// Last updated: 4/5/2026, 12:15:17 AM
class Solution {
public:
    string minWindow(string s, string t) {
        map<char,int>mpp;
        int minvalue=INT_MAX;
        int startind=-1;
        int l=0,r=0;
        int count=0;
        for(int i=0;i<t.size();i++)
        mpp[t[i]]++;
        while(r<s.size())
        {
                if(mpp[s[r]]>0)
                count++;
                mpp[s[r]]--;
                r++;
            while(count==t.size())
            {
                if((r-l)<minvalue)
                {
                    minvalue=r-l;
                    startind=l;
                }
                mpp[s[l]]++;
                if(mpp[s[l]]>0)
                count--;
                l++;

            }
        }
        if(startind==-1) return "";
        return s.substr(startind,minvalue);

    }
};