class Solution {
    public long maximumTripletValue(int[] nums) {
        long max_trip = 0, max_elem = 0, max_diff = 0;
        for (int n : nums) {
            max_trip = Math.max(max_trip, max_diff * n);
            max_diff = Math.max(max_diff, max_elem - n);
            max_elem = Math.max(max_elem, n);
        }
        return max_trip;
    }
}
