class Solution {
    public boolean isHappy(int n) {
        boolean isOne = false;
        int sum = 0;
        HashSet<Integer> hs = new HashSet();

        sum = calc(n);
        while (sum != 1 ) {
            if (!hs.add(sum)) return false;
            sum = calc(sum);
        }
        return true;
    }
    private int calc (int n) {
        int s = 0;
        while (n != 0) {
            s += Math.pow((n % 10), 2);
            n /= 10;
        }
        return s;
    }
}
