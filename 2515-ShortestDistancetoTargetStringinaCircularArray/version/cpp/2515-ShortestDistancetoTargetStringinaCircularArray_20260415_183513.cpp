// Last updated: 4/15/2026, 6:35:13 PM
1class Solution {
2public:
3    int closestTarget(vector<string>& words, string target, int startIndex) {
4        vector<int>indices;
5        int minans=INT_MAX;
6        for(int i=0;i<words.size();i++)
7        {
8            if(words[i]==target)
9            indices.push_back(i);
10        }
11        int n=words.size();
12        for(int i=0;i<indices.size();i++)
13        {
14           int t=abs(indices[i]-startIndex);
15           minans=min({minans,t,n-t});
16        }
17        if(minans==INT_MAX) return -1;
18        return minans;
19    }
20};