class Solution {
    public List<String> getLongestSubsequence(String[] words, int[] groups) {
        int n = words.length;
        List<String> rslt = new ArrayList<>();
        rslt.add(words[0]);

        for (int i = 1; i < n; i ++) {
            if (groups[i] != groups[i - 1]) {
                rslt.add(words[i]);
            }
        }

        return rslt;
    }
}
