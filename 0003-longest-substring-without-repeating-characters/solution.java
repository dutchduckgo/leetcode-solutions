class Solution {
    public int lengthOfLongestSubstring(String s) {
        if (s.length() == 0) return 0;
        if (s.length() == 1) return 1;
        HashSet<Character> hs;
        int max = 1;
        for (int i = 0; i < s.length() - 1; i ++) {
            hs = new HashSet();
            hs.add(s.charAt(i));
            for (int j = i + 1; j < s.length(); j ++) {
                char c = s.charAt(j);
                if (hs.contains(c)) {
                    max = Math.max(max, hs.size());
                    break;
                }
                hs.add(c);
                max = Math.max(max, hs.size());
            }
        }

        return max;
    }
}
