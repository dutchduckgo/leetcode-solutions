class Solution {
public:
    int rob(vector<int>& nums) {
        /*
        houses
        4 3 1 1 2 3
        1 2 3
        
        */

        if (nums.size() == 0) return 0;

        int prev1 = 0;
        int prev2 = 0;

        for (int num : nums) {
            int tmp = prev1;
            prev1 = max(prev2 + num, prev1);
            prev2 = tmp;
        }
        return prev1;
    }
};
