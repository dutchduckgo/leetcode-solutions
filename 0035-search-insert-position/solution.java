class Solution {
    public int searchInsert(int[] nums, int target) {
        int lo = 0;
        int hi = nums.length - 1;
        int med = 0;
        while (lo <= hi) {
            med = (lo + hi) / 2;
            if (nums[med] == target) return med;
            if (nums[med] < target) {
                lo = med + 1;
            } else hi = med - 1;
        }
        return lo;
    }
}
