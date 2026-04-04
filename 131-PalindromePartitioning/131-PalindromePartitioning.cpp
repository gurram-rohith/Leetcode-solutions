// Last updated: 4/5/2026, 12:14:58 AM
class Solution {
public:
    bool isPalindrome(int i,int j,string &s)
    {
        while(i<=(i+j)/2)
        {
            if(s[i]!=s[j])
            return false;
            i++,j--;
        }
        return true;

    }
    void genPalindrome(vector<string>&temp,vector<vector<string>>&ans,int i,int j,string &s)
    {
        if(i==s.size())
        {
            ans.push_back(temp);
            return;
        }
        if(j==s.size()) return;
        if(isPalindrome(i,j,s))
        {
            temp.push_back(s.substr(i,j+1-i));
            genPalindrome(temp,ans,j+1,j+1,s);
            temp.pop_back();
        }
        genPalindrome(temp,ans,i,j+1,s);
        
    }
    vector<vector<string>> partition(string s) {
        vector<string>temp;
        vector<vector<string>>ans;
        genPalindrome(temp,ans,0,0,s);
        return ans;
    }
};