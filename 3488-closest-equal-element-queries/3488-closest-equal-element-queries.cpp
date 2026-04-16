class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        unordered_map<int, vector<int>>mpp;
        for (int i = 0; i < n; i++) {
            mpp[nums[i]].push_back(i);
        }
        for (auto& [_, pos] : mpp) {
            int x=pos[0];
            pos.insert(pos.begin(),pos.back()-n);
            pos.push_back(x+n);
        }
        int m = queries.size();
        for (int i = 0; i < m; i++) {
            int x = nums[queries[i]];
            if (mpp[x].size() == 3) {
                queries[i] = -1;
                continue;
            }
            int pos =
                lower_bound(mpp[x].begin(), mpp[x].end(), queries[i]) -
                mpp[x].begin();
            queries[i] = min(mpp[x][pos + 1] - mpp[x][pos],
                             mpp[x][pos] - mpp[x][pos - 1]);
        }
        return queries;
    }
};