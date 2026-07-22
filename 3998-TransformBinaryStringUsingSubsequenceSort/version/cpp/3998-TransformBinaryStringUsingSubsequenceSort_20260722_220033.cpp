// Last updated: 7/22/2026, 10:00:33 PM
1class Solution {
2public:
3    vector<bool> transformStr(string s, vector<string>& strs) {int n = s.size();
4    vector<int> A(n + 1, 0);
5    for (int i = 0; i < n; i++) A[i+1] = A[i] + (s[i] - '0');
6    int onesS = A[n];
7
8    vector<bool> ans(strs.size(), false);
9    for (int idx = 0; idx < (int)strs.size(); idx++) {
10        string &t = strs[idx];
11        int len = t.size();
12        vector<int> F1(len+1, 0), Qc(len+1, 0);
13        for (int i = 0; i < len; i++) {
14            F1[i+1] = F1[i] + (t[i] == '1');
15            Qc[i+1] = Qc[i] + (t[i] == '?');
16        }
17        int x = onesS - F1[len];
18        if (x < 0 || x > Qc[len]) continue; // false
19
20        int QminusX = Qc[len] - x;
21        bool ok = true;
22        for (int k = 1; k <= len; k++) {
23            int Bk = F1[k] + max(0, Qc[k] - QminusX);
24            if (Bk > A[k]) { ok = false; break; }
25        }
26        ans[idx] = ok;
27    }
28    return ans;}
29};