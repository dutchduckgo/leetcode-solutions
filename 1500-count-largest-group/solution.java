class Solution {
    public int countLargestGroup(int n) {
        HashMap<Integer, Integer> hm = new HashMap<>();

        for (int i = 1; i <= n; i ++) {
            int s = sum(i);
            if (hm.containsKey(s)) {
                hm.put(s, hm.get(s) + 1);
            } else {
                hm. put(s, 1);
            }
        }
        int max = 0;
        int count = 0;
        for (Integer k : hm.keySet()) {
            if (hm.get(k) == max) {
                count ++;
            } else if (hm.get(k) > max) {
                max = hm.get(k);
                count = 1;
            }

        }
        return count;
    }
    private int sum(int n) {
        int r = 0;
        while (n != 0) {
            r += n % 10;
            n /= 10;
        }
        return r;
    }
}
