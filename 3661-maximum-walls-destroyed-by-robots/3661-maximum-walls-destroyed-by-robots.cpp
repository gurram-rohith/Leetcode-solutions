class Solution {
public:
    int maxWalls(vector<int>& robots, vector<int>& distance, vector<int>& walls) {
        int n = robots.size();
        sort(walls.begin(), walls.end());

        vector<pair<long long,long long>> vpp;
        for(int i = 0; i < n; i++)
            vpp.push_back({robots[i], distance[i]});
        sort(vpp.begin(), vpp.end());

        vector<long long> lLeft(n), rLeft(n), lRight(n), rRight(n);
        vector<long long> L(n), R(n);

        for(int i = 0; i < n; i++) {
            long long lmaxreach = vpp[i].first - vpp[i].second;
            if(i != 0) lmaxreach = max(lmaxreach, vpp[i-1].first + 1LL);

            lLeft[i] = lower_bound(walls.begin(), walls.end(), lmaxreach) - walls.begin();
            rLeft[i] = upper_bound(walls.begin(), walls.end(), vpp[i].first) - walls.begin() - 1;
            L[i] = max(0LL, rLeft[i] - lLeft[i] + 1);

            long long rmaxreach = vpp[i].first + vpp[i].second;
            if(i != n-1) rmaxreach = min(rmaxreach, vpp[i+1].first - 1LL);

            lRight[i] = lower_bound(walls.begin(), walls.end(), vpp[i].first) - walls.begin();
            rRight[i] = upper_bound(walls.begin(), walls.end(), rmaxreach) - walls.begin() - 1;
            R[i] = max(0LL, rRight[i] - lRight[i] + 1);
        }

        // S[i] = overlap between robot[i] firing right and robot[i+1] firing left
        auto getS = [&](int i) -> long long {
            if(i < 0 || i >= n-1) return 0LL;
            long long lo = max(lRight[i], lLeft[i+1]);
            long long hi = min(rRight[i], rLeft[i+1]);
            return max(0LL, hi - lo + 1);
        };

        vector<array<long long,2>> dp(n);
        dp[0][0] = L[0];
        dp[0][1] = R[0];

        for(int i = 1; i < n; i++) {
            long long s = getS(i-1);

            // robot i fires LEFT
            dp[i][0] = L[i] + max(
                dp[i-1][0],          // i-1 fires left:  no conflict
                dp[i-1][1] - s       // i-1 fires right: shared walls counted once
            );

            // robot i fires RIGHT
            dp[i][1] = R[i] + max(
                dp[i-1][0],          // i-1 fires left:  no conflict
                dp[i-1][1]           // i-1 fires right: no conflict (different ranges)
            );
        }

        return (int)max(dp[n-1][0], dp[n-1][1]);
    }
};