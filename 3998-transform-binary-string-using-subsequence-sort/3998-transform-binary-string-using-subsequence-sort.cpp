class Solution {
public:
    vector<bool> transformStr(string s, vector<string>& strs) {int n = s.size();
    vector<int> A(n + 1, 0);
    for (int i = 0; i < n; i++) A[i+1] = A[i] + (s[i] - '0');
    int onesS = A[n];

    vector<bool> ans(strs.size(), false);
    for (int idx = 0; idx < (int)strs.size(); idx++) {
        string &t = strs[idx];
        int len = t.size();
        vector<int> F1(len+1, 0), Qc(len+1, 0);
        for (int i = 0; i < len; i++) {
            F1[i+1] = F1[i] + (t[i] == '1');
            Qc[i+1] = Qc[i] + (t[i] == '?');
        }
        int x = onesS - F1[len];
        if (x < 0 || x > Qc[len]) continue; // false

        int QminusX = Qc[len] - x;
        bool ok = true;
        for (int k = 1; k <= len; k++) {
            int Bk = F1[k] + max(0, Qc[k] - QminusX);
            if (Bk > A[k]) { ok = false; break; }
        }
        ans[idx] = ok;
    }
    return ans;}
};