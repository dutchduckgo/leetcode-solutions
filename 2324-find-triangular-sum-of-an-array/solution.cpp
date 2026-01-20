class Solution {
public:
    int triangularSum(vector<int>& nums) {
        // for nums[i], compute nums[i] + nums[i + 1]
        // store nums[i] += nums[i + 1]
        // nums_required = nums.size - 1, counter-- for each time we loop
        int nums_req = nums.size();
        while (nums_req--) {
            for (int i = 0; i < nums_req; i++) {
                nums[i] = (nums[i] + nums[i + 1]) % 10;
            }
        }
        return nums[0];
    }
};
