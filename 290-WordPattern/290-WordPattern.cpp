// Last updated: 4/5/2026, 12:14:19 AM
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int m=pattern.size(),n=s.size();
        vector<string>vctr;
        map<char,string>mpp;
        map<string,char>reversemap;
        string temp="";
        for(int i=0;i<n;i++)
        {
            if(s[i]!=' ')
            temp.push_back(s[i]);
            if(s[i]==' '||i==n-1)
            {vctr.push_back(temp);
            temp="";}
        }
        if(pattern.size()!=vctr.size())return false;
        for(int i=0;i<pattern.size();i++)
        { 
            if(mpp.find(pattern[i])!=mpp.end())
            {
                if(mpp[pattern[i]]!=vctr[i]) return false;
            }
            else if(mpp.find(pattern[i])==mpp.end())
            mpp[pattern[i]]=vctr[i];
            if(reversemap.find(vctr[i])!=reversemap.end())
            {
                if(reversemap[vctr[i]]!=pattern[i]) return false;
            }
            else if(reversemap.find(vctr[i])==reversemap.end())
            reversemap[vctr[i]]=pattern[i];
            
        }
        return true;
    }
};