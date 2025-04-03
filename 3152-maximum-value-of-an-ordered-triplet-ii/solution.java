class Solution {
    public long maximumTripletValue(int[] nums) {
        long[] prefix_max = new long[nums.length];
        long[] suffix_max = new long[nums.length];

        long max_temp = nums[0];
        for (int i = 0; i < nums.length; i ++) {
            if ((long) nums[i] > max_temp) max_temp = nums[i];
            prefix_max[i] = max_temp;
        }

        max_temp = nums[nums.length - 1];
        for (int i = nums.length - 1; i >= 0; i --) {
            if ((long) nums[i] > max_temp) max_temp = (long) nums[i];
            suffix_max[i] = max_temp;
        }

        long max_val = 0;
        for (int j = 1; j < nums.length - 1; j ++) {
            max_temp = (prefix_max[j - 1] - (long) nums[j] ) * suffix_max[j + 1];
            if (max_temp > max_val) max_val = max_temp;
        }  

        return max_val;


    }
}
