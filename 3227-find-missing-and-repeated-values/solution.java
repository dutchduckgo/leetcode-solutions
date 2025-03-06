class Solution {
    public int[] findMissingAndRepeatedValues(int[][] grid) {
        long len = grid.length;
        long n = len * len;
        long as = 0;
        long ap = 0;
        for (int[] arr : grid) {
            for (int e : arr) {
                as += e;
                ap += (long) (e * e);
            }
        }

        long es = n * (n + 1) / 2;
        long ep = n * (n + 1) * (2 * n + 1) / 6;

        long sd = as - es;
        long pd = ap - ep;

        long sum_xy = pd / sd;
        int x = (int) ((sum_xy + sd) / 2);
        int y = (int) ((sum_xy - sd) / 2);

        return new int[] {x, y};
        // as - es = x - y
        // ap - ep = (x - y) * (x + y);
    }
}
