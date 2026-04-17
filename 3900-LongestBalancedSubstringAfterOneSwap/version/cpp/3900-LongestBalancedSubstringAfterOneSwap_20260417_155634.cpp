// Last updated: 4/17/2026, 3:56:34 PM
1class Solution {
2public:
3    int longestBalanced(string s) {
4
5        int n = s.size();
6
7        int total0 = count(s.begin(), s.end(), '0');
8        int total1 = n - total0;
9
10        unordered_map<int, vector<int>> first;
11        first[0] = {-1};
12
13        int sum = 0, ans = 0;
14
15        for(int i = 0; i < n; i++) {
16
17            sum += (s[i] == '1' ? 1 : -1);
18
19            for(int target : {sum, sum-2, sum+2}) {
20
21                if(!first.count(target)) continue;
22
23                for(int l : first[target]) {
24
25                    int len  = i - l;
26                    int diff = sum - target;
27
28                    int ones  = (len + diff) / 2;
29                    int zeros = len - ones;
30
31                    if(diff == 0 ||
32                       (diff == 2  && total0 > zeros) ||
33                       (diff == -2 && total1 > ones)) {
34
35                        ans = max(ans, len);
36                        break;
37                    }
38                }
39            }
40
41            if(first[sum].size() < 2)
42                first[sum].push_back(i);
43        }
44
45        return ans;
46    }
47};