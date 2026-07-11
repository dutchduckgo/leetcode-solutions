class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int c1 = nums[n - 1] * nums[n - 2] * nums[n - 3];
        int c2 = nums[n - 1] * nums[0] * nums[1];
        // -4 -3 -2 -1
        return max(c1, c2);
    }
};
