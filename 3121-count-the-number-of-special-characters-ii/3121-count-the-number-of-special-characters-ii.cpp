class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>find(26,-1);
        vector<int>freq(26,0);
        for(char c:word) {
            if(c>='a'&&c<='z')
            {
                freq[c-'a']++;
            }
        }
        int ans=0;
        for(int i=0;i<word.size();i++)
        {
            if(word[i]>='A'&&word[i]<='Z')
            {
                if(find[word[i]-'A']==-1) find[word[i]-'A']=i;
            }
        }
        for(int i=0;i<26;i++)
        {
            int f=0;
            if(find[i]==-1) continue;
            for(int j=find[i]+1;j<word.size();j++)
            {
                if(word[j]>='a'&&word[j]<='z')
                {
                    if(word[j]-32-'A'==i) {
                    f=1;
                    break;
                    }
                }
            }
            if(!f&&freq[i]!=0) ans++;
        }
        return ans;
    }
};