// Last updated: 4/5/2026, 12:15:00 AM
class Solution {
public:
    bool isPalindrome(string s) {
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            if(isalnum(s[i]))
            {
                s[i]=tolower(s[i]);
            }
            else
           { s.erase(s.begin()+i);
            i--;}
        }
        int n=s.length();
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==s[n-1])
              count+=1;
              else
              break;
              n--;
        }
        cout<<count;
        if(count==s.length())
        return true;
        else
        return false;
    }
};