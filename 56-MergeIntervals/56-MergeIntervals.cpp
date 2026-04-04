// Last updated: 4/5/2026, 12:15:32 AM
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        int endIndex,startIndex;
        int f=0;
        int i=0,j=1;
        for(int i=0;i<intervals.size();i++){
            startIndex=intervals[i][0];
            endIndex=intervals[i][1];
            for(int j=i+1;j<intervals.size();j++){
               if(endIndex>=intervals[j][0]&&endIndex<=intervals[j][1]){
                endIndex=intervals[j][1];
                intervals.erase(intervals.begin()+j);
                j--;
               }
               else if(endIndex>=intervals[j][0]&&endIndex>intervals[j][1]){
                intervals.erase(intervals.begin()+j);
                j--;
               }
            }
            ans.push_back({startIndex,endIndex});
        }
        return ans;
    }
};