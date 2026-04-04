// Last updated: 4/5/2026, 12:13:40 AM
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        vector<int>hashtable(58,0);
        int ans=0;
        for(int i=0;i<jewels.size();i++)
        {
            hashtable[jewels[i]-'A']++;
        }
        for(int i=0;i<stones.size();i++)
        {
            if(hashtable[stones[i]-'A']>0) ans++;
        }
        return ans;
    }
};