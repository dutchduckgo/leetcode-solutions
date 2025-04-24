class Solution {
    public int countCompleteSubarrays(int[] nums) {
        int rslt = 0;
        HashSet<Integer> set = new HashSet<>();
        for (int n : nums) {
            set.add(n);
        }
        int size = set.size();
        HashSet<Integer> subset;
        for (int i = 0; i < nums.length; i ++) {
            subset = new HashSet<>();
            for (int j = i; j < nums.length; j ++) {
                subset.add(nums[j]);
                if (subset.size() == size) rslt ++;
            }
        }
        return rslt;
    }
}
