// Last updated: 4/5/2026, 12:11:00 AM
class Solution {
public:
    string reverseByType(string s) {
        vector<int>spec,alpha;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a'&&s[i]<='z')
            alpha.push_back(i);
            else
            spec.push_back(i);
        }
        for(int i=0;i<spec.size()/2;i++)
        {
            char temp=s[spec[i]];
            s[spec[i]]=s[spec[spec.size()-1-i]];
            s[spec[spec.size()-1-i]]=temp;
        }
        for(int i=0;i<alpha.size()/2;i++)
        {
            char temp=s[alpha[i]];
            s[alpha[i]]=s[alpha[alpha.size()-1-i]];
            s[alpha[alpha.size()-1-i]]=temp;
        }
        return s;
    }
};