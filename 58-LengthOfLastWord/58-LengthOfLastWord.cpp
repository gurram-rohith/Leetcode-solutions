// Last updated: 4/5/2026, 12:15:30 AM
class Solution {
public:
    int lengthOfLastWord(string s) {
        int len,ans=0,f=0;
        len=s.size();
        for(int j=len-1;j>=0;j--)
        {
             if((s[j]>=65&&s[j]<=90)||(s[j]>=97&&s[j]<=122))
            {
              f=1;
              ans++;
            }
            if(f==1&&s[j]==' ')
            break;
        }
        return ans;
    }
};