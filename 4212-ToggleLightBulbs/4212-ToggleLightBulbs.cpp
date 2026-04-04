// Last updated: 4/5/2026, 12:10:56 AM
class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int>freq(101,0);
        for(int i=0;i<bulbs.size();i++)
            freq[bulbs[i]]++;
        vector<int>ans;
        for(int i=1;i<=100;i++)
            {
                if(freq[i]%2!=0)
                    ans.push_back(i);
            }
        return ans;
    }
};