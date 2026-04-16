// Last updated: 4/16/2026, 11:06:27 AM
1class Solution {
2public:
3    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
4        int n = nums.size();
5        unordered_map<int, vector<int>>mpp;
6        for (int i = 0; i < n; i++) {
7            mpp[nums[i]].push_back(i);
8        }
9        for (auto& [_, pos] : mpp) {
10            int x=pos[0];
11            pos.insert(pos.begin(),pos.back()-n);
12            pos.push_back(x+n);
13        }
14        int m = queries.size();
15        for (int i = 0; i < m; i++) {
16            int x = nums[queries[i]];
17            if (mpp[x].size() == 3) {
18                queries[i] = -1;
19                continue;
20            }
21            int pos =
22                lower_bound(mpp[x].begin(), mpp[x].end(), queries[i]) -
23                mpp[x].begin();
24            queries[i] = min(mpp[x][pos + 1] - mpp[x][pos],
25                             mpp[x][pos] - mpp[x][pos - 1]);
26        }
27        return queries;
28    }
29};