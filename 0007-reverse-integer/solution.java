class Solution {
    public int reverse(int x) {
        int rslt = 0;
        while (x != 0) {
            int rem = x % 10;
            int new_rslt = rem + 10 * rslt;
            if ((new_rslt - rem)/10 != rslt) return 0;
            rslt = new_rslt;
            x /= 10;
        }
        return rslt;
    }
}
