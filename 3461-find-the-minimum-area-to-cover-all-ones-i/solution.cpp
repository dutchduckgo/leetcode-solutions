class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int n  = grid.size();
        int m = grid[0].size();

        int top = m, bot = -1, left = n, right = -1;

        for (int i = 0; i < n; i ++) {
            for (int j = 0; j < m; j ++) {
                if (grid[i][j] == 1) {
                    if (i < top) top = i;
                    if (i > bot) bot = i;
                    if (j < left) left = j;
                    if (j > right) right = j;
                }
            }
        }
        return (bot - top + 1) * (right - left + 1);
    }
};
