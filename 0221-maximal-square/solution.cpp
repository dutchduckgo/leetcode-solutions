class Solution {
private:
    int ROWS;
    int COLS;
    vector<vector<int>> dp;

    int traverse(int r, int c, vector<vector<char>>& mat) {
        if (r >= ROWS || c >= COLS) {
            return 0;
        }
        if (dp[r][c] != -1) {
            return dp[r][c];
        }
            
        int right = traverse(r + 1, c, mat);
        int down = traverse(r, c + 1, mat);
        int diag = traverse(r + 1, c + 1, mat);

        if (mat[r][c] == '0') {
            dp[r][c] = 0;   
        }
        else if (mat[r][c] == '1') {
            dp[r][c] = 1 + min(right, min(down, diag));
        }
        return dp[r][c];
    }
public:

    int maximalSquare(vector<vector<char>>& matrix) {
        ROWS = matrix.size();
        COLS = matrix[0].size();
        dp.assign(ROWS, vector<int>(COLS, -1));

        traverse(0, 0, matrix);
        int maxSquare = 0;
        for (int r = 0; r < ROWS; r++) {
            for (int c = 0; c < COLS; c++) {
                maxSquare = max(maxSquare, dp[r][c]);
            }
        }
        return maxSquare * maxSquare;
    }
};
