class Solution {
private:
    int dfs(int row, int col, vector<vector<int>>& grid) {
        int ROW = grid.size();
        int COL = grid[0].size();
        if (row >= ROW || col >= COL || row < 0 || col < 0 || grid[row][col] == 0) {
            return 0;
        }
        grid[row][col] = 0;
        return 1 + dfs(row + 1, col, grid) + dfs(row, col + 1, grid) + dfs(row - 1, col, grid) + dfs(row, col - 1, grid);
    }

public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ROW = grid.size();
        int COL = grid[0].size();

        int res = 0;

        for (int r = 0; r < ROW; r++) {
            for (int c = 0; c < COL; c++) {
                int curSize = dfs(r, c, grid);
                res = max(res, curSize);
            }
        }
        return res;
    }
};
