class Solution {
    public int minimumOperations(int[][] grid) {
        int rslt = 0;
        for (int c = 0; c < grid[0].length; c ++) {
            for (int r = 0; r < grid.length - 1; r ++) {
                if (grid[r][c] >= grid[r + 1][c]) {
                    int temp = grid[r + 1][c];
                    grid[r + 1][c] = grid[r][c] + 1;
                    rslt += grid[r + 1][c] - temp;
                }
            }
        }
        return rslt;
    }
}
