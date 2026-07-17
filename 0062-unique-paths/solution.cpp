class Solution {
public:
    int M;
    int N;

    int dfs(int m, int n, vector<vector<int>>& dp) {
        if (m >= M || n >= N) {
            return 0;
        }
        if (m == M - 1 && n == N - 1) {
            return 1;
        }
        if (dp[m][n] != -1)
            return dp[m][n];

        dp[m][n] = dfs(m + 1, n, dp) + dfs(m, n + 1, dp);
        return dp[m][n];
    }

    int uniquePaths(int m, int n) {
        M = m;
        N = n;
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return dfs(0, 0, dp);
    }
};
