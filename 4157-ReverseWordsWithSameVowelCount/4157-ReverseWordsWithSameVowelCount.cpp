// Last updated: 4/5/2026, 12:11:12 AM
class Solution {
public:
    string reverseWords(string s) {
        long long vowcount=0,curr=0,nofspaces=0;
        string str,ans;
        for(int i=0;i<s.size();i++)
            {
                if(s[i]==' ')
                    nofspaces++;
                if(s[i]==' '&&nofspaces>=1)
                {
                    if(nofspaces>1)
                    {
                        if(curr==vowcount)
                        {
                            ans+=str;
                            ans+=' ';
                        }
                        else{
                            reverse(str.begin(),str.end());
                            ans+=str;
                            ans+=' ';
                        }
                        curr=0;
                        str.clear();
                    }
                    else
                        ans+=' ';
                }
                else if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                {
                    if(nofspaces==0)
                        vowcount++;
                    else
                        curr++;
                }
                if(nofspaces==0)
                {
                    ans+=s[i];
                }
                else{
                    if(s[i]!=' ')
                    str.insert(str.begin()+0,s[i]);
                }
            }
        if(curr==vowcount)
            ans+=str;
        else{
            reverse(str.begin(),str.end());
            ans+=str;
        }
        return ans;
        
    }
};