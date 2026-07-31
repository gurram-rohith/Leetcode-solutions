class Solution {
public:
    int minimumPushes(string word) {    
        vector<int>freq(26,0);
        for(char c:word) freq[c-'a']++;
        sort(freq.begin(),freq.end(),greater<int>());
        for(int i=1;i<26;i++)
        {
            freq[i]+=freq[i-1];
        }
        int ans=0;
        ans=4*freq[25]-freq[7]-freq[15]-freq[23];
        return ans;
        

         

    }
};