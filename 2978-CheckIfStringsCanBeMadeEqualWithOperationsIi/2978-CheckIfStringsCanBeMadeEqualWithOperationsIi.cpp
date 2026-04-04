// Last updated: 4/5/2026, 12:12:31 AM
class Solution {
public:
    bool checkStrings(string s1, string s2) {
        vector<int>even(26,0),odd(26,0);
        for(int i=0;i<s1.size();i++)
        {
            if(i%2==0)
            {
                even[s2[i]-'a']++;
                even[s1[i]-'a']--;
            }
            else
            {
                odd[s2[i]-'a']++;
                odd[s1[i]-'a']--;
            }  
        }
        return even==vector<int>(26,0)&&odd==vector<int>(26,0);
    }
};