// Last updated: 4/5/2026, 12:12:24 AM
class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(),capacity.end(),greater<int>());
        long long totapp=0,ans=0,turns=0;
        for(int i=0;i<apple.size();i++)
        totapp+=apple[i];
        for(int i=0;i<capacity.size();i++)
        {
            if(ans>=totapp)
            return turns;
            else
            ans+=capacity[i],turns+=1;
        }
        return turns;

    }
};