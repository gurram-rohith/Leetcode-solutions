// Last updated: 4/5/2026, 12:10:55 AM
class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector<long long>st;
        for(long long i:nums)
        {
            while(!st.empty()&&st.back()==i)
            {
                i+=st.back();
                st.pop_back();
            }
            st.push_back(i);
        }
        return st;

    }
};