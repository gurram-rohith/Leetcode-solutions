class Solution {
public:
    long long minimumCost(string s, string t, int flipCost, int swapCost, int crossCost) {
        int a = 0, b = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != t[i]) {
                if (s[i] == '0') a++;
                else b++;
            }
        }

        int pairs = min(a, b);
        int remainder = abs(a - b);

        long long cost = 0;
        cost += (long long)pairs * min(swapCost, 2 * flipCost);
        cost += (long long)(remainder / 2) * min(2 * flipCost, crossCost + swapCost);
        cost += (long long)(remainder % 2) * flipCost;

        return cost;
    }
};