class Solution {
public:

    int maxi = 0;
    int endindex = 0;

    int lcs(string &s, string &t,
            vector<vector<int>>& dp,
            int i, int j)
    {
        if(i < 0 || j < 0)
            return 0;

        if(dp[i][j] != -1)
            return dp[i][j];

        if(s[i] == t[j])
        {
            dp[i][j] = 1 + lcs(s, t, dp, i-1, j-1);
            int len = dp[i][j];
            if(i - len + 1 == (int)s.size() - 1 - j)
            {
                if(len > maxi)
                {
                    maxi = len;
                    endindex = i;
                }
            }
        }
        else
        {
            dp[i][j] = 0;
        }

        lcs(s, t, dp, i-1, j);
        lcs(s, t, dp, i, j-1);

        return dp[i][j];
    }

    string longestPalindrome(string s)
    {
        string t = s;

        reverse(t.begin(), t.end());

        int n = s.size();

        vector<vector<int>> dp(n, vector<int>(n, -1));

        lcs(s, t, dp, n-1, n-1);

        return s.substr(endindex - maxi + 1, maxi);
    }
};