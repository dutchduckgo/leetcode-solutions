class Solution {
    public int countDistinctIntegers(int[] nums) {
        HashSet<Integer> hs = new HashSet();
        for (int i = 0; i < nums.length; i ++) {
            hs.add(nums[i]);
            hs.add(rev(nums[i]));

        }
        return hs.size();
    }

    private int rev(int n) {
        int ans = 0;
        while(n > 0) {
            int r = n % 10; 
            ans = ans * 10 + r; 
            n /= 10;
       }
       return ans;
    }
}
