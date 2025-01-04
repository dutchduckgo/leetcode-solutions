class Solution {
    public int scoreOfString(String s) {
        int r = 0;
        for (int c = 0; c < s.length() - 1; c ++) {
            r += Math.abs(s.charAt(c) - s.charAt(c + 1));
        }
        return r;
    }
}
