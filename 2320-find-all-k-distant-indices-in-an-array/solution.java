class Solution {
    public List<Integer> findKDistantIndices(int[] nums, int key, int k) {
        // List<Integer> rslt = new ArrayList<Integer>();
        TreeSet<Integer> rslt = new TreeSet<Integer>();
        // for (int i = 0; i < nums.length; i ++) {

        // }
        for (int i = 0; i < nums.length; i ++) {
            for (int j = 0; j < nums.length; j ++) {
                if (Math.abs(i - j) <= k && nums[j] == key) {
                    rslt.add(i);
                }
            }
        }
        return new ArrayList<Integer>(rslt);
    }
}
