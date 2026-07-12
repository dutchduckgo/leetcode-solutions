class Solution {
private:
    static const int MOD = 1000000007;
    const vector<vector<int>> jumps = {
        {4, 6}, {6, 8}, {7, 9}, {4, 8}, {0, 3, 9}, {}, 
        {0, 1, 7}, {2, 6}, {1, 3}, {2, 4}
    };

public:
    int knightDialer(int n) {
        if (n == 1) return 10;

        /* 
        dp[d][step] = 
        number of phone numbers you can make if you're currently on digit d
        and have step moves remaining
        */
        vector<vector<int>> dp(10, vector<int>(n + 1, 0)) ;
        for (int d = 0; d < 10; d++) {
            dp[d][0] = 1;
        }

        for (int step = 1; step < n; step++) {
            for (int d = 0; d < 10; d++) {
                for (int j : jumps[d]) {
                    dp[d][step] = (dp[d][step] + dp[j][step - 1]) % MOD;
                }
            }
        }
        int res = 0;
        for (int d = 0; d < 10; d++) {
            res = (res + dp[d][n - 1]) % MOD;
        }
        return res;
    }
};
