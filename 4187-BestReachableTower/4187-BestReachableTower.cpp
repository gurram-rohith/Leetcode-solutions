// Last updated: 4/5/2026, 12:11:03 AM
class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
        int maxans=-1;
        for(int i=0;i<towers.size();i++)
        {
            if(abs(towers[i][0]-center[0])+abs(towers[i][1]-center[1])<=radius)
            maxans=max(maxans,towers[i][2]);
        }
        vector<pair<int,int>>temp;
        for(int i=0;i<towers.size();i++)
        {
            if(towers[i][2]==maxans)
            temp.push_back({towers[i][0],towers[i][1]});
        }
        sort(temp.begin(),temp.end());
        if(temp.empty()) return {-1,-1};
        return {temp[0].first,temp[0].second};


    }
};