// Last updated: 4/5/2026, 12:14:03 AM
class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0,maxlen=0,maxfreq=0;
        vector<int>hashmap(26,0);
        while(r<s.size())
        {
            hashmap[s[r]-'A']++;
            maxfreq=max(maxfreq,hashmap[s[r]-'A']);
            if((r+1-l)-maxfreq>k){
                hashmap[s[l]-'A']--;
                l++;
            }
            if(r+1-l-maxfreq<=k)
            maxlen=max(r+1-l,maxlen);
            r++;
            
        }
        return maxlen;
    }
};