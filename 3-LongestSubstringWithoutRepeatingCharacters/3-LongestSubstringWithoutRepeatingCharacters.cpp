// Last updated: 4/5/2026, 12:16:10 AM
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       vector<int>hashmap(256,-1);
        long long maxlen=0,len;
        int l=0,r=0;
        cout<<hashmap[s[r]]<<endl;
        while(r<s.size()){
            
            if(hashmap[s[r]]!=-1)
            { 
                if(hashmap[s[r]]>=l)
                {
                   l=hashmap[s[r]]+1;
                    
                }
            }
          
            len=r+1-l;
            maxlen=max(maxlen,len);
            hashmap[s[r]]=r;
            r++;
        }
        
        return maxlen;
    }
};