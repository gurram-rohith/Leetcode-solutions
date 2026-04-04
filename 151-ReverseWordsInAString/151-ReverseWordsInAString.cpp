// Last updated: 4/5/2026, 12:14:50 AM
class Solution {
public:
    string reverseWords(string s) {
        vector<string>ans;
       string temp="";
       for(int i=0;i<s.size();i++){
        if(s[i]==' '&&temp=="")
        continue;
        else if(s[i]!=' ')
        temp.push_back(s[i]);
        else if(s[i]==' ')
        {
           ans.push_back(temp);
           temp="";
        }
       }
       if(temp!="") 
       ans.push_back(temp);
       
       string a;
       for(int i=ans.size()-1;i>=0;i--)
       {
        a+=ans[i];
        if(i!=0)
        a+=" ";
       }
       return a;
    }
};