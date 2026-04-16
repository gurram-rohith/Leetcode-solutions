// Last updated: 4/16/2026, 3:05:18 PM
1class Solution {
2public:
3    long long minimumCost(string s, string t, int flipCost, int swapCost, int crossCost) {
4        int a = 0, b = 0;
5        for (int i = 0; i < s.size(); i++) {
6            if (s[i] != t[i]) {
7                if (s[i] == '0') a++;
8                else b++;
9            }
10        }
11
12        int pairs = min(a, b);
13        int remainder = abs(a - b);
14
15        long long cost = 0;
16        cost += (long long)pairs * min(swapCost, 2 * flipCost);
17        cost += (long long)(remainder / 2) * min(2 * flipCost, crossCost + swapCost);
18        cost += (long long)(remainder % 2) * flipCost;
19
20        return cost;
21    }
22};