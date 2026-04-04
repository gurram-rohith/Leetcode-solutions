// Last updated: 4/5/2026, 12:10:47 AM
class Solution {
public:
    bool isVowel(char ch)
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') return true;
        return false;
    }
    string trimTrailingVowels(string s) {
        string temp;
        reverse(s.begin(),s.end());
        int f=0;
        for(int i=0;i<s.size();i++)
            {
                if(f==0&&isVowel(s[i])) continue;
                if(f==0)
                {
                    f=1;
                }

                if(f==1)
                    temp+=s[i];
            }
        reverse(temp.begin(),temp.end());
        return temp;
    }
};