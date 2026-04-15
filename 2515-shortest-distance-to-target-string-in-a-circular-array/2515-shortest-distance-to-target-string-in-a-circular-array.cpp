class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        vector<int>indices;
        int minans=INT_MAX;
        for(int i=0;i<words.size();i++)
        {
            if(words[i]==target)
            indices.push_back(i);
        }
        int n=words.size();
        for(int i=0;i<indices.size();i++)
        {
           int t=abs(indices[i]-startIndex);
           minans=min({minans,t,n-t});
        }
        if(minans==INT_MAX) return -1;
        return minans;
    }
};