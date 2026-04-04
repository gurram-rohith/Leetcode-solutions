// Last updated: 4/5/2026, 12:11:19 AM
class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        map<string,int>freqstr;
        for(int i=0;i<words.size();i++)
            {
                if(words[i].size()<k) continue;
                string t;
                for(int j=0;j<k;j++)
                    {
                    t+=words[i][j];
                    }
                freqstr[t]++;
            }
        int cnt=0;
        for(auto i:freqstr)
            {
                if(i.second>=2)
                    cnt++;
            }
        return cnt;
    }
};