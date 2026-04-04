// Last updated: 4/5/2026, 12:13:15 AM
class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int>hashmap(3,0);
        int a=-1,b=-1,c=-1,ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a')
            a=i;
            else if(s[i]=='b')
            b=i;
            else
            c=i;
            if(a!=-1&&b!=-1&&c!=-1)
            {
               int minvalue=min(a,b);
               minvalue=min(minvalue,c);
               ans+=1;
               ans+=minvalue;
            }
        }
        return ans;
    }
};