// Last updated: 4/5/2026, 12:10:42 AM
class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int minval=INT_MAX;
        for(int i=0;i<capacity.size();i++)
            {
                if(capacity[i]>=itemSize)
                    minval=min(minval,capacity[i]);
            }
        for(int i=0;i<capacity.size();i++)
            {
                if(capacity[i]==minval) return i;
            }
        return -1;
    }
};