// Last updated: 4/5/2026, 12:13:03 AM
class Solution {
public:
    int minPartitions(string n) {
        int maxii=0;
        for(int i=0;i<n.size();i++)
        maxii=max(maxii,n[i]-'0');
        return maxii;
    }
};