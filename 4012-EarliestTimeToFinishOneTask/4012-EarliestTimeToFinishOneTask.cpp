// Last updated: 4/5/2026, 12:11:50 AM
class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int mini=INT_MAX;
        for(auto it:tasks){
            mini=min(mini,it[0]+it[1]);
        }
        return mini;
    }
};