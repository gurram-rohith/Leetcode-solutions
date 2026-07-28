class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int>freq(26,0);
        string oddfreq="";
        for(char c:s)
        {
            freq[c-'a']++;
        }
        string t;
        for(int i=0;i<26;i++)
        {
            int times=freq[i]/2;
            if(freq[i]%2!=0) oddfreq=(i+'a');
            while(times--)
            t+=i+'a';
        }
        string p=t;
        t+=oddfreq;
        reverse(p.begin(),p.end());
        t+=p;
        return t;
        
    }
};