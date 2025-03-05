class Solution {
    public int mySqrt(int x) {
        if (x == 0) return 0;
        if (x == 1) return 1;
        long lo = 0, hi = x / 2;
        long med = 0;
        long rslt = -1;
        while (lo <= hi) {
            med = (lo + hi) / 2;
            if (med * med == (long) x) return (int) med;
            if (med * med < (long) x) {
                rslt = med;
                lo = med + 1;
            } else {
                hi = med - 1;
            }
        }
        return (int) rslt;
    }
}
